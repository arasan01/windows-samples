// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1
// swiftlint:disable all
import Foundation
@_spi(WinRTInternal) @_spi(WinRTImplements) import WindowsFoundation
import CWinRT

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatechainpolicy)
public typealias CertificateChainPolicy = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy
/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainvalidationresult)
public typealias ChainValidationResult = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult
/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate)
public final class Certificate : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.ICertificate
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate>?) -> Certificate? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    private static let _ICertificateFactory: __ABI_Windows_Security_Cryptography_Certificates.ICertificateFactory = try! RoGetActivationFactory(HString("Windows.Security.Cryptography.Certificates.Certificate"))
    public init(_ certBlob: UWP.AnyIBuffer!) {
        super.init(try! Self._ICertificateFactory.CreateCertificateImpl(certBlob))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.buildchainasync)
    public func buildChainAsync(_ certificates: WindowsFoundation.AnyIIterable<Certificate?>!) throws -> WindowsFoundation.AnyIAsyncOperation<CertificateChain?>! {
        try _default.BuildChainAsyncImpl(certificates)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.buildchainasync)
    public func buildChainAsync(_ certificates: WindowsFoundation.AnyIIterable<Certificate?>!, _ parameters: ChainBuildingParameters!) throws -> WindowsFoundation.AnyIAsyncOperation<CertificateChain?>! {
        try _default.BuildChainWithParametersAsyncImpl(certificates, parameters)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.getcertificateblob)
    public func getCertificateBlob() throws -> UWP.AnyIBuffer! {
        try _default.GetCertificateBlobImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.enhancedkeyusages)
    public var enhancedKeyUsages : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_EnhancedKeyUsagesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.friendlyname)
    public var friendlyName : String {
        get { try! _default.get_FriendlyNameImpl() }
        set { try! _default.put_FriendlyNameImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.hasprivatekey)
    public var hasPrivateKey : Bool {
        get { try! _default.get_HasPrivateKeyImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.isstronglyprotected)
    public var isStronglyProtected : Bool {
        get { try! _default.get_IsStronglyProtectedImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.issuer)
    public var issuer : String {
        get { try! _default.get_IssuerImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.subject)
    public var subject : String {
        get { try! _default.get_SubjectImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.validfrom)
    public var validFrom : WindowsFoundation.DateTime {
        get { try! _default.get_ValidFromImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.validto)
    public var validTo : WindowsFoundation.DateTime {
        get { try! _default.get_ValidToImpl() }
    }

    private lazy var _ICertificate2: __ABI_Windows_Security_Cryptography_Certificates.ICertificate2! = getInterfaceForCaching()
    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.issecuritydevicebound)
    public var isSecurityDeviceBound : Bool {
        get { try! _ICertificate2.get_IsSecurityDeviceBoundImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.keyalgorithmname)
    public var keyAlgorithmName : String {
        get { try! _ICertificate2.get_KeyAlgorithmNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.keyusages)
    public var keyUsages : CertificateKeyUsages! {
        get { try! _ICertificate2.get_KeyUsagesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.signaturealgorithmname)
    public var signatureAlgorithmName : String {
        get { try! _ICertificate2.get_SignatureAlgorithmNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.signaturehashalgorithmname)
    public var signatureHashAlgorithmName : String {
        get { try! _ICertificate2.get_SignatureHashAlgorithmNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.subjectalternativename)
    public var subjectAlternativeName : SubjectAlternativeNameInfo! {
        get { try! _ICertificate2.get_SubjectAlternativeNameImpl() }
    }

    private lazy var _ICertificate3: __ABI_Windows_Security_Cryptography_Certificates.ICertificate3! = getInterfaceForCaching()
    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.isperuser)
    public var isPerUser : Bool {
        get { try! _ICertificate3.get_IsPerUserImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.keystorageprovidername)
    public var keyStorageProviderName : String {
        get { try! _ICertificate3.get_KeyStorageProviderNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificate.storename)
    public var storeName : String {
        get { try! _ICertificate3.get_StoreNameImpl() }
    }

    deinit {
        _default = nil
        _ICertificate2 = nil
        _ICertificate3 = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatechain)
public final class CertificateChain : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.ICertificateChain
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain>?) -> CertificateChain? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatechain.validate)
    public func validate() throws -> ChainValidationResult {
        try _default.ValidateImpl()
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatechain.validate)
    public func validate(_ parameter: ChainValidationParameters!) throws -> ChainValidationResult {
        try _default.ValidateWithParametersImpl(parameter)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatechain.getcertificates)
    public func getCertificates(_ includeRoot: Bool) throws -> WindowsFoundation.AnyIVectorView<Certificate?>! {
        try _default.GetCertificatesImpl(includeRoot)
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificateextension)
public final class CertificateExtension : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.ICertificateExtension
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension>?) -> CertificateExtension? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Security.Cryptography.Certificates.CertificateExtension")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificateextension.encodevalue)
    public func encodeValue(_ value: String) throws {
        try _default.EncodeValueImpl(value)
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificateextension.iscritical)
    public var isCritical : Bool {
        get { try! _default.get_IsCriticalImpl() }
        set { try! _default.put_IsCriticalImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificateextension.objectid)
    public var objectId : String {
        get { try! _default.get_ObjectIdImpl() }
        set { try! _default.put_ObjectIdImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages)
public final class CertificateKeyUsages : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.ICertificateKeyUsages
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages>?) -> CertificateKeyUsages? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Security.Cryptography.Certificates.CertificateKeyUsages")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.crlsign)
    public var crlSign : Bool {
        get { try! _default.get_CrlSignImpl() }
        set { try! _default.put_CrlSignImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.dataencipherment)
    public var dataEncipherment : Bool {
        get { try! _default.get_DataEnciphermentImpl() }
        set { try! _default.put_DataEnciphermentImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.digitalsignature)
    public var digitalSignature : Bool {
        get { try! _default.get_DigitalSignatureImpl() }
        set { try! _default.put_DigitalSignatureImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.encipheronly)
    public var encipherOnly : Bool {
        get { try! _default.get_EncipherOnlyImpl() }
        set { try! _default.put_EncipherOnlyImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.keyagreement)
    public var keyAgreement : Bool {
        get { try! _default.get_KeyAgreementImpl() }
        set { try! _default.put_KeyAgreementImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.keycertificatesign)
    public var keyCertificateSign : Bool {
        get { try! _default.get_KeyCertificateSignImpl() }
        set { try! _default.put_KeyCertificateSignImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.keyencipherment)
    public var keyEncipherment : Bool {
        get { try! _default.get_KeyEnciphermentImpl() }
        set { try! _default.put_KeyEnciphermentImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.certificatekeyusages.nonrepudiation)
    public var nonRepudiation : Bool {
        get { try! _default.get_NonRepudiationImpl() }
        set { try! _default.put_NonRepudiationImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters)
public final class ChainBuildingParameters : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.IChainBuildingParameters
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters>?) -> ChainBuildingParameters? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Security.Cryptography.Certificates.ChainBuildingParameters")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.authorityinformationaccessenabled)
    public var authorityInformationAccessEnabled : Bool {
        get { try! _default.get_AuthorityInformationAccessEnabledImpl() }
        set { try! _default.put_AuthorityInformationAccessEnabledImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.currenttimevalidationenabled)
    public var currentTimeValidationEnabled : Bool {
        get { try! _default.get_CurrentTimeValidationEnabledImpl() }
        set { try! _default.put_CurrentTimeValidationEnabledImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.enhancedkeyusages)
    public var enhancedKeyUsages : WindowsFoundation.AnyIVector<String>! {
        get { try! _default.get_EnhancedKeyUsagesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.exclusivetrustroots)
    public var exclusiveTrustRoots : WindowsFoundation.AnyIVector<Certificate?>! {
        get { try! _default.get_ExclusiveTrustRootsImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.networkretrievalenabled)
    public var networkRetrievalEnabled : Bool {
        get { try! _default.get_NetworkRetrievalEnabledImpl() }
        set { try! _default.put_NetworkRetrievalEnabledImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.revocationcheckenabled)
    public var revocationCheckEnabled : Bool {
        get { try! _default.get_RevocationCheckEnabledImpl() }
        set { try! _default.put_RevocationCheckEnabledImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainbuildingparameters.validationtimestamp)
    public var validationTimestamp : WindowsFoundation.DateTime {
        get { try! _default.get_ValidationTimestampImpl() }
        set { try! _default.put_ValidationTimestampImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainvalidationparameters)
public final class ChainValidationParameters : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.IChainValidationParameters
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters>?) -> ChainValidationParameters? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Security.Cryptography.Certificates.ChainValidationParameters")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainvalidationparameters.certificatechainpolicy)
    public var certificateChainPolicy : CertificateChainPolicy {
        get { try! _default.get_CertificateChainPolicyImpl() }
        set { try! _default.put_CertificateChainPolicyImpl(newValue) }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.chainvalidationparameters.serverdnsname)
    public var serverDnsName : UWP.HostName! {
        get { try! _default.get_ServerDnsNameImpl() }
        set { try! _default.put_ServerDnsNameImpl(newValue) }
    }

    deinit {
        _default = nil
    }
}

/// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo)
public final class SubjectAlternativeNameInfo : WinRTClass {
    private typealias SwiftABI = __ABI_Windows_Security_Cryptography_Certificates.ISubjectAlternativeNameInfo
    private typealias CABI = __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo
    private lazy var _default: SwiftABI! = getInterfaceForCaching()
    @_spi(WinRTInternal)
    override public func _getABI<T>() -> UnsafeMutablePointer<T>? {
        if T.self == CABI.self {
            return RawPointer(_default)
        }
        return super._getABI()
    }

    @_spi(WinRTInternal)
    public static func from(abi: ComPtr<__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo>?) -> SubjectAlternativeNameInfo? {
        guard let abi = abi else { return nil }
        return .init(fromAbi: WindowsFoundation.IInspectable(abi))
    }

    @_spi(WinRTInternal)
    public init(fromAbi: WindowsFoundation.IInspectable) {
        super.init(fromAbi)
    }

    override public init() {
        super.init(try! RoActivateInstance(HString("Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo")))
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.distinguishedname)
    public var distinguishedName : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_DistinguishedNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.dnsname)
    public var dnsName : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_DnsNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.emailname)
    public var emailName : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_EmailNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.ipaddress)
    public var ipAddress : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_IPAddressImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.principalname)
    public var principalName : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_PrincipalNameImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.url)
    public var url : WindowsFoundation.AnyIVectorView<String>! {
        get { try! _default.get_UrlImpl() }
    }

    private lazy var _ISubjectAlternativeNameInfo2: __ABI_Windows_Security_Cryptography_Certificates.ISubjectAlternativeNameInfo2! = getInterfaceForCaching()
    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.distinguishednames)
    public var distinguishedNames : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_DistinguishedNamesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.dnsnames)
    public var dnsNames : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_DnsNamesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.emailnames)
    public var emailNames : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_EmailNamesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.extension)
    public var `extension` : CertificateExtension! {
        get { try! _ISubjectAlternativeNameInfo2.get_ExtensionImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.ipaddresses)
    public var ipAddresses : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_IPAddressesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.principalnames)
    public var principalNames : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_PrincipalNamesImpl() }
    }

    /// [Open Microsoft documentation](https://learn.microsoft.com/uwp/api/windows.security.cryptography.certificates.subjectalternativenameinfo.urls)
    public var urls : WindowsFoundation.AnyIVector<String>! {
        get { try! _ISubjectAlternativeNameInfo2.get_UrlsImpl() }
    }

    deinit {
        _default = nil
        _ISubjectAlternativeNameInfo2 = nil
    }
}

extension UWP.CertificateChainPolicy {
    public static var base : UWP.CertificateChainPolicy {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy_Base
    }
    public static var ssl : UWP.CertificateChainPolicy {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy_Ssl
    }
    public static var ntAuthentication : UWP.CertificateChainPolicy {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy_NTAuthentication
    }
    public static var microsoftRoot : UWP.CertificateChainPolicy {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy_MicrosoftRoot
    }
}
extension UWP.CertificateChainPolicy: @retroactive Hashable, @retroactive Codable {}

extension UWP.ChainValidationResult {
    public static var success : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_Success
    }
    public static var untrusted : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_Untrusted
    }
    public static var revoked : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_Revoked
    }
    public static var expired : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_Expired
    }
    public static var incompleteChain : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_IncompleteChain
    }
    public static var invalidSignature : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_InvalidSignature
    }
    public static var wrongUsage : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_WrongUsage
    }
    public static var invalidName : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_InvalidName
    }
    public static var invalidCertificateAuthorityPolicy : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_InvalidCertificateAuthorityPolicy
    }
    public static var basicConstraintsError : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_BasicConstraintsError
    }
    public static var unknownCriticalExtension : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_UnknownCriticalExtension
    }
    public static var revocationInformationMissing : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_RevocationInformationMissing
    }
    public static var revocationFailure : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_RevocationFailure
    }
    public static var otherErrors : UWP.ChainValidationResult {
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult_OtherErrors
    }
}
extension UWP.ChainValidationResult: @retroactive Hashable, @retroactive Codable {}

