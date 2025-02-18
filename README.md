# Swift on Windows Samples Apps by arasan01

Sample apps for Swift on Windows, showcasing how to build Windows Apps using the [Windows App SDK](https://github.com/microsoft/windowsappsdk) through the [Swift/WinRT](https://github.com/thebrowsercompany/swift-winrt) language projection.

It discloses how to standardize code on iOS, macOS, and Windows, and how to use TCA and GRDB.swift in a multi-platform environment.

# Technologies included

- [x] How to standardize code on Windows, iOS, and macOS
- [x] How to set up Swift on Windows easily
- [x] VSCode settings
- [x] How to build Windows applications using The Composable Architecture (TCA)
- [x] How to use SQLite with GRDB.swift
- [x] How to create a Windows application using the demo app included in GRDB.swift
- [ ] How to app that [microsoft's official tutorial](https://blogs.windows.com/windowsdeveloper/2022/01/28/build-your-first-winui-3-app-part-1/)
- [ ] How to build practical image processing apps in collaboration with more external libraries

## Setup

### Requirements

Run requirement.ps1. Set powershell policy `Set-ExecutionPolicy Bypass` if can not run script.

**Note that this adds a development environment to the overall system, so be careful if you have already created a development environment. It is not a powerful script.**

Install latest Swift SDK from [thebrowsercompany/swift-build](https://github.com/thebrowsercompany/swift-build/releases)

Make sure to have the appropriate version of the Windows App Runtime installed as mentioned [here](https://github.com/thebrowsercompany/swift-windowsappsdk?tab=readme-ov-file#using-windows-app-sdk)


### VSCode

VSCode is the editor of choice for developing Windows apps on Swift. You can install it from https://code.visualstudio.com/download.

If you choose to use Visual Studio Code, you'll need to install these extensions:
- [Swift VSCode Extension](https://marketplace.visualstudio.com/items?itemName=sswg.swift-lang)

## Building

The build of the Windows applications is done through SPM. This can be done on the command line with `swift build` or in Visual Studio Code with `Ctrl+Shift+B`.

### Debugging in VSCode

Debugging in VSCode is supported through LLDB. You can simply press `F5` or navigate to the `Run and Debug` (`Ctrl+Shift+D`) pane.
