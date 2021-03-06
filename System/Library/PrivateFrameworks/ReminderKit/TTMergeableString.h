//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/CRDataType-Protocol.h>

@class CRTTCompatibleDocument, NSHashTable, NSMutableAttributedString, NSString, NSUUID, TTVectorMultiTimestamp;
@protocol TTMergeableStringDelegate;

__attribute__((visibility("hidden")))
@interface TTMergeableString : NSObject <CRDataType>
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _startNodes;	// 8 = 0x8
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _endNodes;	// 32 = 0x20
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;	// 56 = 0x38
    unsigned int _unserializedClock;	// 80 = 0x50
    unsigned long long _editCount;	// 88 = 0x58
    _Bool _cacheInvalid;	// 96 = 0x60
    CDUnknownBlockType _updateRangeBlock;	// 104 = 0x68
    _Bool _hasLocalChanges;	// 112 = 0x70
    NSUUID *_replicaUUID;	// 120 = 0x78
    TTVectorMultiTimestamp *_timestamp;	// 128 = 0x80
    NSObject<TTMergeableStringDelegate> *_delegate;	// 136 = 0x88
    NSHashTable *_objectsNeedingUpdatedRanges;	// 144 = 0x90
    NSMutableAttributedString *_attributedString;	// 152 = 0x98
    unsigned long long _replicaTextClock;	// 160 = 0xa0
    unsigned long long _replicaStyleClock;	// 168 = 0xa8
}

+ (id)unserialisedReplicaID;	// IMP=0x00000000000cfd64
- (id).cxx_construct;	// IMP=0x00000000000d7eeb
- (void).cxx_destruct;	// IMP=0x00000000000d7e53
@property(readonly, nonatomic) unsigned long long replicaStyleClock; // @synthesize replicaStyleClock=_replicaStyleClock;
@property(readonly, nonatomic) unsigned long long replicaTextClock; // @synthesize replicaTextClock=_replicaTextClock;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // @synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges;
@property(nonatomic) __weak NSObject<TTMergeableStringDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x00000000000d7848
@property(readonly) unsigned long long hash;
- (_Bool)graphIsEqual:(id)arg1;	// IMP=0x00000000000d73c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7319
@property(readonly, copy) NSString *description;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7201
- (void)sortSplitNodes;	// IMP=0x00000000000d71d6
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(_Bool)arg2;	// IMP=0x00000000000d5f8b
- (unsigned long long)mergeWithString:(id)arg1;	// IMP=0x00000000000d5f73
- (void)dumpMergeData:(id)arg1;	// IMP=0x00000000000d58f7
- (void)checkTimestampLogStyleErrors:(_Bool)arg1;	// IMP=0x00000000000d5615
- (_Bool)check:(id *)arg1;	// IMP=0x00000000000d50f5
- (void)updateClock;	// IMP=0x00000000000d4df4
- (_Bool)canMergeString:(id)arg1;	// IMP=0x00000000000d4bb9
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(_Bool)arg1;	// IMP=0x00000000000d4849
- (void)generateIdsForLocalChanges;	// IMP=0x00000000000d47d9
- (void)cleanupObjectsNeedingUpdatedRanges;	// IMP=0x00000000000d459c
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x00000000000d422d
- (void)coalesce;	// IMP=0x00000000000d3932
- (void)updateSubstringIndexes;	// IMP=0x00000000000d38f9
- (void)updateAttributedStringAfterMerge;	// IMP=0x00000000000d3811
- (void)invalidateCache;	// IMP=0x00000000000d37ff
- (void)updateCache;	// IMP=0x00000000000d355d
- (void *)orderedSubstrings;	// IMP=0x00000000000d3530
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000000d3412
- (_Bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;	// IMP=0x00000000000d309f
- (_Bool)textEitherSideOfSelectionAnchor:(struct TopoID)arg1 wasModifiedAfter:(id)arg2;	// IMP=0x00000000000d2e8b
- (void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d2d99
- (long long)substring:(void *)arg1 modifiedAfter:(id)arg2;	// IMP=0x00000000000d2cff
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2c25
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID)arg1;	// IMP=0x00000000000d2a8c
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;	// IMP=0x00000000000d288d
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;	// IMP=0x00000000000d21f8
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;	// IMP=0x00000000000d2040
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;	// IMP=0x00000000000d1bdb
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x00000000000d1b87
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000d1b1e
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(void *)arg2 before:(void *)arg3;	// IMP=0x00000000000d1303
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;	// IMP=0x00000000000d1111
- (void)updateTimestampsInRange:(struct _NSRange)arg1;	// IMP=0x00000000000d1021
- (void *)endNodes;	// IMP=0x00000000000d1017
- (void *)startNodes;	// IMP=0x00000000000d100d
- (_Bool)isFragment;	// IMP=0x00000000000d0f08
- (void)_testSetTextTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000d0efb
- (void)resetLocalReplicaClocksToTimestampValues;	// IMP=0x00000000000d0e9e
- (_Bool)shouldInvalidateCachedSubstringsWithTimestamp:(id)arg1;	// IMP=0x00000000000d0d9d
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d0808
- (id)characterRangesForSelection:(id)arg1;	// IMP=0x00000000000d07e4
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;	// IMP=0x00000000000d03ba
- (id)selectionForCharacterRanges:(id)arg1;	// IMP=0x00000000000d0396
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d0329
- (void)endEditing;	// IMP=0x00000000000d0303
- (void)beginEditing;	// IMP=0x00000000000d02f9
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000d014a
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x00000000000d0063
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000000cff69
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000000cfec6
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000cfe32
- (unsigned long long)length;	// IMP=0x00000000000cfdda
- (id)string;	// IMP=0x00000000000cfdc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cfc9b
- (void)dealloc;	// IMP=0x00000000000cfa83
- (id)initWithReplicaID:(id)arg1 asFragment:(_Bool)arg2;	// IMP=0x00000000000cf83b
- (id)initWithReplicaID:(id)arg1;	// IMP=0x00000000000cf826
- (id)init;	// IMP=0x00000000000cf80f
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6a42
- (id)tombstone;	// IMP=0x00000000000c6a39
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x00000000000c696b
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x00000000000c6962
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000c6801
@property(retain, nonatomic) CRTTCompatibleDocument *document;
- (id)serializeDeltaSinceTimestamp:(id)arg1;	// IMP=0x00000000000fa4c1
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(void *)arg2;	// IMP=0x00000000000fa4a6
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(void *)arg2;	// IMP=0x00000000000f9de2
- (id)serialize;	// IMP=0x00000000000f9cf4
- (void)saveSubstrings:(void *)arg1 archiveSet:(void *)arg2 linkSet:(void *)arg3 archivedString:(id *)arg4 toArchive:(void *)arg5;	// IMP=0x00000000000f94a7
- (void)saveToArchive:(void *)arg1;	// IMP=0x00000000000f9433
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(void *)arg3 timestamp:(id)arg4;	// IMP=0x00000000000f8076
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(void *)arg3;	// IMP=0x00000000000f8060
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;	// IMP=0x00000000000f8047
- (id)initWithArchive:(const void *)arg1 andReplicaID:(id)arg2;	// IMP=0x00000000000f8031
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;	// IMP=0x00000000000f7ec8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

