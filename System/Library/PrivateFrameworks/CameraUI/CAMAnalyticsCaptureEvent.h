//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMAnalyticsCaptureEvent
{
    _Bool __isStillDuringVideo;	// 8 = 0x8
    long long __captureMode;	// 16 = 0x10
    long long __captureDevice;	// 24 = 0x18
    long long __captureDevicePosition;	// 32 = 0x20
    long long __captureVideoConfiguration;	// 40 = 0x28
    long long __lightingEffectType;	// 48 = 0x30
    long long __mediaType;	// 56 = 0x38
}

@property(nonatomic) _Bool _isStillDuringVideo; // @synthesize _isStillDuringVideo=__isStillDuringVideo;
@property(nonatomic) long long _mediaType; // @synthesize _mediaType=__mediaType;
@property(nonatomic) long long _lightingEffectType; // @synthesize _lightingEffectType=__lightingEffectType;
@property(readonly, nonatomic) long long _captureVideoConfiguration; // @synthesize _captureVideoConfiguration=__captureVideoConfiguration;
@property(readonly, nonatomic) long long _captureDevicePosition; // @synthesize _captureDevicePosition=__captureDevicePosition;
@property(readonly, nonatomic) long long _captureDevice; // @synthesize _captureDevice=__captureDevice;
@property(readonly, nonatomic) long long _captureMode; // @synthesize _captureMode=__captureMode;
- (id)_zoomRangeStringForZoomFactor:(float)arg1 devicePosition:(long long)arg2;	// IMP=0x00000000001cdc65
- (id)_defaultRangeStringForValue:(float)arg1 lowerBound:(float)arg2 upperBound:(float)arg3 defaultValue:(float)arg4;	// IMP=0x00000000001cdbd6
- (void)populateBurstLength:(long long)arg1;	// IMP=0x00000000001cdb59
- (void)populateDuration:(double)arg1;	// IMP=0x00000000001cda64
- (void)populatePortraitStatus:(long long)arg1 lightingEffectIntensity:(double)arg2 apertureValue:(double)arg3;	// IMP=0x00000000001cd525
- (void)populateDesiredTorchMode:(long long)arg1;	// IMP=0x00000000001cd41b
- (void)populateDesiredNightModeControlMode:(unsigned long long)arg1 resolvedNightModeControlMode:(unsigned long long)arg2 resolvedNightModeMode:(long long)arg3;	// IMP=0x00000000001cd217
- (void)populateDesiredMacroMode:(long long)arg1 isMacroCapture:(_Bool)arg2;	// IMP=0x00000000001cd0af
- (void)populateDesiredFlashMode:(long long)arg1 desiredLivePhotoMode:(long long)arg2 desiredHDRMode:(long long)arg3 timerDuration:(long long)arg4;	// IMP=0x00000000001ccd39
- (void)populateExposureSliderBias:(float)arg1 exposureTapAndBias:(float)arg2 totalExposureBias:(float)arg3;	// IMP=0x00000000001cc9eb
- (void)populateZoomFromZoomButtonSymbol:(long long)arg1;	// IMP=0x00000000001cc872
- (void)populateZoomFromZoomFactor:(float)arg1;	// IMP=0x00000000001cc687
- (void)populateAEAFLocked:(_Bool)arg1;	// IMP=0x00000000001cc60a
- (void)populateFromVideoCaptureResponse:(id)arg1;	// IMP=0x00000000001cc4a4
- (void)populateFromStillImageCaptureResponse:(id)arg1;	// IMP=0x00000000001cc258
- (void)populateForTimelapseCaptureOrientation:(long long)arg1 captureMirrored:(_Bool)arg2 origin:(long long)arg3 pressType:(long long)arg4 zoomInteractionType:(long long)arg5 startDate:(id)arg6;	// IMP=0x00000000001cbb1b
- (void)populateFromPanoramaCaptureNotification:(long long)arg1;	// IMP=0x00000000001cba9e
- (void)populatePanoramaInstruction:(long long)arg1;	// IMP=0x00000000001cba18
- (void)populatePanoramaDirection:(long long)arg1;	// IMP=0x00000000001cb999
- (void)populateFromPanoramaCaptureRequest:(id)arg1;	// IMP=0x00000000001cb888
- (void)populateFromVideoCaptureRequest:(id)arg1 preferences:(id)arg2;	// IMP=0x00000000001cb298
- (void)populateFromStillImageCaptureRequest:(id)arg1 burst:(_Bool)arg2 preferences:(id)arg3;	// IMP=0x00000000001ca6cc
- (void)_populateFromCaptureRequest:(id)arg1;	// IMP=0x00000000001ca009
- (id)eventName;	// IMP=0x00000000001c9ffc
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000001c9ef3
- (id)initWithGraphConfiguration:(id)arg1;	// IMP=0x00000000001c9e20

@end
