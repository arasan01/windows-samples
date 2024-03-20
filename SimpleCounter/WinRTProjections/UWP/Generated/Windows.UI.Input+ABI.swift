// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1
// swiftlint:disable all
import Foundation
@_spi(WinRTInternal) @_spi(WinRTImplements) import WindowsFoundation
import CWinRT

private var IID___x_ABI_CWindows_CUI_CInput_CIPointerPoint: WindowsFoundation.IID {
    .init(Data1: 0xE995317D, Data2: 0x7296, Data3: 0x42D9, Data4: ( 0x82,0x33,0xC5,0xBE,0x73,0xB7,0x4A,0x4A ))// E995317D-7296-42D9-8233-C5BE73B74A4A
}

private var IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties: WindowsFoundation.IID {
    .init(Data1: 0xC79D8A4B, Data2: 0xC163, Data3: 0x4EE7, Data4: ( 0x80,0x3F,0x67,0xCE,0x79,0xF9,0x97,0x2D ))// C79D8A4B-C163-4EE7-803F-67CE79F9972D
}

private var IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2: WindowsFoundation.IID {
    .init(Data1: 0x22C3433A, Data2: 0xC83B, Data3: 0x41C0, Data4: ( 0xA2,0x96,0x5E,0x23,0x2D,0x64,0xD6,0xAF ))// 22C3433A-C83B-41C0-A296-5E232D64D6AF
}

private var IID___x_ABI_CWindows_CUI_CInput_CIPointerPointStatics: WindowsFoundation.IID {
    .init(Data1: 0xA506638D, Data2: 0x2A1A, Data3: 0x413E, Data4: ( 0xBC,0x75,0x9F,0x38,0x38,0x1C,0xC0,0x69 ))// A506638D-2A1A-413E-BC75-9F38381CC069
}

private var IID___x_ABI_CWindows_CUI_CInput_CIPointerPointTransform: WindowsFoundation.IID {
    .init(Data1: 0x4D5FE14F, Data2: 0xB87C, Data3: 0x4028, Data4: ( 0xBC,0x9C,0x59,0xE9,0x94,0x7F,0xB0,0x56 ))// 4D5FE14F-B87C-4028-BC9C-59E9947FB056
}

public enum __ABI_Windows_UI_Input {
    public class IPointerPoint: WindowsFoundation.IInspectable {
        override public class var IID: WindowsFoundation.IID { IID___x_ABI_CWindows_CUI_CInput_CIPointerPoint }

