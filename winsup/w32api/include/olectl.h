#ifndef _OLECTL_H
#define _OLECTL_H
#ifdef __cplusplus
extern "C" {
#endif

#include <olectlid.h>

#define STD_CTL_SCODE(n) MAKE_SCODE(SEVERITY_ERROR,FACILITY_CONTROL,n)
#define CTL_E_ILLEGALFUNCTIONCALL STD_CTL_SCODE(5)
#define CTL_E_OVERFLOW STD_CTL_SCODE(6)
#define CTL_E_OUTOFMEMORY STD_CTL_SCODE(7)
#define CTL_E_DIVISIONBYZERO STD_CTL_SCODE(11)
#define CTL_E_OUTOFSTRINGSPACE STD_CTL_SCODE(14)
#define CTL_E_OUTOFSTACKSPACE STD_CTL_SCODE(28)
#define CTL_E_BADFILENAMEORNUMBER STD_CTL_SCODE(52)
#define CTL_E_FILENOTFOUND STD_CTL_SCODE(53)
#define CTL_E_BADFILEMODE STD_CTL_SCODE(54)
#define CTL_E_FILEALREADYOPEN STD_CTL_SCODE(55)
#define CTL_E_DEVICEIOERROR STD_CTL_SCODE(57)
#define CTL_E_FILEALREADYEXISTS STD_CTL_SCODE(58)
#define CTL_E_BADRECORDLENGTH STD_CTL_SCODE(59)
#define CTL_E_DISKFULL STD_CTL_SCODE(61)
#define CTL_E_BADRECORDNUMBER STD_CTL_SCODE(63)
#define CTL_E_BADFILENAME STD_CTL_SCODE(64)
#define CTL_E_TOOMANYFILES STD_CTL_SCODE(67)
#define CTL_E_DEVICEUNAVAILABLE STD_CTL_SCODE(68)
#define CTL_E_PERMISSIONDENIED STD_CTL_SCODE(70)
#define CTL_E_DISKNOTREADY STD_CTL_SCODE(71)
#define CTL_E_PATHFILEACCESSERROR STD_CTL_SCODE(75)
#define CTL_E_PATHNOTFOUND STD_CTL_SCODE(76)
#define CTL_E_INVALIDPATTERNSTRING STD_CTL_SCODE(93)
#define CTL_E_INVALIDUSEOFNULL STD_CTL_SCODE(94)
#define CTL_E_INVALIDFILEFORMAT STD_CTL_SCODE(321)
#define CTL_E_INVALIDPROPERTYVALUE STD_CTL_SCODE(380)
#define CTL_E_INVALIDPROPERTYARRAYINDEX STD_CTL_SCODE(381)
#define CTL_E_SETNOTSUPPORTEDATRUNTIME STD_CTL_SCODE(382)
#define CTL_E_SETNOTSUPPORTED STD_CTL_SCODE(383)
#define CTL_E_NEEDPROPERTYARRAYINDEX STD_CTL_SCODE(385)
#define CTL_E_SETNOTPERMITTED STD_CTL_SCODE(387)
#define CTL_E_GETNOTSUPPORTEDATRUNTIME STD_CTL_SCODE(393)
#define CTL_E_GETNOTSUPPORTED STD_CTL_SCODE(394)
#define CTL_E_PROPERTYNOTFOUND STD_CTL_SCODE(422)
#define CTL_E_INVALIDCLIPBOARDFORMAT STD_CTL_SCODE(460)
#define CTL_E_INVALIDPICTURE STD_CTL_SCODE(481)
#define CTL_E_PRINTERERROR STD_CTL_SCODE(482)
#define CTL_E_CANTSAVEFILETOTEMP STD_CTL_SCODE(735)
#define CTL_E_SEARCHTEXTNOTFOUND STD_CTL_SCODE(744)
#define CTL_E_REPLACEMENTSTOOLONG STD_CTL_SCODE(746)
#define CUSTOM_CTL_SCODE(n) MAKE_SCODE(SEVERITY_ERROR,FACILITY_CONTROL,n)
#define CTL_E_CUSTOM_FIRST CUSTOM_CTL_SCODE(600)
#define CLASS_E_NOTLICENSED (CLASSFACTORY_E_FIRST+2)
#define CONNECT_E_FIRST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x200)
#define CONNECT_E_LAST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x20F)
#define CONNECT_S_FIRST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x200)
#define CONNECT_S_LAST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x20F)
#define CONNECT_E_NOCONNECTION (CONNECT_E_FIRST+0)
#define CONNECT_E_ADVISELIMIT (CONNECT_E_FIRST+1)
#define CONNECT_E_CANNOTCONNECT (CONNECT_E_FIRST+2)
#define CONNECT_E_OVERRIDDEN (CONNECT_E_FIRST+3)
#define SELFREG_E_FIRST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x200)
#define SELFREG_E_LAST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x20F)
#define SELFREG_S_FIRST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x200)
#define SELFREG_S_LAST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x20F)
#define SELFREG_E_TYPELIB (SELFREG_E_FIRST+0)
#define SELFREG_E_CLASS (SELFREG_E_FIRST+1)
#define PERPROP_E_FIRST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x200)
#define PERPROP_E_LAST MAKE_SCODE(SEVERITY_ERROR,FACILITY_ITF,0x20F)
#define PERPROP_S_FIRST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x200)
#define PERPROP_S_LAST MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x20F)
#define PERPROP_E_NOPAGEAVAILABLE PERPROP_E_FIRST
#define OLEMISC_RECOMPOSEONRESIZE 0x1
#define OLEMISC_ONLYICONIC 0x2
#define OLEMISC_INSERTNOTREPLACE 0x4
#define OLEMISC_STATIC 0x8
#define OLEMISC_CANTLINKINSIDE 0x10
#define OLEMISC_CANLINKBYOLE1 0x20
#define OLEMISC_ISLINKOBJECT 0x40
#define OLEMISC_INSIDEOUT 0x80
#define OLEMISC_ACTIVATEWHENVISIBLE 0x100
#define OLEMISC_RENDERINGISDEVICEINDEPENDENT 0x200
#define OLEMISC_INVISIBLEATRUNTIME 0x400
#define OLEMISC_ALWAYSRUN 0x800
#define OLEMISC_ACTSLIKEBUTTON 0x1000
#define OLEMISC_ACTSLIKELABEL 0x2000
#define OLEMISC_NOUIACTIVATE 0x4000
#define OLEMISC_ALIGNABLE 0x8000
#define OLEMISC_SIMPLEFRAME 0x10000
#define OLEMISC_SETCLIENTSITEFIRST 0x20000
#define OLEMISC_IMEMODE 0x40000
#define OLEMISC_IGNOREACTIVATEWHENVISIBLE 0x80000
#define OLEMISC_WANTSTOMENUMERGE 0x100000
#define OLEMISC_SUPPORTSMULTILEVELUNDO 0x200000
#define OLEIVERB_PROPERTIES (-7)
#define VT_STREAMED_PROPSET 73
#define VT_STORED_PROPSET 74
#define VT_BLOB_PROPSET 75
#define VT_VERBOSE_ENUM	76
#define VT_COLOR VT_I4
#define VT_XPOS_PIXELS VT_I4
#define VT_YPOS_PIXELS VT_I4
#define VT_XSIZE_PIXELS VT_I4
#define VT_YSIZE_PIXELS VT_I4
#define VT_XPOS_HIMETRIC VT_I4
#define VT_YPOS_HIMETRIC VT_I4
#define VT_XSIZE_HIMETRIC VT_I4
#define VT_YSIZE_HIMETRIC VT_I4
#define VT_TRISTATE VT_I2
#define VT_OPTEXCLUSIVE VT_BOOL
#define VT_FONT VT_DISPATCH
#define VT_PICTURE VT_DISPATCH
#define VT_HANDLE VT_I4
#define OCM__BASE (WM_USER+0x1c00)
#define OCM_COMMAND (OCM__BASE+WM_COMMAND)
#define OCM_CTLCOLORBTN (OCM__BASE+WM_CTLCOLORBTN)
#define OCM_CTLCOLOREDIT (OCM__BASE+WM_CTLCOLOREDIT)
#define OCM_CTLCOLORDLG (OCM__BASE+WM_CTLCOLORDLG)
#define OCM_CTLCOLORLISTBOX (OCM__BASE+WM_CTLCOLORLISTBOX)
#define OCM_CTLCOLORMSGBOX (OCM__BASE+WM_CTLCOLORMSGBOX)
#define OCM_CTLCOLORSCROLLBAR (OCM__BASE+WM_CTLCOLORSCROLLBAR)
#define OCM_CTLCOLORSTATIC (OCM__BASE+WM_CTLCOLORSTATIC)
#define OCM_DRAWITEM (OCM__BASE+WM_DRAWITEM)
#define OCM_MEASUREITEM (OCM__BASE+WM_MEASUREITEM)
#define OCM_DELETEITEM (OCM__BASE+WM_DELETEITEM)
#define OCM_VKEYTOITEM (OCM__BASE+WM_VKEYTOITEM)
#define OCM_CHARTOITEM (OCM__BASE+WM_CHARTOITEM)
#define OCM_COMPAREITEM (OCM__BASE+WM_COMPAREITEM)
#define OCM_HSCROLL (OCM__BASE+WM_HSCROLL)
#define OCM_VSCROLL (OCM__BASE+WM_VSCROLL)
#define OCM_PARENTNOTIFY (OCM__BASE+WM_PARENTNOTIFY)
#define OCM_NOTIFY (OCM__BASE+WM_NOTIFY)
#define CTRLINFO_EATS_RETURN 1 
#define CTRLINFO_EATS_ESCAPE 2 
#define XFORMCOORDS_POSITION 1
#define XFORMCOORDS_SIZE 2
#define XFORMCOORDS_HIMETRICTOCONTAINER 4
#define XFORMCOORDS_CONTAINERTOHIMETRIC 8
#define GUIDKIND_DEFAULT_SOURCE_DISP_IID 1
#define PROPPAGESTATUS_DIRTY 1
#define PROPPAGESTATUS_VALIDATE 2
#define FONTSIZE(n) {n##0000,0}
#define PICTURE_SCALABLE 1
#define PICTURE_TRANSPARENT 2
#define PICTYPE_UNINITIALIZED (-1)
#define PICTYPE_NONE	0
#define PICTYPE_BITMAP	1
#define PICTYPE_METAFILE	2
#define PICTYPE_ICON	3
#define PICTYPE_ENHMETAFILE	4
#define DISPID_AUTOSIZE (-500)
#define DISPID_BACKCOLOR (-501)
#define DISPID_BACKSTYLE (-502)
#define DISPID_BORDERCOLOR (-503)
#define DISPID_BORDERSTYLE (-504)
#define DISPID_BORDERWIDTH (-505)
#define DISPID_DRAWMODE (-507)
#define DISPID_DRAWSTYLE (-508)
#define DISPID_DRAWWIDTH (-509)
#define DISPID_FILLCOLOR (-510)
#define DISPID_FILLSTYLE (-511)
#define DISPID_FONT (-512)
#define DISPID_FORECOLOR (-513)
#define DISPID_ENABLED (-514)
#define DISPID_HWND (-515)
#define DISPID_TABSTOP (-516)
#define DISPID_TEXT (-517)
#define DISPID_CAPTION (-518)
#define DISPID_BORDERVISIBLE (-519)
#define DISPID_APPEARANCE	(-520)
#define DISPID_REFRESH (-550)
#define DISPID_DOCLICK (-551)
#define DISPID_ABOUTBOX (-552)
#define DISPID_CLICK (-600)
#define DISPID_DBLCLICK (-601)
#define DISPID_KEYDOWN (-602)
#define DISPID_KEYPRESS (-603)
#define DISPID_KEYUP (-604)
#define DISPID_MOUSEDOWN (-605)
#define DISPID_MOUSEMOVE (-606)
#define DISPID_MOUSEUP (-607)
#define DISPID_ERROREVENT (-608)
#define DISPID_AMBIENT_BACKCOLOR (-701)
#define DISPID_AMBIENT_DISPLAYNAME (-702)
#define DISPID_AMBIENT_FONT (-703)
#define DISPID_AMBIENT_FORECOLOR (-704)
#define DISPID_AMBIENT_LOCALEID (-705)
#define DISPID_AMBIENT_MESSAGEREFLECT (-706)
#define DISPID_AMBIENT_SCALEUNITS (-707)
#define DISPID_AMBIENT_TEXTALIGN (-708)
#define DISPID_AMBIENT_USERMODE (-709)
#define DISPID_AMBIENT_UIDEAD (-710)
#define DISPID_AMBIENT_SHOWGRABHANDLES (-711)
#define DISPID_AMBIENT_SHOWHATCHING (-712)
#define DISPID_AMBIENT_DISPLAYASDEFAULT (-713)
#define DISPID_AMBIENT_SUPPORTSMNEMONICS (-714)
#define DISPID_AMBIENT_AUTOCLIP (-715)
#define DISPID_AMBIENT_APPEARANCE	(-716)
#define DISPID_FONT_NAME 0
#define DISPID_FONT_SIZE 2
#define DISPID_FONT_BOLD 3
#define DISPID_FONT_ITALIC 4
#define DISPID_FONT_UNDER 5
#define DISPID_FONT_STRIKE 6
#define DISPID_FONT_WEIGHT 7
#define DISPID_FONT_CHARSET 8
#define DISPID_PICT_HANDLE 0
#define DISPID_PICT_HPAL 2
#define DISPID_PICT_TYPE 3
#define DISPID_PICT_WIDTH 4
#define DISPID_PICT_HEIGHT 5
#define DISPID_PICT_RENDER 6

#pragma pack(push,8)
#ifndef OLE2ANSI
typedef TEXTMETRICW TEXTMETRICOLE;
#else
typedef TEXTMETRIC TEXTMETRICOLE;
#endif
typedef TEXTMETRICOLE *LPTEXTMETRICOLE;
typedef interface IOleControl *LPOLECONTROL;
typedef interface IOleControlSite *LPOLECONTROLSITE;
typedef interface ISimpleFrameSite *LPSIMPLEFRAMESITE;
typedef interface IErrorLog *LPERRORLOG;
typedef interface IPropertyBag *LPPROPERTYBAG;
typedef interface IPersistPropertyBag *LPPERSISTPROPERTYBAG;
typedef interface IPersistStreamInit *LPPERSISTSTREAMINIT;
typedef interface IPersistMemory *LPPERSISTMEMORY;
typedef interface IPropertyNotifySink* LPPROPERTYNOTIFYSINK;
typedef interface IProvideClassInfo *LPPROVIDECLASSINFO;
typedef interface IProvideClassInfo2 *LPPROVIDECLASSINFO2;
typedef interface IConnectionPointContainer *LPCONNECTIONPOINTCONTAINER;
typedef interface IEnumConnectionPoints *LPENUMCONNECTIONPOINTS;
typedef interface IConnectionPoint *LPCONNECTIONPOINT;
typedef interface IEnumConnections *LPENUMCONNECTIONS;
typedef interface IClassFactory2 *LPCLASSFACTORY2;
typedef interface ISpecifyPropertyPages *LPSPECIFYPROPERTYPAGES;
typedef interface IPerPropertyBrowsing *LPPERPROPERTYBROWSING;
typedef interface IPropertyPageSite *LPPROPERTYPAGESITE;
typedef interface IPropertyPage *LPPROPERTYPAGE;
typedef interface IPropertyPage2 *LPPROPERTYPAGE2;
typedef interface IFont *LPFONT;
typedef interface IFontDisp *LPFONTDISP;
typedef interface IPicture *LPPICTURE;
typedef interface IPictureDisp *LPPICTUREDISP;
typedef DWORD OLE_COLOR;
typedef long OLE_XPOS_PIXELS;
typedef long OLE_YPOS_PIXELS;
typedef long OLE_XSIZE_PIXELS;
typedef long OLE_YSIZE_PIXELS;
typedef long OLE_XPOS_HIMETRIC;
typedef long OLE_YPOS_HIMETRIC;
typedef long OLE_XSIZE_HIMETRIC;
typedef long OLE_YSIZE_HIMETRIC;
typedef float OLE_XPOS_CONTAINER;
typedef float OLE_YPOS_CONTAINER;
typedef float OLE_XSIZE_CONTAINER;
typedef float OLE_YSIZE_CONTAINER;
typedef VARIANT_BOOL OLE_OPTEXCLUSIVE;
typedef VARIANT_BOOL OLE_CANCELBOOL;
typedef VARIANT_BOOL OLE_ENABLEDEFAULTBOOL;
typedef UINT OLE_HANDLE;
typedef enum { triUnchecked,triChecked1,triGray } OLE_TRISTATE;
typedef struct tagPOINTF {
	float x;
	float y;
} POINTF,*LPPOINTF;
typedef struct tagCONTROLINFO {
	ULONG cb;
	HACCEL hAccel;
	USHORT cAccel;
	DWORD dwFlags;
} CONTROLINFO,*LPCONTROLINFO;
typedef struct tagCONNECTDATA {
	LPUNKNOWN pUnk;
	DWORD dwCookie;
} CONNECTDATA,*LPCONNECTDATA;
typedef struct tagLICINFO {
	long cbLicInfo;
	BOOL fRuntimeKeyAvail;
	BOOL fLicVerified;
} LICINFO,*LPLICINFO;
typedef struct tagCAUUID {
	ULONG cElems;
	GUID *pElems;
} CAUUID,*LPCAUUID;
typedef struct tagCALPOLESTR {
	ULONG cElems;
	LPOLESTR *pElems;
} CALPOLESTR,*LPCALPOLESTR;
typedef struct tagCADWORD {
	ULONG cElems;
	DWORD *pElems;
} CADWORD,*LPCADWORD;
typedef struct tagOCPFIPARAMS {
	ULONG cbStructSize;
	HWND hWndOwner;
	int x;
	int y;
	LPCOLESTR lpszCaption;
	ULONG cObjects;
	LPUNKNOWN *lplpUnk;
	ULONG cPages;
	CLSID *lpPages;
	LCID lcid;
	DISPID dispidInitialProperty;
} OCPFIPARAMS,*LPOCPFIPARAMS;
typedef struct tagPROPPAGEINFO {
	size_t cb;
	LPOLESTR pszTitle;
	SIZE size;
	LPOLESTR pszDocString;
	LPOLESTR pszHelpFile;
	DWORD dwHelpContext;
} PROPPAGEINFO,*LPPROPPAGEINFO;
typedef struct tagFONTDESC {
	UINT cbSizeofstruct;
	LPOLESTR lpstrName;
	CY cySize;
	SHORT sWeight;
	SHORT sCharset;
	BOOL fItalic;
	BOOL fUnderline;
	BOOL fStrikethrough;
} FONTDESC,*LPFONTDESC;
typedef struct tagPICTDESC {
	UINT cbSizeofstruct;
	UINT picType;
	union {
		struct {
			HBITMAP hbitmap;
			HPALETTE hpal;
		} bmp;
		struct {
			HMETAFILE hmeta;
			int xExt;
			int yExt;
		} wmf;
		struct {
			HICON hicon;
		} icon;
		struct {
			HENHMETAFILE hemf;
		} emf;
	} DUMMYUNIONNAME;
} PICTDESC,*LPPICTDESC;

EXTERN_C const IID IID_IOleControl;
#undef INTERFACE
#define INTERFACE IOleControl
DECLARE_INTERFACE_(IOleControl,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetControlInfo)(THIS_ LPCONTROLINFO) PURE;
	STDMETHOD(OnMnemonic)(THIS_ LPMSG) PURE;
	STDMETHOD(OnAmbientPropertyChange)(THIS_ DISPID) PURE;
	STDMETHOD(FreezeEvents)(THIS_ BOOL) PURE;
};
EXTERN_C const IID IID_IOleControlSite;
#undef INTERFACE
#define INTERFACE IOleControlSite
DECLARE_INTERFACE_(IOleControlSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnControlInfoChanged)(THIS) PURE;
	STDMETHOD(LockInPlaceActive)(THIS_ BOOL) PURE;
	STDMETHOD(GetExtendedControl)(THIS_ LPDISPATCH*) PURE;
	STDMETHOD(TransformCoords)(THIS_ POINTL*,POINTF*,DWORD) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG,DWORD) PURE;
	STDMETHOD(OnFocus)(THIS_ BOOL) PURE;
	STDMETHOD(ShowPropertyFrame)(THIS) PURE;
};
EXTERN_C const IID IID_ISimpleFrameSite;
#undef INTERFACE
#define INTERFACE ISimpleFrameSite
DECLARE_INTERFACE_(ISimpleFrameSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(PreMessageFilter)(THIS_ HWND,UINT,WPARAM,LPARAM,LRESULT*,PDWORD) PURE;
	STDMETHOD(PostMessageFilter)(THIS_ HWND,UINT,WPARAM,LPARAM,LRESULT*,DWORD) PURE;
};
EXTERN_C const IID IID_IErrorLog;
#undef INTERFACE
#define INTERFACE IErrorLog
DECLARE_INTERFACE_(IErrorLog,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(AddError)(THIS_ LPCOLESTR,LPEXCEPINFO) PURE;
};
EXTERN_C const IID IID_IPropertyBag;
#undef INTERFACE
#define INTERFACE IPropertyBag
DECLARE_INTERFACE_(IPropertyBag,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Read)(THIS_ LPCOLESTR,LPVARIANT,LPERRORLOG) PURE;
	STDMETHOD(Write)(THIS_ LPCOLESTR,LPVARIANT) PURE;
};
EXTERN_C const IID IID_IPersistPropertyBag;
#undef INTERFACE
#define INTERFACE IPersistPropertyBag
DECLARE_INTERFACE_(IPersistPropertyBag,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
	STDMETHOD(Load)(THIS_ LPPROPERTYBAG,LPERRORLOG) PURE;
	STDMETHOD(Save)(THIS_ LPPROPERTYBAG,BOOL,BOOL) PURE;
};
EXTERN_C const IID IID_IPersistStreamInit;
#undef INTERFACE
#define INTERFACE IPersistStreamInit
DECLARE_INTERFACE_(IPersistStreamInit,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(IsDirty)(THIS) PURE;
	STDMETHOD(Load)(THIS_ LPSTREAM) PURE;
	STDMETHOD(Save)(THIS_ LPSTREAM,BOOL) PURE;
	STDMETHOD(GetSizeMax)(THIS_ PULARGE_INTEGER) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
};
EXTERN_C const IID IID_IPersistMemory;
#undef INTERFACE
#define INTERFACE IPersistMemory
DECLARE_INTERFACE_(IPersistMemory,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(IsDirty)(THIS) PURE;
	STDMETHOD(Load)(THIS_ PVOID,ULONG) PURE;
	STDMETHOD(Save)(THIS_ PVOID,BOOL,ULONG) PURE;
	STDMETHOD(GetSizeMax)(THIS_ PULONG) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
};
EXTERN_C const IID IID_IPropertyNotifySink;
#undef INTERFACE
#define INTERFACE IPropertyNotifySink
DECLARE_INTERFACE_(IPropertyNotifySink,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnChanged)(THIS_ DISPID) PURE;
	STDMETHOD(OnRequestEdit)(THIS_ DISPID) PURE;
};
EXTERN_C const IID IID_IProvideClassInfo;
#undef INTERFACE
#define INTERFACE IProvideClassInfo
DECLARE_INTERFACE_(IProvideClassInfo,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassInfo)(THIS_ LPTYPEINFO*) PURE;
};
EXTERN_C const IID IID_IProvideClassInfo2;
#undef INTERFACE
#define INTERFACE IProvideClassInfo2
DECLARE_INTERFACE_(IProvideClassInfo2,IProvideClassInfo)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassInfo)(THIS_ LPTYPEINFO*) PURE;
	STDMETHOD(GetGUID)(THIS_ DWORD,GUID*) PURE;
};
EXTERN_C const IID IID_IConnectionPointContainer;
#undef INTERFACE
#define INTERFACE IConnectionPointContainer
DECLARE_INTERFACE_(IConnectionPointContainer,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(EnumConnectionPoints)(THIS_ LPENUMCONNECTIONPOINTS*) PURE;
	STDMETHOD(FindConnectionPoint)(THIS_ REFIID,LPCONNECTIONPOINT*) PURE;
};
EXTERN_C const IID IID_IEnumConnectionPoints;
#undef INTERFACE
#define INTERFACE IEnumConnectionPoints
DECLARE_INTERFACE_(IEnumConnectionPoints,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Next)(THIS_ ULONG,LPCONNECTIONPOINT*,ULONG*) PURE;
	STDMETHOD(Skip)(THIS_ ULONG) PURE;
	STDMETHOD(Reset)(THIS) PURE;
	STDMETHOD(Clone)(THIS_ LPENUMCONNECTIONPOINTS*) PURE;
};
EXTERN_C const IID IID_IConnectionPoint;
#undef INTERFACE
#define INTERFACE IConnectionPoint
DECLARE_INTERFACE_(IConnectionPoint,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetConnectionInterface)(THIS_ IID*) PURE;
	STDMETHOD(GetConnectionPointContainer)(THIS_ IConnectionPointContainer**) PURE;
	STDMETHOD(Advise)(THIS_ LPUNKNOWN,PDWORD) PURE;
	STDMETHOD(Unadvise)(THIS_ DWORD) PURE;
	STDMETHOD(EnumConnections)(THIS_ LPENUMCONNECTIONS*) PURE;
};
EXTERN_C const IID IID_IEnumConnections;
#undef INTERFACE
#define INTERFACE IEnumConnections
DECLARE_INTERFACE_(IEnumConnections,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Next)(THIS_ ULONG,LPCONNECTDATA,PULONG) PURE;
	STDMETHOD(Skip)(THIS_ ULONG) PURE;
	STDMETHOD(Reset)(THIS) PURE;
	STDMETHOD(Clone)(THIS_ LPENUMCONNECTIONS*) PURE;
};
EXTERN_C const IID IID_IClassFactory2;
#undef INTERFACE
#define INTERFACE IClassFactory2
DECLARE_INTERFACE_(IClassFactory2,IClassFactory)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(CreateInstance)(THIS_ LPUNKNOWN,REFIID,PVOID*) PURE;
	STDMETHOD(LockServer)(THIS_ BOOL) PURE;
	STDMETHOD(GetLicInfo)(THIS_ LPLICINFO) PURE;
	STDMETHOD(RequestLicKey)(THIS_ DWORD,BSTR*) PURE;
	STDMETHOD(CreateInstanceLic)(THIS_ LPUNKNOWN,LPUNKNOWN,REFIID,BSTR,PVOID*) PURE;
};
EXTERN_C const IID IID_ISpecifyPropertyPages;
#undef INTERFACE
#define INTERFACE ISpecifyPropertyPages
DECLARE_INTERFACE_(ISpecifyPropertyPages,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetPages)(THIS_ CAUUID*) PURE;
};
EXTERN_C const IID IID_IPerPropertyBrowsing;
#undef INTERFACE
#define INTERFACE IPerPropertyBrowsing
DECLARE_INTERFACE_(IPerPropertyBrowsing,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetDisplayString)(THIS_ DISPID,BSTR*) PURE;
	STDMETHOD(MapPropertyToPage)(THIS_ DISPID,LPCLSID) PURE;
	STDMETHOD(GetPredefinedStrings)(THIS_ DISPID,CALPOLESTR*,CADWORD*) PURE;
	STDMETHOD(GetPredefinedValue)(THIS_ DISPID,DWORD,VARIANT*) PURE;
};
EXTERN_C const IID IID_IPropertyPageSite;
#undef INTERFACE
#define INTERFACE IPropertyPageSite
DECLARE_INTERFACE_(IPropertyPageSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnStatusChange)(THIS_ DWORD) PURE;
	STDMETHOD(GetLocaleID)(THIS_ LCID*) PURE;
	STDMETHOD(GetPageContainer)(THIS_ LPUNKNOWN*) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
};
EXTERN_C const IID IID_IPropertyPage;
#undef INTERFACE
#define INTERFACE IPropertyPage
DECLARE_INTERFACE_(IPropertyPage,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetPageSite)(THIS_ LPPROPERTYPAGESITE) PURE;
	STDMETHOD(Activate)(THIS_ HWND,LPCRECT,BOOL) PURE;
	STDMETHOD(Deactivate)(THIS) PURE;
	STDMETHOD(GetPageInfo)(THIS_ LPPROPPAGEINFO) PURE;
	STDMETHOD(SetObjects)(THIS_ ULONG,LPUNKNOWN*) PURE;
	STDMETHOD(Show)(THIS_ UINT) PURE;
	STDMETHOD(Move)(THIS_ LPCRECT) PURE;
	STDMETHOD(IsPageDirty)(THIS) PURE;
	STDMETHOD(Apply)(THIS) PURE;
	STDMETHOD(Help)(THIS_ LPCOLESTR) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
};
EXTERN_C const IID IID_IPropertyPage2;
#undef INTERFACE
#define INTERFACE IPropertyPage2
DECLARE_INTERFACE_(IPropertyPage2,IPropertyPage)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetPageSite)(THIS_ LPPROPERTYPAGESITE) PURE;
	STDMETHOD(Activate)(THIS_ HWND,LPCRECT,BOOL) PURE;
	STDMETHOD(Deactivate)(THIS) PURE;
	STDMETHOD(GetPageInfo)(THIS_ LPPROPPAGEINFO) PURE;
	STDMETHOD(SetObjects)(THIS_ ULONG,LPUNKNOWN*) PURE;
	STDMETHOD(Show)(THIS_ UINT) PURE;
	STDMETHOD(Move)(THIS_ LPCRECT) PURE;
	STDMETHOD(IsPageDirty)(THIS) PURE;
	STDMETHOD(Apply)(THIS) PURE;
	STDMETHOD(Help)(THIS_ LPCOLESTR) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
	STDMETHOD(EditProperty)(THIS_ DISPID) PURE;
};
EXTERN_C const IID IID_IFont;
#undef INTERFACE
#define INTERFACE IFont
DECLARE_INTERFACE_(IFont,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(get_Name)(THIS_ BSTR*) PURE;
	STDMETHOD(put_Name)(THIS_ BSTR) PURE;
	STDMETHOD(get_Size)(THIS_ CY*) PURE;
	STDMETHOD(put_Size)(THIS_ CY) PURE;
	STDMETHOD(get_Bold)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Bold)(THIS_ BOOL) PURE;
	STDMETHOD(get_Italic)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Italic)(THIS_ BOOL) PURE;
	STDMETHOD(get_Underline)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Underline)(THIS_ BOOL) PURE;
	STDMETHOD(get_Strikethrough)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Strikethrough)(THIS_ BOOL) PURE;
	STDMETHOD(get_Weight)(THIS_ short*) PURE;
	STDMETHOD(put_Weight)(THIS_ short) PURE;
	STDMETHOD(get_Charset)(THIS_ short*) PURE;
	STDMETHOD(put_Charset)(THIS_ short) PURE;
	STDMETHOD(get_hFont)(THIS_ HFONT*) PURE;
	STDMETHOD(Clone)(THIS_ IFont**) PURE;
	STDMETHOD(IsEqual)(THIS_ IFont*) PURE;
	STDMETHOD(SetRatio)(THIS_ long,long) PURE;
	STDMETHOD(QueryTextMetrics)(THIS_ LPTEXTMETRICOLE) PURE;
	STDMETHOD(AddRefHfont)(THIS_ HFONT) PURE;
	STDMETHOD(ReleaseHfont)(THIS_ HFONT) PURE;
	STDMETHOD(SetHdc)(THIS_ HDC) PURE;
};
EXTERN_C const IID IID_IFontDisp;
#undef INTERFACE
#define INTERFACE IFontDisp
DECLARE_INTERFACE_(IFontDisp,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
};
EXTERN_C const IID IID_IPicture;
#undef INTERFACE
#define INTERFACE IPicture
DECLARE_INTERFACE_(IPicture,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(get_Handle)(THIS_ OLE_HANDLE*) PURE;
	STDMETHOD(get_hPal)(THIS_ OLE_HANDLE*) PURE;
	STDMETHOD(get_Type)(THIS_ short*) PURE;
	STDMETHOD(get_Width)(THIS_ OLE_XSIZE_HIMETRIC*) PURE;
	STDMETHOD(get_Height)(THIS_ OLE_YSIZE_HIMETRIC*) PURE;
	STDMETHOD(Render)(THIS_ HDC,long,long,long,long,OLE_XPOS_HIMETRIC,OLE_YPOS_HIMETRIC,OLE_XSIZE_HIMETRIC,OLE_YSIZE_HIMETRIC,LPCRECT) PURE;
	STDMETHOD(set_hPal)(THIS_ OLE_HANDLE) PURE;
	STDMETHOD(get_CurDC)(THIS_ HDC*) PURE;
	STDMETHOD(SelectPicture)(THIS_ HDC,HDC*,OLE_HANDLE*) PURE;
	STDMETHOD(get_KeepOriginalFormat)(THIS_ BOOL*) PURE;
	STDMETHOD(put_KeepOriginalFormat)(THIS_ BOOL) PURE;
	STDMETHOD(PictureChanged)(THIS) PURE;
	STDMETHOD(SaveAsFile)(THIS_ LPSTREAM,BOOL,LONG*) PURE;
	STDMETHOD(get_Attributes)(THIS_ PDWORD) PURE;
};
EXTERN_C const IID IID_IPictureDisp;
#undef INTERFACE
#define INTERFACE IPictureDisp
DECLARE_INTERFACE_(IPictureDisp,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
};
#pragma pack(pop)

STDAPI DllRegisterServer(void);
STDAPI DllUnregisterServer(void);
STDAPI OleCreateFontIndirect(LPFONTDESC,REFIID,PVOID*);
STDAPI OleCreatePictureIndirect(LPPICTDESC,REFIID,BOOL,PVOID*);
STDAPI OleCreatePropertyFrame(HWND,UINT,UINT,LPCOLESTR,ULONG,LPUNKNOWN*,ULONG,LPCLSID,LCID,DWORD,PVOID);
STDAPI OleCreatePropertyFrameIndirect(LPOCPFIPARAMS);
STDAPI_(HCURSOR) OleIconToCursor(HINSTANCE,HICON);
STDAPI OleLoadPicture(LPSTREAM,LONG,BOOL,REFIID,PVOID*);
STDAPI OleTranslateColor(OLE_COLOR,HPALETTE,COLORREF*);
#ifdef __cplusplus
}
#endif
#endif 
