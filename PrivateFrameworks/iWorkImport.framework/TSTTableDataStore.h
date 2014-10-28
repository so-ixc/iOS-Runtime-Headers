/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap, TSTTableHeaderStorage, TSTTileIDKeyDict, TSUIntToIntDictionary;

@interface TSTTableDataStore : TSPContainedObject {
    unsigned long mCellCount;
    BOOL mCellCountValid;
    TSPLazyReference *mColumnHeaderStorageReference;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } *mColumnTileIndex;
    TSPLazyReference *mCommentStorageTableReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mImportWarningSetTableReference;
    TSTMergeRegionMap *mMergedCellRanges;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    unsigned short mNextColumnStripID;
    unsigned short mNextRowStripID;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    TSUIntToIntDictionary *mPasteboardCustomFormatMap;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSTTableHeaderStorage *mRowHeaderStorage;
    struct TSTTableRBTreeNode_s { unsigned short x1; unsigned short x2; struct TSTTableRBTreeNode_s {} *x3; struct TSTTableRBTreeNode_s {} *x4; struct TSTTableRBTreeNode_s {} *x5; BOOL x6; } *mRowTileIndex;
    unsigned long mStorageVersion;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSTTileIDKeyDict *mTileStorage;
}

@property(readonly) BOOL hasPasteboardCustomFormats;

- (void)clearPasteboardCustomFormatList;
- (unsigned int)copyPasteboardCustomFormat:(unsigned int)arg1 toDocument:(id)arg2 clearingPasteboardFormat:(BOOL)arg3;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (void)dealloc;
- (void)debugDump;
- (BOOL)hasPasteboardCustomFormats;
- (id)initWithArchive:(const struct DataStore { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct HeaderStorage {} *x3; struct Reference {} *x4; struct TileStorage {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; unsigned int x14; unsigned int x15; struct TableRBTree {} *x16; struct TableRBTree {} *x17; struct Reference {} *x18; struct Reference {} *x19; struct Reference {} *x20; struct Reference {} *x21; unsigned int x22; int x23; unsigned int x24[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (BOOL)needToUpgradeCellStorage;
- (id)p_pasteboardCustomFormatList;
- (id)p_pasteboardCustomFormatMap;
- (void)p_updateTileStorageToCurrentVersion;
- (void)saveToArchive:(struct DataStore { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct HeaderStorage {} *x3; struct Reference {} *x4; struct TileStorage {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; unsigned int x14; unsigned int x15; struct TableRBTree {} *x16; struct TableRBTree {} *x17; struct Reference {} *x18; struct Reference {} *x19; struct Reference {} *x20; struct Reference {} *x21; unsigned int x22; int x23; unsigned int x24[1]; }*)arg1 archiver:(id)arg2;
- (void)setStorageParentToInfo:(id)arg1;
- (void)upgradeDataStoreCellStorage;
- (void)validate;

@end