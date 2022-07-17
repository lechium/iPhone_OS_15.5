//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary, VCPCNNPoseEstimator, VCPCNNSmileDetector, VCPFrameAnalysisStats;

__attribute__((visibility("hidden")))
@interface VCPVideoFullFaceDetector
{
    int _latestTrackID;	// 56 = 0x38
    VCPCNNSmileDetector *_smileDetector;	// 64 = 0x40
    VCPCNNPoseEstimator *_poseEstimator;	// 72 = 0x48
    NSArray *_existingFaceprints;	// 80 = 0x50
    VCPFrameAnalysisStats *_frameStats;	// 88 = 0x58
    float _latestFrameArea;	// 96 = 0x60
    CDStruct_1b6d18a9 _timeLastTracking;	// 100 = 0x64
    NSMutableDictionary *_faceTrackers;	// 128 = 0x80
    NSMutableDictionary *_keyFaces;	// 136 = 0x88
    NSMutableArray *_reservedIDs;	// 144 = 0x90
    NSMutableDictionary *_facePrints;	// 152 = 0x98
    NSMutableArray *_allFaces;	// 160 = 0xa0
    NSMutableDictionary *_faceRanges;	// 168 = 0xa8
    NSMutableArray *_frameFaceResults;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000247b23
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000246e4b
- (int)updateWithExistingFaces;	// IMP=0x0000000000246356
- (int)clusterFaces;	// IMP=0x0000000000245320
- (id)frameFaceResults;	// IMP=0x00000000002452a3
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000024430f
- (int)detectTrackFacesInFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 faces:(id)arg3;	// IMP=0x0000000000242efb
- (_Bool)locationChange:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;	// IMP=0x0000000000242eb1
- (_Bool)compareFace:(id)arg1 withFace:(id)arg2;	// IMP=0x0000000000242d36
- (void)removeSmallestKeyFace;	// IMP=0x0000000000242ac4
- (float)minProcessTimeIntervalInSecs;	// IMP=0x0000000000242ab6
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;	// IMP=0x00000000002422db
- (void)dealloc;	// IMP=0x0000000000242214
- (id)initWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;	// IMP=0x0000000000241ea9
- (id)initWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000241dea
- (id)faceRanges;	// IMP=0x0000000000241dd5

@end
