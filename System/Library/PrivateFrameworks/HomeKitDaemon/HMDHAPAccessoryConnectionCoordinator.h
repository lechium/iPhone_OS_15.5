//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSNotificationCenter, NSString;

@interface HMDHAPAccessoryConnectionCoordinator : NSObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000002a8b11
- (void).cxx_destruct;	// IMP=0x00000000002a8aeb
- (id)logIdentifier;	// IMP=0x00000000002a8a70
- (void)_enableDisconnectOnIdleWithAccessories;	// IMP=0x00000000002a888d
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(_Bool)arg1;	// IMP=0x00000000002a862e
- (void)evaluateAccessoryConnectionStatus;	// IMP=0x00000000002a85b6
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000002a84df
- (void)handleResidentChangedOnNonResident;	// IMP=0x00000000002a8312
- (void)handleCurrentResidentChanged:(id)arg1;	// IMP=0x00000000002a8173
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)arg1;	// IMP=0x00000000002a809c
- (void)handleResidentUpdated:(id)arg1;	// IMP=0x00000000002a7fc6
- (void)handleResidentAddRemove:(id)arg1;	// IMP=0x00000000002a7e54
- (void)handleResidentStatusChanged:(id)arg1;	// IMP=0x00000000002a7d1c
- (void)configureWithIsResidentCapable:(_Bool)arg1;	// IMP=0x00000000002a7ac4
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000002a7a2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
