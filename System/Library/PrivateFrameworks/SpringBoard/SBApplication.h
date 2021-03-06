//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBHApplication-Protocol.h>
#import <SpringBoard/UISApplicationStateServiceDataSource-Protocol.h>
#import <SpringBoard/XBApplicationSnapshotManifestDelegate-Protocol.h>

@class FBApplicationProcess, FBProcessExitContext, FBSApplicationDataStore, NSArray, NSDate, NSHashTable, NSMapTable, NSMutableDictionary, NSString, NSURL, NSUserDefaults, SBApplicationInfo, SBApplicationProcessState, SBApplicationSupportServiceRequestContext, SBApplicationWakeScheduler, XBApplicationSnapshotManifest;

@interface SBApplication : NSObject <XBApplicationSnapshotManifestDelegate, SBHApplication, UISApplicationStateServiceDataSource, BSDescriptionProviding>
{
    FBApplicationProcess *_process;	// 8 = 0x8
    FBSApplicationDataStore *_dataStore;	// 16 = 0x10
    NSUserDefaults *_lazy_defaults;	// 24 = 0x18
    XBApplicationSnapshotManifest *_synchronized_snapshotManifest;	// 32 = 0x20
    SBApplicationProcessState *_threadUnsafe_processState;	// 40 = 0x28
    FBProcessExitContext *_lastExitContext;	// 48 = 0x30
    unsigned long long _displayedLaunchAlerts;	// 56 = 0x38
    SBApplicationSupportServiceRequestContext *_initializationContext;	// 64 = 0x40
    unsigned int _isRecentlyUpdated:3;	// 72 = 0x48
    unsigned int _isNewlyInstalled:3;	// 72 = 0x48
    _Bool _launchWillBePrevented;	// 73 = 0x49
    _Bool _uninstalled;	// 74 = 0x4a
    unsigned int _hasBadgeValue:3;	// 75 = 0x4b
    unsigned int _dataFlags:8;	// 76 = 0x4c
    _Bool _dataFlagsIsSet;	// 77 = 0x4d
    unsigned int _doingBackgroundNetworking:16;	// 78 = 0x4e
    _Bool _hasShownDataPlanAlertSinceLock;	// 80 = 0x50
    NSHashTable *_statusBarStyleOverridesAssertions;	// 88 = 0x58
    NSMapTable *_statusBarStyleOverridesAssertionsByStyleOverride;	// 96 = 0x60
    NSMutableDictionary *_suppressVolumeHUDCategoriesBySceneIdentifier;	// 104 = 0x68
    int _showsProgressCount;	// 112 = 0x70
    _Bool _isRestoringApplicationFromHiding;	// 116 = 0x74
    int _applicationRestorationCheckState;	// 120 = 0x78
    SBApplicationWakeScheduler *_legacyVOIPPeriodicWakeScheduler;	// 128 = 0x80
    _Bool _isPlayingAudio;	// 136 = 0x88
    _Bool _isNowRecordingApplication;	// 137 = 0x89
    _Bool _isRecordingAudio;	// 138 = 0x8a
    _Bool _isConnectedToExternalAccessory;	// 139 = 0x8b
    unsigned long long _failedAutoLaunchCountForVOIP;	// 144 = 0x90
    unsigned long long _failedLaunchCount;	// 152 = 0x98
    NSString *_bundleIdentifier;	// 160 = 0xa0
    SBApplicationInfo *_appInfo;	// 168 = 0xa8
    long long _appSnapshotSequenceID;	// 176 = 0xb0
    _Bool _calculatedSupportedTypes;	// 184 = 0xb8
    unsigned long long _supportedTypes;	// 192 = 0xc0
    long long _defaultClassicModeOverride;	// 200 = 0xc8
    long long _currentClassicMode;	// 208 = 0xd0
}

