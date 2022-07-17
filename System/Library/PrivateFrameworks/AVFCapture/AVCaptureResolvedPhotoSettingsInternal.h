//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSemanticStyle, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureResolvedPhotoSettingsInternal : NSObject
{
    long long uniqueID;	// 8 = 0x8
    CDStruct_79c71658 photoDimensions;	// 16 = 0x10
    CDStruct_79c71658 rawPhotoDimensions;	// 24 = 0x18
    CDStruct_79c71658 previewDimensions;	// 32 = 0x20
    CDStruct_79c71658 embeddedThumbnailDimensions;	// 40 = 0x28
    CDStruct_79c71658 rawEmbeddedThumbnailDimensions;	// 48 = 0x30
    _Bool livePhotoMovieEnabled;	// 56 = 0x38
    CDStruct_79c71658 livePhotoMovieDimensions;	// 60 = 0x3c
    CDStruct_79c71658 portraitEffectsMatteDimensions;	// 68 = 0x44
    CDStruct_79c71658 hairSegmentationMatteDimensions;	// 76 = 0x4c
    CDStruct_79c71658 skinSegmentationMatteDimensions;	// 84 = 0x54
    CDStruct_79c71658 teethSegmentationMatteDimensions;	// 92 = 0x5c
    CDStruct_79c71658 glassesSegmentationMatteDimensions;	// 100 = 0x64
    CDStruct_79c71658 spatialOverCapturePhotoDimensions;	// 108 = 0x6c
    _Bool turboModeEnabled;	// 116 = 0x74
    _Bool flashEnabled;	// 117 = 0x75
    _Bool redEyeReductionEnabled;	// 118 = 0x76
    _Bool HDREnabled;	// 119 = 0x77
    _Bool adjustedPhotoFiltersEnabled;	// 120 = 0x78
    _Bool EV0PhotoDeliveryEnabled;	// 121 = 0x79
    _Bool stillImageStabilizationEnabled;	// 122 = 0x7a
    _Bool virtualDeviceFusionEnabled;	// 123 = 0x7b
    _Bool squareCropEnabled;	// 124 = 0x7c
    CDStruct_79c71658 deferredPhotoProxyDimensions;	// 128 = 0x80
    CDStruct_e83c9415 photoProcessingTimeRange;	// 136 = 0x88
    _Bool contentAwareDistortionCorrectionEnabled;	// 184 = 0xb8
    NSArray *photoManifest;	// 192 = 0xc0
    unsigned long long digitalFlashUserInterfaceHints;	// 200 = 0xc8
    NSArray *digitalFlashUserInterfaceRGBEstimate;	// 208 = 0xd0
    _Bool captureBeforeResolvingSettingsEnabled;	// 216 = 0xd8
    AVSemanticStyle *semanticStyle;	// 224 = 0xe0
}

- (void)dealloc;	// IMP=0x0000000000022c10

@end
