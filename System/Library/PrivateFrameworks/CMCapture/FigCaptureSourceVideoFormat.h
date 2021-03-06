//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FigCaptureSourceCompanionFormat, NSArray;

@interface FigCaptureSourceVideoFormat
{
    NSArray *_frontEndScalerCompanionFormats;	// 32 = 0x20
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;	// 40 = 0x28
    FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;	// 48 = 0x30
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;	// 56 = 0x38
    FigCaptureSourceVideoFormat *_cinematicFramingFormat;	// 64 = 0x40
    FigCaptureSourceVideoFormat *_geometricDistortionCorrectionFormat;	// 72 = 0x48
    NSArray *_supportedDepthDataFormats;	// 80 = 0x50
    _Bool _isStreamingDisparitySupported;	// 88 = 0x58
    _Bool _isStreamingDepthSupported;	// 89 = 0x59
    _Bool _isStillImageDisparitySupported;	// 90 = 0x5a
    _Bool _isStillImageDepthSupported;	// 91 = 0x5b
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028470
+ (void)initialize;	// IMP=0x000000000002845f
- (_Bool)isCompatibleWithInfraredFormat:(id)arg1;	// IMP=0x000000000002c5fc
- (_Bool)isValidDerivedSourceFormatForUnderlyingFormat:(id)arg1;	// IMP=0x000000000002c536
@property(readonly, getter=isGlobalToneMappingSupported) _Bool globalToneMappingSupported;
@property(readonly) int ispPowerConsumption;
@property(readonly) int variableSensorPowerConsumption;
@property(readonly) int baseSensorPowerConsumption;
@property(readonly) float hardwareCost;
@property(readonly, getter=isMultiCamSupported) _Bool multiCamSupported;
@property(readonly, getter=isDeferredPhotoProcessingSupported) _Bool deferredPhotoProcessingSupported;
@property(readonly, getter=isNonDestructiveCropSupported) _Bool nonDestructiveCropSupported;
@property(readonly) float spatialOverCapturePercentage;
@property(readonly, getter=isSpatialOverCaptureSupported) _Bool spatialOverCaptureSupported;
@property(readonly, getter=isMomentCaptureMovieRecordingSupported) _Bool momentCaptureMovieRecordingSupported;
@property(readonly) float maxZoomFactorForDepthDataDelivery;
@property(readonly) float minZoomFactorForDepthDataDelivery;
@property(readonly) NSArray *supportedDepthDataFormats;
@property(readonly, getter=isStillImageDepthSupported) _Bool stillImageDepthSupported;
@property(readonly, getter=isStillImageDisparitySupported) _Bool stillImageDisparitySupported;
@property(readonly, getter=isStreamingDepthSupported) _Bool streamingDepthSupported;
@property(readonly, getter=isStreamingDisparitySupported) _Bool streamingDisparitySupported;
@property(readonly) NSArray *AVCaptureSessionPresets;
- (_Bool)isContentAwareAWBSupported;	// IMP=0x000000000002bf70
- (_Bool)isContentAwareEnhancementSupported;	// IMP=0x000000000002bf3a
@property(readonly, getter=isHighProfileH264Supported) _Bool highProfileH264Supported;
@property(readonly, getter=isVideoSTFMetadataEnabled) _Bool videoSTFMetadataEnabled;
@property(readonly, getter=isSIFRStillImageCaptureWithDepthDataDisabled) _Bool sifrStillImageCaptureWithDepthDataDisabled;
@property(readonly) float maxPortraitLightingEffectStrength;
@property(readonly) float minPortraitLightingEffectStrength;
@property(readonly) float defaultPortraitLightingEffectStrength;
@property(readonly) float maxSimulatedAperture;
@property(readonly) float minSimulatedAperture;
@property(readonly) float defaultSimulatedAperture;
@property(readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property(readonly) unsigned int internalDemosaicedRawPixelFormat;
- (_Bool)sushiRawBlackBorderingEnabled;	// IMP=0x000000000002bca0
- (_Bool)sushiRawSupported;	// IMP=0x000000000002bc23
- (id)rawLensShadingCorrection;	// IMP=0x000000000002bc06
@property(readonly) unsigned int supportedRawPixelFormat;
@property(readonly) NSArray *supportedColorSpaces;
@property(readonly, getter=isWideColorSupported) _Bool wideColorSupported;
- (_Bool)isStillImageISPChromaNoiseReductionEnabled;	// IMP=0x000000000002b9d7
@property(readonly) CDStruct_79c71658 highResStillImageDimensions;
@property(readonly) CDStruct_79c71658 stillImageGDCInDCProcessorOutputCropDimensions;
@property(readonly, getter=isVideoSTFSupported) _Bool videoSTFSupported;
@property(readonly, getter=isVideoHDRFusionSupported) _Bool videoHDRFusionSupported;
@property(readonly) _Bool is422VideoFormat;
@property(readonly) _Bool is10bitVideoFormat;
- (_Bool)usesPacked10BitFirmwareStillImageOutputPixelFormat;	// IMP=0x000000000002b696
- (_Bool)isCaptureTimePhotoCurationSupported;	// IMP=0x000000000002b660
@property(readonly, getter=isHighPhotoQualitySupported) _Bool highPhotoQualitySupported;
@property(readonly, getter=isResponsiveShutterSupported) _Bool responsiveShutterSupported;
@property(readonly, getter=isLearnedNRSupported) _Bool learnedNRSupported;
@property(readonly, getter=isDeepFusionSupported) _Bool deepFusionSupported;
- (_Bool)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;	// IMP=0x000000000002b552
@property(readonly) NSArray *digitalFlashDetectedObjectTypes;
@property(readonly, getter=isDigitalFlashSupported) _Bool digitalFlashSupported;
@property(readonly, getter=isCinematicVideoSupported) _Bool cinematicVideoSupported;
@property(readonly, getter=isBackgroundBlurSupported) _Bool backgroundBlurSupported;
@property(readonly, getter=isCinematicFramingSupported) _Bool cinematicFramingSupported;
- (int)deepZoomVersion;	// IMP=0x000000000002b427
- (int)configureForGreenGhostMitigationVersion;	// IMP=0x000000000002b3f1
- (int)greenGhostMitigationVersion;	// IMP=0x000000000002b3bb
- (_Bool)stillImageGeometricDistortionCorrectionInDCProcessorSupported;	// IMP=0x000000000002b385
@property(readonly, nonatomic) _Bool intelligentDistortionCorrectionSupported;
- (int)dcProcessorVersion;	// IMP=0x000000000002b319
- (_Bool)isGainMapSupported;	// IMP=0x000000000002b2e3
@property(readonly, getter=isSemanticStyleRenderingSupported) _Bool semanticStyleRenderingSupported;
- (int)semanticDevelopmentVersion;	// IMP=0x000000000002b248
- (int)semanticRenderingVersion;	// IMP=0x000000000002b212
- (int)redEyeReductionVersion;	// IMP=0x000000000002b1dc
@property(readonly, getter=isRedEyeReductionSupported) _Bool redEyeReductionSupported;
@property(readonly) _Bool zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property(readonly, getter=isZeroShutterLagSupported) _Bool zeroShutterLagSupported;
@property(readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) _Bool stillImageISPMultiBandNoiseReductionSupported;
@property(readonly, getter=isISPMultiBandNoiseReductionSupported) _Bool ispMultiBandNoiseReductionSupported;
@property(readonly, getter=isStereoFusionSupported) _Bool stereoFusionSupported;
@property(readonly, getter=isQuadraHighResStillImageSupported) _Bool quadraHighResStillImageSupported;
@property(readonly, getter=isHighResStillImageSupported) _Bool highResStillImageSupported;
@property(readonly, getter=isHDROriginalImageDeliverySupported) _Bool hdrOriginalImageDeliverySupported;
@property(readonly, getter=isGNRHDRSupported) _Bool gnrHDRSupported;
@property(readonly, getter=isHDRSupported) _Bool hdrSupported;
- (int)stillImageNoiseReductionAndStabilizationScheme;	// IMP=0x000000000002af6a
@property(readonly, getter=isIrisVideoStabilizationSupported) _Bool irisVideoStabilizationSupported;
@property(readonly, getter=isIrisSupported) _Bool irisSupported;
@property(readonly) _Bool configureForDigitalFlashSupport;
@property(readonly) _Bool configureForSpatialOverCaptureSupport;
@property(readonly) _Bool configureForStillImageStabilizationSupport;
@property(readonly, getter=isSupplementalTimeOfFlightCameraSupported) _Bool supplementalTimeOfFlightCameraSupported;
@property(readonly, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
@property(readonly, getter=isHighResPhotoFormat) _Bool highResPhotoFormat;
@property(readonly, getter=isPhotoFormat) _Bool photoFormat;
- (struct CGSize)stabilizationOverscanFromSensorForFESCropDimensions:(CDStruct_79c71658)arg1 preferSIFRFormat:(_Bool)arg2 geometricDistortionCorrection:(_Bool)arg3 useFESCompanionIndex:(_Bool)arg4;	// IMP=0x000000000002aaf2
- (int)verticalSensorBinningFactor;	// IMP=0x000000000002aa65
- (int)horizontalSensorBinningFactor;	// IMP=0x000000000002a9d8
- (_Bool)capturesStillsFromVideoStream;	// IMP=0x000000000002a9a2
@property(readonly, getter=isWideAsStatsMasterEnabled) _Bool wideAsStatsMasterEnabled;
@property(readonly, getter=isStagePreviewRenderingSupported) _Bool stagePreviewRenderingSupported;
@property(readonly, getter=isStudioAndContourPreviewRenderingSupported) _Bool studioAndContourPreviewRenderingSupported;
@property(readonly, getter=isSecondaryScalerUnavailable) _Bool secondaryScalerUnavailable;
@property(readonly, getter=isCameraCalibrationDataDeliverySupported) _Bool cameraCalibrationDataDeliverySupported;
@property(readonly, getter=isVisionDataDeliverySupported) _Bool visionDataDeliverySupported;
@property(readonly, getter=isLowLightVideoCaptureSupported) _Bool lowLightVideoCaptureSupported;
@property(readonly, getter=isVariableFrameRateVideoCaptureSupported) _Bool variableFrameRateVideoCaptureSupported;
@property(readonly) _Bool prefersSensorHDREnabled;
- (int)sensorHDRCompanionIndex;	// IMP=0x000000000002a746
@property(readonly) _Bool hasSensorHDRCompanionIndex;
- (CDStruct_79c71658)sourceCropAspectRatio;	// IMP=0x000000000002a64c
- (CDStruct_79c71658)cropDimensionsForFES;	// IMP=0x000000000002a5d6
- (CDStruct_79c71658)fesInputCropDimensions;	// IMP=0x000000000002a560
- (CDStruct_79c71658)postGDCCropDimensions;	// IMP=0x000000000002a4ea
- (CDStruct_79c71658)preGDCSensorCropDimensions;	// IMP=0x000000000002a474
- (CDStruct_79c71658)sensorCropDimensions;	// IMP=0x000000000002a3fe
- (CDStruct_79c71658)cinematicFramingOutputDimensions;	// IMP=0x000000000002a388
@property(readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property(readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
- (id)depthCompanionFormat;	// IMP=0x000000000002a355
- (id)fullBinSIFRCompanionFormat;	// IMP=0x000000000002a344
- (id)nonSIFRCompanionFormat;	// IMP=0x000000000002a333
@property(readonly, getter=isSIFRSupported) _Bool SIFRSupported;
- (id)frontEndScalerCompanionFormats;	// IMP=0x000000000002a2e9
@property(readonly) int autoFocusSystem;
- (float)lowLightVideoAEMaxGain;	// IMP=0x000000000002a27d
- (float)depthDataMaxIntegrationTimeOverride;	// IMP=0x000000000002a247
- (float)depthDataAEMaxGain;	// IMP=0x000000000002a211
- (int)maxIntegrationTimeOverride;	// IMP=0x000000000002a1db
- (float)aeMaxGain;	// IMP=0x000000000002a1a5
@property(readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly) float maxISO;
@property(readonly) float minISO;
- (_Bool)ispChromaNoiseReductionEnabled;	// IMP=0x0000000000029f50
- (_Bool)temporalNoiseReductionRawEnabled;	// IMP=0x0000000000029f1a
- (_Bool)temporalNoiseReductionBand0Disabled;	// IMP=0x0000000000029ee4
- (int)temporalNoiseReductionMode;	// IMP=0x0000000000029eae
@property(readonly) int rawBitDepth;
@property(readonly, getter=isZoomDynamicSensorCropSupported) _Bool zoomDynamicSensorCropSupported;
@property(readonly) float zoomFactorUpscaleThreshold;
@property(readonly) float maxZoomFactor;
@property(readonly, getter=isZoomSupported) _Bool zoomSupported;
- (int)fesBinningFactorHorizontal;	// IMP=0x0000000000029b01
- (struct CGRect)maxVisibleSensorRect;	// IMP=0x0000000000029a04
- (int)previewImageQueueSyncStrategy;	// IMP=0x00000000000299ce
@property(readonly) int stabilizationTypeForTimelapse;
@property(readonly) _Bool distortionCompensationSupported;
@property(readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property(readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property(readonly) int stabilizationTypeOverrideForCinematic;
@property(readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property(readonly) int stabilizationTypeOverrideForStandard;
- (_Bool)isStabilizationModeSupported:(int)arg1;	// IMP=0x0000000000029701
@property(readonly, getter=isBinned) _Bool binned;
@property(readonly) CDStruct_79c71658 geometricDistortionCorrectedNativeDimensions;
@property(readonly) float geometricDistortionCorrectedFieldOfView;
@property(readonly) float fieldOfView;
- (float)defaultMaxFrameRateForSessionPreset:(id)arg1;	// IMP=0x000000000002919a
- (float)defaultMinFrameRateForSessionPreset:(id)arg1;	// IMP=0x0000000000029079
@property(readonly) float maxSupportedFrameRate;
@property(readonly) float minSupportedFrameRate;
@property(readonly) CDStruct_79c71658 previewDimensions;
- (CDStruct_79c71658)nativeDimensions;	// IMP=0x0000000000028d82
@property(readonly) CDStruct_79c71658 sensorDimensions;
@property(readonly) CDStruct_79c71658 dimensions;
@property(readonly) int formatIndex;
- (struct opaqueCMFormatDescription *)formatDescription;	// IMP=0x0000000000028b9b
- (unsigned int)mediaType;	// IMP=0x0000000000028b6a
- (void)dealloc;	// IMP=0x0000000000028acc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028a88
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000028a44
- (id)copyWithNewPixelFormat:(unsigned int)arg1;	// IMP=0x00000000000289b2
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;	// IMP=0x0000000000028478

@end

