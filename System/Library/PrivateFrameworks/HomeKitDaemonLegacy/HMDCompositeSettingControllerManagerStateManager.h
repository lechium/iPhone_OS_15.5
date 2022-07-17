//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDCompositeSettingControllerManagerStateManager-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingNotificationRegistrationProviding;

@interface HMDCompositeSettingControllerManagerStateManager : NSObject <HMFLogging, HMDCompositeSettingControllerManagerStateManager>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_homeUUIDToState;	// 16 = 0x10
    id <HMDCompositeSettingControllerManagerStateTransitionDelegate> _delegate;	// 24 = 0x18
    id <HMDCompositeSettingNotificationRegistrationProviding> _notificationRegistrationProvider;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    id <HMDCompositeSettingControllerManagerStateManagerDataSource> _dataSource;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00000000007c27ca
- (void).cxx_destruct;	// IMP=0x00000000007c2732
@property(readonly) __weak id <HMDCompositeSettingControllerManagerStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HMDCompositeSettingNotificationRegistrationProviding> notificationRegistrationProvider; // @synthesize notificationRegistrationProvider=_notificationRegistrationProvider;
@property(readonly) __weak id <HMDCompositeSettingControllerManagerStateTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)stateForHomeUUID:(id)arg1;	// IMP=0x00000000007c2608
- (id)logIdentifier;	// IMP=0x00000000007c25b8
- (void)_handleAccessoryRemovedNotification:(id)arg1;	// IMP=0x00000000007c2345
- (void)_handleAccessoryLanguagesChangedNotification:(id)arg1;	// IMP=0x00000000007c2104
- (void)_computeResidentStateChangeForHome:(id)arg1;	// IMP=0x00000000007c1d1c
- (void)_handleResidentDeviceUpdated:(id)arg1;	// IMP=0x00000000007c1a10
- (void)_handleSiriEndpointProfileCreation:(id)arg1;	// IMP=0x00000000007c175f
- (void)_handleSiriEndpointProfileSettingsUpdate:(id)arg1;	// IMP=0x00000000007c1464
- (void)_handleHomeAdded:(id)arg1;	// IMP=0x00000000007c12b9
- (void)_handleCompositeSettingsControllerConfiguredNotification:(id)arg1;	// IMP=0x00000000007c1029
- (void)_createStateForHomeUUIDIfNotExist:(id)arg1;	// IMP=0x00000000007c0ecf
- (void)_unregisterForNotifications;	// IMP=0x00000000007c0e83
- (void)_registerForNotifications;	// IMP=0x00000000007c0d20
- (id)initWithDataSource:(id)arg1 notificationRegistrationProvider:(id)arg2 delegate:(id)arg3 uuid:(id)arg4;	// IMP=0x00000000007c0bf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
