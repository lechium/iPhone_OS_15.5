//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject
{
    _Bool _didResetTorchMode;	// 8 = 0x8
    _Bool _shouldShowGridView;	// 9 = 0x9
    _Bool _QRBannersEnabledInSettings;	// 10 = 0xa
    _Bool _forceEnableQRBanners;	// 11 = 0xb
    _Bool _imageAnalysisEnabled;	// 12 = 0xc
    _Bool _responsiveShutterEnabled;	// 13 = 0xd
    _Bool _shouldCaptureHDREV0;	// 14 = 0xe
    _Bool _shouldUseModernHDRBehavior;	// 15 = 0xf
    _Bool _shouldMirrorFrontCameraCaptures;	// 16 = 0x10
    _Bool _shouldUseVolumeUpBurst;	// 17 = 0x11
    _Bool _shouldUseContentAwareDistortionCorrection;	// 18 = 0x12
    _Bool _superWideAutoMacroControlAllowed;	// 19 = 0x13
    _Bool _didAcknowledgePortraitModeDescription;	// 20 = 0x14
    _Bool _didAcknowledgeCinematicModeDescription;	// 21 = 0x15
    _Bool _videoConfigurationControlEnabled;	// 22 = 0x16
    _Bool _PALVideoEnabled;	// 23 = 0x17
    _Bool _lowLightVideoEnabled;	// 24 = 0x18
    _Bool _shouldForceMonoAudioRecording;	// 25 = 0x19
    _Bool _HDR10BitVideoEnabled;	// 26 = 0x1a
    _Bool _photoOverCaptureEnabled;	// 27 = 0x1b
    _Bool _videoOverCaptureEnabled;	// 28 = 0x1c
    _Bool _autoAdjustmentsEnabled;	// 29 = 0x1d
    _Bool _didAcknowledgeCTMDescription;	// 30 = 0x1e
    _Bool _overCapturePreviewEnabled;	// 31 = 0x1f
    _Bool _semanticDevelopmentEnabled;	// 32 = 0x20
    _Bool _didAcknowledgeSemanticStylesDescription;	// 33 = 0x21
    _Bool _rawControlEnabled;	// 34 = 0x22
    _Bool _preserveRAW;	// 35 = 0x23
    _Bool _proResControlEnabled;	// 36 = 0x24
    _Bool _preserveProRes;	// 37 = 0x25
    _Bool _preserveEffectFilter;	// 38 = 0x26
    _Bool _preserveCaptureMode;	// 39 = 0x27
    _Bool _preserveLivePhoto;	// 40 = 0x28
    _Bool _preserveExposure;	// 41 = 0x29
    _Bool _preserveNightMode;	// 42 = 0x2a
    _Bool _preservePortraitZoom;	// 43 = 0x2b
    _Bool _preserveSuperWideAutoMacro;	// 44 = 0x2c
    _Bool _lockAsShutterEnabled;	// 45 = 0x2d
    _Bool _shouldDelayRemotePersistence;	// 46 = 0x2e
    _Bool _burstFollowsEncoderSettings;	// 47 = 0x2f
    _Bool __hasReadLastWrittenValues;	// 48 = 0x30
    _Bool __preferHEVCWhenAvailable;	// 49 = 0x31
    _Bool __shouldDisableCameraSwitchingDuringVideoRecording;	// 50 = 0x32
    CAMCaptureConfiguration *_captureConfiguration;	// 56 = 0x38
    CAMConflictingControlConfiguration *_conflictingControlConfiguration;	// 64 = 0x40
    long long _portraitModeRearDevice;	// 72 = 0x48
    long long _videoConfiguration;	// 80 = 0x50
    long long _slomoConfiguration;	// 88 = 0x58
    long long _cinematicConfiguration;	// 96 = 0x60
    long long _VFRMode;	// 104 = 0x68
    long long _photoModeLastCapturedEffectFilterType;	// 112 = 0x70
    long long _squareModeLastCapturedEffectFilterType;	// 120 = 0x78
    long long _portraitModeLastCapturedEffectFilterType;	// 128 = 0x80
    NSDate *_resetTimeoutDate;	// 136 = 0x88
    long long _preferredMinimumFreeBytes;	// 144 = 0x90
    long long _overriddenBackCaptureInterval;	// 152 = 0x98
    long long _overriddenFrontCaptureInterval;	// 160 = 0xa0
    NSUserDefaults *__underlyingUserDefaults;	// 168 = 0xa8
    double __resetTimeoutOverride;	// 176 = 0xb0
    long long __previewAspectModeForPhotoModes;	// 184 = 0xb8
    long long __previewAspectModeForVideoModes;	// 192 = 0xc0
}

