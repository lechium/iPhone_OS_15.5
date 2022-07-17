//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, SSVSubscriptionStatus, SSVSubscriptionStatusRequest;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject
{
    SSVSubscriptionStatusRequest *_activeRequest;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _didReset;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    SSVSubscriptionStatus *_lastKnownStatus;	// 40 = 0x28
    NSDate *_lastStatusDate;	// 48 = 0x30
    int _notificationToken;	// 56 = 0x38
    long long _subscriptionStatusAccessPolicy;	// 64 = 0x40
    NSMutableArray *_statusBlocks;	// 72 = 0x48
}

+ (id)_existingSharedCoordinator;	// IMP=0x0000000000019705
+ (void)updateUserDefaultsWithStatus:(id)arg1;	// IMP=0x000000000001966f
+ (id)copyStatusFromUserDefaults;	// IMP=0x0000000000018bc1
+ (id)sharedCoordinator;	// IMP=0x0000000000018b3c
+ (void)_sendChangeNotification;	// IMP=0x0000000000152c52
+ (id)_changeNotificationSuspensionAccessQueue;	// IMP=0x0000000000152bfb
+ (void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0000000000152840
+ (void)sendChangeNotification;	// IMP=0x0000000000152743
+ (void)removeUserDefaultsForAccountIdentifier:(id)arg1;	// IMP=0x0000000000152696
+ (void)endSuspendingSubscriptionStatusChangeNotifications;	// IMP=0x0000000000152593
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;	// IMP=0x000000000015254a
- (void).cxx_destruct;	// IMP=0x000000000001a0f3
- (void)_validateLastKnownStatus;	// IMP=0x000000000001a094
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(_Bool)arg1;	// IMP=0x0000000000019fac
- (void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000019e4c
- (void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000019c08
- (void)_externalChangeNotification;	// IMP=0x0000000000019b2f
- (id)_copyValidStatusForStatus:(id)arg1;	// IMP=0x00000000000198fd
- (id)_copyStatusDateFromUserDefaults;	// IMP=0x00000000000198a6
- (id)_copyStatusFromUserDefaults;	// IMP=0x0000000000019825
- (void)_accountStoreChangedNotification;	// IMP=0x00000000000197a2
- (void)_invalidateLastKnownStatus;	// IMP=0x0000000000019716
- (void)reset;	// IMP=0x00000000000195db
- (void)modifyLastKnownStatusUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000194f7
@property(readonly, copy) SSVSubscriptionStatus *lastKnownStatus;
- (void)_deviceStoreFrontChangedNotification;	// IMP=0x000000000001932b
- (void)getStatusWithOptions:(id)arg1 statusBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018c37
- (void)dealloc;	// IMP=0x0000000000018a95
- (id)init;	// IMP=0x000000000001885e

@end
