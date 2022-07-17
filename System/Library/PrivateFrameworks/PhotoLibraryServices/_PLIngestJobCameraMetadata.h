//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, PFCameraMetadata, VNImageAestheticsObservation;

@interface _PLIngestJobCameraMetadata : NSObject
{
    _Bool _hasDeserializedMetadata;	// 8 = 0x8
    NSString *_cameraMetadataPath;	// 16 = 0x10
    NSString *_overCaptureMetadataPath;	// 24 = 0x18
    struct CGRect _preferredCropRect;	// 32 = 0x20
    struct CGRect _acceptableCropRect;	// 64 = 0x40
    NSData *_sceneprintData;	// 96 = 0x60
    NSArray *_junkImageClassificationObservations;	// 104 = 0x68
    VNImageAestheticsObservation *_imageAestheticsObservation;	// 112 = 0x70
    NSDictionary *_smartCamInfo;	// 120 = 0x78
    PFCameraMetadata *_cameraMetadata;	// 128 = 0x80
    PFCameraMetadata *_overCaptureCameraMetadata;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000007af6e
@property(readonly, nonatomic) PFCameraMetadata *overCaptureCameraMetadata; // @synthesize overCaptureCameraMetadata=_overCaptureCameraMetadata;
@property(readonly, nonatomic) PFCameraMetadata *cameraMetadata; // @synthesize cameraMetadata=_cameraMetadata;
- (void)applyCameraMetadataToSpatialOverCaptureAsset:(id)arg1;	// IMP=0x000000000007abf2
- (void)applyCameraMetadataToAsset:(id)arg1;	// IMP=0x000000000007a2c5
- (void)_deserializeCameraMetadata;	// IMP=0x0000000000079c69
- (id)initWithCameraMetadataPath:(id)arg1 overCaptureMetadataPath:(id)arg2;	// IMP=0x0000000000079bb2

@end
