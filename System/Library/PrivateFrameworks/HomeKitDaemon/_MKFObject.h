//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFObject-Protocol.h>

@class MKFObjectDatabaseID, NSString;

@interface _MKFObject <MKFObject>
{
}

+ (id)backingModelProtocol;	// IMP=0x00000000008ba05a
- (id)castIfZone;	// IMP=0x00000000008b9f02
- (id)castIfUser;	// IMP=0x00000000008b9efa
- (id)castIfTrigger;	// IMP=0x00000000008b9ef2
- (id)castIfTimerTrigger;	// IMP=0x00000000008b9eea
- (id)castIfTimePeriodBulletinCondition;	// IMP=0x00000000008b9ee2
- (id)castIfTimeOfDayTimeSpecification;	// IMP=0x00000000008b9eda
- (id)castIfSunriseSunsetTimeSpecification;	// IMP=0x00000000008b9ed2
- (id)castIfStringCharacteristic;	// IMP=0x00000000008b9eca
- (id)castIfSoftwareUpdate;	// IMP=0x00000000008b9ec2
- (id)castIfSignificantTimeEvent;	// IMP=0x00000000008b9eba
- (id)castIfShortcutAction;	// IMP=0x00000000008b9eb2
- (id)castIfServiceGroup;	// IMP=0x00000000008b9eaa
- (id)castIfService;	// IMP=0x00000000008b9ea2
- (id)castIfRoom;	// IMP=0x00000000008b9e9a
- (id)castIfResident;	// IMP=0x00000000008b9e92
- (id)castIfPresenceEvent;	// IMP=0x00000000008b9e8a
- (id)castIfPresenceBulletinCondition;	// IMP=0x00000000008b9e82
- (id)castIfOutgoingInvitation;	// IMP=0x00000000008b9e7a
- (id)castIfNaturalLightingAction;	// IMP=0x00000000008b9e72
- (id)castIfModel;	// IMP=0x00000000008b9e6a
- (id)castIfMediaSystem;	// IMP=0x00000000008b9e62
- (id)castIfMediaPlaybackAction;	// IMP=0x00000000008b9e5a
- (id)castIfMediaGroup;	// IMP=0x00000000008b9e52
- (id)castIfMediaDestinationController;	// IMP=0x00000000008b9e4a
- (id)castIfMediaDestination;	// IMP=0x00000000008b9e42
- (id)castIfMediaAccessory;	// IMP=0x00000000008b9e3a
- (id)castIfLocationEvent;	// IMP=0x00000000008b9e32
- (id)castIfInvitation;	// IMP=0x00000000008b9e2a
- (id)castIfIntegerCharacteristic;	// IMP=0x00000000008b9e22
- (id)castIfIncomingInvitation;	// IMP=0x00000000008b9e1a
- (id)castIfHomeThreadNetwork;	// IMP=0x00000000008b9e12
- (id)castIfHomeSoftwareUpdateSetting;	// IMP=0x00000000008b9e0a
- (id)castIfHomeSetting;	// IMP=0x00000000008b9e02
- (id)castIfHomePersonManagerSetting;	// IMP=0x00000000008b9dfa
- (id)castIfHomeNetworkRouterSetting;	// IMP=0x00000000008b9df2
- (id)castIfHomeNetworkRouterManagingDeviceSetting;	// IMP=0x00000000008b9dea
- (id)castIfHomeMediaSetting;	// IMP=0x00000000008b9de2
- (id)castIfHomeManagerHome;	// IMP=0x00000000008b9dda
- (id)castIfHomeManager;	// IMP=0x00000000008b9dd2
- (id)castIfHome;	// IMP=0x00000000008b9dca
- (id)castIfHAPMetadata;	// IMP=0x00000000008b9dc2
- (id)castIfHAPAccessory;	// IMP=0x00000000008b9dba
- (id)castIfFloatCharacteristic;	// IMP=0x00000000008b9db2
- (id)castIfEventTrigger;	// IMP=0x00000000008b9daa
- (id)castIfEvent;	// IMP=0x00000000008b9da2
- (id)castIfDurationEvent;	// IMP=0x00000000008b9d9a
- (id)castIfDeviceCapabilities;	// IMP=0x00000000008b9d92
- (id)castIfDevice;	// IMP=0x00000000008b9d8a
- (id)castIfCharacteristicWriteAction;	// IMP=0x00000000008b9d82
- (id)castIfCharacteristicValueEvent;	// IMP=0x00000000008b9d7a
- (id)castIfCharacteristicRangeEvent;	// IMP=0x00000000008b9d72
- (id)castIfCharacteristicEvent;	// IMP=0x00000000008b9d6a
- (id)castIfCharacteristicBulletinRegistration;	// IMP=0x00000000008b9d62
- (id)castIfCharacteristic;	// IMP=0x00000000008b9d5a
- (id)castIfCameraSignificantEventBulletinRegistration;	// IMP=0x00000000008b9d52
- (id)castIfCameraReachabilityBulletinRegistration;	// IMP=0x00000000008b9d4a
- (id)castIfCameraAccessModeBulletinRegistration;	// IMP=0x00000000008b9d42
- (id)castIfCalendarEvent;	// IMP=0x00000000008b9d3a
- (id)castIfBulletinTimeSpecification;	// IMP=0x00000000008b9d32
- (id)castIfBulletinRegistration;	// IMP=0x00000000008b9d2a
- (id)castIfBulletinCondition;	// IMP=0x00000000008b9d22
- (id)castIfAssistantAccessControl;	// IMP=0x00000000008b9d1a
- (id)castIfApplicationData;	// IMP=0x00000000008b9d12
- (id)castIfAppleMediaAccessoryResident;	// IMP=0x00000000008b9d0a
- (id)castIfAppleMediaAccessory;	// IMP=0x00000000008b9d02
- (id)castIfAnnounceUserSettings;	// IMP=0x00000000008b9cfa
- (id)castIfAirPlayAccessory;	// IMP=0x00000000008b9cf2
- (id)castIfActionSet;	// IMP=0x00000000008b9cea
- (id)castIfAction;	// IMP=0x00000000008b9ce2
- (id)castIfAccountHandle;	// IMP=0x00000000008b9cda
- (id)castIfAccount;	// IMP=0x00000000008b9cd2
- (id)castIfAccessorySettingGroup;	// IMP=0x00000000008b9cca
- (id)castIfAccessorySettingConstraint;	// IMP=0x00000000008b9cc2
- (id)castIfAccessorySetting;	// IMP=0x00000000008b9cba
- (id)castIfAccessoryNetworkProtectionGroup;	// IMP=0x00000000008b9cb2
- (id)castIfAccessory;	// IMP=0x00000000008b9caa
@property(readonly, copy, nonatomic) MKFObjectDatabaseID *databaseID;
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x00000000008ba740
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x00000000008ba6ed
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x00000000008ba6e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

