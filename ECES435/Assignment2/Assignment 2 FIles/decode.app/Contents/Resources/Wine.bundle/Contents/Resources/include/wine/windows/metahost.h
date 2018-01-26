/*** Autogenerated by WIDL 1.6.1 from metahost.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __metahost_h__
#define __metahost_h__

/* Forward declarations */

#ifndef __ICLRRuntimeInfo_FWD_DEFINED__
#define __ICLRRuntimeInfo_FWD_DEFINED__
typedef interface ICLRRuntimeInfo ICLRRuntimeInfo;
#endif

#ifndef __ICLRMetaHost_FWD_DEFINED__
#define __ICLRMetaHost_FWD_DEFINED__
typedef interface ICLRMetaHost ICLRMetaHost;
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <oaidl.h>
#include <ocidl.h>
#include <mscoree.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WINE_NO_UNICODE_MACROS
#undef LoadLibrary
#endif
/*****************************************************************************
 * ICLRRuntimeInfo interface
 */
#ifndef __ICLRRuntimeInfo_INTERFACE_DEFINED__
#define __ICLRRuntimeInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRRuntimeInfo, 0xbd39d1d2, 0xba2f, 0x486a, 0x89,0xb0, 0xb4,0xb0,0xcb,0x46,0x68,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bd39d1d2-ba2f-486a-89b0-b4b0cb466891")
ICLRRuntimeInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetVersionString(
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeDirectory(
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsLoaded(
        HANDLE hndProcess,
        BOOL *pbLoaded) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadErrorString(
        UINT iResourceID,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer,
        LONG iLocaleid) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadLibrary(
        LPCWSTR pwzDllName,
        HMODULE *phndModule) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProcAddress(
        LPCSTR pszProcName,
        LPVOID *ppProc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInterface(
        REFCLSID rclsid,
        REFIID riid,
        LPVOID *ppUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsLoadable(
        BOOL *pbLoadable) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDefaultStartupFlags(
        DWORD dwStartupFlags,
        LPCWSTR pwzHostConfigFile) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultStartupFlags(
        DWORD *pdwStartupFlags,
        LPWSTR pwzHostConfigFile,
        DWORD *pcchHostConfigFile) = 0;

    virtual HRESULT STDMETHODCALLTYPE BindAsLegacyV2Runtime(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsStarted(
        BOOL *pbStarted,
        DWORD *pdwStartupFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRRuntimeInfo, 0xbd39d1d2, 0xba2f, 0x486a, 0x89,0xb0, 0xb4,0xb0,0xcb,0x46,0x68,0x91)
#endif
#else
typedef struct ICLRRuntimeInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRRuntimeInfo* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRRuntimeInfo* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRRuntimeInfo* This);

    /*** ICLRRuntimeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVersionString)(
        ICLRRuntimeInfo* This,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeDirectory)(
        ICLRRuntimeInfo* This,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *IsLoaded)(
        ICLRRuntimeInfo* This,
        HANDLE hndProcess,
        BOOL *pbLoaded);

    HRESULT (STDMETHODCALLTYPE *LoadErrorString)(
        ICLRRuntimeInfo* This,
        UINT iResourceID,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer,
        LONG iLocaleid);

    HRESULT (STDMETHODCALLTYPE *LoadLibrary)(
        ICLRRuntimeInfo* This,
        LPCWSTR pwzDllName,
        HMODULE *phndModule);

    HRESULT (STDMETHODCALLTYPE *GetProcAddress)(
        ICLRRuntimeInfo* This,
        LPCSTR pszProcName,
        LPVOID *ppProc);

    HRESULT (STDMETHODCALLTYPE *GetInterface)(
        ICLRRuntimeInfo* This,
        REFCLSID rclsid,
        REFIID riid,
        LPVOID *ppUnk);

    HRESULT (STDMETHODCALLTYPE *IsLoadable)(
        ICLRRuntimeInfo* This,
        BOOL *pbLoadable);

    HRESULT (STDMETHODCALLTYPE *SetDefaultStartupFlags)(
        ICLRRuntimeInfo* This,
        DWORD dwStartupFlags,
        LPCWSTR pwzHostConfigFile);

    HRESULT (STDMETHODCALLTYPE *GetDefaultStartupFlags)(
        ICLRRuntimeInfo* This,
        DWORD *pdwStartupFlags,
        LPWSTR pwzHostConfigFile,
        DWORD *pcchHostConfigFile);

    HRESULT (STDMETHODCALLTYPE *BindAsLegacyV2Runtime)(
        ICLRRuntimeInfo* This);

    HRESULT (STDMETHODCALLTYPE *IsStarted)(
        ICLRRuntimeInfo* This,
        BOOL *pbStarted,
        DWORD *pdwStartupFlags);

    END_INTERFACE
} ICLRRuntimeInfoVtbl;
interface ICLRRuntimeInfo {
    CONST_VTBL ICLRRuntimeInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRRuntimeInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRRuntimeInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRRuntimeInfo_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRRuntimeInfo methods ***/
#define ICLRRuntimeInfo_GetVersionString(This,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetVersionString(This,pwzBuffer,pcchBuffer)
#define ICLRRuntimeInfo_GetRuntimeDirectory(This,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetRuntimeDirectory(This,pwzBuffer,pcchBuffer)
#define ICLRRuntimeInfo_IsLoaded(This,hndProcess,pbLoaded) (This)->lpVtbl->IsLoaded(This,hndProcess,pbLoaded)
#define ICLRRuntimeInfo_LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid) (This)->lpVtbl->LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid)
#define ICLRRuntimeInfo_LoadLibrary(This,pwzDllName,phndModule) (This)->lpVtbl->LoadLibrary(This,pwzDllName,phndModule)
#define ICLRRuntimeInfo_GetProcAddress(This,pszProcName,ppProc) (This)->lpVtbl->GetProcAddress(This,pszProcName,ppProc)
#define ICLRRuntimeInfo_GetInterface(This,rclsid,riid,ppUnk) (This)->lpVtbl->GetInterface(This,rclsid,riid,ppUnk)
#define ICLRRuntimeInfo_IsLoadable(This,pbLoadable) (This)->lpVtbl->IsLoadable(This,pbLoadable)
#define ICLRRuntimeInfo_SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile) (This)->lpVtbl->SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile)
#define ICLRRuntimeInfo_GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile) (This)->lpVtbl->GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile)
#define ICLRRuntimeInfo_BindAsLegacyV2Runtime(This) (This)->lpVtbl->BindAsLegacyV2Runtime(This)
#define ICLRRuntimeInfo_IsStarted(This,pbStarted,pdwStartupFlags) (This)->lpVtbl->IsStarted(This,pbStarted,pdwStartupFlags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRRuntimeInfo_QueryInterface(ICLRRuntimeInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRRuntimeInfo_AddRef(ICLRRuntimeInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRRuntimeInfo_Release(ICLRRuntimeInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRRuntimeInfo methods ***/
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetVersionString(ICLRRuntimeInfo* This,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetVersionString(This,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetRuntimeDirectory(ICLRRuntimeInfo* This,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetRuntimeDirectory(This,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsLoaded(ICLRRuntimeInfo* This,HANDLE hndProcess,BOOL *pbLoaded) {
    return This->lpVtbl->IsLoaded(This,hndProcess,pbLoaded);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_LoadErrorString(ICLRRuntimeInfo* This,UINT iResourceID,LPWSTR pwzBuffer,DWORD *pcchBuffer,LONG iLocaleid) {
    return This->lpVtbl->LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_LoadLibrary(ICLRRuntimeInfo* This,LPCWSTR pwzDllName,HMODULE *phndModule) {
    return This->lpVtbl->LoadLibrary(This,pwzDllName,phndModule);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetProcAddress(ICLRRuntimeInfo* This,LPCSTR pszProcName,LPVOID *ppProc) {
    return This->lpVtbl->GetProcAddress(This,pszProcName,ppProc);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetInterface(ICLRRuntimeInfo* This,REFCLSID rclsid,REFIID riid,LPVOID *ppUnk) {
    return This->lpVtbl->GetInterface(This,rclsid,riid,ppUnk);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsLoadable(ICLRRuntimeInfo* This,BOOL *pbLoadable) {
    return This->lpVtbl->IsLoadable(This,pbLoadable);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_SetDefaultStartupFlags(ICLRRuntimeInfo* This,DWORD dwStartupFlags,LPCWSTR pwzHostConfigFile) {
    return This->lpVtbl->SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetDefaultStartupFlags(ICLRRuntimeInfo* This,DWORD *pdwStartupFlags,LPWSTR pwzHostConfigFile,DWORD *pcchHostConfigFile) {
    return This->lpVtbl->GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_BindAsLegacyV2Runtime(ICLRRuntimeInfo* This) {
    return This->lpVtbl->BindAsLegacyV2Runtime(This);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsStarted(ICLRRuntimeInfo* This,BOOL *pbStarted,DWORD *pdwStartupFlags) {
    return This->lpVtbl->IsStarted(This,pbStarted,pdwStartupFlags);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_GetVersionString_Proxy(
    ICLRRuntimeInfo* This,
    LPWSTR pwzBuffer,
    DWORD *pcchBuffer);
void __RPC_STUB ICLRRuntimeInfo_GetVersionString_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_GetRuntimeDirectory_Proxy(
    ICLRRuntimeInfo* This,
    LPWSTR pwzBuffer,
    DWORD *pcchBuffer);
void __RPC_STUB ICLRRuntimeInfo_GetRuntimeDirectory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_IsLoaded_Proxy(
    ICLRRuntimeInfo* This,
    HANDLE hndProcess,
    BOOL *pbLoaded);
void __RPC_STUB ICLRRuntimeInfo_IsLoaded_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_LoadErrorString_Proxy(
    ICLRRuntimeInfo* This,
    UINT iResourceID,
    LPWSTR pwzBuffer,
    DWORD *pcchBuffer,
    LONG iLocaleid);
void __RPC_STUB ICLRRuntimeInfo_LoadErrorString_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_LoadLibrary_Proxy(
    ICLRRuntimeInfo* This,
    LPCWSTR pwzDllName,
    HMODULE *phndModule);
void __RPC_STUB ICLRRuntimeInfo_LoadLibrary_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_GetProcAddress_Proxy(
    ICLRRuntimeInfo* This,
    LPCSTR pszProcName,
    LPVOID *ppProc);
void __RPC_STUB ICLRRuntimeInfo_GetProcAddress_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_GetInterface_Proxy(
    ICLRRuntimeInfo* This,
    REFCLSID rclsid,
    REFIID riid,
    LPVOID *ppUnk);
void __RPC_STUB ICLRRuntimeInfo_GetInterface_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_IsLoadable_Proxy(
    ICLRRuntimeInfo* This,
    BOOL *pbLoadable);
void __RPC_STUB ICLRRuntimeInfo_IsLoadable_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_SetDefaultStartupFlags_Proxy(
    ICLRRuntimeInfo* This,
    DWORD dwStartupFlags,
    LPCWSTR pwzHostConfigFile);
void __RPC_STUB ICLRRuntimeInfo_SetDefaultStartupFlags_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_GetDefaultStartupFlags_Proxy(
    ICLRRuntimeInfo* This,
    DWORD *pdwStartupFlags,
    LPWSTR pwzHostConfigFile,
    DWORD *pcchHostConfigFile);
void __RPC_STUB ICLRRuntimeInfo_GetDefaultStartupFlags_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_BindAsLegacyV2Runtime_Proxy(
    ICLRRuntimeInfo* This);
void __RPC_STUB ICLRRuntimeInfo_BindAsLegacyV2Runtime_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRRuntimeInfo_IsStarted_Proxy(
    ICLRRuntimeInfo* This,
    BOOL *pbStarted,
    DWORD *pdwStartupFlags);
void __RPC_STUB ICLRRuntimeInfo_IsStarted_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICLRRuntimeInfo_INTERFACE_DEFINED__ */

typedef HRESULT (__stdcall *CallbackThreadSetFnPtr)(void);
typedef HRESULT (__stdcall *CallbackThreadUnsetFnPtr)(void);
typedef void (__stdcall *RuntimeLoadedCallbackFnPtr)(ICLRRuntimeInfo *pRuntimeInfo,HRESULT (__stdcall * pfnCallbackThreadSet)(void),HRESULT (__stdcall * pfnCallbackThreadUnset)(void));
DEFINE_GUID(CLSID_CLRDebuggingLegacy, 0xDF8395B5,0xA4BA,0x450b,0xA7,0x7C,0xA9,0xA4,0x77,0x62,0xC5,0x20);
DEFINE_GUID(CLSID_CLRMetaHost, 0x9280188d,0x0e8e,0x4867,0xb3,0x0c,0x7f,0xa8,0x38,0x84,0xe8,0xde);
/*****************************************************************************
 * ICLRMetaHost interface
 */
#ifndef __ICLRMetaHost_INTERFACE_DEFINED__
#define __ICLRMetaHost_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRMetaHost, 0xd332db9e, 0xb9b3, 0x4125, 0x82,0x07, 0xa1,0x48,0x84,0xf5,0x32,0x16);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d332db9e-b9b3-4125-8207-a14884f53216")
ICLRMetaHost : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetRuntime(
        LPCWSTR pwzVersion,
        REFIID iid,
        LPVOID *ppRuntime) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVersionFromFile(
        LPCWSTR pwzFilePath,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumerateInstalledRuntimes(
        IEnumUnknown **ppEnumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumerateLoadedRuntimes(
        HANDLE hndProcess,
        IEnumUnknown **ppEnumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestRuntimeLoadedNotification(
        void (__stdcall * pCallbackFunction)(ICLRRuntimeInfo *pRuntimeInfo,HRESULT (__stdcall * pfnCallbackThreadSet)(void),HRESULT (__stdcall * pfnCallbackThreadUnset)(void))) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryLegacyV2RuntimeBinding(
        REFIID riid,
        LPVOID *ppUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExitProcess(
        INT32 iExitCode) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRMetaHost, 0xd332db9e, 0xb9b3, 0x4125, 0x82,0x07, 0xa1,0x48,0x84,0xf5,0x32,0x16)
#endif
#else
typedef struct ICLRMetaHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRMetaHost* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRMetaHost* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRMetaHost* This);

    /*** ICLRMetaHost methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRuntime)(
        ICLRMetaHost* This,
        LPCWSTR pwzVersion,
        REFIID iid,
        LPVOID *ppRuntime);

    HRESULT (STDMETHODCALLTYPE *GetVersionFromFile)(
        ICLRMetaHost* This,
        LPCWSTR pwzFilePath,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *EnumerateInstalledRuntimes)(
        ICLRMetaHost* This,
        IEnumUnknown **ppEnumerator);

    HRESULT (STDMETHODCALLTYPE *EnumerateLoadedRuntimes)(
        ICLRMetaHost* This,
        HANDLE hndProcess,
        IEnumUnknown **ppEnumerator);

    HRESULT (STDMETHODCALLTYPE *RequestRuntimeLoadedNotification)(
        ICLRMetaHost* This,
        void (__stdcall * pCallbackFunction)(ICLRRuntimeInfo *pRuntimeInfo,HRESULT (__stdcall * pfnCallbackThreadSet)(void),HRESULT (__stdcall * pfnCallbackThreadUnset)(void)));

    HRESULT (STDMETHODCALLTYPE *QueryLegacyV2RuntimeBinding)(
        ICLRMetaHost* This,
        REFIID riid,
        LPVOID *ppUnk);

    HRESULT (STDMETHODCALLTYPE *ExitProcess)(
        ICLRMetaHost* This,
        INT32 iExitCode);

    END_INTERFACE
} ICLRMetaHostVtbl;
interface ICLRMetaHost {
    CONST_VTBL ICLRMetaHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRMetaHost_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRMetaHost_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRMetaHost_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRMetaHost methods ***/
#define ICLRMetaHost_GetRuntime(This,pwzVersion,iid,ppRuntime) (This)->lpVtbl->GetRuntime(This,pwzVersion,iid,ppRuntime)
#define ICLRMetaHost_GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer)
#define ICLRMetaHost_EnumerateInstalledRuntimes(This,ppEnumerator) (This)->lpVtbl->EnumerateInstalledRuntimes(This,ppEnumerator)
#define ICLRMetaHost_EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator) (This)->lpVtbl->EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator)
#define ICLRMetaHost_RequestRuntimeLoadedNotification(This,pCallbackFunction) (This)->lpVtbl->RequestRuntimeLoadedNotification(This,pCallbackFunction)
#define ICLRMetaHost_QueryLegacyV2RuntimeBinding(This,riid,ppUnk) (This)->lpVtbl->QueryLegacyV2RuntimeBinding(This,riid,ppUnk)
#define ICLRMetaHost_ExitProcess(This,iExitCode) (This)->lpVtbl->ExitProcess(This,iExitCode)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRMetaHost_QueryInterface(ICLRMetaHost* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRMetaHost_AddRef(ICLRMetaHost* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRMetaHost_Release(ICLRMetaHost* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRMetaHost methods ***/
static FORCEINLINE HRESULT ICLRMetaHost_GetRuntime(ICLRMetaHost* This,LPCWSTR pwzVersion,REFIID iid,LPVOID *ppRuntime) {
    return This->lpVtbl->GetRuntime(This,pwzVersion,iid,ppRuntime);
}
static FORCEINLINE HRESULT ICLRMetaHost_GetVersionFromFile(ICLRMetaHost* This,LPCWSTR pwzFilePath,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRMetaHost_EnumerateInstalledRuntimes(ICLRMetaHost* This,IEnumUnknown **ppEnumerator) {
    return This->lpVtbl->EnumerateInstalledRuntimes(This,ppEnumerator);
}
static FORCEINLINE HRESULT ICLRMetaHost_EnumerateLoadedRuntimes(ICLRMetaHost* This,HANDLE hndProcess,IEnumUnknown **ppEnumerator) {
    return This->lpVtbl->EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator);
}
static FORCEINLINE HRESULT ICLRMetaHost_RequestRuntimeLoadedNotification(ICLRMetaHost* This,void (__stdcall * pCallbackFunction)(ICLRRuntimeInfo *pRuntimeInfo,HRESULT (__stdcall * pfnCallbackThreadSet)(void),HRESULT (__stdcall * pfnCallbackThreadUnset)(void))) {
    return This->lpVtbl->RequestRuntimeLoadedNotification(This,pCallbackFunction);
}
static FORCEINLINE HRESULT ICLRMetaHost_QueryLegacyV2RuntimeBinding(ICLRMetaHost* This,REFIID riid,LPVOID *ppUnk) {
    return This->lpVtbl->QueryLegacyV2RuntimeBinding(This,riid,ppUnk);
}
static FORCEINLINE HRESULT ICLRMetaHost_ExitProcess(ICLRMetaHost* This,INT32 iExitCode) {
    return This->lpVtbl->ExitProcess(This,iExitCode);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ICLRMetaHost_GetRuntime_Proxy(
    ICLRMetaHost* This,
    LPCWSTR pwzVersion,
    REFIID iid,
    LPVOID *ppRuntime);
void __RPC_STUB ICLRMetaHost_GetRuntime_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_GetVersionFromFile_Proxy(
    ICLRMetaHost* This,
    LPCWSTR pwzFilePath,
    LPWSTR pwzBuffer,
    DWORD *pcchBuffer);
void __RPC_STUB ICLRMetaHost_GetVersionFromFile_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_EnumerateInstalledRuntimes_Proxy(
    ICLRMetaHost* This,
    IEnumUnknown **ppEnumerator);
void __RPC_STUB ICLRMetaHost_EnumerateInstalledRuntimes_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_EnumerateLoadedRuntimes_Proxy(
    ICLRMetaHost* This,
    HANDLE hndProcess,
    IEnumUnknown **ppEnumerator);
void __RPC_STUB ICLRMetaHost_EnumerateLoadedRuntimes_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_RequestRuntimeLoadedNotification_Proxy(
    ICLRMetaHost* This,
    void (__stdcall * pCallbackFunction)(ICLRRuntimeInfo *pRuntimeInfo,HRESULT (__stdcall * pfnCallbackThreadSet)(void),HRESULT (__stdcall * pfnCallbackThreadUnset)(void)));
void __RPC_STUB ICLRMetaHost_RequestRuntimeLoadedNotification_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_QueryLegacyV2RuntimeBinding_Proxy(
    ICLRMetaHost* This,
    REFIID riid,
    LPVOID *ppUnk);
void __RPC_STUB ICLRMetaHost_QueryLegacyV2RuntimeBinding_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICLRMetaHost_ExitProcess_Proxy(
    ICLRMetaHost* This,
    INT32 iExitCode);
void __RPC_STUB ICLRMetaHost_ExitProcess_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ICLRMetaHost_INTERFACE_DEFINED__ */

HRESULT WINAPI CLRCreateInstance(REFCLSID clsid, REFIID riid, LPVOID *ppInterface);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __metahost_h__ */