+ (id)_appStateKeysToPrefetch;	// IMP=0x0000000000165564
+ (id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg1 classicMode:(long long)arg2;	// IMP=0x00000000000de850
+ (unsigned long long)_niceScreenTypeForClassicType:(unsigned long long)arg1 matchingAValidDisplayZoomModeOnScreenType:(unsigned long long)arg2;	// IMP=0x00000000000df984
+ (unsigned long long)_canonicalScreenTypeForClassicMode:(long long)arg1;	// IMP=0x00000000000df8c1
+ (long long)_classicModeForLaunchingSize:(struct CGSize)arg1;	// IMP=0x00000000000e2ad4
+ (struct CGSize)_defaultLaunchingSizeForDisplayConfiguration:(id)arg1 classicMode:(long long)arg2;	// IMP=0x00000000000e28d0
+ (id)snapshotSortDescriptorForCustomSafeAreaInsets:(id)arg1;	// IMP=0x00000000003797bc
+ (id)snapshotSortDescriptorForUIUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000003796bd
+ (id)snapshotSortDescriptorForCreationDate;	// IMP=0x000000000002af85
+ (id)snapshotSortDescriptorForRequiredOSVersion:(id)arg1;	// IMP=0x000000000002aead
+ (id)snapshotSortDescriptorForContentTypeMask;	// IMP=0x000000000002ae83
+ (id)snapshotSortDescriptorForInterfaceOrientationMask:(unsigned long long)arg1;	// IMP=0x000000000002ad3d
+ (id)snapshotSortDescriptorForStatusBarStateMask:(unsigned long long)arg1;	// IMP=0x000000000002ada9
+ (id)snapshotSortDescriptorPreferringProtectedContent;	// IMP=0x000000000002af5b
+ (id)snapshotSortDescriptorForImageScale:(double)arg1;	// IMP=0x000000000002ae15
+ (id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg1;	// IMP=0x0000000000379206
+ (id)snapshotSortDescriptorForScheme:(id)arg1;	// IMP=0x000000000002ac8f
+ (id)snapshotSortDescriptorForNames:(id)arg1;	// IMP=0x000000000002abe1
+ (id)snapshotSortDescriptorsForNames:(id)arg1 scheme:(id)arg2 imageScale:(double)arg3 userInterfaceStyle:(long long)arg4 statusBarStateMask:(unsigned long long)arg5 interfaceOrientationMask:(unsigned long long)arg6 requiredOSVersion:(id)arg7;	// IMP=0x0000000000378b89
+ (id)_deviceSafeAreaInsets;	// IMP=0x000000000055931d
+ (void)_reingestStaticDefaultImagesForAllApps;	// IMP=0x000000000055ac69
+ (void)_markAllManifestsForReingestion;	// IMP=0x000000000055ab0d
- (void).cxx_destruct;	// IMP=0x0000000000166a71
@property(retain, getter=_internalProcessState, setter=_setInternalProcessState:) SBApplicationProcessState *internalProcessState; // @synthesize internalProcessState=_threadUnsafe_processState;
@property(nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_isConnectedToExternalAccessory;
@property(nonatomic, getter=isNowRecordingApplication) _Bool nowRecordingApplication; // @synthesize nowRecordingApplication=_isNowRecordingApplication;
@property(nonatomic, getter=isPlayingAudio) _Bool playingAudio; // @synthesize playingAudio=_isPlayingAudio;
@property(nonatomic) unsigned long long failedAutoLaunchCountForVOIP; // @synthesize failedAutoLaunchCountForVOIP=_failedAutoLaunchCountForVOIP;
@property(nonatomic) _Bool hasShownDataPlanAlertSinceLock; // @synthesize hasShownDataPlanAlertSinceLock=_hasShownDataPlanAlertSinceLock;
@property(nonatomic, getter=isRestoringIcon) _Bool restoringIcon; // @synthesize restoringIcon=_isRestoringApplicationFromHiding;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long failedLaunchCount; // @synthesize failedLaunchCount=_failedLaunchCount;
@property(readonly, nonatomic) FBProcessExitContext *lastExitContext; // @synthesize lastExitContext=_lastExitContext;
- (void)_noteIconDataSourceDidChange;	// IMP=0x00000000001665ec
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001664b4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000166464
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000048d42
- (id)succinctDescription;	// IMP=0x0000000000048cf2
- (void)possibleUserTapDidCancel;	// IMP=0x0000000000166452
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;	// IMP=0x0000000000166440
- (id)iTunesCategoriesOrderedByRelevancyForIcon:(id)arg1;	// IMP=0x00000000001663f0
- (id)tagsForIcon:(id)arg1;	// IMP=0x00000000001663a0
- (id)folderFallbackTitleForIcon:(id)arg1;	// IMP=0x000000000016630a
- (id)folderTitleOptionsForIcon:(id)arg1;	// IMP=0x00000000001662ba
- (_Bool)isTimedOutForIcon:(id)arg1;	// IMP=0x0000000000166276
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;	// IMP=0x0000000000166045
- (_Bool)iconDisallowsLaunchForObscuredReason:(id)arg1;	// IMP=0x0000000000166033
- (_Bool)iconAllowsLaunch:(id)arg1;	// IMP=0x0000000000066480
- (_Bool)iconCompleteUninstall:(id)arg1;	// IMP=0x0000000000165fdd
- (_Bool)iconSupportsUninstall:(id)arg1;	// IMP=0x0000000000165fcb
- (unsigned long long)supportedGridSizeClassesForIcon:(id)arg1;	// IMP=0x0000000000165fc0
- (long long)labelAccessoryTypeForIcon:(id)arg1;	// IMP=0x0000000000165f15
- (id)formattedAccessoryStringForIcon:(id)arg1;	// IMP=0x0000000000165ebe
- (id)badgeNumberOrStringForIcon:(id)arg1;	// IMP=0x0000000000165dc2
- (long long)accessoryTypeForIcon:(id)arg1;	// IMP=0x0000000000165d23
- (_Bool)iconCanTightenLabel:(id)arg1;	// IMP=0x000000000008379c
- (_Bool)iconCanTruncateLabel:(id)arg1;	// IMP=0x0000000000165d1b
- (_Bool)canGenerateIconsInBackgroundForIcon:(id)arg1;	// IMP=0x0000000000165d13
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;	// IMP=0x0000000000165ca7
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;	// IMP=0x0000000000165c3e
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (unsigned long long)priorityForIcon:(id)arg1;	// IMP=0x0000000000165c21
- (id)icon:(id)arg1 displayNameForObscuredDisabledLaunchForLocation:(id)arg2;	// IMP=0x0000000000165b77
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;	// IMP=0x0000000000165b65
- (void)uninstall;	// IMP=0x0000000000165b12
- (void)launchFromIcon:(id)arg1 location:(id)arg2 context:(id)arg3;	// IMP=0x00000000001658e3
- (_Bool)isLaunchDisallowedForObscuredReason;	// IMP=0x00000000001658d1
- (void)_invalidateStatusBarStyleOverridesAssertions;	// IMP=0x00000000000bd5d7
- (void)_lockStateDidChange:(id)arg1;	// IMP=0x0000000000165815
- (void)_updateRecentlyUpdatedTimer;	// IMP=0x0000000000165613
- (void)_setRecentlyUpdated:(_Bool)arg1;	// IMP=0x00000000000848d7
- (_Bool)_isRecentlyUpdated;	// IMP=0x00000000000836e4
- (void)_setNewlyInstalled:(_Bool)arg1;	// IMP=0x0000000000084829
- (_Bool)_isNewlyInstalled;	// IMP=0x000000000008362f
- (void)purgeCaches;	// IMP=0x00000000000bd586
- (void)_updateProcess:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000075cb9
- (void)_didSuspend;	// IMP=0x0000000000078ef5
- (void)_resetDataUsage;	// IMP=0x0000000000079030
- (void)_setDataUsage:(int)arg1;	// IMP=0x00000000000bd386
- (void)_didExitWithContext:(id)arg1;	// IMP=0x00000000000bcf72
- (void)_processDidLaunch:(id)arg1;	// IMP=0x0000000000084ccb
- (void)_processWillLaunch:(id)arg1;	// IMP=0x00000000000844ac
- (void)_noteProcess:(id)arg1 didChangeToState:(id)arg2;	// IMP=0x0000000000075c1c
- (id)_initializationContext;	// IMP=0x0000000000165489
@property(retain, nonatomic) SBApplicationInfo *info; // @synthesize info=_appInfo;
- (void)_setApplicationRestorationCheckState:(int)arg1;	// IMP=0x00000000001653e6
- (int)_applicationRestorationCheckState;	// IMP=0x00000000001653dd
- (void)_setLaunchPrevented:(_Bool)arg1;	// IMP=0x00000000001653c8
- (id)_snapshotManifest;	// IMP=0x000000000002a98d
- (void)_clearSceneTitles;	// IMP=0x00000000001650c1
- (id)_sceneIdentifierForStoredPersistenceIdentifier:(id)arg1;	// IMP=0x0000000000164ebd
- (id)_dataStore;	// IMP=0x0000000000019c7c
- (id)_baseSceneIdentifier;	// IMP=0x000000000007fdb8
@property(retain, nonatomic) id badgeValue;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(retain, nonatomic) NSDate *nextWakeDate;
- (void)_cancelPreheatForUserLaunchIfNecessary;	// IMP=0x00000000000835fa
- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;	// IMP=0x0000000000079b6e
- (void)markRecentlyUpdated;	// IMP=0x0000000000164944
- (void)markNewlyInstalled;	// IMP=0x000000000016492d
- (_Bool)shouldReceiveSourceApplicationContextFromOriginatingApplication:(id)arg1;	// IMP=0x00000000001647ec
- (_Bool)canShowSystemVolumeHUDForCategory:(id)arg1 forSceneIdentifier:(id)arg2;	// IMP=0x0000000000164753
- (void)setAudioCategoriesThatDisableSystemVolumeHUD:(id)arg1 forSceneIdentifier:(id)arg2;	// IMP=0x00000000001645ff
- (id)statusBarStyleOverridesAssertionsByStyleOverride;	// IMP=0x000000000006ba08
- (void)releaseStatusBarStyleOverridesAssertion:(id)arg1;	// IMP=0x00000000001643f1
- (void)takeStatusBarStyleOverridesAssertion:(id)arg1;	// IMP=0x00000000001641c5
- (void)setHasDisplayedLaunchAlert:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x000000000009cef5
- (_Bool)hasDisplayedLaunchAlertForType:(unsigned long long)arg1;	// IMP=0x000000000008688c
@property(readonly, nonatomic) _Bool supportsMultitaskingShelf;
@property(readonly, nonatomic) _Bool suppressesCoverSheetGesture;
@property(readonly, nonatomic) _Bool suppressesControlCenter;
@property(readonly, nonatomic) int dataUsage;
@property(nonatomic) _Bool usesWiFiNetwork;
@property(nonatomic) _Bool usesEdgeNetwork;
@property(nonatomic) _Bool wantsAutoLaunchForVOIP;
@property(nonatomic) _Bool showsProgress;
@property(readonly, nonatomic) SBApplicationWakeScheduler *legacyVOIPPeriodicWakeScheduler;
@property(copy, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(nonatomic, getter=isUninstalled) _Bool uninstalled;
@property(readonly, nonatomic, getter=isUninstallSupported) _Bool uninstallSupported;
- (_Bool)isCacheCleaningTerminationAssertionHeld;	// IMP=0x000000000006649e
@property(readonly, nonatomic, getter=isAnyTerminationAssertionInEffect) _Bool terminationAssertionInEffect;
@property(readonly, nonatomic, getter=isAnyTerminationAssertionHeld) _Bool terminationAssertionHeld;
@property(readonly, nonatomic) _Bool hasHiddenTag;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip;
@property(readonly, nonatomic, getter=isAppleApplication) _Bool appleApplication;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;
@property(readonly, nonatomic, getter=isInternalApplication) _Bool internalApplication;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *iconIdentifier;
@property(readonly, nonatomic) SBApplicationProcessState *processState;
- (_Bool)isSameExecutableAsApplication:(id)arg1;	// IMP=0x00000000000b22f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000163ba0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000163b06
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x0000000000163966
- (id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg1;	// IMP=0x00000000000de7e0
- (struct CGSize)defaultLaunchingSizeForDisplayConfiguration:(id)arg1;	// IMP=0x00000000000de766
@property(readonly, nonatomic) _Bool classicAppWithRoundedCorners;
@property(readonly, nonatomic) _Bool classicAppScaledWithAspectRatioCloseEnoughToBeTreatedAsFullScreen;
@property(readonly, nonatomic, getter=isInsetForHomeAffordance) _Bool insetForHomeAffordance;
@property(readonly, nonatomic) _Bool classicAppNonFullScreenWithHomeAffordance;
@property(readonly, nonatomic) _Bool ignoreScalingOfJailedStatusBar;
- (_Bool)includesStatusBarInClassicJailForInterfaceOrientation:(long long)arg1;	// IMP=0x00000000000ddfd6
@property(readonly, nonatomic) _Bool classicAppWithOwnSafeArea;
@property(readonly, nonatomic) _Bool classicAppPhoneAppRunningOnPad;
@property(readonly, nonatomic) _Bool classicAppFullScreen;
@property(readonly, nonatomic) _Bool classicAppScaled;
@property(nonatomic, setter=_setClassicAppPhoneOnPadPrefersLandscape:) _Bool classicAppPhoneOnPadPrefersLandscape;
@property(readonly, nonatomic) _Bool classicAppZoomedInOrRequiresHiDPI;
@property(readonly, nonatomic) _Bool classicAppRequiresHiDPI;
@property(nonatomic, setter=_setClassicAppZoomedIn:) _Bool classicAppZoomedIn;
@property(readonly, nonatomic) _Bool isClassic;
@property(readonly, nonatomic) _Bool isMedusaCapable;
- (_Bool)supportsModernRotation;	// IMP=0x00000000000ddb14
@property(readonly, nonatomic) _Bool wantsLegacyFullscreenInterfaceOrientationBehaviors;
- (unsigned long long)_screenTypeForClassicMode:(long long)arg1;	// IMP=0x00000000000dfb58
- (long long)_classicModeForHostingExtensionContainedInThisApplicationInUnknownHostingHierarchy;	// IMP=0x00000000000df8ac
- (long long)_classicModeForHostingExtensionContainedInApplication:(id)arg1;	// IMP=0x00000000000df87b
- (void)_recalculateApplicationSupportedTypes;	// IMP=0x00000000000df84c
- (_Bool)_canLaunchInClassicMode:(long long)arg1;	// IMP=0x00000000000dec2b
- (_Bool)_exposeRealDisplayCornerRadii;	// IMP=0x00000000000debf2
@property(readonly, nonatomic, getter=_defaultClassicMode) long long defaultClassicMode;
@property(readonly, nonatomic, getter=_classicMode) long long classicMode;
- (void)_setCurrentClassicMode:(long long)arg1;	// IMP=0x00000000000dfcfb
- (void)_setDefaultClassicModeOverride:(long long)arg1;	// IMP=0x00000000000dfd0f
- (long long)_classicModeFromSupportedTypes;	// IMP=0x00000000000e2f9e
- (void)_calculateSupportedTypesForSplashBoard;	// IMP=0x00000000000e2dbd
- (_Bool)_useSupportedTypesForSplashBoard;	// IMP=0x00000000000e2db5
- (_Bool)_isNewEnoughToKnowAbout2020Phones;	// IMP=0x00000000000e2872
- (_Bool)_isNewEnoughToKnowAboutRoundPads;	// IMP=0x00000000000e2852
- (_Bool)_isClassicViaOverride;	// IMP=0x00000000000e2834
- (_Bool)_bypassesClassicMode;	// IMP=0x00000000000e27db
- (unsigned long long)_supportedTypeForClassicModeNone;	// IMP=0x00000000000e1982
- (_Bool)_supportsApplicationType:(unsigned long long)arg1;	// IMP=0x00000000000e196b
- (void)_calculateSupportedTypesLazilyIfNecessary;	// IMP=0x00000000000dff2c
- (_Bool)_classicAppScaledPadOnPad;	// IMP=0x00000000000dff12
- (_Bool)_classicAppScaledPhoneOnPad;	// IMP=0x00000000000dfe61
- (_Bool)_classicAppScaledOnPhone;	// IMP=0x00000000000dfd23
- (struct CGSize)snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2 contentFrame:(struct CGRect *)arg3;	// IMP=0x0000000000134caf
- (struct CGRect)snapshotFrameForClassicInsideBounds:(struct CGRect)arg1 forOrientation:(long long)arg2 scaleFactor:(double *)arg3 inReferenceSpace:(_Bool)arg4;	// IMP=0x00000000001348ff
- (void)__noteSnapshotDidUpdate:(long long)arg1 forSceneIdentifier:(id)arg2;	// IMP=0x000000000013477e
- (void)_noteSnapshotDidUpdateForSceneIdentifiers:(id)arg1;	// IMP=0x000000000013462d
- (void)_noteSnapshotDidUpdateForSceneIdentifier:(id)arg1;	// IMP=0x0000000000134603
- (void)_xbactivity_saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132b7f
- (void)manifest:(id)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg2;	// IMP=0x0000000000132ac5
- (void)deleteSnapshotForContext:(id)arg1;	// IMP=0x000000000013264f
- (void)deleteAllSnapshots;	// IMP=0x00000000001324d6
- (void)createDownscaledVariantForSnapshot:(id)arg1 sceneHandle:(id)arg2 scaleFactor:(double)arg3 didSaveImage:(CDUnknownBlockType)arg4;	// IMP=0x0000000000132087
- (void)saveSuspendSnapshot:(id)arg1 forSceneHandle:(id)arg2;	// IMP=0x00000000000715fb
- (void)saveSnapshotForSceneHandle:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000078733
- (void)flushSnapshotsForSceneID:(id)arg1;	// IMP=0x0000000000131e47
- (void)flushSnapshotsForAllScenesIncludingAllLegacyImages;	// IMP=0x00000000001311b7
- (void)flushSnapshotsForAllScenes;	// IMP=0x00000000001310e9
- (_Bool)isWebApplication;	// IMP=0x000000000000806d
- (id)cachedImageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x000000000055a0d8
- (id)imageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x000000000055a0c0
- (id)_snapshotsWithImageName:(id)arg1 sceneHandle:(id)arg2 launchingSize:(struct CGSize)arg3 launchingScale:(double)arg4 contentTypeMask:(unsigned long long)arg5 statusBarStateMask:(unsigned long long)arg6 launchingOrientation:(long long)arg7 contentOverridesContext:(id)arg8 userInterfaceStyle:(long long)arg9 displayEdgeInfo:(id)arg10;	// IMP=0x0000000000559424
- (id)mostRecentSceneSnapshotsForSceneHandle:(id)arg1 scale:(double)arg2 launchingOrientation:(long long)arg3;	// IMP=0x00000000005590ae
- (id)bestSnapshotWithImageName:(id)arg1 sceneHandle:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(struct CGSize)arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8 contentOverridesContext:(id)arg9 userInterfaceStyle:(long long)arg10 displayEdgeInfo:(id)arg11;	// IMP=0x0000000000558d00
- (id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double *)arg1 sceneID:(id)arg2;	// IMP=0x000000000001a04c
- (id)_defaultPNGNameUsingFallbacksWithSceneID:(id)arg1 contentOverridesContext:(id)arg2;	// IMP=0x000000000002a663
- (id)_normalizeSnapshotName:(id)arg1;	// IMP=0x000000000002a810
- (id)_defaultLaunchImageBaseName;	// IMP=0x000000000055a0f0
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(double)arg4 outScale:(double *)arg5;	// IMP=0x000000000055d752
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(_Bool)arg4 size:(struct CGSize)arg5 scale:(double)arg6 outScale:(double *)arg7;	// IMP=0x000000000055d361
- (void)_ingestInfoPlistImagesInManifest:(id)arg1;	// IMP=0x000000000055c891
- (void)_ingestDefaultPNGsInManifest:(id)arg1 withLaunchImageBaseName:(id)arg2;	// IMP=0x000000000055ae53
- (void)_purgeStaticDefaultImagesInSnapshotManifest;	// IMP=0x000000000055adc5
- (void)_reingestStaticDefaultImagesInSnapshotManifest;	// IMP=0x000000000055aa5e
- (void)_purgeAndResetStaticDefaultImagesInSnapshotManifest;	// IMP=0x000000000055a9e6
- (void)_resetLaunchImageIngestionStatus;	// IMP=0x000000000055a91e
- (void)refreshLaunchImagesInSnapshotManifestIfNeeded;	// IMP=0x000000000055a192
@property(readonly, nonatomic) _Bool isSpotlight;
@property(readonly, nonatomic) _Bool isPaperBoard;
@property(readonly, nonatomic) _Bool isFaceTime;
@property(readonly, nonatomic) _Bool isMobilePhone;
@property(readonly, nonatomic) _Bool isSetup;
@property(readonly, nonatomic) _Bool isSpringBoard;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

