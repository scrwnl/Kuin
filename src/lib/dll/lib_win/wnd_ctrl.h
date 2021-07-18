#pragma once

#include "..\common.h"
#include "wnd_common.h"

EXPORT_CPP Bool _btnGetChk(SClass* me_);
EXPORT_CPP void _btnSetChk(SClass* me_, Bool chk);
EXPORT_CPP void _comboAdd(SClass* me_, const U8* text);
EXPORT_CPP void _comboClear(SClass* me_);
EXPORT_CPP void _comboDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _comboGetSel(SClass* me_);
EXPORT_CPP void* _comboGetText(SClass* me_, S64 idx);
EXPORT_CPP void _comboIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP S64 _comboLen(SClass* me_);
EXPORT_CPP void _comboSetSel(SClass* me_, S64 idx);
EXPORT_CPP void _comboSetText(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _editReadonly(SClass* me_, Bool enabled);
EXPORT_CPP void _editRightAligned(SClass* me_, Bool enabled);
EXPORT_CPP void _editSetSel(SClass* me_, S64 start, S64 len);
EXPORT_CPP void _editMultiAddText(SClass* me_, const U8* text);
EXPORT_CPP void _listAdd(SClass* me_, const U8* text);
EXPORT_CPP void _listClear(SClass* me_);
EXPORT_CPP void _listDel(SClass* me_, S64 idx);
EXPORT_CPP S64 _listGetSel(SClass* me_);
EXPORT_CPP void* _listGetText(SClass* me_, S64 idx);
EXPORT_CPP void _listIns(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP S64 _listLen(SClass* me_);
EXPORT_CPP void _listSetSel(SClass* me_, S64 idx);
EXPORT_CPP void _listSetText(SClass* me_, S64 idx, const U8* text);
EXPORT_CPP void _listViewAdd(SClass* me_, const U8* text, S64 img);
EXPORT_CPP void _listViewAddColumn(SClass* me_, const U8* text);
EXPORT_CPP void _listViewAdjustWidth(SClass* me_);
EXPORT_CPP void _listViewClear(SClass* me_);
EXPORT_CPP void _listViewClearAll(SClass* me_);
EXPORT_CPP void _listViewDel(SClass* me_, S64 idx);
EXPORT_CPP void _listViewDelColumn(SClass* me_, S64 column);
EXPORT_CPP void _listViewDraggable(SClass* me_, bool enabled);
EXPORT_CPP Bool _listViewGetChk(SClass* me_, S64 idx);
EXPORT_CPP S64 _listViewGetSel(SClass* me_);
EXPORT_CPP Bool _listViewGetSelMulti(SClass* me_, S64 idx);
EXPORT_CPP void* _listViewGetText(SClass* me_, S64* img, S64 idx, S64 column);
EXPORT_CPP void _listViewIns(SClass* me_, S64 idx, const U8* text, S64 img);
EXPORT_CPP void _listViewInsColumn(SClass* me_, S64 column, const U8* text);
EXPORT_CPP S64 _listViewLen(SClass* me_);
EXPORT_CPP S64 _listViewLenColumn(SClass* me_);
EXPORT_CPP void _listViewSetChk(SClass* me_, S64 idx, bool value);
EXPORT_CPP void _listViewSetSel(SClass* me_, S64 idx);
EXPORT_CPP void _listViewSetSelMulti(SClass* me_, S64 idx, Bool value);
EXPORT_CPP void _listViewSetText(SClass* me_, S64 idx, S64 column, const U8* text, S64 img);
EXPORT_CPP void _listViewStyle(SClass* me_, S64 list_view_style);
EXPORT_CPP void _scrollSetScrollPos(SClass* me_, S64 pos);
EXPORT_CPP void _scrollSetState(SClass* me_, S64 min, S64 max, S64 page, S64 pos);
EXPORT_CPP void _tabAdd(SClass* me_, const U8* text);
EXPORT_CPP void _tabGetPosInner(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP S64 _tabGetSel(SClass* me_);
EXPORT_CPP S64 _tabLen(SClass* me_);
EXPORT_CPP void _tabSetSel(SClass* me_, S64 idx);
EXPORT_CPP void _treeAllowDraggingToRoot(SClass* me_, Bool enabled);
EXPORT_CPP void _treeClear(SClass* me_);
EXPORT_CPP void _treeDraggable(SClass* me_, Bool enabled);
EXPORT_CPP void _treeExpand(SClass* me_, Bool expand);
EXPORT_CPP SClass* _treeGetSel(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeRoot(SClass* me_, SClass* me2);
EXPORT_CPP void _treeSetSel(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeNodeAddChild(SClass* me_, SClass* me2, const U8* name);
EXPORT_CPP void _treeNodeDelChild(SClass* me_, SClass* node);
EXPORT_CPP SClass* _treeNodeFirstChild(SClass* me_, SClass* me2);
EXPORT_CPP void* _treeNodeGetName(SClass* me_);
EXPORT_CPP SClass* _treeNodeInsChild(SClass* me_, SClass* me2, SClass* node, const U8* name);
EXPORT_CPP SClass* _treeNodeNext(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodeParent(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _treeNodePrev(SClass* me_, SClass* me2);
EXPORT_CPP SClass* _makeBtn(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeChk(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeCombo(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeEdit(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeEditMulti(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeGroup(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeLabel(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeList(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeListView(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, Bool multi_sel, const void* small_imgs, const void* large_imgs);
EXPORT_CPP SClass* _makeRadio(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY, const U8* text);
EXPORT_CPP SClass* _makeScrollX(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeScrollY(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTab(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);
EXPORT_CPP SClass* _makeTree(SClass* me_, SClass* parent, S64 x, S64 y, S64 width, S64 height, S64 anchorX, S64 anchorY);