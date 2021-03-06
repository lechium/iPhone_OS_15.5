//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSNumber, NSString, SUScriptColor, SUScriptDictionary;

@interface SUScriptDevice
{
    NSMutableArray *_scriptFunctions;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x00000000000d5eeb
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x00000000000d5e22
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x00000000000d5dce
- (id)scriptAttributeKeys;	// IMP=0x00000000000d5e88
- (id)attributeKeys;	// IMP=0x00000000000d5e76
- (void)_removeScriptFunction:(id)arg1;	// IMP=0x00000000000d5d64
- (long long)_deviceCapabilityForString:(id)arg1;	// IMP=0x00000000000d5cb4
- (void)_addScriptFunction:(id)arg1;	// IMP=0x00000000000d5c2f
- (void)_autoDownloadKindsChangedNotification:(id)arg1;	// IMP=0x00000000000d5c14
- (void)_accessibilitySettingsChangedNotification:(id)arg1;	// IMP=0x00000000000d5bf9
@property(readonly) NSString *UTIText;
@property(readonly) NSString *UTIMovie;
@property(readonly) NSString *UTIImage;
@property(readonly) NSString *restrictionYouTubeAllowed;
@property(readonly) NSString *restrictionVideoConferencingAllowed;
@property(readonly) NSString *restrictionTypeTelevision;
@property(readonly) NSString *restrictionTypeMovies;
@property(readonly) NSString *restrictionTypeApplications;
@property(readonly) NSString *restrictionScreenShotAllowed;
@property(readonly) NSString *restrictionSafariAllowed;
@property(readonly) NSString *restrictionMultiplayerGamingAllowed;
@property(readonly) NSString *restrictionITunesSocialAllowed;
@property(readonly) NSString *restrictionITunesAllowed;
- (id)restrictionExplicitMedia;	// IMP=0x00000000000d5b22
@property(readonly) NSString *restrictionCellularHDUploadsAllowed;
@property(readonly) NSString *restrictionCameraAllowed;
@property(readonly) NSString *restrictionBookStoreEroticaAllowed;
@property(readonly) NSString *restrictionBookStoreAllowed;
@property(readonly) NSString *restrictionAppRemovalAllowed;
@property(readonly) NSString *restrictionAppInstallationAllowed;
@property(readonly) NSString *restrictionAllowVoiceDialing;
@property(readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property(readonly) NSString *restrictionAccountModificationAllowed;
@property(readonly) long long restrictionBoolYes;
@property(readonly) long long restrictionBoolNoData;
@property(readonly) long long restrictionBoolNo;
@property(readonly) NSString *freeSpaceOptionEffortLevel;
@property(readonly) long long freeSpaceEffortLevelPromptUser;
@property(readonly) long long freeSpaceEffortLevelManualSpaceManagement;
@property(readonly) long long freeSpaceEffortLevelAutomaticOnly;
@property(readonly) long long freeSpaceEffortLevelDoNothing;
@property(readonly) NSString *orientationStringPortraitUpsideDown;
@property(readonly) NSString *orientationStringPortrait;
@property(readonly) NSString *orientationStringLandscapeRight;
@property(readonly) NSString *orientationStringLandscapeLeft;
@property(readonly) long long networkTypeWiFi;
@property(readonly) long long networkType9G;
@property(readonly) long long networkType8G;
@property(readonly) long long networkType7G;
@property(readonly) long long networkType6G;
@property(readonly) long long networkType5G;
@property(readonly) long long networkType4G;
@property(readonly) long long networkType3G;
@property(readonly) long long networkType2G;
@property(readonly) long long networkTypeNone;
@property(readonly) long long hardwareTypeWildcatK48;
@property(readonly) long long hardwareTypeUnknown;
@property(readonly) long long hardwareTypeIPodTouchN81a;
@property(readonly) long long hardwareTypeIPodTouchN81;
@property(readonly) long long hardwareTypeIPodTouchN18;
@property(readonly) long long hardwareTypeIPodTouchN72;
@property(readonly) long long hardwareTypeIPodTouchN45;
@property(readonly) long long hardwareTypeIPhoneN94;
@property(readonly) long long hardwareTypeIPhoneN92;
@property(readonly) long long hardwareTypeIPhoneN90;
@property(readonly) long long hardwareTypeIPhoneN88;
@property(readonly) long long hardwareTypeIPhoneN82;
@property(readonly) long long hardwareTypeIPhoneM68;
@property(readonly) long long hardwareTypeIPadK95;
@property(readonly) long long hardwareTypeIPadK94;
@property(readonly) long long hardwareTypeIPadK93a;
@property(readonly) long long hardwareTypeIPadK93;
@property(readonly) long long hardwareTypeIPadJ2a;
@property(readonly) long long hardwareTypeIPadJ2;
@property(readonly) long long hardwareTypeIPadJ1;
@property(readonly) long long hardwareTypeAppleTVK66;
@property(readonly) long long hardwareTypeAppleTVJ33;
@property(readonly) NSString *capabilityNameWiFi;
@property(readonly) NSString *capabilityNamePodcasts;
@property(readonly) NSString *capabilityNameHDVideo720p;
@property(readonly) NSString *capabilityNameHDVideo1080p;
@property(readonly) NSString *capabilityNameHDVideo;
@property(readonly) NSString *capabilityNameExplicitMedia;
@property(readonly) NSString *capabilityNameEmail;
- (void)setDiskUsageDictionary:(id)arg1;	// IMP=0x00000000000d57fa
@property(readonly) id needsToneRegrantOption;
@property(readonly) NSNumber *metricsPostFrequencyOverride;
@property(readonly) NSNumber *mainScreenScale;
@property(readonly) long long hardwareType;
@property(readonly) SUScriptDictionary *diskUsageDictionary;
@property(readonly) NSNumber *diskSpaceAvailable;
@property(readonly) unsigned int deviceTypeIdentifier;
- (id)_className;	// IMP=0x00000000000d50d9
@property(readonly) NSArray *automaticDownloadMediaTypes;
@property(readonly) long long activeNetworkType;
@property(readonly) id accessibilityUseDarkerKeyboard;
@property(readonly) SUScriptColor *accessibilitySingleColor;
@property(readonly) id accessibilitySingleColorSelected;
@property(readonly) id accessibilityMotionAutoPlayVideo;
@property(readonly) id accessibilityEnhanceBackgroundContrast;
@property(readonly) id accessibilityDarkenSystemColors;
@property(readonly) id accessibilityButtonShapesEnabled;
@property(readonly) id accessibilityBoldTextEnabled;
- (id)valueForRestriction:(id)arg1;	// IMP=0x00000000000d4e14
- (id)UTIForURL:(id)arg1;	// IMP=0x00000000000d4d70
- (void)setValueForRestriction:(id)arg1 enabled:(id)arg2;	// IMP=0x00000000000d4cd6
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;	// IMP=0x00000000000d4ab4
- (id)restrictionLevelForType:(id)arg1;	// IMP=0x00000000000d49f6
- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000000000d46fd
- (id)isRestrictionLockedDown:(id)arg1;	// IMP=0x00000000000d4679
- (id)hasCapability:(id)arg1;	// IMP=0x00000000000d44fd
- (id)getMachineIdentifierForAccountIdentifier:(id)arg1;	// IMP=0x00000000000d43b4
- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(_Bool)arg2;	// IMP=0x00000000000d424e
- (long long)boolValueForRestriction:(id)arg1;	// IMP=0x00000000000d41db
- (void)dealloc;	// IMP=0x00000000000d40a5
- (id)init;	// IMP=0x00000000000d3f64

@end

