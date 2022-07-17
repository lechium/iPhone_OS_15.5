//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;	// 8 = 0x8
}

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;	// IMP=0x0000000000022c71
+ (void)initialize;	// IMP=0x0000000000022c60
- (id)digitalFlashRGBEstimate;	// IMP=0x0000000000023958
- (id)digitalFlashUserInterfaceRGBEstimate;	// IMP=0x000000000002393b
- (unsigned long long)digitalFlashUserInterfaceHints;	// IMP=0x000000000002392a
- (_Bool)isCaptureBeforeResolvingSettingsEnabled;	// IMP=0x000000000002391a
@property(readonly, getter=isContentAwareDistortionCorrectionEnabled) _Bool contentAwareDistortionCorrectionEnabled;
@property(readonly) CDStruct_e83c9415 photoProcessingTimeRange;
- (CDStruct_79c71658)deferredPhotoProxyDimensions;	// IMP=0x00000000000238cc
- (id)photoManifest;	// IMP=0x00000000000238ae
@property(readonly) unsigned long long expectedPhotoCount;
@property(readonly, getter=isDualCameraFusionEnabled) _Bool dualCameraFusionEnabled;
@property(readonly, getter=isVirtualDeviceFusionEnabled) _Bool virtualDeviceFusionEnabled;
- (_Bool)livePhotoMovieEnabled;	// IMP=0x000000000002386a
- (_Bool)isSquareCropEnabled;	// IMP=0x000000000002385d
@property(readonly, getter=isStillImageStabilizationEnabled) _Bool stillImageStabilizationEnabled;
- (_Bool)isEV0PhotoDeliveryEnabled;	// IMP=0x0000000000023843
- (_Bool)isAdjustedPhotoFilterRenderingEnabled;	// IMP=0x0000000000023836
- (_Bool)isHDREnabled;	// IMP=0x0000000000023829
@property(readonly, getter=isRedEyeReductionEnabled) _Bool redEyeReductionEnabled;
@property(readonly, getter=isFlashEnabled) _Bool flashEnabled;
- (_Bool)isTurboModeEnabled;	// IMP=0x0000000000023802
- (CDStruct_79c71658)spatialOverCapturePhotoDimensions;	// IMP=0x00000000000237f4
- (CDStruct_79c71658)dimensionsForSemanticSegmentationMatteOfType:(id)arg1;	// IMP=0x0000000000023723
@property(readonly) CDStruct_79c71658 portraitEffectsMatteDimensions;
@property(readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property(readonly) CDStruct_79c71658 rawPhotoDimensions;
@property(readonly) CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 previewDimensions;
@property(readonly) CDStruct_79c71658 photoDimensions;
@property(readonly) long long uniqueID;
- (id)description;	// IMP=0x000000000002361e
- (id)debugDescription;	// IMP=0x00000000000230b3
- (void)dealloc;	// IMP=0x0000000000023073
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;	// IMP=0x0000000000022e67

@end