        internal func get_PointerDeviceImpl() throws -> UWP.PointerDevice? {
            let (value) = try ComPtrs.initialize { valueAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.get_PointerDevice(pThis, &valueAbi))
                }
            }
            return .from(abi: value)
        }

        internal func get_PositionImpl() throws -> WindowsFoundation.Point {
            var value: __x_ABI_CWindows_CFoundation_CPoint = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_Position(pThis, &value))
            }
            return .from(abi: value)
        }

        internal func get_RawPositionImpl() throws -> WindowsFoundation.Point {
            var value: __x_ABI_CWindows_CFoundation_CPoint = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_RawPosition(pThis, &value))
            }
            return .from(abi: value)
        }

        internal func get_PointerIdImpl() throws -> UInt32 {
            var value: UINT32 = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_PointerId(pThis, &value))
            }
            return value
        }

        internal func get_FrameIdImpl() throws -> UInt32 {
            var value: UINT32 = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_FrameId(pThis, &value))
            }
            return value
        }

        internal func get_TimestampImpl() throws -> UInt64 {
            var value: UINT64 = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_Timestamp(pThis, &value))
            }
            return value
        }

        internal func get_IsInContactImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsInContact(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_PropertiesImpl() throws -> UWP.PointerPointProperties? {
            let (value) = try ComPtrs.initialize { valueAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPoint.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.get_Properties(pThis, &valueAbi))
                }
            }
            return .from(abi: value)
        }

    }

    public class IPointerPointProperties: WindowsFoundation.IInspectable {
        override public class var IID: WindowsFoundation.IID { IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties }

        internal func get_PressureImpl() throws -> Float {
            var value: FLOAT = 0.0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_Pressure(pThis, &value))
            }
            return value
        }

        internal func get_IsInvertedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsInverted(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsEraserImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsEraser(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_OrientationImpl() throws -> Float {
            var value: FLOAT = 0.0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_Orientation(pThis, &value))
            }
            return value
        }

        internal func get_XTiltImpl() throws -> Float {
            var value: FLOAT = 0.0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_XTilt(pThis, &value))
            }
            return value
        }

        internal func get_YTiltImpl() throws -> Float {
            var value: FLOAT = 0.0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_YTilt(pThis, &value))
            }
            return value
        }

        internal func get_TwistImpl() throws -> Float {
            var value: FLOAT = 0.0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_Twist(pThis, &value))
            }
            return value
        }

        internal func get_ContactRectImpl() throws -> WindowsFoundation.Rect {
            var value: __x_ABI_CWindows_CFoundation_CRect = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_ContactRect(pThis, &value))
            }
            return .from(abi: value)
        }

        internal func get_ContactRectRawImpl() throws -> WindowsFoundation.Rect {
            var value: __x_ABI_CWindows_CFoundation_CRect = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_ContactRectRaw(pThis, &value))
            }
            return .from(abi: value)
        }

        internal func get_TouchConfidenceImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_TouchConfidence(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsLeftButtonPressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsLeftButtonPressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsRightButtonPressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsRightButtonPressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsMiddleButtonPressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsMiddleButtonPressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_MouseWheelDeltaImpl() throws -> Int32 {
            var value: INT32 = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_MouseWheelDelta(pThis, &value))
            }
            return value
        }

        internal func get_IsHorizontalMouseWheelImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsHorizontalMouseWheel(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsPrimaryImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsPrimary(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsInRangeImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsInRange(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsCanceledImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsCanceled(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsBarrelButtonPressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsBarrelButtonPressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsXButton1PressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsXButton1Pressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_IsXButton2PressedImpl() throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_IsXButton2Pressed(pThis, &value))
            }
            return .init(from: value)
        }

        internal func get_PointerUpdateKindImpl() throws -> UWP.PointerUpdateKind {
            var value: __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind = .init(0)
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.get_PointerUpdateKind(pThis, &value))
            }
            return value
        }

        internal func HasUsageImpl(_ usagePage: UInt32, _ usageId: UInt32) throws -> Bool {
            var value: boolean = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.HasUsage(pThis, usagePage, usageId, &value))
            }
            return .init(from: value)
        }

        internal func GetUsageValueImpl(_ usagePage: UInt32, _ usageId: UInt32) throws -> Int32 {
            var value: INT32 = 0
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.GetUsageValue(pThis, usagePage, usageId, &value))
            }
            return value
        }

    }

    public class IPointerPointProperties2: WindowsFoundation.IInspectable {
        override public class var IID: WindowsFoundation.IID { IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 }

        internal func get_ZDistanceImpl() throws -> Float? {
            let (value) = try ComPtrs.initialize { valueAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.get_ZDistance(pThis, &valueAbi))
                }
            }
            return UWP.__x_ABI_C__FIReference_1_floatWrapper.unwrapFrom(abi: value)
        }

    }

    public class IPointerPointStatics: WindowsFoundation.IInspectable {
        override public class var IID: WindowsFoundation.IID { IID___x_ABI_CWindows_CUI_CInput_CIPointerPointStatics }

        internal func GetCurrentPointImpl(_ pointerId: UInt32) throws -> UWP.PointerPoint? {
            let (pointerPoint) = try ComPtrs.initialize { pointerPointAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.GetCurrentPoint(pThis, pointerId, &pointerPointAbi))
                }
            }
            return .from(abi: pointerPoint)
        }

        internal func GetIntermediatePointsImpl(_ pointerId: UInt32) throws -> WindowsFoundation.AnyIVector<UWP.PointerPoint?>? {
            let (pointerPoints) = try ComPtrs.initialize { pointerPointsAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.GetIntermediatePoints(pThis, pointerId, &pointerPointsAbi))
                }
            }
            return UWP.__x_ABI_C__FIVector_1___x_ABI_CWindows__CUI__CInput__CPointerPointWrapper.unwrapFrom(abi: pointerPoints)
        }

        internal func GetCurrentPointTransformedImpl(_ pointerId: UInt32, _ transform: UWP.AnyIPointerPointTransform?) throws -> UWP.PointerPoint? {
            let (pointerPoint) = try ComPtrs.initialize { pointerPointAbi in
                let transformWrapper = __ABI_Windows_UI_Input.IPointerPointTransformWrapper(transform)
                let _transform = try! transformWrapper?.toABI { $0 }
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.GetCurrentPointTransformed(pThis, pointerId, _transform, &pointerPointAbi))
                }
            }
            return .from(abi: pointerPoint)
        }

        internal func GetIntermediatePointsTransformedImpl(_ pointerId: UInt32, _ transform: UWP.AnyIPointerPointTransform?) throws -> WindowsFoundation.AnyIVector<UWP.PointerPoint?>? {
            let (pointerPoints) = try ComPtrs.initialize { pointerPointsAbi in
                let transformWrapper = __ABI_Windows_UI_Input.IPointerPointTransformWrapper(transform)
                let _transform = try! transformWrapper?.toABI { $0 }
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.GetIntermediatePointsTransformed(pThis, pointerId, _transform, &pointerPointsAbi))
                }
            }
            return UWP.__x_ABI_C__FIVector_1___x_ABI_CWindows__CUI__CInput__CPointerPointWrapper.unwrapFrom(abi: pointerPoints)
        }

    }

    public class IPointerPointTransform: WindowsFoundation.IInspectable {
        override public class var IID: WindowsFoundation.IID { IID___x_ABI_CWindows_CUI_CInput_CIPointerPointTransform }

        open func get_InverseImpl() throws -> UWP.AnyIPointerPointTransform? {
            let (value) = try ComPtrs.initialize { valueAbi in
                _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform.self) { pThis in
                    try CHECKED(pThis.pointee.lpVtbl.pointee.get_Inverse(pThis, &valueAbi))
                }
            }
            return __ABI_Windows_UI_Input.IPointerPointTransformWrapper.unwrapFrom(abi: value)
        }

        open func TryTransformImpl(_ inPoint: WindowsFoundation.Point, _ outPoint: inout WindowsFoundation.Point) throws -> Bool {
            var returnValue: boolean = 0
            var _outPoint: __x_ABI_CWindows_CFoundation_CPoint = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.TryTransform(pThis, .from(swift: inPoint), &_outPoint, &returnValue))
            }
            outPoint = .from(abi: _outPoint)
            return .init(from: returnValue)
        }

        open func TransformBoundsImpl(_ rect: WindowsFoundation.Rect) throws -> WindowsFoundation.Rect {
            var returnValue: __x_ABI_CWindows_CFoundation_CRect = .init()
            _ = try perform(as: __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform.self) { pThis in
                try CHECKED(pThis.pointee.lpVtbl.pointee.TransformBounds(pThis, .from(swift: rect), &returnValue))
            }
            return .from(abi: returnValue)
        }

    }

    internal static var IPointerPointTransformVTable: __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl = .init(
        QueryInterface: { IPointerPointTransformWrapper.queryInterface($0, $1, $2) },
        AddRef: { IPointerPointTransformWrapper.addRef($0) },
        Release: { IPointerPointTransformWrapper.release($0) },
        GetIids: {
            let size = MemoryLayout<WindowsFoundation.IID>.size
            let iids = CoTaskMemAlloc(UInt64(size) * 3).assumingMemoryBound(to: WindowsFoundation.IID.self)
            iids[0] = IUnknown.IID
            iids[1] = IInspectable.IID
            iids[2] = __ABI_Windows_UI_Input.IPointerPointTransformWrapper.IID
            $1!.pointee = 3
            $2!.pointee = iids
            return S_OK
        },

        GetRuntimeClassName: {
            _ = $0
            let hstring = try! HString("Windows.UI.Input.IPointerPointTransform").detach()
            $1!.pointee = hstring
            return S_OK
        },

        GetTrustLevel: {
            _ = $0
            $1!.pointee = TrustLevel(rawValue: 0)
            return S_OK
        },

        get_Inverse: {
            guard let __unwrapped__instance = IPointerPointTransformWrapper.tryUnwrapFrom(raw: $0) else { return E_INVALIDARG }
            let value = __unwrapped__instance.inverse
            let valueWrapper = __ABI_Windows_UI_Input.IPointerPointTransformWrapper(value)
            valueWrapper?.copyTo($1)
            return S_OK
        },

        TryTransform: {
            do {
                guard let __unwrapped__instance = IPointerPointTransformWrapper.tryUnwrapFrom(raw: $0) else { return E_INVALIDARG }
                let inPoint: WindowsFoundation.Point = .from(abi: $1)
                var outPoint: WindowsFoundation.Point = .init()
                let returnValue = try __unwrapped__instance.tryTransform(inPoint, &outPoint)
                $2?.initialize(to: .from(swift: outPoint))
                $3?.initialize(to: .init(from: returnValue))
                return S_OK
            } catch { return failWith(err: E_FAIL) } 
        },

        TransformBounds: {
            do {
                guard let __unwrapped__instance = IPointerPointTransformWrapper.tryUnwrapFrom(raw: $0) else { return E_INVALIDARG }
                let rect: WindowsFoundation.Rect = .from(abi: $1)
                let returnValue = try __unwrapped__instance.transformBounds(rect)
                $2?.initialize(to: .from(swift: returnValue))
                return S_OK
            } catch { return failWith(err: E_FAIL) } 
        }
    )

    public typealias IPointerPointTransformWrapper = InterfaceWrapperBase<__IMPL_Windows_UI_Input.IPointerPointTransformBridge>
}
