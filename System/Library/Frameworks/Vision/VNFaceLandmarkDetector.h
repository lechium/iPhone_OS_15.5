//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector <VNDetectorKeyProviding>
{
    struct shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;	// 8 = 0x8
    _Bool _requireFaceAttributesPupilRefiner;	// 24 = 0x18
    _Bool _modelFilesWereMemmapped;	// 25 = 0x19
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000764f6
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0000000000076493
+ (struct _Geometry2D_point2D_)computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ *)arg1 indicies:(const int *)arg2 numberOfIndicies:(int)arg3;	// IMP=0x0000000000076458
+ (const void *)allLandmarksPointsIndexesForConstellation:(unsigned long long)arg1;	// IMP=0x0000000000076359
+ (const struct _LandmarkDetector_faceMeshParts_ *)landmarksMeshPartsForConstellation:(unsigned long long)arg1;	// IMP=0x000000000007625a
- (id).cxx_construct;	// IMP=0x00000000000793b9
- (void).cxx_destruct;	// IMP=0x00000000000793a8
- (_Bool)detectBlinkOnFaceImage:(const struct vImage_Buffer *)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg3 landmarks:(const void *)arg4 warningRecorder:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000077ebb
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;	// IMP=0x0000000000077e5b
- (_Bool)postprocessLandmarkResultsForLandmarks:(const void *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000777d7
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer *)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ *)arg2 andLandmarks:(const void *)arg3 error:(id *)arg4;	// IMP=0x0000000000077383
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(void *)arg1;	// IMP=0x0000000000077110
- (void)dealloc;	// IMP=0x000000000007701d
- (_Bool)loadRefinersAndReturnError:(id *)arg1;	// IMP=0x0000000000076e35
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
