/*** Autogenerated by WIDL 1.6.1 from oleacc.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __oleacc_h__
#define __oleacc_h__

/* Forward declarations */

#ifndef __IAccessible_FWD_DEFINED__
#define __IAccessible_FWD_DEFINED__
typedef interface IAccessible IAccessible;
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NAVDIR_UP         1
#define NAVDIR_DOWN       2
#define NAVDIR_LEFT       3
#define NAVDIR_RIGHT      4
#define NAVDIR_NEXT       5
#define NAVDIR_PREVIOUS   6
#define NAVDIR_FIRSTCHILD 7
#define NAVDIR_LASTCHILD  8
#define ROLE_SYSTEM_TITLEBAR     1
#define ROLE_SYSTEM_MENUBAR      2
#define ROLE_SYSTEM_SCROLLBAR    3
#define ROLE_SYSTEM_GRIP         4
#define ROLE_SYSTEM_SOUND        5
#define ROLE_SYSTEM_CURSOR       6
#define ROLE_SYSTEM_CARET        7
#define ROLE_SYSTEM_ALERT        8
#define ROLE_SYSTEM_WINDOW       9
#define ROLE_SYSTEM_CLIENT       10
#define ROLE_SYSTEM_MENUPOPUP    11
#define ROLE_SYSTEM_MENUITEM     12
#define ROLE_SYSTEM_TOOLTIP      13
#define ROLE_SYSTEM_APPLICATION  14
#define ROLE_SYSTEM_DOCUMENT     15
#define ROLE_SYSTEM_PANE         16
#define ROLE_SYSTEM_CHART        17
#define ROLE_SYSTEM_DIALOG       18
#define ROLE_SYSTEM_BORDER       19
#define ROLE_SYSTEM_GROUPING     20
#define ROLE_SYSTEM_SEPARATOR    21
#define ROLE_SYSTEM_TOOLBAR      22
#define ROLE_SYSTEM_STATUSBAR    23
#define ROLE_SYSTEM_TABLE        24
#define ROLE_SYSTEM_COLUMNHEADER 25
#define ROLE_SYSTEM_ROWHEADER    26
#define ROLE_SYSTEM_COLUMN       27
#define ROLE_SYSTEM_ROW          28
#define ROLE_SYSTEM_CELL         29
#define ROLE_SYSTEM_LINK         30
#define ROLE_SYSTEM_HELPBALLOON  31
#define ROLE_SYSTEM_CHARACTER    32
#define ROLE_SYSTEM_LIST         33
#define ROLE_SYSTEM_LISTITEM     34
#define ROLE_SYSTEM_OUTLINE      35
#define ROLE_SYSTEM_OUTLINEITEM  36
#define ROLE_SYSTEM_PAGETAB      37
#define ROLE_SYSTEM_PROPERTYPAGE 38
#define ROLE_SYSTEM_INDICATOR    39
#define ROLE_SYSTEM_GRAPHIC      40
#define ROLE_SYSTEM_STATICTEXT   41
#define ROLE_SYSTEM_TEXT         42
#define ROLE_SYSTEM_PUSHBUTTON   43
#define ROLE_SYSTEM_CHECKBUTTON  44
#define ROLE_SYSTEM_RADIOBUTTON  45
#define ROLE_SYSTEM_COMBOBOX     46
#define ROLE_SYSTEM_DROPLIST     47
#define ROLE_SYSTEM_PROGRESSBAR  48
#define ROLE_SYSTEM_DIAL         49
#define ROLE_SYSTEM_HOTKEYFIELD  50
#define ROLE_SYSTEM_SLIDER       51
#define ROLE_SYSTEM_SPINBUTTON   52
#define ROLE_SYSTEM_DIAGRAM      53
#define ROLE_SYSTEM_ANIMATION    54
#define ROLE_SYSTEM_EQUATION     55
#define ROLE_SYSTEM_BUTTONDROPDOWN 56
#define ROLE_SYSTEM_BUTTONMENU   57
#define ROLE_SYSTEM_BUTTONDROPDOWNGRID 58
#define ROLE_SYSTEM_WHITESPACE   59
#define ROLE_SYSTEM_PAGETABLIST  60
#define ROLE_SYSTEM_CLOCK        61
#define ROLE_SYSTEM_SPLITBUTTON  62
#define ROLE_SYSTEM_IPADDRESS    63
#define ROLE_SYSTEM_OUTLINEBUTTON 64
#define SELFLAG_NONE            0x00
#define SELFLAG_TAKEFOCUS       0x01
#define SELFLAG_TAKESELECTION   0x02
#define SELFLAG_EXTENDSELECTION 0x04
#define SELFLAG_ADDSELECTION    0x08
#define SELFLAG_REMOVESELECTION 0x10
#define SELFLAG_VALID           0x1f
/*****************************************************************************
 * IAccessible interface
 */
