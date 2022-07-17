//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/CRUndoDelegate-Protocol.h>

@class CRDictionary, CRDocument, CRTombstoneOrderedSet, NSObject, NSString;
@protocol CRUndoDelegate;

@interface CRTable <CRUndoDelegate>
{
    CRDocument *_document;	// 8 = 0x8
    NSObject<CRUndoDelegate> *_delegate;	// 16 = 0x10
}

+ (id)CRProperties;	// IMP=0x00000000001752c6
+ (void)registerWithCRCoder;	// IMP=0x00000000001749fb
- (void).cxx_destruct;	// IMP=0x000000000017823a
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak CRDocument *document; // @synthesize document=_document;
- (_Bool)wantsUndoCommands;	// IMP=0x00000000001781b0
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000017801a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000177df4
@property(readonly) unsigned long long hash;
- (unsigned long long)countOfPopulatedCells;	// IMP=0x0000000000177bb5
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;	// IMP=0x00000000001775f6
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000177162
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177097
- (void)enumerateColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000176fcc
- (void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;	// IMP=0x0000000000176e7a
- (void)setObject:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;	// IMP=0x0000000000176d91
- (id)objectForColumnID:(id)arg1 rowID:(id)arg2;	// IMP=0x0000000000176cd4
- (id)objectForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;	// IMP=0x0000000000176bfe
- (void)reverseColumnDirection;	// IMP=0x0000000000176b92
@property(readonly, nonatomic) _Bool isLeftToRight;
@property(readonly, nonatomic) _Bool isRightToLeft;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;	// IMP=0x00000000001769d2
- (void)undoablyRemoveContentsOfColumn:(id)arg1;	// IMP=0x00000000001767a6
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0000000000176755
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0000000000176704
- (void)removeColumnAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000176655
- (void)undoablyInsertContents:(id)arg1 atRow:(id)arg2;	// IMP=0x00000000001764f5
- (void)undoablyRemoveContentsOfRow:(id)arg1;	// IMP=0x000000000017620d
- (void)removeRowAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017615e
- (id)insertColumns:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000176092
- (id)insertRows:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000175fc6
- (id)insertColumnAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000175f33
- (id)insertRowAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000175ea0
- (_Bool)containsColumn:(id)arg1;	// IMP=0x0000000000175e29
- (_Bool)containsRow:(id)arg1;	// IMP=0x0000000000175db2
- (id)columnIndexesForIdentifiers:(id)arg1;	// IMP=0x0000000000175bfc
- (id)rowIndexesForIdentifiers:(id)arg1;	// IMP=0x0000000000175a46
- (unsigned long long)columnIndexForIdentifier:(id)arg1;	// IMP=0x00000000001759cf
- (unsigned long long)rowIndexForIdentifier:(id)arg1;	// IMP=0x0000000000175958
- (id)identifiersForColumnIndexes:(id)arg1;	// IMP=0x000000000017581a
- (id)identifiersForRowIndexes:(id)arg1;	// IMP=0x00000000001756dc
- (id)identifierForColumnAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017567d
- (id)identifierForRowAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017561e
- (id)rowsIntersectingWithRows:(id)arg1;	// IMP=0x000000000017550b
- (id)columnsIntersectingWithColumns:(id)arg1;	// IMP=0x00000000001753f8
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) CRDictionary *cellColumns;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crRows;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crColumns;
- (id)crTableColumnDirection;	// IMP=0x0000000000175076
@property(retain, nonatomic) NSString *columnDirection;
- (id)identity;	// IMP=0x0000000000174ebe
- (void)setDocument:(id)arg1;	// IMP=0x0000000000174e51
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;	// IMP=0x0000000000174d11
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5;	// IMP=0x0000000000174b92
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2;	// IMP=0x0000000000174a71
- (id)initWithDocument:(id)arg1 isRightToLeft:(_Bool)arg2;	// IMP=0x0000000000174a48
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000174a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
