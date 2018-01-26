/*** Autogenerated by WIDL 1.6.1 from winsxs.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __winsxs_h__
#define __winsxs_h__

/* Forward declarations */

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#endif

#ifndef __IAssemblyName_FWD_DEFINED__
#define __IAssemblyName_FWD_DEFINED__
typedef interface IAssemblyName IAssemblyName;
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#endif

#ifndef __IAssemblyName_FWD_DEFINED__
#define __IAssemblyName_FWD_DEFINED__
typedef interface IAssemblyName IAssemblyName;
#endif

typedef struct _FUSION_INSTALL_REFERENCE_ {
    DWORD cbSize;
    DWORD dwFlags;
    GUID guidScheme;
    LPCWSTR szIdentifier;
    LPCWSTR szNonCannonicalData;
} FUSION_INSTALL_REFERENCE;
typedef struct _FUSION_INSTALL_REFERENCE_ *LPFUSION_INSTALL_REFERENCE;
typedef struct _ASSEMBLY_INFO {
    ULONG cbAssemblyInfo;
    DWORD dwAssemblyFlags;
    ULARGE_INTEGER uliAssemblySizeInKB;
    LPWSTR pszCurrentAssemblyPathBuf;
    ULONG cchBuf;
} ASSEMBLY_INFO;
typedef const struct _FUSION_INSTALL_REFERENCE_ *LPCFUSION_INSTALL_REFERENCE;
/*****************************************************************************
 * IAssemblyCache interface
 */
#ifndef __IAssemblyCache_INTERFACE_DEFINED__
#define __IAssemblyCache_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e707dcde-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCache : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE UninstallAssembly(
        DWORD flags,
        LPCWSTR name,
        LPCFUSION_INSTALL_REFERENCE ref,
        ULONG *disp) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryAssemblyInfo(
        DWORD flags,
        LPCWSTR name,
        ASSEMBLY_INFO *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateAssemblyCacheItem(
        DWORD flags,
        PVOID reserved,
        IAssemblyCacheItem **item,
        LPCWSTR name) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reserved(
        IUnknown **reserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE InstallAssembly(
        DWORD flags,
        LPCWSTR path,
        LPCFUSION_INSTALL_REFERENCE ref) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCache* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCache* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCache* This);

    /*** IAssemblyCache methods ***/
    HRESULT (STDMETHODCALLTYPE *UninstallAssembly)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR name,
        LPCFUSION_INSTALL_REFERENCE ref,
        ULONG *disp);

    HRESULT (STDMETHODCALLTYPE *QueryAssemblyInfo)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR name,
        ASSEMBLY_INFO *info);

    HRESULT (STDMETHODCALLTYPE *CreateAssemblyCacheItem)(
        IAssemblyCache* This,
        DWORD flags,
        PVOID reserved,
        IAssemblyCacheItem **item,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *Reserved)(
        IAssemblyCache* This,
        IUnknown **reserved);

    HRESULT (STDMETHODCALLTYPE *InstallAssembly)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR path,
        LPCFUSION_INSTALL_REFERENCE ref);

    END_INTERFACE
} IAssemblyCacheVtbl;
interface IAssemblyCache {
    CONST_VTBL IAssemblyCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyCache_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCache_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCache_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCache methods ***/
#define IAssemblyCache_UninstallAssembly(This,flags,name,ref,disp) (This)->lpVtbl->UninstallAssembly(This,flags,name,ref,disp)
#define IAssemblyCache_QueryAssemblyInfo(This,flags,name,info) (This)->lpVtbl->QueryAssemblyInfo(This,flags,name,info)
#define IAssemblyCache_CreateAssemblyCacheItem(This,flags,reserved,item,name) (This)->lpVtbl->CreateAssemblyCacheItem(This,flags,reserved,item,name)
#define IAssemblyCache_Reserved(This,reserved) (This)->lpVtbl->Reserved(This,reserved)
#define IAssemblyCache_InstallAssembly(This,flags,path,ref) (This)->lpVtbl->InstallAssembly(This,flags,path,ref)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyCache_QueryInterface(IAssemblyCache* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyCache_AddRef(IAssemblyCache* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyCache_Release(IAssemblyCache* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyCache methods ***/
static FORCEINLINE HRESULT IAssemblyCache_UninstallAssembly(IAssemblyCache* This,DWORD flags,LPCWSTR name,LPCFUSION_INSTALL_REFERENCE ref,ULONG *disp) {
    return This->lpVtbl->UninstallAssembly(This,flags,name,ref,disp);
}
static FORCEINLINE HRESULT IAssemblyCache_QueryAssemblyInfo(IAssemblyCache* This,DWORD flags,LPCWSTR name,ASSEMBLY_INFO *info) {
    return This->lpVtbl->QueryAssemblyInfo(This,flags,name,info);
}
static FORCEINLINE HRESULT IAssemblyCache_CreateAssemblyCacheItem(IAssemblyCache* This,DWORD flags,PVOID reserved,IAssemblyCacheItem **item,LPCWSTR name) {
    return This->lpVtbl->CreateAssemblyCacheItem(This,flags,reserved,item,name);
}
static FORCEINLINE HRESULT IAssemblyCache_Reserved(IAssemblyCache* This,IUnknown **reserved) {
    return This->lpVtbl->Reserved(This,reserved);
}
static FORCEINLINE HRESULT IAssemblyCache_InstallAssembly(IAssemblyCache* This,DWORD flags,LPCWSTR path,LPCFUSION_INSTALL_REFERENCE ref) {
    return This->lpVtbl->InstallAssembly(This,flags,path,ref);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IAssemblyCache_UninstallAssembly_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR name,
    LPCFUSION_INSTALL_REFERENCE ref,
    ULONG *disp);
void __RPC_STUB IAssemblyCache_UninstallAssembly_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_QueryAssemblyInfo_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR name,
    ASSEMBLY_INFO *info);
