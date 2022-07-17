//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFHomeKitSettingsVendor-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFUserNameFormatter, HMHome, HMSettings, HMUser, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject;

@interface HFUserItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying>
{
    _Bool _isItemGroup;	// 8 = 0x8
    _Bool _isContainedWithinItemGroup;	// 9 = 0x9
    HMHome *_home;	// 16 = 0x10
    HMUser *_user;	// 24 = 0x18
    unsigned long long _numberOfItemsContainedWithinGroup;	// 32 = 0x20
    NSUUID *_uniqueIdentifier;	// 40 = 0x28
    HFUserNameFormatter *_userNameFormatter;	// 48 = 0x30
    HMHome *_hf_home;	// 56 = 0x38
}

+ (id)_fakeHMSettings;	// IMP=0x000000000018916e
+ (void)set_fakeHMSettings:(id)arg1;	// IMP=0x000000000018915c
- (void).cxx_destruct;	// IMP=0x000000000018bedc
@property(retain, nonatomic) HMHome *hf_home; // @synthesize hf_home=_hf_home;
@property(readonly, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup; // @synthesize numberOfItemsContainedWithinGroup=_numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup; // @synthesize isContainedWithinItemGroup=_isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup; // @synthesize isItemGroup=_isItemGroup;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
- (id)incrementAddSceneButtonPresentedCount;	// IMP=0x000000000018bd91
- (_Bool)shouldHideAddSceneButton;	// IMP=0x000000000018bd6a
- (id)setDismissAccessoryFirmwareUpdateOnboarding:(_Bool)arg1;	// IMP=0x000000000018bd46
- (_Bool)hasDismissedAccessoryFirmwareUpdateOnboarding;	// IMP=0x000000000018bd1f
- (id)setDismissAccessCodeOnboarding:(_Bool)arg1;	// IMP=0x000000000018bcfb
- (_Bool)hasDismissedAccessCodeOnboarding;	// IMP=0x000000000018bcd4
- (id)setDismissWalletKeyExpressModeOnboarding:(_Bool)arg1 forWalletKeyUUID:(id)arg2;	// IMP=0x000000000018b61c
- (id)hasDismissedWalletKeyExpressModeOnboardingOnThisDevice;	// IMP=0x000000000018b32b
- (_Bool)_hasDismissedWalletKeyExpressModeOnboarding;	// IMP=0x000000000018b304
- (_Bool)isAnnounceEnabled;	// IMP=0x000000000018b26b
- (id)setEnableAnnounce:(_Bool)arg1;	// IMP=0x000000000018b093
- (id)setDismissedWelcomeUIBanner:(_Bool)arg1;	// IMP=0x000000000018afe2
- (_Bool)hasDismissedWelcomeUIBanner;	// IMP=0x000000000018af2a
- (_Bool)hasCompletedNonOwnerUserHomeSwitchingUI;	// IMP=0x000000000018af06
- (id)setCompletedNonOwnerUserHomeSwitchingUI:(_Bool)arg1;	// IMP=0x000000000018aee2
- (_Bool)hasDismissedUserSplitMediaAccountWarning;	// IMP=0x000000000018aebb
- (id)setDismissUserSplitMediaAccountWarning:(_Bool)arg1;	// IMP=0x000000000018ae97
- (_Bool)isAllowiTunesAccountEnabled;	// IMP=0x000000000018ae73
- (id)setAllowiTunesAccount:(_Bool)arg1;	// IMP=0x000000000018ae52
- (_Bool)isPlaybackInfluencesForYouEnabled;	// IMP=0x000000000018ae2e
- (id)setPlaybackInfluencesForYou:(_Bool)arg1;	// IMP=0x000000000018ae0d
- (_Bool)isIdentifyVoiceEnabled;	// IMP=0x000000000018ade9
- (id)setEnableIdentifyVoice:(_Bool)arg1;	// IMP=0x000000000018adc8
- (id)setDismissCameraRecordingReminderBanner:(_Bool)arg1;	// IMP=0x000000000018ada4
- (_Bool)hasDismissedCameraRecordingReminderBanner;	// IMP=0x000000000018ad7d
- (id)setDismissCameraRecordingOnboarding:(_Bool)arg1;	// IMP=0x000000000018ad59
- (_Bool)hasDismissedCameraRecordingOnboarding;	// IMP=0x000000000018ad32
- (id)setDismissNaturalLightingOnboarding:(_Bool)arg1;	// IMP=0x000000000018ad0e
- (_Bool)hasDismissedNaturalLightingOnboarding;	// IMP=0x000000000018ace7
- (id)setDismissTVViewingProfilesReminderBanner:(_Bool)arg1;	// IMP=0x000000000018acc3
- (_Bool)hasDismissedTVViewingProfilesReminderBanner;	// IMP=0x000000000018ac9c
- (id)setDismissTVViewingProfilesOnboarding:(_Bool)arg1;	// IMP=0x000000000018ac78
- (_Bool)hasDismissedTVViewingProfilesOnboarding;	// IMP=0x000000000018ac51
- (id)setDismissHomeTheaterOnboarding:(_Bool)arg1;	// IMP=0x000000000018ac2d
- (_Bool)hasDismissedHomeTheaterOnboarding;	// IMP=0x000000000018ac06
- (id)setDismissAnnounceOnboarding:(_Bool)arg1;	// IMP=0x000000000018abe2
- (_Bool)hasDismissedAnnounceOnboarding;	// IMP=0x000000000018abbb
- (id)setDismissIdentifyVoiceReminderBanner:(_Bool)arg1;	// IMP=0x000000000018ab97
- (_Bool)hasDismissedIdentifyVoiceReminderBanner;	// IMP=0x000000000018ab70
- (id)setDismissIdentifyVoiceOnboarding:(_Bool)arg1;	// IMP=0x000000000018ab4c
- (_Bool)hasDismissedVoiceProfileOnboarding;	// IMP=0x000000000018ab25
- (void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2;	// IMP=0x000000000018a98d
- (_Bool)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x000000000018a6b5
- (id)_incrementSettingsValueForKeyPath:(id)arg1 stepValue:(long long)arg2 maximumValue:(long long)arg3 settingsType:(unsigned long long)arg4;	// IMP=0x000000000018a52a
- (_Bool)_isSettingsValueForKeyPath:(id)arg1 atMaximumValue:(long long)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x000000000018a4cd
- (id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x000000000018a3cd
- (_Bool)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x000000000018a301
- (id)_setSettingsValueForKeyPath:(id)arg1 settingsType:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000189f82
- (id)_getSettingsValueForKeyPath:(id)arg1 defaultValue:(id)arg2 settingsType:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000189b58
- (_Bool)_hasValidPrivateSettings;	// IMP=0x0000000000189af5
- (id)_privateSettings;	// IMP=0x0000000000189a4e
- (id)_privateSettingsValueManager;	// IMP=0x0000000000189958
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly) HMSettings *settings;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
- (id)_accessDescription;	// IMP=0x00000000001894a9
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000001892e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018923a
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) unsigned long long nameStyle;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;	// IMP=0x0000000000188ffe
- (id)init;	// IMP=0x0000000000188f49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
