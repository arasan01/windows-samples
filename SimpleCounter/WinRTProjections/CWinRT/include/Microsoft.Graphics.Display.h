// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Microsoft.UI.h"
#include "Microsoft.UI.Dispatching.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo;

#endif // ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation;

#endif // ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics;

#endif // ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStreamVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable;

    typedef struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* This,
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* sender,
        IInspectable* args);

        END_INTERFACE
    } __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl;

    interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue;

#endif // ____x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue_FWD_DEFINED__

typedef struct __x_ABI_CMicrosoft_CUI_CDisplayId __x_ABI_CMicrosoft_CUI_CDisplayId;

typedef struct __x_ABI_CMicrosoft_CUI_CWindowId __x_ABI_CMicrosoft_CUI_CWindowId;

typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;

typedef enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind;

typedef enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat;

enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind
    {
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind_StandardDynamicRange = 0,
    __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind_WideColorGamut = 1,
    __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind_HighDynamicRange = 2,
};

enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat
    {
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat_Hdr10 = 0,
    __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat_Hdr10Plus = 1,
};

#if !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfoVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_CurrentAdvancedColorKind)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind* value);
    HRESULT (STDMETHODCALLTYPE* get_RedPrimary)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_GreenPrimary)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_BluePrimary)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_WhitePoint)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        struct __x_ABI_CWindows_CFoundation_CPoint* value);
    HRESULT (STDMETHODCALLTYPE* get_MaxLuminanceInNits)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* get_MinLuminanceInNits)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* get_MaxAverageFullFrameLuminanceInNits)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* get_SdrWhiteLevelInNits)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* IsHdrMetadataFormatCurrentlySupported)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayHdrMetadataFormat format,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* IsAdvancedColorKindAvailable)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo* This,
        enum __x_ABI_CMicrosoft_CGraphics_CDisplay_CDisplayAdvancedColorKind kind,
        boolean* result);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfoVtbl;

    interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfoVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_DispatcherQueue)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_CMicrosoft_CUI_CDispatching_CIDispatcherQueue** value);
    HRESULT (STDMETHODCALLTYPE* get_IsStereoEnabled)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* add_IsStereoEnabledChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_IsStereoEnabledChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* GetColorProfileAsync)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIRandomAccessStream** operation);
    HRESULT (STDMETHODCALLTYPE* GetColorProfile)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream** result);
    HRESULT (STDMETHODCALLTYPE* add_ColorProfileChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_ColorProfileChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* GetAdvancedColorInfo)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayAdvancedColorInfo** result);
    HRESULT (STDMETHODCALLTYPE* add_AdvancedColorInfoChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_AdvancedColorInfoChanged)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Destroyed)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CMicrosoft__CGraphics__CDisplay__CDisplayInformation_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Destroyed)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationVtbl;

    interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreateForWindowId)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
        struct __x_ABI_CMicrosoft_CUI_CWindowId windowId,
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation** result);
    HRESULT (STDMETHODCALLTYPE* CreateForDisplayId)(__x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics* This,
        struct __x_ABI_CMicrosoft_CUI_CDisplayId displayId,
        __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformation** result);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl;

    interface __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__) */
    
