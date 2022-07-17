//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject
{
    AVCameraCalibrationDataInternal *_internal;	// 8 = 0x8
}

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;	// IMP=0x00000000000483ee
- (void)dealloc;	// IMP=0x0000000000048360
- (id)_initEmpty;	// IMP=0x0000000000048304
- (struct CGImageMetadata *)copyAuxiliaryMetadata;	// IMP=0x0000000000047c1e
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;	// IMP=0x0000000000047a97
- (id)initWithDepthMetadataDictionary:(id)arg1;	// IMP=0x0000000000047836
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;	// IMP=0x0000000000046ff9
- (id)cameraCalibrationDataDictionary;	// IMP=0x0000000000046dc2
- (id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046ce1
@property(readonly, nonatomic) struct CGPoint lensDistortionCenter;
@property(readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property(readonly, nonatomic) NSData *lensDistortionLookupTable;
@property(readonly, nonatomic) float pixelSize;
@property(readonly, nonatomic) CDStruct_14d5dc5e extrinsicMatrix;
@property(readonly, nonatomic) struct CGSize intrinsicMatrixReferenceDimensions;
@property(readonly, nonatomic) CDStruct_8e0628e6 intrinsicMatrix;
- (id)description;	// IMP=0x0000000000046ad7
- (id)debugDescription;	// IMP=0x0000000000046843

@end
