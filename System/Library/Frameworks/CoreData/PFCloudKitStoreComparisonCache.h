//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparisonCache : NSObject
{
    NSMutableDictionary *_storeUUIDToStoreCache;	// 8 = 0x8
    _Bool _checkCloudKitMetadata;	// 16 = 0x10
    NSPersistentStore *_store;	// 24 = 0x18
    NSPersistentStore *_otherStore;	// 32 = 0x20
    NSManagedObjectContext *_storeMoc;	// 40 = 0x28
    NSManagedObjectContext *_otherStoreMoc;	// 48 = 0x30
}

@property(readonly, nonatomic) _Bool checkCloudKitMetadata; // @synthesize checkCloudKitMetadata=_checkCloudKitMetadata;
@property(readonly, nonatomic) NSManagedObjectContext *otherStoreMoc; // @synthesize otherStoreMoc=_otherStoreMoc;
@property(readonly, nonatomic) NSManagedObjectContext *storeMoc; // @synthesize storeMoc=_storeMoc;
@property(readonly, nonatomic) NSPersistentStore *otherStore; // @synthesize otherStore=_otherStore;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
- (void)_setCheckCloudKitMetadata:(_Bool)arg1;	// IMP=0x00000000000f72d4
- (id)deriveIdentifierForNonCloudObjectID:(id)arg1;	// IMP=0x00000000000f7252
- (id)identifiersForStore:(id)arg1;	// IMP=0x00000000000f7202
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000f71a8
- (id)mtmKeysForRecordZone:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000f713e
- (id)sharedZoneIDsForStore:(id)arg1;	// IMP=0x00000000000f70fd
- (long long)databaseScopeForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000f70ca
- (id)identityRecordNameForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000f70a3
- (id)recordIDForObjectID:(id)arg1;	// IMP=0x00000000000f703c
- (id)objectIDForRecordID:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000f6fe2
- (id)recordIdsForStore:(id)arg1;	// IMP=0x00000000000f6f92
- (id)metadataForObjectWithID:(id)arg1;	// IMP=0x00000000000f6f2b
- (id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3;	// IMP=0x00000000000f6eac
- (id)mtmKeysForStore:(id)arg1;	// IMP=0x00000000000f6e5c
- (id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3;	// IMP=0x00000000000f6d43
- (_Bool)populate:(id *)arg1;	// IMP=0x00000000000f4efb
- (void)dealloc;	// IMP=0x00000000000f4e94
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x00000000000f4cd2

@end