+ (void)performSuperWideAutoMacroMigrationWithCapabilities:(id)arg1;	// IMP=0x00000000000b2e90
+ (void)performResponsiveShutterMigration;	// IMP=0x00000000000b2d54
+ (void)performLowLightVideoMigrationWithCapabilities:(id)arg1;	// IMP=0x00000000000b2bf0
+ (_Bool)shouldEnableHDR10BitVideoForHEVCEnabled:(_Bool)arg1 capabilities:(id)arg2;	// IMP=0x00000000000b263b
+ (id)_defaultExposureBiasesByMode;	// IMP=0x00000000000af3c0
+ (long long)defaultLightingTypeForMode:(long long)arg1;	// IMP=0x0000000000004e60
+ (long long)defaultFilterTypeForMode:(long long)arg1;	// IMP=0x0000000000004e48
+ (id)defaultCaptureConfiguration;	// IMP=0x00000000000af057
+ (long long)defaultDevice;	// IMP=0x00000000000af039
+ (long long)defaultDevicePosition;	// IMP=0x00000000000aefeb
+ (long long)defaultMode;	// IMP=0x00000000000aefe3
+ (id)preferences;	// IMP=0x00000000000041c0
+ (_Bool)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000004d54
- (void).cxx_destruct;	// IMP=0x00000000000b32c8
@property(nonatomic, setter=_setPreviewAspectModeForVideoModes:) long long _previewAspectModeForVideoModes; // @synthesize _previewAspectModeForVideoModes=__previewAspectModeForVideoModes;
@property(nonatomic, setter=_setPreviewAspectModeForPhotoModes:) long long _previewAspectModeForPhotoModes; // @synthesize _previewAspectModeForPhotoModes=__previewAspectModeForPhotoModes;
@property(readonly, nonatomic) _Bool _shouldDisableCameraSwitchingDuringVideoRecording; // @synthesize _shouldDisableCameraSwitchingDuringVideoRecording=__shouldDisableCameraSwitchingDuringVideoRecording;
@property(readonly, nonatomic) double _resetTimeoutOverride; // @synthesize _resetTimeoutOverride=__resetTimeoutOverride;
@property(readonly, nonatomic) _Bool _preferHEVCWhenAvailable; // @synthesize _preferHEVCWhenAvailable=__preferHEVCWhenAvailable;
@property(nonatomic, setter=_setHasReadLastWrittenValues:) _Bool _hasReadLastWrittenValues; // @synthesize _hasReadLastWrittenValues=__hasReadLastWrittenValues;
@property(retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults; // @synthesize _underlyingUserDefaults=__underlyingUserDefaults;
@property(readonly, nonatomic) long long overriddenFrontCaptureInterval; // @synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval;
@property(readonly, nonatomic) long long overriddenBackCaptureInterval; // @synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval;
@property(readonly, nonatomic) long long preferredMinimumFreeBytes; // @synthesize preferredMinimumFreeBytes=_preferredMinimumFreeBytes;
@property(readonly, nonatomic) _Bool burstFollowsEncoderSettings; // @synthesize burstFollowsEncoderSettings=_burstFollowsEncoderSettings;
@property(readonly, nonatomic) _Bool shouldDelayRemotePersistence; // @synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence;
@property(readonly, nonatomic, getter=isLockAsShutterEnabled) _Bool lockAsShutterEnabled; // @synthesize lockAsShutterEnabled=_lockAsShutterEnabled;
@property(readonly, nonatomic) _Bool preserveSuperWideAutoMacro; // @synthesize preserveSuperWideAutoMacro=_preserveSuperWideAutoMacro;
@property(readonly, nonatomic) _Bool preservePortraitZoom; // @synthesize preservePortraitZoom=_preservePortraitZoom;
@property(readonly, nonatomic) _Bool preserveNightMode; // @synthesize preserveNightMode=_preserveNightMode;
@property(readonly, nonatomic) _Bool preserveExposure; // @synthesize preserveExposure=_preserveExposure;
@property(readonly, nonatomic) _Bool preserveLivePhoto; // @synthesize preserveLivePhoto=_preserveLivePhoto;
@property(readonly, nonatomic) _Bool preserveCaptureMode; // @synthesize preserveCaptureMode=_preserveCaptureMode;
@property(readonly, nonatomic) _Bool preserveEffectFilter; // @synthesize preserveEffectFilter=_preserveEffectFilter;
@property(retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate; // @synthesize resetTimeoutDate=_resetTimeoutDate;
@property(readonly, nonatomic) _Bool preserveProRes; // @synthesize preserveProRes=_preserveProRes;
@property(readonly, nonatomic, getter=isProResControlEnabled) _Bool proResControlEnabled; // @synthesize proResControlEnabled=_proResControlEnabled;
@property(readonly, nonatomic) _Bool preserveRAW; // @synthesize preserveRAW=_preserveRAW;
@property(readonly, nonatomic) _Bool rawControlEnabled; // @synthesize rawControlEnabled=_rawControlEnabled;
@property(nonatomic) _Bool didAcknowledgeSemanticStylesDescription; // @synthesize didAcknowledgeSemanticStylesDescription=_didAcknowledgeSemanticStylesDescription;
@property(readonly, nonatomic) _Bool semanticDevelopmentEnabled; // @synthesize semanticDevelopmentEnabled=_semanticDevelopmentEnabled;
@property(nonatomic) long long portraitModeLastCapturedEffectFilterType; // @synthesize portraitModeLastCapturedEffectFilterType=_portraitModeLastCapturedEffectFilterType;
@property(nonatomic) long long squareModeLastCapturedEffectFilterType; // @synthesize squareModeLastCapturedEffectFilterType=_squareModeLastCapturedEffectFilterType;
@property(nonatomic) long long photoModeLastCapturedEffectFilterType; // @synthesize photoModeLastCapturedEffectFilterType=_photoModeLastCapturedEffectFilterType;
@property(readonly, nonatomic, getter=isOverCapturePreviewEnabled) _Bool overCapturePreviewEnabled; // @synthesize overCapturePreviewEnabled=_overCapturePreviewEnabled;
@property(nonatomic) _Bool didAcknowledgeCTMDescription; // @synthesize didAcknowledgeCTMDescription=_didAcknowledgeCTMDescription;
@property(readonly, nonatomic, getter=isAutoAdjustmentsEnabled) _Bool autoAdjustmentsEnabled; // @synthesize autoAdjustmentsEnabled=_autoAdjustmentsEnabled;
@property(readonly, nonatomic, getter=isVideoOverCaptureEnabled) _Bool videoOverCaptureEnabled; // @synthesize videoOverCaptureEnabled=_videoOverCaptureEnabled;
@property(readonly, nonatomic, getter=isPhotoOverCaptureEnabled) _Bool photoOverCaptureEnabled; // @synthesize photoOverCaptureEnabled=_photoOverCaptureEnabled;
@property(readonly, nonatomic) _Bool HDR10BitVideoEnabled; // @synthesize HDR10BitVideoEnabled=_HDR10BitVideoEnabled;
@property(readonly, nonatomic) _Bool shouldForceMonoAudioRecording; // @synthesize shouldForceMonoAudioRecording=_shouldForceMonoAudioRecording;
@property(readonly, nonatomic, getter=isLowLightVideoEnabled) _Bool lowLightVideoEnabled; // @synthesize lowLightVideoEnabled=_lowLightVideoEnabled;
@property(readonly, nonatomic) long long VFRMode; // @synthesize VFRMode=_VFRMode;
@property(readonly, nonatomic, getter=isPALVideoEnabled) _Bool PALVideoEnabled; // @synthesize PALVideoEnabled=_PALVideoEnabled;
@property(readonly, nonatomic, getter=isVideoConfigurationControlEnabled) _Bool videoConfigurationControlEnabled; // @synthesize videoConfigurationControlEnabled=_videoConfigurationControlEnabled;
@property(nonatomic) _Bool didAcknowledgeCinematicModeDescription; // @synthesize didAcknowledgeCinematicModeDescription=_didAcknowledgeCinematicModeDescription;
@property(readonly, nonatomic) long long cinematicConfiguration; // @synthesize cinematicConfiguration=_cinematicConfiguration;
@property(readonly, nonatomic) long long slomoConfiguration; // @synthesize slomoConfiguration=_slomoConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) long long portraitModeRearDevice; // @synthesize portraitModeRearDevice=_portraitModeRearDevice;
@property(nonatomic) _Bool didAcknowledgePortraitModeDescription; // @synthesize didAcknowledgePortraitModeDescription=_didAcknowledgePortraitModeDescription;
@property(readonly, nonatomic, getter=isSuperWideAutoMacroControlAllowed) _Bool superWideAutoMacroControlAllowed; // @synthesize superWideAutoMacroControlAllowed=_superWideAutoMacroControlAllowed;
@property(readonly, nonatomic) _Bool shouldUseContentAwareDistortionCorrection; // @synthesize shouldUseContentAwareDistortionCorrection=_shouldUseContentAwareDistortionCorrection;
@property(readonly, nonatomic) _Bool shouldUseVolumeUpBurst; // @synthesize shouldUseVolumeUpBurst=_shouldUseVolumeUpBurst;
@property(nonatomic) _Bool shouldMirrorFrontCameraCaptures; // @synthesize shouldMirrorFrontCameraCaptures=_shouldMirrorFrontCameraCaptures;
@property(readonly, nonatomic) _Bool shouldUseModernHDRBehavior; // @synthesize shouldUseModernHDRBehavior=_shouldUseModernHDRBehavior;
@property(readonly, nonatomic) _Bool shouldCaptureHDREV0; // @synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0;
@property(readonly, nonatomic) _Bool responsiveShutterEnabled; // @synthesize responsiveShutterEnabled=_responsiveShutterEnabled;
@property(readonly, nonatomic, getter=isImageAnalysisEnabled) _Bool imageAnalysisEnabled; // @synthesize imageAnalysisEnabled=_imageAnalysisEnabled;
@property(nonatomic) _Bool forceEnableQRBanners; // @synthesize forceEnableQRBanners=_forceEnableQRBanners;
@property(readonly, nonatomic) _Bool QRBannersEnabledInSettings; // @synthesize QRBannersEnabledInSettings=_QRBannersEnabledInSettings;
@property(readonly, nonatomic) _Bool shouldShowGridView; // @synthesize shouldShowGridView=_shouldShowGridView;
@property(retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration; // @synthesize conflictingControlConfiguration=_conflictingControlConfiguration;
@property(retain, nonatomic) CAMCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
@property(nonatomic, setter=_setDidResetTorchMode:) _Bool didResetTorchMode; // @synthesize didResetTorchMode=_didResetTorchMode;
- (void)setPreviewViewAspectMode:(long long)arg1 forMode:(long long)arg2;	// IMP=0x00000000000b30a3
- (long long)previewViewAspectModeForMode:(long long)arg1;	// IMP=0x00000000000b3076
- (_Bool)isOverCaptureEnabledForCTMCaptureType:(long long)arg1;	// IMP=0x00000000000b2fe3
- (_Bool)isAutoFPSVideoEnabledForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 encodingBehavior:(long long)arg4;	// IMP=0x00000000000b2a4f
@property(readonly, nonatomic) _Bool didConfirmSlomo1080p240MostCompatible;
@property(readonly, nonatomic) _Bool didConfirmVideo4k60MostCompatible;
@property(readonly, nonatomic) _Bool usingMostCompatibleEncoding;
- (long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1;	// IMP=0x00000000000b2963
- (_Bool)mirrorCameraCapturesForDevicePosition:(long long)arg1 mode:(long long)arg2;	// IMP=0x00000000000b28f0
- (_Bool)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1;	// IMP=0x00000000000b26b1
- (_Bool)shouldEnableHDR10BitVideoForMode:(long long)arg1;	// IMP=0x00000000000b25cc
@property(readonly, nonatomic) long long photoEncodingBehavior;
- (long long)videoEncodingBehaviorForConfiguration:(long long)arg1 mode:(long long)arg2 wantsHDR10BitVideo:(_Bool)arg3 desiredProResVideoMode:(long long)arg4;	// IMP=0x00000000000b24d6
@property(readonly, nonatomic) _Bool shouldShowQRBanners;
- (_Bool)_shouldResetCaptureConfiguration;	// IMP=0x00000000000b23fc
- (void)_updateResetTimeoutDate;	// IMP=0x00000000000b22b8
- (void)writePreferences;	// IMP=0x0000000000064187
- (_Bool)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(_Bool)arg3 shouldResetCaptureConfiguration:(_Bool *)arg4;	// IMP=0x00000000000af659
- (long long)defaultDeviceForModeChange:(long long)arg1 devicePosition:(long long)arg2;	// IMP=0x00000000000af58c
- (void)_publishAnalyticsIfNeeded;	// IMP=0x00000000000af481
- (long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2;	// IMP=0x0000000000005240
- (long long)ppt_readPortraitLightingType;	// IMP=0x00000000000af357
- (long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2;	// IMP=0x00000000000050fa
- (id)filterTypesForMode:(long long)arg1;	// IMP=0x00000000000051b7

@end

