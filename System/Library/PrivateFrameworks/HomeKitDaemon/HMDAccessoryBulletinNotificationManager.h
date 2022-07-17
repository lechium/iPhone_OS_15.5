//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMCContext, HMDAccountRegistry, HMDAppleAccountManager, HMDHome, HMDNotificationConditionEvaluator, NSArray, NSManagedObjectContext, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging>
{
    _Bool _currentPrimary;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSManagedObjectContext *_localMOC;	// 32 = 0x20
    HMCContext *_workingMOC;	// 40 = 0x28
    HMDAccountRegistry *_accountRegistry;	// 48 = 0x30
    HMDAppleAccountManager *_accountManager;	// 56 = 0x38
    HMDNotificationConditionEvaluator *_evaluator;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000828885
- (void).cxx_destruct;	// IMP=0x00000000008246a4
@property _Bool currentPrimary; // @synthesize currentPrimary=_currentPrimary;
@property(readonly) HMDNotificationConditionEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(readonly) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly) HMCContext *workingMOC; // @synthesize workingMOC=_workingMOC;
@property(readonly) NSManagedObjectContext *localMOC; // @synthesize localMOC=_localMOC;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x000000000082456b
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000824319
- (void)_handleDeviceBecameNotPrimary;	// IMP=0x00000000008241dc
- (void)_handleDeviceBecamePrimary;	// IMP=0x000000000082409c
- (void)_handleAccessoryBulletinNotificationRegistration:(id)arg1 removed:(_Bool)arg2;	// IMP=0x0000000000823c4e
- (id)_devicesToNotifyForCharacteristic:(id)arg1;	// IMP=0x0000000000823b3a
- (id)conditionsFromPredicate:(id)arg1;	// IMP=0x0000000000823b21
- (id)characteristicsByDestinationForCharacteristics:(id)arg1;	// IMP=0x0000000000823a4a
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg1;	// IMP=0x0000000000823903
- (void)unregisterForNotificationsFromCharacteristics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000823440
- (void)registerForNotificationsFromCharacteristics:(id)arg1 conditions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000822f6b
- (id)bulletinBoardNotificationForCharacteristics:(id)arg1;	// IMP=0x0000000000822b9d
- (void)configureWithDeviceIsResidentCapable:(_Bool)arg1;	// IMP=0x00000000008224e3
@property(readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property(readonly) NSArray *accessoryRegistrations;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 localManagedObjectContext:(id)arg3 workingManagedObjectContext:(id)arg4 accountRegistry:(id)arg5 accountManager:(id)arg6 evaluator:(id)arg7;	// IMP=0x000000000082215b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
