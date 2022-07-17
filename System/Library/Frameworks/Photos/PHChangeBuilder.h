//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, PHPersistentChangeToken;

@interface PHChangeBuilder : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
    PHPersistentChangeToken *_changeToken;	// 16 = 0x10
    unsigned long long _maximumChangeThreshold;	// 24 = 0x18
    NSMutableSet *_insertedObjectIDs;	// 32 = 0x20
    NSMutableSet *_updatedObjectIDs;	// 40 = 0x28
    NSMutableSet *_deletedObjectIDs;	// 48 = 0x30
    NSMutableDictionary *_deletedUuidsByObjectId;	// 56 = 0x38
    NSMutableDictionary *_attributesByOID;	// 64 = 0x40
    NSMutableDictionary *_relationshipsByOID;	// 72 = 0x48
    _Bool _unknownMergeEvent;	// 80 = 0x50
}

+ (id)changeWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 transaction:(id)arg3;	// IMP=0x0000000000166cd1
- (void).cxx_destruct;	// IMP=0x0000000000166b72
- (id)buildChange;	// IMP=0x0000000000166b08
- (id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2;	// IMP=0x0000000000166a49
- (void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2;	// IMP=0x00000000001669a3
- (void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2;	// IMP=0x00000000001668fa
- (void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2;	// IMP=0x000000000016685d
- (void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2;	// IMP=0x0000000000166844
- (void)recordChange:(id)arg1;	// IMP=0x0000000000166792
- (void)recordChangesInTransaction:(id)arg1;	// IMP=0x00000000001664a4
- (void)recordNonIncrementalChanges;	// IMP=0x000000000016649a
- (_Bool)changeCountExeedsThreshold:(unsigned long long)arg1;	// IMP=0x0000000000166482
- (void)recordTransaction:(id)arg1;	// IMP=0x00000000001663ea
- (id)initWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2;	// IMP=0x00000000001662cc

@end