#ifndef __IAccessible_INTERFACE_DEFINED__
#define __IAccessible_INTERFACE_DEFINED__

typedef IAccessible *LPACCESSIBLE;
#define DISPID_ACC_PARENT (-5000)

#define DISPID_ACC_CHILDCOUNT (-5001)

#define DISPID_ACC_CHILD (-5002)

#define DISPID_ACC_NAME (-5003)

#define DISPID_ACC_VALUE (-5004)

#define DISPID_ACC_DESCRIPTION (-5005)

#define DISPID_ACC_ROLE (-5006)

#define DISPID_ACC_STATE (-5007)

#define DISPID_ACC_HELP (-5008)

#define DISPID_ACC_HELPTOPIC (-5009)

#define DISPID_ACC_KEYBOARDSHORTCUT (-5010)

#define DISPID_ACC_FOCUS (-5011)

#define DISPID_ACC_SELECTION (-5012)

#define DISPID_ACC_DEFAULTACTION (-5013)

#define DISPID_ACC_SELECT (-5014)

#define DISPID_ACC_LOCATION (-5015)

#define DISPID_ACC_NAVIGATE (-5016)

#define DISPID_ACC_HITTEST (-5017)

#define DISPID_ACC_DODEFAULTACTION (-5018)

DEFINE_GUID(IID_IAccessible, 0x618736e0, 0x3c3d, 0x11cf, 0x81,0x0c, 0x00,0xaa,0x00,0x38,0x9b,0x71);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("618736e0-3c3d-11cf-810c-00aa00389b71")
IAccessible : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE get_accParent(
        IDispatch **ppdispParent) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accChildCount(
        LONG *pcountChildren) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accChild(
        VARIANT varChildID,
        IDispatch **ppdispChild) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accName(
        VARIANT varID,
        BSTR *pszName) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accValue(
        VARIANT varID,
        BSTR *pszValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accDescription(
        VARIANT varID,
        BSTR *pszDescription) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accRole(
        VARIANT varID,
        VARIANT *pvarRole) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accState(
        VARIANT varID,
        VARIANT *pvarState) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accHelp(
        VARIANT varID,
        BSTR *pszHelp) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accHelpTopic(
        BSTR *pszHelpFile,
        VARIANT varID,
        LONG *pidTopic) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accKeyboardShortcut(
        VARIANT varID,
        BSTR *pszKeyboardShortcut) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accFocus(
        VARIANT *pvarID) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accSelection(
        VARIANT *pvarID) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_accDefaultAction(
        VARIANT varID,
        BSTR *pszDefaultAction) = 0;

    virtual HRESULT STDMETHODCALLTYPE accSelect(
        LONG flagsSelect,
        VARIANT varID) = 0;

    virtual HRESULT STDMETHODCALLTYPE accLocation(
        LONG *pxLeft,
        LONG *pyTop,
        LONG *pcxWidth,
        LONG *pcyHeight,
        VARIANT varID) = 0;

    virtual HRESULT STDMETHODCALLTYPE accNavigate(
        LONG navDir,
        VARIANT varStart,
        VARIANT *pvarEnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE accHitTest(
        LONG xLeft,
        LONG yTop,
        VARIANT *pvarID) = 0;

    virtual HRESULT STDMETHODCALLTYPE accDoDefaultAction(
        VARIANT varID) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_accName(
        VARIANT varID,
        BSTR pszName) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_accValue(
        VARIANT varID,
        BSTR pszValue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessible, 0x618736e0, 0x3c3d, 0x11cf, 0x81,0x0c, 0x00,0xaa,0x00,0x38,0x9b,0x71)
#endif
#else
typedef struct IAccessibleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessible* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessible* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessible* This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IAccessible* This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IAccessible* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IAccessible* This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IAccessible* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IAccessible methods ***/
    HRESULT (STDMETHODCALLTYPE *get_accParent)(
        IAccessible* This,
        IDispatch **ppdispParent);

    HRESULT (STDMETHODCALLTYPE *get_accChildCount)(
        IAccessible* This,
        LONG *pcountChildren);

    HRESULT (STDMETHODCALLTYPE *get_accChild)(
        IAccessible* This,
        VARIANT varChildID,
        IDispatch **ppdispChild);

    HRESULT (STDMETHODCALLTYPE *get_accName)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *get_accValue)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszValue);

    HRESULT (STDMETHODCALLTYPE *get_accDescription)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszDescription);

    HRESULT (STDMETHODCALLTYPE *get_accRole)(
        IAccessible* This,
        VARIANT varID,
        VARIANT *pvarRole);

    HRESULT (STDMETHODCALLTYPE *get_accState)(
        IAccessible* This,
        VARIANT varID,
        VARIANT *pvarState);

    HRESULT (STDMETHODCALLTYPE *get_accHelp)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszHelp);

    HRESULT (STDMETHODCALLTYPE *get_accHelpTopic)(
        IAccessible* This,
        BSTR *pszHelpFile,
        VARIANT varID,
        LONG *pidTopic);

    HRESULT (STDMETHODCALLTYPE *get_accKeyboardShortcut)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszKeyboardShortcut);

    HRESULT (STDMETHODCALLTYPE *get_accFocus)(
        IAccessible* This,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *get_accSelection)(
        IAccessible* This,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *get_accDefaultAction)(
        IAccessible* This,
        VARIANT varID,
        BSTR *pszDefaultAction);

    HRESULT (STDMETHODCALLTYPE *accSelect)(
        IAccessible* This,
        LONG flagsSelect,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *accLocation)(
        IAccessible* This,
        LONG *pxLeft,
        LONG *pyTop,
        LONG *pcxWidth,
        LONG *pcyHeight,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *accNavigate)(
        IAccessible* This,
        LONG navDir,
        VARIANT varStart,
        VARIANT *pvarEnd);

    HRESULT (STDMETHODCALLTYPE *accHitTest)(
        IAccessible* This,
        LONG xLeft,
        LONG yTop,
        VARIANT *pvarID);

    HRESULT (STDMETHODCALLTYPE *accDoDefaultAction)(
        IAccessible* This,
        VARIANT varID);

    HRESULT (STDMETHODCALLTYPE *put_accName)(
        IAccessible* This,
        VARIANT varID,
        BSTR pszName);

    HRESULT (STDMETHODCALLTYPE *put_accValue)(
        IAccessible* This,
        VARIANT varID,
        BSTR pszValue);

    END_INTERFACE
} IAccessibleVtbl;
interface IAccessible {
    CONST_VTBL IAccessibleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessible_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessible_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessible_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IAccessible_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IAccessible_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IAccessible_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IAccessible_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IAccessible methods ***/
#define IAccessible_get_accParent(This,ppdispParent) (This)->lpVtbl->get_accParent(This,ppdispParent)
#define IAccessible_get_accChildCount(This,pcountChildren) (This)->lpVtbl->get_accChildCount(This,pcountChildren)
#define IAccessible_get_accChild(This,varChildID,ppdispChild) (This)->lpVtbl->get_accChild(This,varChildID,ppdispChild)
#define IAccessible_get_accName(This,varID,pszName) (This)->lpVtbl->get_accName(This,varID,pszName)
#define IAccessible_get_accValue(This,varID,pszValue) (This)->lpVtbl->get_accValue(This,varID,pszValue)
#define IAccessible_get_accDescription(This,varID,pszDescription) (This)->lpVtbl->get_accDescription(This,varID,pszDescription)
#define IAccessible_get_accRole(This,varID,pvarRole) (This)->lpVtbl->get_accRole(This,varID,pvarRole)
#define IAccessible_get_accState(This,varID,pvarState) (This)->lpVtbl->get_accState(This,varID,pvarState)
#define IAccessible_get_accHelp(This,varID,pszHelp) (This)->lpVtbl->get_accHelp(This,varID,pszHelp)
#define IAccessible_get_accHelpTopic(This,pszHelpFile,varID,pidTopic) (This)->lpVtbl->get_accHelpTopic(This,pszHelpFile,varID,pidTopic)
#define IAccessible_get_accKeyboardShortcut(This,varID,pszKeyboardShortcut) (This)->lpVtbl->get_accKeyboardShortcut(This,varID,pszKeyboardShortcut)
#define IAccessible_get_accFocus(This,pvarID) (This)->lpVtbl->get_accFocus(This,pvarID)
#define IAccessible_get_accSelection(This,pvarID) (This)->lpVtbl->get_accSelection(This,pvarID)
#define IAccessible_get_accDefaultAction(This,varID,pszDefaultAction) (This)->lpVtbl->get_accDefaultAction(This,varID,pszDefaultAction)
#define IAccessible_accSelect(This,flagsSelect,varID) (This)->lpVtbl->accSelect(This,flagsSelect,varID)
#define IAccessible_accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID) (This)->lpVtbl->accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID)
#define IAccessible_accNavigate(This,navDir,varStart,pvarEnd) (This)->lpVtbl->accNavigate(This,navDir,varStart,pvarEnd)
#define IAccessible_accHitTest(This,xLeft,yTop,pvarID) (This)->lpVtbl->accHitTest(This,xLeft,yTop,pvarID)
#define IAccessible_accDoDefaultAction(This,varID) (This)->lpVtbl->accDoDefaultAction(This,varID)
#define IAccessible_put_accName(This,varID,pszName) (This)->lpVtbl->put_accName(This,varID,pszName)
#define IAccessible_put_accValue(This,varID,pszValue) (This)->lpVtbl->put_accValue(This,varID,pszValue)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessible_QueryInterface(IAccessible* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessible_AddRef(IAccessible* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessible_Release(IAccessible* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static FORCEINLINE HRESULT IAccessible_GetTypeInfoCount(IAccessible* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static FORCEINLINE HRESULT IAccessible_GetTypeInfo(IAccessible* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static FORCEINLINE HRESULT IAccessible_GetIDsOfNames(IAccessible* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static FORCEINLINE HRESULT IAccessible_Invoke(IAccessible* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IAccessible methods ***/
static FORCEINLINE HRESULT IAccessible_get_accParent(IAccessible* This,IDispatch **ppdispParent) {
    return This->lpVtbl->get_accParent(This,ppdispParent);
}
static FORCEINLINE HRESULT IAccessible_get_accChildCount(IAccessible* This,LONG *pcountChildren) {
    return This->lpVtbl->get_accChildCount(This,pcountChildren);
}
static FORCEINLINE HRESULT IAccessible_get_accChild(IAccessible* This,VARIANT varChildID,IDispatch **ppdispChild) {
    return This->lpVtbl->get_accChild(This,varChildID,ppdispChild);
}
static FORCEINLINE HRESULT IAccessible_get_accName(IAccessible* This,VARIANT varID,BSTR *pszName) {
    return This->lpVtbl->get_accName(This,varID,pszName);
}
static FORCEINLINE HRESULT IAccessible_get_accValue(IAccessible* This,VARIANT varID,BSTR *pszValue) {
    return This->lpVtbl->get_accValue(This,varID,pszValue);
}
static FORCEINLINE HRESULT IAccessible_get_accDescription(IAccessible* This,VARIANT varID,BSTR *pszDescription) {
    return This->lpVtbl->get_accDescription(This,varID,pszDescription);
}
static FORCEINLINE HRESULT IAccessible_get_accRole(IAccessible* This,VARIANT varID,VARIANT *pvarRole) {
    return This->lpVtbl->get_accRole(This,varID,pvarRole);
}
static FORCEINLINE HRESULT IAccessible_get_accState(IAccessible* This,VARIANT varID,VARIANT *pvarState) {
    return This->lpVtbl->get_accState(This,varID,pvarState);
}
static FORCEINLINE HRESULT IAccessible_get_accHelp(IAccessible* This,VARIANT varID,BSTR *pszHelp) {
    return This->lpVtbl->get_accHelp(This,varID,pszHelp);
}
static FORCEINLINE HRESULT IAccessible_get_accHelpTopic(IAccessible* This,BSTR *pszHelpFile,VARIANT varID,LONG *pidTopic) {
    return This->lpVtbl->get_accHelpTopic(This,pszHelpFile,varID,pidTopic);
}
static FORCEINLINE HRESULT IAccessible_get_accKeyboardShortcut(IAccessible* This,VARIANT varID,BSTR *pszKeyboardShortcut) {
    return This->lpVtbl->get_accKeyboardShortcut(This,varID,pszKeyboardShortcut);
}
static FORCEINLINE HRESULT IAccessible_get_accFocus(IAccessible* This,VARIANT *pvarID) {
    return This->lpVtbl->get_accFocus(This,pvarID);
}
static FORCEINLINE HRESULT IAccessible_get_accSelection(IAccessible* This,VARIANT *pvarID) {
    return This->lpVtbl->get_accSelection(This,pvarID);
}
static FORCEINLINE HRESULT IAccessible_get_accDefaultAction(IAccessible* This,VARIANT varID,BSTR *pszDefaultAction) {
    return This->lpVtbl->get_accDefaultAction(This,varID,pszDefaultAction);
}
static FORCEINLINE HRESULT IAccessible_accSelect(IAccessible* This,LONG flagsSelect,VARIANT varID) {
    return This->lpVtbl->accSelect(This,flagsSelect,varID);
}
static FORCEINLINE HRESULT IAccessible_accLocation(IAccessible* This,LONG *pxLeft,LONG *pyTop,LONG *pcxWidth,LONG *pcyHeight,VARIANT varID) {
    return This->lpVtbl->accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varID);
}
static FORCEINLINE HRESULT IAccessible_accNavigate(IAccessible* This,LONG navDir,VARIANT varStart,VARIANT *pvarEnd) {
    return This->lpVtbl->accNavigate(This,navDir,varStart,pvarEnd);
}
static FORCEINLINE HRESULT IAccessible_accHitTest(IAccessible* This,LONG xLeft,LONG yTop,VARIANT *pvarID) {
    return This->lpVtbl->accHitTest(This,xLeft,yTop,pvarID);
}
static FORCEINLINE HRESULT IAccessible_accDoDefaultAction(IAccessible* This,VARIANT varID) {
    return This->lpVtbl->accDoDefaultAction(This,varID);
}
static FORCEINLINE HRESULT IAccessible_put_accName(IAccessible* This,VARIANT varID,BSTR pszName) {
    return This->lpVtbl->put_accName(This,varID,pszName);
}
static FORCEINLINE HRESULT IAccessible_put_accValue(IAccessible* This,VARIANT varID,BSTR pszValue) {
    return This->lpVtbl->put_accValue(This,varID,pszValue);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IAccessible_get_accParent_Proxy(
    IAccessible* This,
    IDispatch **ppdispParent);
void __RPC_STUB IAccessible_get_accParent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accChildCount_Proxy(
    IAccessible* This,
    LONG *pcountChildren);
void __RPC_STUB IAccessible_get_accChildCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accChild_Proxy(
    IAccessible* This,
    VARIANT varChildID,
    IDispatch **ppdispChild);
void __RPC_STUB IAccessible_get_accChild_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accName_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszName);
void __RPC_STUB IAccessible_get_accName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accValue_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszValue);
void __RPC_STUB IAccessible_get_accValue_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accDescription_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszDescription);
void __RPC_STUB IAccessible_get_accDescription_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accRole_Proxy(
    IAccessible* This,
    VARIANT varID,
    VARIANT *pvarRole);
