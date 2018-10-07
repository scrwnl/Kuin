#pragma once

#include "..\common.h"

EXPORT_CPP void _init(void* heap, S64* heap_cnt, S64 app_code, const U8* use_res_flags);
EXPORT_CPP void _fin();
EXPORT_CPP Bool _act();
EXPORT_CPP void _setOnKeyPress(void* onKeyPressFunc);
EXPORT_CPP void* _getOnKeyPress();
EXPORT_CPP S64 _msgBox(SClass* parent, const U8* text, const U8* title, S64 icon, S64 btn);
EXPORT_CPP void* _openFileDialog(SClass* parent, const U8* filter, S64 defaultFilter);
EXPORT_CPP void* _openFileDialogMulti(SClass* parent, const U8* filter, S64 defaultFilter);
EXPORT_CPP void* _saveFileDialog(SClass* parent, const U8* filter, S64 defaultFilter, const U8* defaultExt);
EXPORT_CPP void _fileDialogDir(const U8* defaultDir);
EXPORT_CPP void _setClipboardStr(const U8* str);
EXPORT_CPP void* _getClipboardStr();
EXPORT_CPP void _getCaretPos(S64* x, S64* y);
EXPORT_CPP void _screenSize(S64* width, S64* height);
EXPORT_CPP void _target(SClass* draw_ctrl);
EXPORT_CPP Bool _key(S64 key);
EXPORT_CPP SClass* _makeWnd(SClass* me_, SClass* parent, S64 style, S64 width, S64 height, const U8* text);
EXPORT_CPP void _wndBaseDtor(SClass* me_);
EXPORT_CPP void _wndBaseGetPos(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP void _wndBaseGetPosScreen(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP void _wndBaseFocus(SClass* me_);
EXPORT_CPP Bool _wndBaseFocused(SClass* me_);
EXPORT_CPP void _wndBaseSetEnabled(SClass* me_, Bool is_enabled);
EXPORT_CPP Bool _wndBaseGetEnabled(SClass* me_);
EXPORT_CPP void _wndBaseSetPos(SClass* me_, S64 x, S64 y, S64 width, S64 height);
EXPORT_CPP void _wndBaseSetRedraw(SClass* me_, Bool is_enabled);
EXPORT_CPP void _wndBaseSetVisible(SClass* me_, Bool is_visible);
EXPORT_CPP Bool _wndBaseGetVisible(SClass* me_);
EXPORT_CPP void _wndBaseClientToScreen(SClass* me_, S64* screenX, S64* screenY, S64 clientX, S64 clientY);
EXPORT_CPP void _wndBaseScreenToClient(SClass* me_, S64* clientX, S64* clientY, S64 screenX, S64 screenY);
EXPORT_CPP void _wndMinMax(SClass* me_, S64 minWidth, S64 minHeight, S64 maxWidth, S64 maxHeight);
EXPORT_CPP void _wndClose(SClass* me_);
EXPORT_CPP void _wndExit(SClass* me_);
EXPORT_CPP void _wndSetText(SClass* me_, const U8* text);
EXPORT_CPP const U8* _wndGetText(SClass* me_);
EXPORT_CPP void _wndSetMenu(SClass* me_, SClass* menu);
EXPORT_CPP void _wndActivate(SClass* me_);
EXPORT_CPP Bool _wndActivated(SClass* me_);
EXPORT_CPP Bool _wndFocusedWnd(SClass* me_);
EXPORT_CPP void _wndSetAlpha(SClass* me_, S64 alpha);
EXPORT_CPP S64 _wndGetAlpha(SClass* me_);
EXPORT_CPP void _wndAcceptDraggedFiles(SClass* me_, Bool is_accepted);
EXPORT_CPP void _wndSetModalLock(SClass* me_);
EXPORT_CPP SClass* _makeDraw(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool equalMagnification);
EXPORT_CPP SClass* _makeDrawEditable(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, Bool equalMagnification);
EXPORT_CPP void _drawDtor(SClass* me_);
EXPORT_CPP void _drawPaint(SClass* me_);
EXPORT_CPP void _drawShowCaret(SClass* me_, S64 height, SClass* font);
EXPORT_CPP void _drawHideCaret(SClass* me_);
EXPORT_CPP void _drawMoveCaret(SClass* me_, S64 x, S64 y);
EXPORT_CPP SClass* _makeBtn(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP void _btnSetChk(SClass* me_, Bool chk);
EXPORT_CPP Bool _btnGetChk(SClass* me_);
EXPORT_CPP SClass* _makeChk(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeRadio(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeEdit(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _editReadonly(SClass* me_, Bool enabled);
EXPORT_CPP void _editSetSel(SClass* me_, S64 start, S64 len);
EXPORT_CPP SClass* _makeEditMulti(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeList(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _listClear(SClass* me_);
EXPORT_CPP void _listAdd(SClass* me_, const U8* text);
EXPORT_CPP void _listIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _listDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listLen(SClass* me_);
EXPORT_CPP void _listSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listGetSel(SClass* me_);
EXPORT_CPP void _listSetText(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void* _listGetText(SClass* me_, S64 idx);
EXPORT_CPP SClass* _makeCombo(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeComboList(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeLabel(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeGroup(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeCalendar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeProgress(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeRebar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeStatus(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeToolbar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTrackbar(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeLabelLink(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeListView(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _listViewClear(SClass* me_);
EXPORT_CPP void _listViewAdd(SClass* me_, const U8* text);
EXPORT_CPP void _listViewIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _listViewDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listViewLen(SClass* me_);
EXPORT_CPP void _listViewAddColumn(SClass* me_, const U8* text);
EXPORT_CPP void _listViewInsColumn(SClass* me_, S64 column, const U8* text);
EXPORT_CPP void _listViewDelColumn(SClass* me_, S64 column);
EXPORT_CPP S64 _listViewLenColumn(SClass* me_);
EXPORT_CPP void _listViewSetText(SClass* me_, S64 idx, S64 column, const U8* text);
EXPORT_CPP void* _listViewGetText(SClass* me_, S64 idx, S64 column);
EXPORT_CPP void _listViewAdjustWidth(SClass* me_);
EXPORT_CPP void _listViewSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listViewGetSel(SClass* me_);
EXPORT_CPP SClass* _makePager(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTab(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _tabAdd(SClass* me_, const U8* text);
EXPORT_CPP S64 _tabLen(SClass* me_);
EXPORT_CPP void _tabSetSel(SClass* me_, S64 idx);
EXPORT_CPP S64 _tabGetSel(SClass* me_);
EXPORT_CPP void _tabGetPosInner(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP SClass* _makeTree(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTreeMulti(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _treeClear(SClass* me_);
EXPORT_CPP void _treeExpand(SClass* me_, Bool expand);
EXPORT_CPP SClass* _treeRoot(SClass* me_, SClass* me2);
EXPORT_CPP void _treeDraggable(SClass* me_, Bool enabled);
EXPORT_CPP void _treeAllowDraggingToRoot(SClass* me_, Bool enabled);
EXPORT_CPP void _treeSetSel(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeGetSel(SClass* me_, SClass* me2);
EXPORT_CPP void _treeMultiSetSel(SClass* me_, void* nodes);
EXPORT_CPP SClass* _treeMultiGetSel(SClass* me_, SClass* me2, SClass* node);
EXPORT_CPP SClass* _treeNodeAddChild(SClass* me_, SClass* me2, const U8* name);
EXPORT_CPP SClass* _treeNodeInsChild(SClass* me_, SClass* me2, SClass* node, const U8* name);
EXPORT_CPP void _treeNodeDelChild(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeNodeFirstChild(SClass* me_, SClass* me2);
EXPORT_CPP void* _treeNodeGetName(SClass* me_);
EXPORT_CPP SClass* _treeNodeNext(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodePrev(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodeParent(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _makeSplitX(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeSplitY(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeScrollX(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeScrollY(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP void _scrollSetState(SClass* me_, S64 min, S64 max, S64 page, S64 pos);
EXPORT_CPP void _scrollSetScrollPos(SClass* me_, S64 pos);

EXPORT_CPP SClass* _makeMenu(SClass* me_);
EXPORT_CPP void _menuDtor(SClass* me_);
EXPORT_CPP void _menuAdd(SClass* me_, S64 id, const U8* text);
EXPORT_CPP void _menuAddLine(SClass* me_);
EXPORT_CPP void _menuAddPopup(SClass* me_, const U8* text, const U8* popup);
EXPORT_CPP SClass* _makePopup(SClass* me_);

EXPORT_CPP SClass* _makeTabOrder(SClass* me_, U8* ctrls);
EXPORT_CPP Bool _tabOrderChk(SClass* me_, S64 key, S64 shiftCtrl);

// Assembly functions.
extern "C" void* Call0Asm(void* func);
extern "C" void* Call1Asm(void* arg1, void* func);
extern "C" void* Call2Asm(void* arg1, void* arg2, void* func);
extern "C" void* Call3Asm(void* arg1, void* arg2, void* arg3, void* func);
SClass* IncWndRef(SClass* wnd);
