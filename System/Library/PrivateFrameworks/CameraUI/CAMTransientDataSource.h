//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/PUTransientDataSource-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource>
{
    NSHashTable *__observers;	// 8 = 0x8
    NSMutableArray *__assetUUIDs;	// 16 = 0x10
    NSMutableDictionary *__assetsByUUID;	// 24 = 0x18
    NSMutableDictionary *__representativeAssetsByBurstIdentifier;	// 32 = 0x20
    NSMutableDictionary *__enqueuedBurstAssetUUIDByBurstIdentifier;	// 40 = 0x28
    NSMutableDictionary *__enqueuedBurstConvertiblesByAssetUUID;	// 48 = 0x30
    long long __nestedPerformChanges;	// 56 = 0x38
    long long __pendingChangeNotifications;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e65b8
@property(nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications; // @synthesize _pendingChangeNotifications=__pendingChangeNotifications;
@property(nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges; // @synthesize _nestedPerformChanges=__nestedPerformChanges;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID; // @synthesize _enqueuedBurstConvertiblesByAssetUUID=__enqueuedBurstConvertiblesByAssetUUID;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier; // @synthesize _enqueuedBurstAssetUUIDByBurstIdentifier=__enqueuedBurstAssetUUIDByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // @synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_assetsByUUID; // @synthesize _assetsByUUID=__assetsByUUID;
@property(readonly, nonatomic) NSMutableArray *_assetUUIDs; // @synthesize _assetUUIDs=__assetUUIDs;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
- (void)_notifyObserversOfDataSourceChange;	// IMP=0x000000000005cd99
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x00000000001e6598
- (void)registerChangeObserver:(id)arg1;	// IMP=0x000000000006a0d5
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a6e9
- (id)transientBurstMapping;	// IMP=0x000000000006a17b
- (id)transientAssetMapping;	// IMP=0x000000000006a133
- (id)uuids;	// IMP=0x000000000006a0eb
- (void)processPendingBurstAssets;	// IMP=0x00000000001e61c2
- (void)enqueuePendingBurstAssetWithConvertible:(id)arg1;	// IMP=0x00000000001e5f62
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;	// IMP=0x00000000001e5c58
@property(readonly, nonatomic) NSSet *existingBurstIdentifiers;
- (void)removeAssetWithUUID:(id)arg1;	// IMP=0x000000000006b428
- (void)removeAllAssets;	// IMP=0x00000000001e5936
- (_Bool)_removeAssetWithUUID:(id)arg1;	// IMP=0x000000000006b45f
- (void)updateAssetWithConvertible:(id)arg1;	// IMP=0x00000000000607b5
- (id)insertAssetWithConvertible:(id)arg1;	// IMP=0x000000000005c107
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;	// IMP=0x000000000005bfed
- (id)existingAssetForUUID:(id)arg1;	// IMP=0x000000000005c07a
- (id)existingAssetUUIDs;	// IMP=0x00000000001e58b7
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000000000060cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
