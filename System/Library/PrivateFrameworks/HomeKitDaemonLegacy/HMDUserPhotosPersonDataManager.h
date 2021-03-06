//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMBLocalZone, HMDCloudPhotosSettingObserver, HMDPhotosPersonManager, HMDUser, HMFMessageDispatcher, HMPhotosPersonManagerSettings, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUserPhotosPersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>
{
    _Bool _supportsFaceClassification;	// 8 = 0x8
    HMPhotosPersonManagerSettings *_settings;	// 16 = 0x10
    HMDPhotosPersonManager *_personManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSUUID *_userUUID;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    HMBLocalZone *_localZone;	// 56 = 0x38
    HMDUser *_user;	// 64 = 0x40
    HMDCloudPhotosSettingObserver *_cloudPhotosSettingObserver;	// 72 = 0x48
    CDUnknownBlockType _personManagerFactory;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00000000001dd496
+ (id)settingsModelUUIDWithUUID:(id)arg1;	// IMP=0x00000000001dd3e3
+ (id)defaultSettings;	// IMP=0x00000000001dd3ca
- (void).cxx_destruct;	// IMP=0x00000000001dcfbf
@property(copy) CDUnknownBlockType personManagerFactory; // @synthesize personManagerFactory=_personManagerFactory;
@property(readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // @synthesize cloudPhotosSettingObserver=_cloudPhotosSettingObserver;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) _Bool supportsFaceClassification; // @synthesize supportsFaceClassification=_supportsFaceClassification;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMDPhotosPersonManager *personManager; // @synthesize personManager=_personManager;
@property(copy) HMPhotosPersonManagerSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000001dce29
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000001dcdb8
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000001dcd47
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000001dccd6
- (void)handleUpdatePersonManagerSettingsMessage:(id)arg1;	// IMP=0x00000000001dc673
- (void)removeCloudDataForZoneUUID:(id)arg1;	// IMP=0x00000000001dc3fc
- (void)updateSettingsForCurrentCameraClipsAccess;	// IMP=0x00000000001dc171
- (void)configurePhotosPersonManagerWithSettingsModel:(id)arg1;	// IMP=0x00000000001dbce4
- (id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;	// IMP=0x00000000001db86c
- (id)settingsModel;	// IMP=0x00000000001db7d6
- (id)settingsModelUUID;	// IMP=0x00000000001db76c
- (void)handleUpdatedSettingsModel:(id)arg1 previousSettingsModel:(id)arg2;	// IMP=0x00000000001db18f
- (id)updateSettingsModelWithSettings:(id)arg1;	// IMP=0x00000000001dac26
- (void)removeCloudData;	// IMP=0x00000000001dabaf
- (void)recoverDueToUUIDChangeFromOldUUID:(id)arg1;	// IMP=0x00000000001da81c
- (void)configure;	// IMP=0x00000000001da211
@property(readonly, copy) NSUUID *zoneUUID;
- (id)initWithUser:(id)arg1 messageDispatcher:(id)arg2 localZone:(id)arg3 workQueue:(id)arg4 supportsFaceClassification:(_Bool)arg5 cloudPhotosSettingObserver:(id)arg6;	// IMP=0x00000000001d9ff0
- (id)initWithUser:(id)arg1 messageDispatcher:(id)arg2 localZone:(id)arg3 workQueue:(id)arg4;	// IMP=0x00000000001d9ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

