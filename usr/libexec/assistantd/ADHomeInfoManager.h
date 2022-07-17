//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeInfo, ADPreferredMediaUserInfo, AFHomeAccessoryInfo, AFInstanceContext, HMAccessory, HMHome, HMHomeManager, NSHashTable, NSMutableDictionary, NSString, NSUUID, SASetHomeContext;
@protocol OS_dispatch_queue;

@interface ADHomeInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HMHomeManager *_homeManager;	// 16 = 0x10
    HMAccessory *_currentAccessory;	// 24 = 0x18
    AFHomeAccessoryInfo *_currentAccessoryInfo;	// 32 = 0x20
    NSUUID *_accessoryLoggingSalt;	// 40 = 0x28
    HMHome *_currentHome;	// 48 = 0x30
    ADHomeInfo *_currentHomeInfo;	// 56 = 0x38
    NSMutableDictionary *_homeUserSettings;	// 64 = 0x40
    _Bool _assistantRequestedToTurnOffVoiceID;	// 72 = 0x48
    NSMutableDictionary *_homeSharingStates;	// 80 = 0x50
    AFInstanceContext *_instanceContext;	// 88 = 0x58
    NSHashTable *_listeners;	// 96 = 0x60
    SASetHomeContext *_homeContext;	// 104 = 0x68
    ADPreferredMediaUserInfo *_preferredMediaUserInfo;	// 112 = 0x70
}

