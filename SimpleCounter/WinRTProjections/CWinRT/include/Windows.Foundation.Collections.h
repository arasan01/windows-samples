// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
// Importing Collections header
#include "Windows.Foundation.Collections.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Key)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        IInspectable** result);

        END_INTERFACE
    } __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        UINT32 itemsLength,
        __x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable* This,
        __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Key)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Value)(__x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        UINT32 itemsLength,
        __x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING* This,
        __x_ABI_C__FIIterator_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1___x_ABI_C__FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIMapChangedEventArgs_1_HSTRING __x_ABI_C__FIMapChangedEventArgs_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIMapChangedEventArgs_1_HSTRING;

    typedef struct __x_ABI_C__FIMapChangedEventArgs_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_CollectionChange)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
        enum __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange* result);
    HRESULT (STDMETHODCALLTYPE* get_Key)(__x_ABI_C__FIMapChangedEventArgs_1_HSTRING* This,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_C__FIMapChangedEventArgs_1_HSTRINGVtbl;

    interface __x_ABI_C__FIMapChangedEventArgs_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIMapChangedEventArgs_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIMapView_2_HSTRING_IInspectable __x_ABI_C__FIMapView_2_HSTRING_IInspectable;

#if !defined(____x_ABI_C__FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIMapView_2_HSTRING_IInspectable __x_ABI_C__FIMapView_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIMapView_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIMapView_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Lookup)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
        HSTRING key,
        IInspectable** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Split)(__x_ABI_C__FIMapView_2_HSTRING_IInspectable* This,
        __x_ABI_C__FIMapView_2_HSTRING_IInspectable** first,
        __x_ABI_C__FIMapView_2_HSTRING_IInspectable** second);

        END_INTERFACE
    } __x_ABI_C__FIMapView_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIMapView_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIMapView_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIMapView_2_HSTRING_HSTRING __x_ABI_C__FIMapView_2_HSTRING_HSTRING;

#if !defined(____x_ABI_C__FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIMapView_2_HSTRING_HSTRING __x_ABI_C__FIMapView_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIMapView_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIMapView_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Lookup)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Split)(__x_ABI_C__FIMapView_2_HSTRING_HSTRING* This,
        __x_ABI_C__FIMapView_2_HSTRING_HSTRING** first,
        __x_ABI_C__FIMapView_2_HSTRING_HSTRING** second);

        END_INTERFACE
    } __x_ABI_C__FIMapView_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIMapView_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIMapView_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIMap_2_HSTRING_IInspectable __x_ABI_C__FIMap_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIMap_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIMap_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Lookup)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        HSTRING key,
        IInspectable** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        __x_ABI_C__FIMapView_2_HSTRING_IInspectable** result);
    HRESULT (STDMETHODCALLTYPE* Insert)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        HSTRING key,
        IInspectable* value,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Remove)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This,
        HSTRING key);
    HRESULT (STDMETHODCALLTYPE* Clear)(__x_ABI_C__FIMap_2_HSTRING_IInspectable* This);

        END_INTERFACE
    } __x_ABI_C__FIMap_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIMap_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIMap_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIMap_2_HSTRING_HSTRING __x_ABI_C__FIMap_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIMap_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIMap_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Lookup)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        __x_ABI_C__FIMapView_2_HSTRING_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* Insert)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING value,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Remove)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key);
    HRESULT (STDMETHODCALLTYPE* Clear)(__x_ABI_C__FIMap_2_HSTRING_HSTRING* This);

        END_INTERFACE
    } __x_ABI_C__FIMap_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIMap_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIMap_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable;

#if !defined(____x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable* This,
        __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* sender,
        __x_ABI_C__FIMapChangedEventArgs_1_HSTRING* event);

        END_INTERFACE
    } __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIObservableMap_2_HSTRING_IInspectable;

    typedef struct __x_ABI_C__FIObservableMap_2_HSTRING_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* add_MapChanged)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
        __x_ABI_C__FMapChangedEventHandler_2_HSTRING_IInspectable* vhnd,
        EventRegistrationToken* result);
    HRESULT (STDMETHODCALLTYPE* remove_MapChanged)(__x_ABI_C__FIObservableMap_2_HSTRING_IInspectable* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_C__FIObservableMap_2_HSTRING_IInspectableVtbl;

    interface __x_ABI_C__FIObservableMap_2_HSTRING_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIObservableMap_2_HSTRING_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING;

#if !defined(____x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING* This,
        __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* sender,
        __x_ABI_C__FIMapChangedEventArgs_1_HSTRING* event);

        END_INTERFACE
    } __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIObservableMap_2_HSTRING_HSTRING;

    typedef struct __x_ABI_C__FIObservableMap_2_HSTRING_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* add_MapChanged)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
        __x_ABI_C__FMapChangedEventHandler_2_HSTRING_HSTRING* vhnd,
        EventRegistrationToken* result);
    HRESULT (STDMETHODCALLTYPE* remove_MapChanged)(__x_ABI_C__FIObservableMap_2_HSTRING_HSTRING* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_C__FIObservableMap_2_HSTRING_HSTRINGVtbl;

    interface __x_ABI_C__FIObservableMap_2_HSTRING_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIObservableMap_2_HSTRING_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CFoundation_CCollections_CIPropertySetVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CFoundation_CCollections_CIPropertySet* This,
            TrustLevel* trustLevel);
    
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CCollections_CIPropertySetVtbl;

    interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CCollections_CIPropertySetVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_INTERFACE_DEFINED__) */
    
