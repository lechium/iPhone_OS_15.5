//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class CKRecordID, HMDBackingStoreLocal, HMDHome, HMDHomeManager, HMDObjectLookup, NSString, NSUUID;
@protocol HMDBackingStoreDataSource, HMDBackingStoreObjectProtocol;

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging>
{
    _Bool _removedLegacyArchive;	// 8 = 0x8
    CKRecordID *_root;	// 16 = 0x10
    HMDBackingStoreLocal *_local;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    HMDObjectLookup *_lookup;	// 56 = 0x38
    id <HMDBackingStoreObjectProtocol> _delegate;	// 64 = 0x40
    id <HMDBackingStoreDataSource> _dataSource;	// 72 = 0x48
}

+ (id)_saveToLocalStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4;	// IMP=0x0000000000917e69
+ (void)saveToPersistentStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000917d50
+ (id)currentDevice;	// IMP=0x0000000000917cf9
+ (id)logCategory;	// IMP=0x0000000000917cc9
+ (id)resetBackingStore;	// IMP=0x0000000000917c72
+ (id)flushBackingStore;	// IMP=0x0000000000917c1b
+ (id)internalAllowedTypes;	// IMP=0x0000000000917beb
+ (id)deeplyProblematicObjectTypes;	// IMP=0x0000000000917bbb
+ (id)allowedTypes;	// IMP=0x0000000000917b8b
+ (void)start;	// IMP=0x0000000000917b72
- (void).cxx_destruct;	// IMP=0x00000000009147b7
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(readonly) _Bool isAtomicSaveFeatureEnabled;
@property(readonly) NSString *activeControllerKeyUsername;
- (id)dataForPersistentStoreIncrementingGeneration:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000000914586
- (id)createHomeObjectLookupWithHome:(id)arg1;	// IMP=0x0000000000914539
- (id)backingStoreOperationQueue;	// IMP=0x00000000009144e2
- (id)localBackingStore;	// IMP=0x000000000091448b
- (id)createBackingStoreOperation;	// IMP=0x0000000000914472
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg1;	// IMP=0x0000000000914425
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000914235
- (void)submitBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000009141bc
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(_Bool)arg2;	// IMP=0x0000000000913d60
- (id)logIdentifier;	// IMP=0x0000000000913d10
@property(readonly, copy) NSString *description;
- (void)submit:(id)arg1;	// IMP=0x0000000000913c50
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000913c41
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000913c32
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 archiveInline:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000913617
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009135f5
- (id)transaction:(id)arg1 options:(id)arg2;	// IMP=0x0000000000913576
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000913553
- (id)initWithUUID:(id)arg1 home:(id)arg2;	// IMP=0x00000000009134ba
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000913499
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000913296

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