void __RPC_STUB IAccessible_get_accRole_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accState_Proxy(
    IAccessible* This,
    VARIANT varID,
    VARIANT *pvarState);
void __RPC_STUB IAccessible_get_accState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accHelp_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszHelp);
void __RPC_STUB IAccessible_get_accHelp_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accHelpTopic_Proxy(
    IAccessible* This,
    BSTR *pszHelpFile,
    VARIANT varID,
    LONG *pidTopic);
void __RPC_STUB IAccessible_get_accHelpTopic_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accKeyboardShortcut_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszKeyboardShortcut);
void __RPC_STUB IAccessible_get_accKeyboardShortcut_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accFocus_Proxy(
    IAccessible* This,
    VARIANT *pvarID);
void __RPC_STUB IAccessible_get_accFocus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accSelection_Proxy(
    IAccessible* This,
    VARIANT *pvarID);
void __RPC_STUB IAccessible_get_accSelection_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_get_accDefaultAction_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR *pszDefaultAction);
void __RPC_STUB IAccessible_get_accDefaultAction_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_accSelect_Proxy(
    IAccessible* This,
    LONG flagsSelect,
    VARIANT varID);
void __RPC_STUB IAccessible_accSelect_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_accLocation_Proxy(
    IAccessible* This,
    LONG *pxLeft,
    LONG *pyTop,
    LONG *pcxWidth,
    LONG *pcyHeight,
    VARIANT varID);
