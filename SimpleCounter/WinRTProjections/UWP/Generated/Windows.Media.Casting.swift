// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1
// swiftlint:disable all
import Foundation
@_spi(WinRTInternal) @_spi(WinRTImplements) import WindowsFoundation
import CWinRT

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnectionerrorstatus)
public typealias CastingConnectionErrorStatus = __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus
/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnectionstate)
public typealias CastingConnectionState = __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState
/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingplaybacktypes)
public typealias CastingPlaybackTypes = __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes
/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection)
public final class CastingConnection : WinRTClass, WindowsFoundation.IClosable {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingConnection
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingConnection
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingConnection>?) -> CastingConnection? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public func queryInterface(_ iid: WindowsFoundation.IID) -> IUnknownRef? {
        return super.queryInterface(iid)
    }
    private lazy var _IClosable: __ABI_Windows_Foundation.IClosable! = getInterfaceForCaching()
    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.close)
    public func close() throws {
        try _IClosable.CloseImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.requeststartcastingasync)
    public func requestStartCastingAsync(_ value: CastingSource!) throws -> WindowsFoundation.AnyIAsyncOperation<CastingConnectionErrorStatus>! {
        try _default.RequestStartCastingAsyncImpl(value)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.disconnectasync)
    public func disconnectAsync() throws -> WindowsFoundation.AnyIAsyncOperation<CastingConnectionErrorStatus>! {
        try _default.DisconnectAsyncImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.device)
    public var device : CastingDevice! {
        get { try! _default.get_DeviceImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.source)
    public var source : CastingSource! {
        get { try! _default.get_SourceImpl() }
        set { try! _default.put_SourceImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.state)
    public var state : CastingConnectionState {
        get { try! _default.get_StateImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.erroroccurred)
    public lazy var errorOccurred : Event<TypedEventHandler<CastingConnection?, CastingConnectionErrorOccurredEventArgs?>> = {
      .init(
        add: { [weak self] in
          guard let this = self?._default else { return .init() }
          return try! this.add_ErrorOccurredImpl($0)
        },
        remove: { [weak self] in
         try? self?._default.remove_ErrorOccurredImpl($0)
       }
      )
    }()

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnection.statechanged)
    public lazy var stateChanged : Event<TypedEventHandler<CastingConnection?, Any?>> = {
      .init(
        add: { [weak self] in
          guard let this = self?._default else { return .init() }
          return try! this.add_StateChangedImpl($0)
        },
        remove: { [weak self] in
         try? self?._default.remove_StateChangedImpl($0)
       }
      )
    }()

    deinit {
        _IClosable = nil
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnectionerroroccurredeventargs)
public final class CastingConnectionErrorOccurredEventArgs : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingConnectionErrorOccurredEventArgs
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs>?) -> CastingConnectionErrorOccurredEventArgs? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnectionerroroccurredeventargs.errorstatus)
    public var errorStatus : CastingConnectionErrorStatus {
        get { try! _default.get_ErrorStatusImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingconnectionerroroccurredeventargs.message)
    public var message : String {
        get { try! _default.get_MessageImpl() }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice)
public final class CastingDevice : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingDevice
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingDevice
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingDevice>?) -> CastingDevice? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    private static let _ICastingDeviceStatics: __ABI_Windows_Media_Casting.ICastingDeviceStatics = try! RoGetActivationFactory(HString("Windows.Media.Casting.CastingDevice"))
    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.getdeviceselector)
    public static func getDeviceSelector(_ type: CastingPlaybackTypes) -> String {
        return try! _ICastingDeviceStatics.GetDeviceSelectorImpl(type)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.getdeviceselectorfromcastingsourceasync)
    public static func getDeviceSelectorFromCastingSourceAsync(_ castingSource: CastingSource!) -> WindowsFoundation.AnyIAsyncOperation<String>! {
        return try! _ICastingDeviceStatics.GetDeviceSelectorFromCastingSourceAsyncImpl(castingSource)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.fromidasync)
    public static func fromIdAsync(_ value: String) -> WindowsFoundation.AnyIAsyncOperation<CastingDevice?>! {
        return try! _ICastingDeviceStatics.FromIdAsyncImpl(value)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.deviceinfosupportscastingasync)
    public static func deviceInfoSupportsCastingAsync(_ device: UWP.DeviceInformation!) -> WindowsFoundation.AnyIAsyncOperation<Bool>! {
        return try! _ICastingDeviceStatics.DeviceInfoSupportsCastingAsyncImpl(device)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.getsupportedcastingplaybacktypesasync)
    public func getSupportedCastingPlaybackTypesAsync() throws -> WindowsFoundation.AnyIAsyncOperation<CastingPlaybackTypes>! {
        try _default.GetSupportedCastingPlaybackTypesAsyncImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.createcastingconnection)
    public func createCastingConnection() throws -> CastingConnection! {
        try _default.CreateCastingConnectionImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.friendlyname)
    public var friendlyName : String {
        get { try! _default.get_FriendlyNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.icon)
    public var icon : UWP.AnyIRandomAccessStreamWithContentType! {
        get { try! _default.get_IconImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevice.id)
    public var id : String {
        get { try! _default.get_IdImpl() }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker)
public final class CastingDevicePicker : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingDevicePicker
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker>?) -> CastingDevicePicker? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Media.Casting.CastingDevicePicker")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.show)
    public func show(_ selection: WindowsFoundation.Rect) throws {
        try _default.ShowImpl(selection)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.show)
    public func show(_ selection: WindowsFoundation.Rect, _ preferredPlacement: UWP.Placement) throws {
        try _default.ShowWithPlacementImpl(selection, preferredPlacement)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.hide)
    public func hide() throws {
        try _default.HideImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.appearance)
    public var appearance : UWP.DevicePickerAppearance! {
        get { try! _default.get_AppearanceImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.filter)
    public var filter : CastingDevicePickerFilter! {
        get { try! _default.get_FilterImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.castingdevicepickerdismissed)
    public lazy var castingDevicePickerDismissed : Event<TypedEventHandler<CastingDevicePicker?, Any?>> = {
      .init(
        add: { [weak self] in
          guard let this = self?._default else { return .init() }
          return try! this.add_CastingDevicePickerDismissedImpl($0)
        },
        remove: { [weak self] in
         try? self?._default.remove_CastingDevicePickerDismissedImpl($0)
       }
      )
    }()

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepicker.castingdeviceselected)
    public lazy var castingDeviceSelected : Event<TypedEventHandler<CastingDevicePicker?, CastingDeviceSelectedEventArgs?>> = {
      .init(
        add: { [weak self] in
          guard let this = self?._default else { return .init() }
          return try! this.add_CastingDeviceSelectedImpl($0)
        },
        remove: { [weak self] in
         try? self?._default.remove_CastingDeviceSelectedImpl($0)
       }
      )
    }()

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepickerfilter)
public final class CastingDevicePickerFilter : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingDevicePickerFilter
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter>?) -> CastingDevicePickerFilter? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepickerfilter.supportedcastingsources)
    public var supportedCastingSources : WindowsFoundation.AnyIVector<CastingSource?>! {
        get { try! _default.get_SupportedCastingSourcesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepickerfilter.supportsaudio)
    public var supportsAudio : Bool {
        get { try! _default.get_SupportsAudioImpl() }
        set { try! _default.put_SupportsAudioImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepickerfilter.supportspictures)
    public var supportsPictures : Bool {
        get { try! _default.get_SupportsPicturesImpl() }
        set { try! _default.put_SupportsPicturesImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdevicepickerfilter.supportsvideo)
    public var supportsVideo : Bool {
        get { try! _default.get_SupportsVideoImpl() }
        set { try! _default.put_SupportsVideoImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdeviceselectedeventargs)
public final class CastingDeviceSelectedEventArgs : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingDeviceSelectedEventArgs
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs>?) -> CastingDeviceSelectedEventArgs? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingdeviceselectedeventargs.selectedcastingdevice)
    public var selectedCastingDevice : CastingDevice! {
        get { try! _default.get_SelectedCastingDeviceImpl() }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingsource)
public final class CastingSource : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Media_Casting.ICastingSource
    private typealias CABI = __x_ABI_CWindows_CMedia_CCasting_CICastingSource
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CMedia_CCasting_CICastingSource>?) -> CastingSource? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.media.casting.castingsource.preferredsourceuri)
    public var preferredSourceUri : WindowsFoundation.Uri! {
        get { try! _default.get_PreferredSourceUriImpl() }
        set { try! _default.put_PreferredSourceUriImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

extension UWP.CastingConnectionErrorStatus {
    public static var succeeded : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_Succeeded
    }
    public static var deviceDidNotRespond : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_DeviceDidNotRespond
    }
    public static var deviceError : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_DeviceError
    }
    public static var deviceLocked : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_DeviceLocked
    }
    public static var protectedPlaybackFailed : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_ProtectedPlaybackFailed
    }
    public static var invalidCastingSource : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_InvalidCastingSource
    }
    public static var unknown : UWP.CastingConnectionErrorStatus {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus_Unknown
    }
}
extension UWP.CastingConnectionErrorStatus: @retroactive Hashable, @retroactive Codable {}

extension UWP.CastingConnectionState {
    public static var disconnected : UWP.CastingConnectionState {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState_Disconnected
    }
    public static var connected : UWP.CastingConnectionState {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState_Connected
    }
    public static var rendering : UWP.CastingConnectionState {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState_Rendering
    }
    public static var disconnecting : UWP.CastingConnectionState {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState_Disconnecting
    }
    public static var connecting : UWP.CastingConnectionState {
        __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState_Connecting
    }
}
extension UWP.CastingConnectionState: @retroactive Hashable, @retroactive Codable {}

extension UWP.CastingPlaybackTypes {
    public static var none : UWP.CastingPlaybackTypes {
        __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes_None
    }
    public static var audio : UWP.CastingPlaybackTypes {
        __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes_Audio
    }
    public static var video : UWP.CastingPlaybackTypes {
        __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes_Video
    }
    public static var picture : UWP.CastingPlaybackTypes {
        __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes_Picture
    }
}
extension UWP.CastingPlaybackTypes: @retroactive Hashable, @retroactive Codable {}

