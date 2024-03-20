// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1
// swiftlint:disable all
import Foundation
@_spi(WinRTInternal) @_spi(WinRTImplements) import WindowsFoundation
import CWinRT

public enum __IMPL_Microsoft_Graphics_Canvas_Geometry {
    public enum ICanvasPathReceiverBridge : AbiInterfaceBridge {
        public typealias CABI = __x_ABI_CMicrosoft_CGraphics_CCanvas_CGeometry_CICanvasPathReceiver
        public typealias SwiftABI = __ABI_Microsoft_Graphics_Canvas_Geometry.ICanvasPathReceiver
        public typealias SwiftProjection = AnyICanvasPathReceiver
        public static func from(abi: ComPtr<CABI>?) -> SwiftProjection? {
            guard let abi = abi else { return nil }
            return ICanvasPathReceiverImpl(abi)
        }

        public static func makeAbi() -> CABI {
            let vtblPtr = withUnsafeMutablePointer(to: &__ABI_Microsoft_Graphics_Canvas_Geometry.ICanvasPathReceiverVTable) { $0 }
            return .init(lpVtbl: vtblPtr)
        }
    }

    fileprivate class ICanvasPathReceiverImpl: ICanvasPathReceiver, WinRTAbiImpl {
        fileprivate typealias Bridge = ICanvasPathReceiverBridge
        fileprivate let _default: Bridge.SwiftABI
        fileprivate var thisPtr: WindowsFoundation.IInspectable { _default }
        fileprivate init(_ fromAbi: ComPtr<Bridge.CABI>) {
            _default = Bridge.SwiftABI(fromAbi)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.beginfigure)
        fileprivate func beginFigure(_ startPoint: WindowsFoundation.Vector2, _ figureFill: CanvasFigureFill) throws {
            try _default.BeginFigureImpl(startPoint, figureFill)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.addarc)
        fileprivate func addArc(_ endPoint: WindowsFoundation.Vector2, _ radiusX: Float, _ radiusY: Float, _ rotationAngle: Float, _ sweepDirection: CanvasSweepDirection, _ arcSize: CanvasArcSize) throws {
            try _default.AddArcImpl(endPoint, radiusX, radiusY, rotationAngle, sweepDirection, arcSize)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.addcubicbezier)
        fileprivate func addCubicBezier(_ controlPoint1: WindowsFoundation.Vector2, _ controlPoint2: WindowsFoundation.Vector2, _ endPoint: WindowsFoundation.Vector2) throws {
            try _default.AddCubicBezierImpl(controlPoint1, controlPoint2, endPoint)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.addline)
        fileprivate func addLine(_ endPoint: WindowsFoundation.Vector2) throws {
            try _default.AddLineImpl(endPoint)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.addquadraticbezier)
        fileprivate func addQuadraticBezier(_ controlPoint: WindowsFoundation.Vector2, _ endPoint: WindowsFoundation.Vector2) throws {
            try _default.AddQuadraticBezierImpl(controlPoint, endPoint)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.setfilledregiondetermination)
        fileprivate func setFilledRegionDetermination(_ filledRegionDetermination: CanvasFilledRegionDetermination) throws {
            try _default.SetFilledRegionDeterminationImpl(filledRegionDetermination)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.setsegmentoptions)
        fileprivate func setSegmentOptions(_ figureSegmentOptions: CanvasFigureSegmentOptions) throws {
            try _default.SetSegmentOptionsImpl(figureSegmentOptions)
        }

        /// [Open Microsoft documentation](https://learn.microsoft.com/windows/windows-app-sdk/api/winrt/microsoft.graphics.canvas.geometry.icanvaspathreceiver.endfigure)
        fileprivate func endFigure(_ figureLoop: CanvasFigureLoop) throws {
            try _default.EndFigureImpl(figureLoop)
        }

    }

}
