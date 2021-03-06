//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaDestinationControllerMetricsEventDispatcher, HMFUnfairLock, HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

@interface HMDMediaDestinationControllerBackingStoreHandler <HMFLogging>
{
    HMMutableMediaDestinationControllerData *_data;	// 8 = 0x8
    HMFUnfairLock *_lock;	// 16 = 0x10
    id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000006646e
+ (id)backingStoreObjectForData:(id)arg1;	// IMP=0x00000000000663aa
- (void).cxx_destruct;	// IMP=0x00000000000659ce
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000006592a
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000657e7
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;	// IMP=0x0000000000065587
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x0000000000065343
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000064e2a
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x0000000000064cf9
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000064bc8
- (void)updateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x0000000000064b35
- (void)updateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000064aa2
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006477f
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000064293
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000640b3
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063f41
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063d9e
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063bc0
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000639e2
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000063848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

