// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;

    typedef struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable* This,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* sender,
        IInspectable* args);

        END_INTERFACE
    } __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl;

    interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;

    typedef struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs* This,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* sender,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* args);

        END_INTERFACE
    } __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl;

    interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs
    {
        CONST_VTBL struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;

    typedef struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs* This,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* sender,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* args);

        END_INTERFACE
    } __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl;

    interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs
    {
        CONST_VTBL struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ViewId)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs* This,
        INT32* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ViewId)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* get_IsVisible)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsScreenLocked)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* ShowNote)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId);
    HRESULT (STDMETHODCALLTYPE* ShowNoteRelativeTo)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId,
        INT32 anchorNoteViewId);
    HRESULT (STDMETHODCALLTYPE* ShowNoteWithPlacement)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* data);
    HRESULT (STDMETHODCALLTYPE* HideNote)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId);
    HRESULT (STDMETHODCALLTYPE* GetNotePlacement)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** data);
    HRESULT (STDMETHODCALLTYPE* TrySetNoteSize)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        INT32 noteViewId,
        struct __x_ABI_CWindows_CFoundation_CSize size,
        boolean* succeeded);
    HRESULT (STDMETHODCALLTYPE* SetFocusToNextView)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This);
    HRESULT (STDMETHODCALLTYPE* SetNotesThumbnailAsync)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* thumbnail,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* add_SystemLockStateChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_SystemLockStateChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_NotePlacementChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_NotePlacementChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_NoteVisibilityChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview___x_ABI_CWindows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_NoteVisibilityChanged)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* ShowNoteRelativeToWithOptions)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
        INT32 noteViewId,
        INT32 anchorNoteViewId,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* options);
    HRESULT (STDMETHODCALLTYPE* ShowNoteWithPlacementWithOptions)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
        INT32 noteViewId,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* data,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* options);
    HRESULT (STDMETHODCALLTYPE* SetFocusToPreviousView)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This);
    HRESULT (STDMETHODCALLTYPE* SetThumbnailImageForTaskSwitcherAsync)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2* This,
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap* bitmap,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ShowWithFocus)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_ShowWithFocus)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions* This,
        boolean value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetForCurrentApp)(__x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics* This,
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview** current);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__) */
    