void __RPC_STUB IAccessible_accLocation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_accNavigate_Proxy(
    IAccessible* This,
    LONG navDir,
    VARIANT varStart,
    VARIANT *pvarEnd);
void __RPC_STUB IAccessible_accNavigate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_accHitTest_Proxy(
    IAccessible* This,
    LONG xLeft,
    LONG yTop,
    VARIANT *pvarID);
void __RPC_STUB IAccessible_accHitTest_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_accDoDefaultAction_Proxy(
    IAccessible* This,
    VARIANT varID);
void __RPC_STUB IAccessible_accDoDefaultAction_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_put_accName_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR pszName);
void __RPC_STUB IAccessible_put_accName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccessible_put_accValue_Proxy(
    IAccessible* This,
    VARIANT varID,
    BSTR pszValue);
void __RPC_STUB IAccessible_put_accValue_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAccessible_INTERFACE_DEFINED__ */

DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(CLSID_AccPropServices, 0xb5f8350b, 0x0548, 0x48b1, 0xa6, 0xee, 0x88, 0xbd, 0x00, 0xb4, 0xa5, 0xe7);
DEFINE_GUID(IIS_IsOleaccProxy, 0x902697fa, 0x80e4, 0x4560, 0x80, 0x2a, 0xa1, 0x3f, 0x22, 0xa6, 0x47, 0x09);
LRESULT WINAPI LresultFromObject(REFIID,WPARAM,LPUNKNOWN);
HRESULT WINAPI ObjectFromLresult(LRESULT,REFIID,WPARAM,void **);
HRESULT WINAPI WindowFromAccessibleObject(IAccessible *,HWND *);
HRESULT WINAPI AccessibleObjectFromWindow(HWND,DWORD,REFIID,void **);
HRESULT WINAPI AccessibleObjectFromEvent(HWND,DWORD,DWORD,IAccessible **,VARIANT *);
HRESULT WINAPI AccessibleObjectFromPoint(POINT,IAccessible **,VARIANT *);
HRESULT WINAPI AccessibleChildren(IAccessible *,LONG,LONG,VARIANT *,LONG *);
void WINAPI GetOleaccVersionInfo(DWORD *,DWORD *);
HRESULT WINAPI CreateStdAccessibleObject(HWND,LONG,REFIID,void **);
HRESULT WINAPI CreateStdAccessibleProxyA(HWND,LPCSTR,LONG,REFIID,void **);
HRESULT WINAPI CreateStdAccessibleProxyW(HWND,LPCWSTR,LONG,REFIID,void **);
#define CreateStdAccessibleProxy WINELIB_NAME_AW(CreateStdAccessibleProxy)
UINT WINAPI GetRoleTextA(DWORD,LPSTR,UINT);
UINT WINAPI GetRoleTextW(DWORD,LPWSTR,UINT);
#define GetRoleText WINELIB_NAME_AW(GetRoleText)
UINT WINAPI GetStateTextA(DWORD,LPSTR,UINT);
UINT WINAPI GetStateTextW(DWORD,LPWSTR,UINT);
#define GetStateText WINELIB_NAME_AW(GetStateText)
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __oleacc_h__ */
