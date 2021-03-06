//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000013332
- (_Bool)isDeepFusionSupported;	// IMP=0x000000000001636e
- (_Bool)isDeferredPhotoProcessingSupported;	// IMP=0x0000000000016343
- (_Bool)isNonDestructiveCropSupported;	// IMP=0x0000000000016318
- (float)spatialOverCapturePercentage;	// IMP=0x00000000000162ed
- (_Bool)isSpatialOverCaptureSupported;	// IMP=0x00000000000162c2
- (_Bool)isMomentCaptureMovieRecordingSupported;	// IMP=0x0000000000016297
- (_Bool)isSemanticStyleRenderingSupported;	// IMP=0x000000000001626c
- (_Bool)isFastCapturePrioritizationSupported;	// IMP=0x0000000000016241
- (float)maxPortraitLightingEffectStrength;	// IMP=0x0000000000016210
- (float)minPortraitLightingEffectStrength;	// IMP=0x00000000000161df
- (float)defaultPortraitLightingEffectStrength;	// IMP=0x00000000000161ae
- (float)maxSimulatedAperture;	// IMP=0x0000000000016183
- (float)minSimulatedAperture;	// IMP=0x0000000000016158
- (float)defaultSimulatedAperture;	// IMP=0x000000000001612d
- (_Bool)isCameraCalibrationDataDeliverySupported;	// IMP=0x0000000000016102
- (_Bool)isVisionDataDeliverySupported;	// IMP=0x00000000000160d7
- (_Bool)isVariableFrameRateVideoCaptureSupported;	// IMP=0x00000000000160ac
- (_Bool)isLowLightVideoCaptureSupported;	// IMP=0x0000000000016081
- (unsigned int)supportedDemosaicedRawPixelFormat;	// IMP=0x0000000000016056
- (unsigned int)internalDemosaicedRawPixelFormat;	// IMP=0x000000000001602b
- (unsigned int)supportedRawPixelFormat;	// IMP=0x0000000000016000
@property(readonly, nonatomic, getter=isHighPhotoQualitySupported) _Bool highPhotoQualitySupported;
- (int)ispPowerConsumption;	// IMP=0x0000000000015faa
- (int)variableSensorPowerConsumption;	// IMP=0x0000000000015f7f
- (int)baseSensorPowerConsumption;	// IMP=0x0000000000015f54
- (float)hardwareCost;	// IMP=0x0000000000015f29
- (_Bool)isStreamingDepthSupported;	// IMP=0x0000000000015efe
- (_Bool)isStreamingDisparitySupported;	// IMP=0x0000000000015ed3
- (_Bool)isStillImageDepthSupported;	// IMP=0x0000000000015ea8
- (_Bool)isStillImageDisparitySupported;	// IMP=0x0000000000015e7d
- (_Bool)isHDRSupported;	// IMP=0x0000000000015e52
- (id)optimizedPhotoFilterNames;	// IMP=0x0000000000015e40
- (id)optimizedVideoPreviewFilterNames;	// IMP=0x0000000000015ca1
- (_Bool)supportsQuadraHighResolutionStillImageOutput;	// IMP=0x0000000000015c76
@property(readonly, nonatomic) long long autoFocusSystem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
- (id)figCaptureSourceDepthDataFormat;	// IMP=0x0000000000015b23
- (id)figCaptureSourceVideoFormat;	// IMP=0x0000000000015ad1
- (id)AVCaptureSessionPresets;	// IMP=0x0000000000015aa6
- (CDStruct_79c71658)previewDimensions;	// IMP=0x0000000000015a7b
- (CDStruct_79c71658)sensorDimensions;	// IMP=0x0000000000015a50
- (id)vtScalingMode;	// IMP=0x0000000000015a48
- (_Bool)isDefaultActiveFormat;	// IMP=0x0000000000015a2e
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDurationForSessionPreset:(id)arg1;	// IMP=0x0000000000015959
- (CDStruct_1b6d18a9)defaultActiveMinFrameDurationForSessionPreset:(id)arg1;	// IMP=0x0000000000015884
- (int)supportedFormatsArrayIndex;	// IMP=0x0000000000015859
- (_Bool)supportsHighProfileH264;	// IMP=0x000000000001582e
- (_Bool)isHighResPhotoFormat;	// IMP=0x0000000000015803
- (_Bool)isPhotoFormat;	// IMP=0x00000000000157d8
- (_Bool)isExperimental;	// IMP=0x00000000000157be
- (int)rawBitDepth;	// IMP=0x0000000000015793
- (_Bool)isIrisVideoStabilizationSupported;	// IMP=0x0000000000015768
- (_Bool)isIrisSupported;	// IMP=0x000000000001573d
- (_Bool)isStereoFusionSupported;	// IMP=0x0000000000015712
- (_Bool)isSISSupported;	// IMP=0x00000000000156e7
- (_Bool)isDigitalFlashSupported;	// IMP=0x00000000000156bc
- (_Bool)supportsRedEyeReduction;	// IMP=0x0000000000015691
- (_Bool)supportsDynamicCrop;	// IMP=0x0000000000015666
- (long long)videoHDRFlavor;	// IMP=0x0000000000015609
- (_Bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;	// IMP=0x0000000000015570
- (int)supportedStabilizationMethod;	// IMP=0x0000000000015553
- (_Bool)isBackgroundBlurSupported;	// IMP=0x0000000000015541
- (_Bool)isPortraitEffectSupported;	// IMP=0x0000000000015534
- (_Bool)isCinematicFramingSupported;	// IMP=0x0000000000015522
- (_Bool)isCenterStageSupported;	// IMP=0x00000000000154f7
- (_Bool)isContentAwareDistortionCorrectionSupported;	// IMP=0x00000000000154cc
- (float)geometricDistortionCorrectedVideoFieldOfView;	// IMP=0x000000000001545c
- (_Bool)isMultiCamSupported;	// IMP=0x0000000000015431
- (id)supportedSemanticSegmentationMatteTypes;	// IMP=0x00000000000151e5
- (_Bool)isPortraitEffectsMatteStillImageDeliverySupported;	// IMP=0x00000000000151b3
@property(readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property(readonly, nonatomic) NSArray *supportedDepthDataFormats;
- (_Bool)isWideColorSupported;	// IMP=0x0000000000014dfd
@property(readonly, nonatomic) NSArray *supportedColorSpaces;
@property(readonly, nonatomic, getter=isHighestPhotoQualitySupported) _Bool highestPhotoQualitySupported;
- (_Bool)supportsHighResolutionStillImageOutput;	// IMP=0x0000000000014cf7
@property(readonly, nonatomic) CDStruct_79c71658 highResolutionStillImageDimensions;
- (_Bool)isVideoStabilizationModeSupported:(long long)arg1;	// IMP=0x0000000000014bb3
- (_Bool)isVideoHDRSuspensionSupported;	// IMP=0x0000000000014b88
@property(readonly, nonatomic, getter=isVideoHDRSupported) _Bool videoHDRSupported;
@property(readonly, nonatomic, getter=isGlobalToneMappingSupported) _Bool globalToneMappingSupported;
- (long long)stabilizationTypeForTimelapse;	// IMP=0x00000000000149ae
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool videoStabilizationSupported;
- (id)videoFrameRateRangeForBackgroundBlur;	// IMP=0x0000000000014886
- (id)videoFrameRateRangeForPortraitEffect;	// IMP=0x0000000000014672
- (id)videoFrameRateRangeForCenterStage;	// IMP=0x00000000000143bf
- (double)videoMaxZoomFactorForCenterStage;	// IMP=0x0000000000014380
- (double)videoMinZoomFactorForCenterStage;	// IMP=0x0000000000014372
- (double)videoMaxZoomFactorForCameraCalibrationDataDelivery;	// IMP=0x0000000000014364
- (double)videoMinZoomFactorForCameraCalibrationDataDelivery;	// IMP=0x0000000000014356
@property(readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property(readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property(readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property(readonly, nonatomic) double videoMaxZoomFactor;
@property(readonly, nonatomic) float videoFieldOfView;
@property(readonly, nonatomic, getter=isVideoBinned) _Bool videoBinned;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;	// IMP=0x0000000000013f4b
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;	// IMP=0x0000000000013d3c
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;	// IMP=0x0000000000013ba4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013b33
- (id)initWithFigCaptureSourceFormat:(id)arg1;	// IMP=0x0000000000013a85
- (id)description;	// IMP=0x0000000000013a22
- (id)debugDescription;	// IMP=0x00000000000139bb
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 frameRateRanges:(id)arg3;	// IMP=0x0000000000013343

@end

