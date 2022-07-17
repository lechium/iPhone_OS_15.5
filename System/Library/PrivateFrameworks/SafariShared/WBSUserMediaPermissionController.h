//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSCoalescedAsynchronousWriterDelegate-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, NSURL, WBSCoalescedAsynchronousWriter, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;
@protocol OS_dispatch_queue;

@interface WBSUserMediaPermissionController <WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate>
{
    NSMutableDictionary *_cachedSettings;	// 8 = 0x8
    WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
    struct atomic<LoadingStatus> _savedStateLoadStatus;	// 32 = 0x20
    NSURL *_userMediaPermissionsFileURL;	// 40 = 0x28
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;	// 48 = 0x30
    WBSPerSitePreference *_cameraMediaCapturePreference;	// 56 = 0x38
    WBSPerSitePreference *_microphoneMediaCapturePreference;	// 64 = 0x40
}

+ (id)localizedStringForPerSitePreferenceValue:(id)arg1;	// IMP=0x000000000016592a
+ (id)sharedController;	// IMP=0x0000000000161119
- (void).cxx_destruct;	// IMP=0x00000000001661a9
@property(readonly, nonatomic) WBSPerSitePreference *microphoneMediaCapturePreference; // @synthesize microphoneMediaCapturePreference=_microphoneMediaCapturePreference;
@property(readonly, nonatomic) WBSPerSitePreference *cameraMediaCapturePreference; // @synthesize cameraMediaCapturePreference=_cameraMediaCapturePreference;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // @synthesize perSitePreferencesStore=_perSitePreferencesStore;
- (void)removeAllPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165f19
- (void)_dispatchSyncOnInternalQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165eb5
- (void)_dispatchAsyncOnInternalQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165e51
- (void)_invalidateAllPermissionsForDomain:(id)arg1;	// IMP=0x0000000000165ae3
- (id)_standardizedURLForDomain:(id)arg1;	// IMP=0x00000000001659f4
- (_Bool)_isPreferenceValid:(id)arg1;	// IMP=0x00000000001658ab
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;	// IMP=0x000000000016589e
- (id)preferenceNameForPreference:(id)arg1;	// IMP=0x0000000000165860
- (_Bool)_removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2;	// IMP=0x0000000000165307
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000165137
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000164b69
- (unsigned long long)permissionForDomain:(id)arg1;	// IMP=0x0000000000164aff
- (unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:(unsigned long long)arg1;	// IMP=0x00000000001647e3
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;	// IMP=0x00000000001647cf
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)arg1 mediaCaptureSetting:(long long)arg2;	// IMP=0x0000000000164775
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)arg1 userMediaPermission:(unsigned long long)arg2;	// IMP=0x000000000016472e
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001643c9
- (_Bool)_setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000164160
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000163f4f
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;	// IMP=0x0000000000163eea
- (id)valuesForPreference:(id)arg1;	// IMP=0x0000000000163ec3
- (id)preferences;	// IMP=0x0000000000163e49
- (unsigned long long)_permissionMaskForMediaCaptureType:(long long)arg1;	// IMP=0x0000000000163e31
- (long long)_mediaCaptureTypeForPreference:(id)arg1;	// IMP=0x0000000000163e07
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000163b2d
- (void)_cachedSettingsDidChangeAndWriteImmediately:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000163870
- (void)_cachedSettingsDidChange;	// IMP=0x000000000016385a
- (_Bool)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)arg1;	// IMP=0x000000000016384e
- (id)_dictionaryRepresentation;	// IMP=0x0000000000163666
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000163269
- (void)_loadSavedPermissions;	// IMP=0x0000000000163081
- (void)resetOriginPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000162f04
- (void)resetOriginPermissions;	// IMP=0x0000000000162ef0
- (void)removeAllOriginsAddedAfterDate:(id)arg1;	// IMP=0x0000000000162ad3
- (id)_saltWithPolicyEntry:(id)arg1 computedPermission:(unsigned long long)arg2 frameIdentifier:(unsigned long long)arg3;	// IMP=0x000000000016279f
- (id)_saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;	// IMP=0x00000000001625ab
- (id)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;	// IMP=0x00000000001623c2
- (unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:(unsigned long long)arg1;	// IMP=0x000000000016236a
- (void)_setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;	// IMP=0x00000000001621f3
- (void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;	// IMP=0x00000000001620d3
- (unsigned long long)permissionForNonHTTPSOriginFromPermission:(unsigned long long)arg1;	// IMP=0x00000000001620a9
- (id)_policyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;	// IMP=0x000000000016203a
- (id)_validPolicyForOrigin:(id)arg1 topLevelOrigin:(id)arg2;	// IMP=0x0000000000161dc8
- (id)_validPolicyForDomainWithOrigin:(id)arg1 topLevelOrigin:(id)arg2;	// IMP=0x0000000000161c8d
- (unsigned long long)_permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;	// IMP=0x0000000000161bbe
- (void)getPermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001619f3
- (unsigned long long)permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;	// IMP=0x000000000016188e
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;	// IMP=0x0000000000161807
- (void)savePendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001616fa
- (void)savePendingChangesBeforeTermination;	// IMP=0x0000000000161667
- (void)reloadPreferences;	// IMP=0x0000000000161597
- (void)performDelayedLaunchOperations;	// IMP=0x0000000000161583
- (id)_init;	// IMP=0x0000000000161462
- (id)initWithUserMediaPermissionsFileURL:(id)arg1 perSitePreferencesStore:(id)arg2;	// IMP=0x00000000001611bc
- (id)init;	// IMP=0x00000000001611ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
