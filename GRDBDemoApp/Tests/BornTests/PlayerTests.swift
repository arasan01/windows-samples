/*
 Copyright (C) 2015-2024 Gwendal Roué
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

import XCTest
import GRDB
@testable import Born

class PlayerTests: XCTestCase {
    // MARK: - CRUD
    // Test that our Player type properly talks to GRDB.
    
    func testInsert() throws {
        // Given an empty players database
        let dbQueue = try DatabaseQueue(configuration: AppDatabase.makeConfiguration())
        _ = try AppDatabase(dbQueue)
        
        // When we insert a player
        var player = Player(id: nil, name: "Arthur", score: 100)
        try dbQueue.write { db in
            try player.insert(db)
        }
        
        // Then the player gets a non-nil id
        XCTAssertNotNil(player.id)
    }
    
    func testRoundtrip() throws {
        // Given an empty players database
        let dbQueue = try DatabaseQueue(configuration: AppDatabase.makeConfiguration())
        _ = try AppDatabase(dbQueue)
        
        // When we insert a player and fetch the player with the same id
        var insertedPlayer = Player(id: nil, name: "Arthur", score: 100)
        let fetchedPlayer: Player? = try dbQueue.write { db in
            try insertedPlayer.insert(db)
            return try Player.fetchOne(db, key: insertedPlayer.id)
        }
        
        // Then the fetched player is equal to the inserted player
        XCTAssertEqual(insertedPlayer, fetchedPlayer)
    }
    
    // MARK: - Requests
    // Test that requests defined on the Player type behave as expected.
    
    func testOrderedByScore() throws {
        // Given a players database that contains players with distinct scores
        let dbQueue = try DatabaseQueue(configuration: AppDatabase.makeConfiguration())
        _ = try AppDatabase(dbQueue)
        var player1 = Player(id: 1, name: "Arthur", score: 100)
        var player2 = Player(id: 2, name: "Barbara", score: 200)
        var player3 = Player(id: 3, name: "Craig", score: 150)
        var player4 = Player(id: 4, name: "David", score: 120)
        try dbQueue.write { db in
            try player1.insert(db)
            try player2.insert(db)
            try player3.insert(db)
            try player4.insert(db)
        }
        
        // When we fetch players ordered by score
        let players = try dbQueue.read(Player.all().orderedByScore().fetchAll)
        
        // Then fetched players are ordered by score descending
        XCTAssertEqual(players, [player2, player3, player4, player1])
    }
    
    func testOrderedByScoreSortsIdenticalScoresByName() throws {
        // Given a players database that contains players with common scores
        let dbQueue = try DatabaseQueue(configuration: AppDatabase.makeConfiguration())
        _ = try AppDatabase(dbQueue)
        var player1 = Player(id: 1, name: "Arthur", score: 100)
        var player2 = Player(id: 2, name: "Barbara", score: 200)
        var player3 = Player(id: 3, name: "Craig", score: 200)
        var player4 = Player(id: 4, name: "David", score: 200)
        try dbQueue.write { db in
            try player1.insert(db)
            try player2.insert(db)
            try player3.insert(db)
            try player4.insert(db)
        }
        
        // When we fetch players ordered by score
        let players = try dbQueue.read(Player.all().orderedByScore().fetchAll)
        
        // Then fetched players are ordered by score descending and by name
        XCTAssertEqual(players, [player2, player3, player4, player1])
    }
    
    func testOrderedByName() throws {
        // Given a players database that contains players with distinct names
        let dbQueue = try DatabaseQueue(configuration: AppDatabase.makeConfiguration())
        _ = try AppDatabase(dbQueue)
        var player1 = Player(id: 1, name: "Arthur", score: 100)
        var player2 = Player(id: 2, name: "Barbara", score: 200)
        var player3 = Player(id: 3, name: "Craig", score: 150)
        var player4 = Player(id: 4, name: "David", score: 120)
        try dbQueue.write { db in
            try player1.insert(db)
            try player2.insert(db)
            try player3.insert(db)
            try player4.insert(db)
        }
        
        // When we fetch players ordered by name
        let players = try dbQueue.read(Player.all().orderedByName().fetchAll)
        
        // Then fetched players are ordered by name
        XCTAssertEqual(players, [player1, player2, player3, player4])
    }
}
