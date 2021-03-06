//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCRFaceDetector : NSObject
{
    void *api;	// 8 = 0x8
    NSObject *lock;	// 16 = 0x10
}

+ (id)keypointTrackingDetector;	// IMP=0x0000000000001b60
+ (id)standardTrackingDetector;	// IMP=0x0000000000001b16
+ (id)preciseFaceDetector;	// IMP=0x0000000000001acc
+ (id)fastFaceDetector;	// IMP=0x0000000000001a82
+ (id)faceDetector;	// IMP=0x0000000000001a38
+ (int)findProfileInParameters:(id)arg1;	// IMP=0x00000000000018ec
+ (id)faceDetectorWithOptions:(id)arg1;	// IMP=0x0000000000001893
- (id)convertRectsToString:(id)arg1;	// IMP=0x0000000000004b5d
- (id)parseNumericOrBoolValue:(id)arg1;	// IMP=0x0000000000004ac0
- (id)parseOption:(id)arg1 value:(id)arg2;	// IMP=0x00000000000049fe
- (void)setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3 usingApi:(struct FaceCoreAPI *)arg4;	// IMP=0x00000000000048fa
- (float)interpretAsFloat:(id)arg1 withDefault:(float)arg2;	// IMP=0x00000000000048de
- (void)createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2;	// IMP=0x00000000000043b4
- (id)createFCRImage:(struct CGImage *)arg1;	// IMP=0x00000000000042f4
- (void)addLandmarkOfType:(id)arg1 fromMesh:(void *)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5;	// IMP=0x000000000000408b
- (void)updateFCRFace:(id)arg1 from:(void *)arg2 image:(id)arg3;	// IMP=0x0000000000003707
- (id)createFCRFace:(void *)arg1 image:(id)arg2;	// IMP=0x0000000000003687
- (struct CGRect)makeYFlippedRectFromRect:(struct CGRect)arg1 image:(id)arg2;	// IMP=0x00000000000035fd
- (struct CGPoint)makeYFlippedPointFromCoord:(struct coord *)arg1 image:(id)arg2;	// IMP=0x00000000000035ac
- (struct coord)makeYFlippedCoordFromPoint:(struct CGPoint)arg1 image:(id)arg2;	// IMP=0x000000000000350e
- (struct face)createFace:(id)arg1 image:(id)arg2;	// IMP=0x0000000000003055
- (struct image)createImage:(id)arg1;	// IMP=0x0000000000002fd1
- (float)compareFace:(id)arg1 toFace:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002def
- (id)extractDetailsForFaces:(id)arg1 inCGImage:(struct CGImage *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000002d59
- (id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000002a68
- (id)extractDetailsForFaces:(id)arg1 inData:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000002934
- (id)detectFacesInCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000028a4
- (id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002684
- (void)updateExtractionParamsValues:(id)arg1;	// IMP=0x0000000000002442
- (id)parseRegionOfInterestParam:(id)arg1;	// IMP=0x000000000000239e
- (id)transformROIs:(id)arg1 image:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002135
- (void)updateDetectionParamsValues:(id)arg1 image:(id)arg2;	// IMP=0x0000000000001ed7
- (id)detectFacesInData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000001df7
- (id)version;	// IMP=0x0000000000001d5b
- (void)dealloc;	// IMP=0x0000000000001ceb
- (id)initWithProfile:(int)arg1 parameters:(id)arg2;	// IMP=0x0000000000001bf0
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000001baa

@end