void __RPC_STUB IAssemblyCache_QueryAssemblyInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_CreateAssemblyCacheItem_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    PVOID reserved,
    IAssemblyCacheItem **item,
    LPCWSTR name);
void __RPC_STUB IAssemblyCache_CreateAssemblyCacheItem_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_Reserved_Proxy(
    IAssemblyCache* This,
    IUnknown **reserved);
void __RPC_STUB IAssemblyCache_Reserved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_InstallAssembly_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR path,
    LPCFUSION_INSTALL_REFERENCE ref);
void __RPC_STUB IAssemblyCache_InstallAssembly_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAssemblyCache_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyCacheItem interface
 */
#ifndef __IAssemblyCacheItem_INTERFACE_DEFINED__
#define __IAssemblyCacheItem_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9e3aaeb4-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCacheItem : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateStream(
        DWORD flags,
        LPCWSTR name,
        DWORD format,
        DWORD format_flags,
        IStream **stream,
        ULARGE_INTEGER *max_size) = 0;

    virtual HRESULT STDMETHODCALLTYPE Commit(
        DWORD flags,
        ULONG *disp) = 0;

    virtual HRESULT STDMETHODCALLTYPE AbortItem(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCacheItem* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCacheItem* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCacheItem* This);

    /*** IAssemblyCacheItem methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IAssemblyCacheItem* This,
        DWORD flags,
        LPCWSTR name,
        DWORD format,
        DWORD format_flags,
        IStream **stream,
        ULARGE_INTEGER *max_size);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IAssemblyCacheItem* This,
        DWORD flags,
        ULONG *disp);

    HRESULT (STDMETHODCALLTYPE *AbortItem)(
        IAssemblyCacheItem* This);

    END_INTERFACE
} IAssemblyCacheItemVtbl;
interface IAssemblyCacheItem {
    CONST_VTBL IAssemblyCacheItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyCacheItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCacheItem_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCacheItem_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCacheItem methods ***/
