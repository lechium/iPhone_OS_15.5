//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCRestrictionManager : NSObject
{
    NSMutableDictionary *_memberQueueRestrictions;	// 8 = 0x8
    NSMutableDictionary *_memberQueueSystemClientRestrictions;	// 16 = 0x10
    NSMutableDictionary *_memberQueueSystemUserSettings;	// 24 = 0x18
    NSMutableDictionary *_memberQueueSystemNamespacedUserSettings;	// 32 = 0x20
    NSMutableDictionary *_memberQueueUserClientRestrictions;	// 40 = 0x28
    NSMutableDictionary *_memberQueueUserUserSettings;	// 48 = 0x30
    NSMutableDictionary *_memberQueueUserNamespacedUserSettings;	// 56 = 0x38
    NSMutableDictionary *_memberQueueEffectiveUserSettings;	// 64 = 0x40
    NSMutableDictionary *_memberQueueSettingsEvents;	// 72 = 0x48
    NSArray *_memberQueueEffectiveWhitelistedAppsAndOptions;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_memberQueue;	// 88 = 0x58
    NSMutableDictionary *_memberQueueSystemProfileRestrictions;	// 96 = 0x60
    NSMutableDictionary *_memberQueueUserProfileRestrictions;	// 104 = 0x68
}

+ (_Bool)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1;	// IMP=0x00000000000c5d1d
+ (id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(_Bool)arg3 mayOpenFromUnmanagedToManaged:(_Bool)arg4 mayOpenFromManagedToUnmanaged:(_Bool)arg5;	// IMP=0x00000000000c5b45
+ (id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(_Bool)arg4 mayOpenFromUnmanagedToManaged:(_Bool)arg5 mayOpenFromManagedToUnmanaged:(_Bool)arg6 isAppBundleIDExemptBlock:(CDUnknownBlockType)arg7 isAppBundleIDAccountBasedBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000c58fb
+ (id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(_Bool)arg4 mayOpenFromUnmanagedToManaged:(_Bool)arg5 mayOpenFromManagedToUnmanaged:(_Bool)arg6 isAppBundleIDExemptBlock:(CDUnknownBlockType)arg7 isAppBundleIDAccountBasedBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000c56b4
+ (_Bool)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1;	// IMP=0x00000000000c566d
+ (_Bool)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1;	// IMP=0x00000000000c5640
+ (_Bool)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1;	// IMP=0x00000000000c5613
+ (_Bool)isInSingleAppModeWithSettingsDictionary:(id)arg1;	// IMP=0x00000000000c55e6
+ (int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2;	// IMP=0x00000000000c54f8
+ (_Bool)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;	// IMP=0x00000000000c51fd
+ (_Bool)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;	// IMP=0x00000000000c5068
+ (_Bool)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;	// IMP=0x00000000000c4ed3
+ (_Bool)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;	// IMP=0x00000000000c4bd9
+ (id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2;	// IMP=0x00000000000c3546
+ (id)applyRestrictions:(id)arg1 forFeature:(id)arg2 toParametersForBoolSetting:(id)arg3;	// IMP=0x00000000000c3379
+ (id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c32c5
+ (id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2;	// IMP=0x00000000000c3211
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c315d
+ (int)boolSettingForFeature:(id)arg1 outAsk:(_Bool *)arg2 withUserSettingDictionary:(id)arg3;	// IMP=0x00000000000c2fc1
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c2faa
+ (id)parametersForSetting:(id)arg1 ofType:(id)arg2 withUserSettingDictionary:(id)arg3;	// IMP=0x00000000000c2ee5
+ (id)parametersForUnionSetting:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c2ec6
+ (id)parametersForIntersectedSetting:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c2ea7
+ (id)parametersForValueSetting:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c2e88
+ (id)parametersForBoolSetting:(id)arg1 withUserSettingDictionary:(id)arg2;	// IMP=0x00000000000c2e69
+ (id)defaultUnionValuesForSetting:(id)arg1;	// IMP=0x00000000000c2d95
+ (id)defaultIntersectedValuesForSetting:(id)arg1;	// IMP=0x00000000000c2cc1
+ (id)minimumValueForSetting:(id)arg1;	// IMP=0x00000000000c2bed
+ (id)maximumValueForSetting:(id)arg1;	// IMP=0x00000000000c2b19
+ (id)defaultValueForSetting:(id)arg1;	// IMP=0x00000000000c2a45
+ (int)defaultBoolValueForSetting:(id)arg1 outAsk:(_Bool *)arg2;	// IMP=0x00000000000c29c7
+ (int)defaultBoolValueForSetting:(id)arg1;	// IMP=0x00000000000c29b3
+ (id)defaultParametersForUnionValuesSetting:(id)arg1;	// IMP=0x00000000000c2909
+ (id)defaultParametersForIntersectedValuesSetting:(id)arg1;	// IMP=0x00000000000c285f
+ (id)defaultParametersForValueSetting:(id)arg1;	// IMP=0x00000000000c27b5
+ (id)defaultParametersForBoolSetting:(id)arg1;	// IMP=0x00000000000c270b
+ (id)defaultSettings;	// IMP=0x00000000000c26b4
+ (_Bool)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;	// IMP=0x00000000000bda55
+ (_Bool)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;	// IMP=0x00000000000bd8c0
+ (_Bool)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;	// IMP=0x00000000000bd72b
+ (_Bool)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;	// IMP=0x00000000000bd596
+ (id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;	// IMP=0x00000000000bd4e2
+ (id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;	// IMP=0x00000000000bd42e
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;	// IMP=0x00000000000bd39f
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;	// IMP=0x00000000000bd2eb
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;	// IMP=0x00000000000bd1c2
+ (id)addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2;	// IMP=0x00000000000bccb6
+ (id)_addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;	// IMP=0x00000000000bc980
+ (id)filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2;	// IMP=0x00000000000bc7b1
+ (id)_filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;	// IMP=0x00000000000bc630
+ (id)filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2;	// IMP=0x00000000000bc456
+ (id)_filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;	// IMP=0x00000000000bc13e
+ (id)grandfatheredRestrictionPayloadKeysDictionary;	// IMP=0x00000000000bc061
+ (id)_payloadKeysDictionaryAfterAddingFeature:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;	// IMP=0x00000000000bbe23
+ (id)_lockedDownRestrictionPayloadKeysWithPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2;	// IMP=0x00000000000bbb55
+ (id)effectiveGrandfatheredRestrictionPayloadKeysDictionary;	// IMP=0x00000000000bb888
+ (id)allowedGrandfatheredRestrictionPayloadKeysDictionary;	// IMP=0x00000000000bb7f5
+ (id)filterGrandfatheredRestrictionsIfNeededFromRestrictions:(id)arg1;	// IMP=0x00000000000bb5bd
+ (id)systemMetadataValueForKey:(id)arg1;	// IMP=0x00000000000bb4b8
+ (id)restrictionKeys;	// IMP=0x00000000000bb3e7
+ (id)filterUserSettingsForPublicUse:(id)arg1;	// IMP=0x00000000000bb351
+ (id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2;	// IMP=0x00000000000ba510
+ (id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2;	// IMP=0x00000000000b980e
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;	// IMP=0x00000000000b9705
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(_Bool *)arg7 outError:(id *)arg8;	// IMP=0x00000000000b8e7a
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x00000000000b8e3f
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(_Bool *)arg3 outError:(id *)arg4;	// IMP=0x00000000000b7577
+ (id)sharedManager;	// IMP=0x00000000000b618e
+ (id)defaultRestrictionFilePath;	// IMP=0x00000000000b6104
+ (id)explicitlyRestrictedEphemeralMultiUserApps;	// IMP=0x0000000000021515
+ (id)explicitlyRestrictedAppsBySetting;	// IMP=0x0000000000020ff8
- (void).cxx_destruct;	// IMP=0x00000000000c5efc
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserProfileRestrictions; // @synthesize memberQueueUserProfileRestrictions=_memberQueueUserProfileRestrictions;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemProfileRestrictions; // @synthesize memberQueueSystemProfileRestrictions=_memberQueueSystemProfileRestrictions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSettingsEvents; // @synthesize memberQueueSettingsEvents=_memberQueueSettingsEvents;
@property(retain, nonatomic) NSMutableDictionary *memberQueueEffectiveUserSettings; // @synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserNamespacedUserSettings; // @synthesize memberQueueUserNamespacedUserSettings=_memberQueueUserNamespacedUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserUserSettings; // @synthesize memberQueueUserUserSettings=_memberQueueUserUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserClientRestrictions; // @synthesize memberQueueUserClientRestrictions=_memberQueueUserClientRestrictions;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemNamespacedUserSettings; // @synthesize memberQueueSystemNamespacedUserSettings=_memberQueueSystemNamespacedUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemUserSettings; // @synthesize memberQueueSystemUserSettings=_memberQueueSystemUserSettings;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemClientRestrictions; // @synthesize memberQueueSystemClientRestrictions=_memberQueueSystemClientRestrictions;
@property(retain, nonatomic) NSMutableDictionary *memberQueueRestrictions; // @synthesize memberQueueRestrictions=_memberQueueRestrictions;
@property(retain, nonatomic) NSArray *memberQueueEffectiveWhitelistedAppsAndOptions; // @synthesize memberQueueEffectiveWhitelistedAppsAndOptions=_memberQueueEffectiveWhitelistedAppsAndOptions;
- (int)appWhitelistState;	// IMP=0x00000000000c2636
- (_Bool)isUnionSettingLockedDownByRestrictions:(id)arg1;	// IMP=0x00000000000c2512
- (_Bool)isIntersectionSettingLockedDownByRestrictions:(id)arg1;	// IMP=0x00000000000c23ee
- (_Bool)isValueSettingLockedDownByRestrictions:(id)arg1;	// IMP=0x00000000000c2104
- (_Bool)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2;	// IMP=0x00000000000c1f77
- (_Bool)isBoolSettingLockedDownByRestrictions:(id)arg1;	// IMP=0x00000000000c1e48
- (_Bool)_isBoolSettingLockedDown:(id)arg1;	// IMP=0x00000000000c1d6b
- (_Bool)isSettingLockedDownByRestrictions:(id)arg1;	// IMP=0x00000000000c1cdd
- (id)profileIdentifiersRestrictingSettings:(id)arg1;	// IMP=0x00000000000c143d
- (id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;	// IMP=0x00000000000c1389
- (id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;	// IMP=0x00000000000c12d5
- (id)effectiveUnionValuesForSetting:(id)arg1;	// IMP=0x00000000000c127b
- (id)effectiveIntersectedValuesForSetting:(id)arg1;	// IMP=0x00000000000c1221
- (id)effectiveValueForSetting:(id)arg1;	// IMP=0x00000000000c11c7
- (int)effectiveRestrictedBoolForSetting:(id)arg1 configurationUUID:(id)arg2;	// IMP=0x00000000000c1146
- (int)effectiveRestrictedBoolForSetting:(id)arg1;	// IMP=0x00000000000c1132
- (id)unionValuesSettingForFeature:(id)arg1;	// IMP=0x00000000000c10a5
- (id)intersectedValuesSettingForFeature:(id)arg1;	// IMP=0x00000000000c1018
- (id)valueSettingForFeature:(id)arg1;	// IMP=0x00000000000c0f8b
- (int)boolSettingForFeature:(id)arg1;	// IMP=0x00000000000c0f0a
- (id)effectiveParametersForUnionSetting:(id)arg1;	// IMP=0x00000000000c0e85
- (id)effectiveParametersForIntersectedSetting:(id)arg1;	// IMP=0x00000000000c0e00
- (id)effectiveParametersForValueSetting:(id)arg1;	// IMP=0x00000000000c0d7b
- (id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2;	// IMP=0x00000000000c0953
- (id)effectiveParametersForBoolSetting:(id)arg1;	// IMP=0x00000000000c08ce
@property(readonly, copy, nonatomic) NSDictionary *effectiveUserSettings;
@property(readonly, copy, nonatomic) NSDictionary *userUserSettings;
@property(readonly, copy, nonatomic) NSDictionary *systemUserSettings;
@property(readonly, copy, nonatomic) NSDictionary *userSettings;
- (id)_settingsEventFromProcess:(id)arg1 withTag:(id)arg2;	// IMP=0x00000000000c01b0
- (id)_updatedDomainSettingsEvents:(id)arg1 fromPreviousSettings:(id)arg2 toNewSettings:(id)arg3 sender:(id)arg4;	// IMP=0x00000000000bffec
- (_Bool)applyConfiguration:(id)arg1 toDomain:(unsigned long long)arg2 inNamespace:(id)arg3 fromSender:(id)arg4;	// IMP=0x00000000000bfa89
- (id)exchangeUUIDsRestrictingSettings:(id)arg1;	// IMP=0x00000000000bed13
- (id)allClientUUIDsForClientType:(id)arg1;	// IMP=0x00000000000be7c0
- (id)appsAndOptionsForClientUUID:(id)arg1;	// IMP=0x00000000000be641
- (id)memberQueueAppsAndOptionsForClientUUID:(id)arg1;	// IMP=0x00000000000be5e7
- (id)userInfoForClientUUID:(id)arg1;	// IMP=0x00000000000be468
- (id)memberQueueUserInfoForClientUUID:(id)arg1;	// IMP=0x00000000000be40e
- (id)clientRestrictionsForClientUUID:(id)arg1;	// IMP=0x00000000000be28c
- (id)memberQueueClientTypeForClientUUID:(id)arg1;	// IMP=0x00000000000be232
- (id)memberQueueClientRestrictionsForClientUUID:(id)arg1;	// IMP=0x00000000000be1d8
- (id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1;	// IMP=0x00000000000be118
- (id)userClientRestrictions;	// IMP=0x00000000000bdd1f
- (id)systemClientRestrictions;	// IMP=0x00000000000bdbea
- (id)unionValuesForFeature:(id)arg1;	// IMP=0x00000000000bd135
- (id)intersectedValuesForFeature:(id)arg1;	// IMP=0x00000000000bd0a8
- (id)objectForFeature:(id)arg1;	// IMP=0x00000000000bd01b
- (id)valueForFeature:(id)arg1;	// IMP=0x00000000000bcf8e
- (int)restrictedBoolForFeature:(id)arg1;	// IMP=0x00000000000bcf0d
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(_Bool *)arg2 outError:(id *)arg3;	// IMP=0x00000000000b74df
- (id)description;	// IMP=0x00000000000b7429
@property(readonly, copy, nonatomic) NSDictionary *combinedProfileRestrictions;
@property(readonly, nonatomic) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property(readonly, nonatomic) NSMutableDictionary *memberQueueCombinedSystemProfileRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *userProfileRestrictions;
@property(readonly, copy, nonatomic) NSDictionary *systemProfileRestrictions;
@property(readonly, nonatomic) NSDictionary *currentRestrictions;
@property(readonly, nonatomic) NSDictionary *defaultSettings;
@property(readonly, nonatomic) NSDictionary *defaultRestrictions;
- (void)invalidateSettings;	// IMP=0x00000000000b6367
- (void)invalidateRestrictions;	// IMP=0x00000000000b627d
- (id)init;	// IMP=0x00000000000b61f9
- (_Bool)allowedToRunAppWithBundleID:(id)arg1;	// IMP=0x0000000000021f53
- (id)singleAppModeBundleID;	// IMP=0x0000000000021eb4
- (_Bool)isInSingleAppMode;	// IMP=0x0000000000021e5d
- (void)clearEffectiveWhitelistedAppsAndOptionsCache;	// IMP=0x0000000000021dd4
- (id)effectiveWhitelistedAppsAndOptions;	// IMP=0x0000000000021c7a
- (id)parentalControlsWhitelistedAppBundleIDs;	// IMP=0x0000000000021c0c
- (id)restrictionEnforcedWhitelistedAppBundleIDs;	// IMP=0x0000000000021b9e
- (id)effectiveWhitelistedAppBundleIDs;	// IMP=0x0000000000021b30
- (id)parentalControlsBlockedAppBundleIDs;	// IMP=0x0000000000021acf
- (id)restrictionEnforcedBlockedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1;	// IMP=0x0000000000021a00
- (id)effectiveBlockedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1;	// IMP=0x0000000000021907
- (id)restrictedAppBundleIDsExcludingRemovedSystemApps:(_Bool)arg1;	// IMP=0x00000000000215d8
- (id)restrictedAppBundleIDs;	// IMP=0x0000000000020fe4

@end