+ (id)sharedInfoManager;	// IMP=0x0020000000191d91
- (void).cxx_destruct;	// IMP=0x002000000019e617
- (id)_activityNotificationsForHomes:(id)arg1;	// IMP=0x001000000019e392
- (id)updatedHomeInfoForRootInfo:(id)arg1;	// IMP=0x001000000019e216
- (id)_getAccessoryCategoryForExecutionInfo:(id)arg1;	// IMP=0x001000000019e046
- (void)getAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019de94
- (void)getLocalizedAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019dd61
- (_Bool)_hasSiriCapableDeviceInHome:(id)arg1;	// IMP=0x001000000019db24
- (void)getHomeManagerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019da56
- (id)_homesWithSiriCapableDevices;	// IMP=0x001000000019d889
- (_Bool)areActivityNotificationsOffForAllHomes;	// IMP=0x001000000019d6f0
- (id)rootAfHomeInfoForThisDevice;	// IMP=0x001000000019d66a
- (void)accessoryDidUpdateSupportsThirdPartyMusic:(id)arg1;	// IMP=0x001000000019d594
- (void)accessory:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x001000000019d3da
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;	// IMP=0x001000000019d3d4
- (void)accessoryDidUpdateName:(id)arg1;	// IMP=0x001000000019d1ff
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x001000000019d1f9
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;	// IMP=0x001000000019d000
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x001000000019ce3b
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x001000000019cd22
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x001000000019cd1c
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x001000000019cb9e
- (void)homeDidUpdateName:(id)arg1;	// IMP=0x001000000019c985
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000019c8f0
- (void)_propagateSiriDataSharingOptInStatus:(long long)arg1 toAccessory:(id)arg2;	// IMP=0x001000000019c322
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x001000000019bfe9
- (void)settingsWillUpdate:(id)arg1;	// IMP=0x001000000019bf64
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x001000000019b93e
- (void)homeManagerDidUpdateAssistantIdentifiers:(id)arg1;	// IMP=0x001000000019b80c
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x001000000019b698
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;	// IMP=0x001000000019b566
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x001000000019b3d1
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x001000000019b328
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x001000000019afdc
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x001000000019ae63
- (void)_homeManagerUpdatedHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x001000000019adba
- (void)_homeManagerUpdatedHomes:(id)arg1;	// IMP=0x001000000019ada6
- (void)_checkAndDisableVoiceIDIfRequired;	// IMP=0x001000000019ad86
- (void)_startCloudKitActivityForHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x001000000019ad80
- (void)fetchMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019aa53
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000019a924
- (void)removeListener:(id)arg1;	// IMP=0x001000000019a876
- (void)addListener:(id)arg1;	// IMP=0x001000000019a7c8
- (void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019a6fa
@property(readonly, nonatomic) AFHomeAccessoryInfo *currentAccessoryInfo;
@property(readonly, nonatomic) NSUUID *accessoryLoggingSalt;
- (id)_accessoryLoggingSalt;	// IMP=0x001000000019a482
- (void)_updateCurrentAccessoryInfoWithAccessory:(id)arg1;	// IMP=0x001000000019a188
- (id)_currentAccessoryInfo;	// IMP=0x001000000019a13f
- (id)_currentAccessory;	// IMP=0x001000000019a131
- (id)_accessoryForIdentifier:(id)arg1 inHome:(id *)arg2;	// IMP=0x0010000000199858
- (id)getCurrentASRLanguages;	// IMP=0x001000000019970f
- (void)getHomeContext:(CDUnknownBlockType)arg1;	// IMP=0x0010000000199665
- (id)accessoriesWithPersonalRequestsEnabled;	// IMP=0x001000000019922c
- (id)_accessoryInfoForAccessory:(id)arg1;	// IMP=0x0010000000198b61
- (void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x0010000000198518
- (void)restartShareDeletion;	// IMP=0x0010000000198512
- (void)restartSharing;	// IMP=0x00100000001984ab
- (void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198435
- (void)getCurrentAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000198367
- (void)_onceSiriDataSharingAdjustment:(id)arg1;	// IMP=0x00100000001978a0
- (void)_siriDataSharingAdjustment:(id)arg1;	// IMP=0x00100000001977e5
- (void)setAllowHeySiriHomeKitSetting:(_Bool)arg1;	// IMP=0x00100000001977df
- (void)getHomeIdForAccessoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019767c
- (void)getVoiceSettingsForHomeMembers:(CDUnknownBlockType)arg1;	// IMP=0x00100000001973ce
- (void)settingsForMultiUserWithRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019727e
- (void)getCurrentHomeMemberIds:(CDUnknownBlockType)arg1;	// IMP=0x0010000000196deb
- (void)_setPreferredMediaUserForAccessory:(id)arg1;	// IMP=0x0010000000196654
- (void)_setPreferredMediaUserForAccessories:(id)arg1;	// IMP=0x00100000001962d9
- (id)preferredMediaUserInfo;	// IMP=0x00100000001961e6
- (id)infoForThisDevice;	// IMP=0x00100000001960a3
- (id)_homesWithMultiUserEnabled;	// IMP=0x0010000000195d2b
- (_Bool)_updateHomeUserSettings;	// IMP=0x00100000001948b0
- (id)_settingsForHomeUser:(id)arg1 forHome:(id)arg2;	// IMP=0x0010000000194594
- (_Bool)_allowExplicitContentSettingForUser:(id)arg1 forHome:(id)arg2;	// IMP=0x001000000019453b
- (void)_resolveSiriDataSharingStatusMismatch:(id)arg1;	// IMP=0x0010000000193e30
- (void)_siriDataSharingOptInStatusDidChange:(id)arg1;	// IMP=0x00100000001938b7
- (void)_logRelevantAnalyticsOnHomeUserSettingsUpdateForCurrentSettings:(id)arg1 allowVoiceIdSettingValue:(long long)arg2 isPrimaryUser:(_Bool)arg3;	// IMP=0x00100000001936fa
- (id)_currentHomeInfo;	// IMP=0x001000000019311a
- (id)_currentHome;	// IMP=0x0010000000192b8d
- (void)currentHomeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192abf
- (void)_updateHomeContext:(id)arg1;	// IMP=0x00100000001924f3
- (void)dealloc;	// IMP=0x0010000000192409
- (id)_homeManager;	// IMP=0x0010000000192315
- (void)startAcceptingCloudSharesForMultiUserService;	// IMP=0x001000000019230f
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001921d4
- (id)_initWithContext:(id)arg1;	// IMP=0x0010000000191e91
- (id)_init;	// IMP=0x0010000000191e37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
