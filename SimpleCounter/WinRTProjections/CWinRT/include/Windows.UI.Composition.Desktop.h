// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.UI.Composition.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget;

#endif // ____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CIAnimationObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CIAnimationObject_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CIAnimationObject __x_ABI_CWindows_CUI_CComposition_CIAnimationObject;

#endif // ____x_ABI_CWindows_CUI_CComposition_CIAnimationObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionObject_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject __x_ABI_CWindows_CUI_CComposition_CICompositionObject;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionObject2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionObject2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject2 __x_ABI_CWindows_CUI_CComposition_CICompositionObject2;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionObject2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionObject3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionObject3_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject3 __x_ABI_CWindows_CUI_CComposition_CICompositionObject3;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionObject3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionObject4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionObject4_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionObject4 __x_ABI_CWindows_CUI_CComposition_CICompositionObject4;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionObject4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionTarget_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionTarget __x_ABI_CWindows_CUI_CComposition_CICompositionTarget;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionTarget_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsTopmost)(__x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl;

    interface __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTargetVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget;
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CDesktop_CIDesktopWindowTarget_INTERFACE_DEFINED__) */
    