#define IAssemblyCacheItem_CreateStream(This,flags,name,format,format_flags,stream,max_size) (This)->lpVtbl->CreateStream(This,flags,name,format,format_flags,stream,max_size)
#define IAssemblyCacheItem_Commit(This,flags,disp) (This)->lpVtbl->Commit(This,flags,disp)
#define IAssemblyCacheItem_AbortItem(This) (This)->lpVtbl->AbortItem(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyCacheItem_QueryInterface(IAssemblyCacheItem* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyCacheItem_AddRef(IAssemblyCacheItem* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyCacheItem_Release(IAssemblyCacheItem* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyCacheItem methods ***/
static FORCEINLINE HRESULT IAssemblyCacheItem_CreateStream(IAssemblyCacheItem* This,DWORD flags,LPCWSTR name,DWORD format,DWORD format_flags,IStream **stream,ULARGE_INTEGER *max_size) {
    return This->lpVtbl->CreateStream(This,flags,name,format,format_flags,stream,max_size);
}
static FORCEINLINE HRESULT IAssemblyCacheItem_Commit(IAssemblyCacheItem* This,DWORD flags,ULONG *disp) {
    return This->lpVtbl->Commit(This,flags,disp);
}
static FORCEINLINE HRESULT IAssemblyCacheItem_AbortItem(IAssemblyCacheItem* This) {
    return This->lpVtbl->AbortItem(This);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_CreateStream_Proxy(
    IAssemblyCacheItem* This,
    DWORD flags,
    LPCWSTR name,
    DWORD format,
    DWORD format_flags,
    IStream **stream,
    ULARGE_INTEGER *max_size);
void __RPC_STUB IAssemblyCacheItem_CreateStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_Commit_Proxy(
    IAssemblyCacheItem* This,
    DWORD flags,
    ULONG *disp);
void __RPC_STUB IAssemblyCacheItem_Commit_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_AbortItem_Proxy(
    IAssemblyCacheItem* This);
void __RPC_STUB IAssemblyCacheItem_AbortItem_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAssemblyCacheItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyName interface
 */
#ifndef __IAssemblyName_INTERFACE_DEFINED__
#define __IAssemblyName_INTERFACE_DEFINED__

typedef enum __WIDL_winsxs_generated_name_00000000 {
    ASM_NAME_PUBLIC_KEY = 0,
    ASM_NAME_PUBLIC_KEY_TOKEN = 1,
    ASM_NAME_HASH_VALUE = 2,
    ASM_NAME_NAME = 3,
    ASM_NAME_MAJOR_VERSION = 4,
    ASM_NAME_MINOR_VERSION = 5,
    ASM_NAME_BUILD_NUMBER = 6,
    ASM_NAME_REVISION_NUMBER = 7,
    ASM_NAME_CULTURE = 8,
    ASM_NAME_PROCESSOR_ID_ARRAY = 9,
    ASM_NAME_OSINFO_ARRAY = 10,
    ASM_NAME_HASH_ALGID = 11,
    ASM_NAME_ALIAS = 12,
    ASM_NAME_CODEBASE_URL = 13,
    ASM_NAME_CODEBASE_LASTMOD = 14,
    ASM_NAME_NULL_PUBLIC_KEY = 15,
    ASM_NAME_NULL_PUBLIC_KEY_TOKEN = 16,
    ASM_NAME_CUSTOM = 17,
    ASM_NAME_NULL_CUSTOM = 18,
    ASM_NAME_MVID = 19,
    ASM_NAME_MAX_PARAMS = 20
} ASM_NAME;
typedef enum __WIDL_winsxs_generated_name_00000001 {
    ASM_DISPLAYF_VERSION = 0x1,
    ASM_DISPLAYF_CULTURE = 0x2,
    ASM_DISPLAYF_PUBLIC_KEY_TOKEN = 0x4,
    ASM_DISPLAYF_PUBLIC_KEY = 0x8,
    ASM_DISPLAYF_CUSTOM = 0x10,
    ASM_DISPLAYF_PROCESSORARCHITECTURE = 0x20,
    ASM_DISPLAYF_LANGUAGEID = 0x40
} ASM_DISPLAY_FLAGS;
DEFINE_GUID(IID_IAssemblyName, 0xcd193bc0, 0xb4bc, 0x11d2, 0x98,0x33, 0x00,0xc0,0x4f,0xc3,0x1d,0x2e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cd193bc0-b4bc-11d2-9833-00c04fc31d2e")
IAssemblyName : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        DWORD id,
        LPVOID property,
        DWORD size) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        DWORD id,
        LPVOID buffer,
        LPDWORD buflen) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finalize(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDisplayName(
        LPWSTR buffer,
        LPDWORD buflen,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reserved(
        REFIID riid,
        IUnknown *pUnkReserved1,
        IUnknown *pUnkReserved2,
        LPCOLESTR szReserved,
        LONGLONG llReserved,
        LPVOID pvReserved,
        DWORD cbReserved,
        LPVOID *ppReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetName(
        LPDWORD buflen,
        LPWSTR buffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVersion(
        LPDWORD hi,
        LPDWORD low) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEqual(
        IAssemblyName *name,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IAssemblyName **name) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyName, 0xcd193bc0, 0xb4bc, 0x11d2, 0x98,0x33, 0x00,0xc0,0x4f,0xc3,0x1d,0x2e)
#endif
#else
typedef struct IAssemblyNameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyName* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyName* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyName* This);

    /*** IAssemblyName methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IAssemblyName* This,
        DWORD id,
        LPVOID property,
        DWORD size);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IAssemblyName* This,
        DWORD id,
        LPVOID buffer,
        LPDWORD buflen);

    HRESULT (STDMETHODCALLTYPE *Finalize)(
        IAssemblyName* This);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IAssemblyName* This,
        LPWSTR buffer,
        LPDWORD buflen,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *Reserved)(
        IAssemblyName* This,
        REFIID riid,
        IUnknown *pUnkReserved1,
        IUnknown *pUnkReserved2,
        LPCOLESTR szReserved,
        LONGLONG llReserved,
        LPVOID pvReserved,
        DWORD cbReserved,
        LPVOID *ppReserved);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IAssemblyName* This,
        LPDWORD buflen,
        LPWSTR buffer);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IAssemblyName* This,
        LPDWORD hi,
        LPDWORD low);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IAssemblyName* This,
        IAssemblyName *name,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IAssemblyName* This,
        IAssemblyName **name);

    END_INTERFACE
} IAssemblyNameVtbl;
interface IAssemblyName {
    CONST_VTBL IAssemblyNameVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyName_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyName_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyName_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyName methods ***/
#define IAssemblyName_SetProperty(This,id,property,size) (This)->lpVtbl->SetProperty(This,id,property,size)
#define IAssemblyName_GetProperty(This,id,buffer,buflen) (This)->lpVtbl->GetProperty(This,id,buffer,buflen)
#define IAssemblyName_Finalize(This) (This)->lpVtbl->Finalize(This)
#define IAssemblyName_GetDisplayName(This,buffer,buflen,flags) (This)->lpVtbl->GetDisplayName(This,buffer,buflen,flags)
#define IAssemblyName_Reserved(This,riid,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved) (This)->lpVtbl->Reserved(This,riid,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved)
#define IAssemblyName_GetName(This,buflen,buffer) (This)->lpVtbl->GetName(This,buflen,buffer)
#define IAssemblyName_GetVersion(This,hi,low) (This)->lpVtbl->GetVersion(This,hi,low)
#define IAssemblyName_IsEqual(This,name,flags) (This)->lpVtbl->IsEqual(This,name,flags)
#define IAssemblyName_Clone(This,name) (This)->lpVtbl->Clone(This,name)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyName_QueryInterface(IAssemblyName* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyName_AddRef(IAssemblyName* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyName_Release(IAssemblyName* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyName methods ***/
static FORCEINLINE HRESULT IAssemblyName_SetProperty(IAssemblyName* This,DWORD id,LPVOID property,DWORD size) {
    return This->lpVtbl->SetProperty(This,id,property,size);
}
static FORCEINLINE HRESULT IAssemblyName_GetProperty(IAssemblyName* This,DWORD id,LPVOID buffer,LPDWORD buflen) {
    return This->lpVtbl->GetProperty(This,id,buffer,buflen);
}
static FORCEINLINE HRESULT IAssemblyName_Finalize(IAssemblyName* This) {
    return This->lpVtbl->Finalize(This);
}
static FORCEINLINE HRESULT IAssemblyName_GetDisplayName(IAssemblyName* This,LPWSTR buffer,LPDWORD buflen,DWORD flags) {
    return This->lpVtbl->GetDisplayName(This,buffer,buflen,flags);
}
static FORCEINLINE HRESULT IAssemblyName_Reserved(IAssemblyName* This,REFIID riid,IUnknown *pUnkReserved1,IUnknown *pUnkReserved2,LPCOLESTR szReserved,LONGLONG llReserved,LPVOID pvReserved,DWORD cbReserved,LPVOID *ppReserved) {
    return This->lpVtbl->Reserved(This,riid,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved);
}
static FORCEINLINE HRESULT IAssemblyName_GetName(IAssemblyName* This,LPDWORD buflen,LPWSTR buffer) {
    return This->lpVtbl->GetName(This,buflen,buffer);
}
static FORCEINLINE HRESULT IAssemblyName_GetVersion(IAssemblyName* This,LPDWORD hi,LPDWORD low) {
    return This->lpVtbl->GetVersion(This,hi,low);
}
static FORCEINLINE HRESULT IAssemblyName_IsEqual(IAssemblyName* This,IAssemblyName *name,DWORD flags) {
    return This->lpVtbl->IsEqual(This,name,flags);
}
static FORCEINLINE HRESULT IAssemblyName_Clone(IAssemblyName* This,IAssemblyName **name) {
    return This->lpVtbl->Clone(This,name);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IAssemblyName_SetProperty_Proxy(
    IAssemblyName* This,
    DWORD id,
    LPVOID property,
    DWORD size);
void __RPC_STUB IAssemblyName_SetProperty_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_GetProperty_Proxy(
    IAssemblyName* This,
    DWORD id,
    LPVOID buffer,
    LPDWORD buflen);
void __RPC_STUB IAssemblyName_GetProperty_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_Finalize_Proxy(
    IAssemblyName* This);
void __RPC_STUB IAssemblyName_Finalize_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_GetDisplayName_Proxy(
    IAssemblyName* This,
    LPWSTR buffer,
    LPDWORD buflen,
    DWORD flags);
void __RPC_STUB IAssemblyName_GetDisplayName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_Reserved_Proxy(
    IAssemblyName* This,
    REFIID riid,
    IUnknown *pUnkReserved1,
    IUnknown *pUnkReserved2,
    LPCOLESTR szReserved,
    LONGLONG llReserved,
    LPVOID pvReserved,
    DWORD cbReserved,
    LPVOID *ppReserved);
void __RPC_STUB IAssemblyName_Reserved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_GetName_Proxy(
    IAssemblyName* This,
    LPDWORD buflen,
    LPWSTR buffer);
void __RPC_STUB IAssemblyName_GetName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_GetVersion_Proxy(
    IAssemblyName* This,
    LPDWORD hi,
    LPDWORD low);
void __RPC_STUB IAssemblyName_GetVersion_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_IsEqual_Proxy(
    IAssemblyName* This,
    IAssemblyName *name,
    DWORD flags);
void __RPC_STUB IAssemblyName_IsEqual_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyName_Clone_Proxy(
    IAssemblyName* This,
    IAssemblyName **name);
void __RPC_STUB IAssemblyName_Clone_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAssemblyName_INTERFACE_DEFINED__ */

typedef IAssemblyName *LPASSEMBLYNAME;
typedef enum __WIDL_winsxs_generated_name_00000002 {
    CANOF_PARSE_DISPLAY_NAME = 0x1,
    CANOF_SET_DEFAULT_VALUES = 0x2
} CREATE_ASM_NAME_OBJ_FLAGS;
HRESULT WINAPI CreateAssemblyCache(IAssemblyCache**,DWORD);
HRESULT WINAPI CreateAssemblyNameObject(LPASSEMBLYNAME *,LPCWSTR,DWORD,LPVOID);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __winsxs_h__ */
