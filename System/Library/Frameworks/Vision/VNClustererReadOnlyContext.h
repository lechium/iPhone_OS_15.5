//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNClustererModelQuerying-Protocol.h>

@protocol VNClusteringReadOnly><VNClusteringCancelling;

__attribute__((visibility("hidden")))
@interface VNClustererReadOnlyContext <VNClustererModelQuerying>
{
    id <VNClusteringReadOnly><VNClusteringCancelling> _clusterer;	// 64 = 0x40
}

+ (id)nonGroupedGroupID;	// IMP=0x000000000002fb0b
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002fae2
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f9f8
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f98c
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f963
- (void).cxx_destruct;	// IMP=0x000000000002f87d
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;	// IMP=0x000000000002f860
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f833
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002f5a0
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f573
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f546
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f514
- (id)getAllClustersAndReturnError:(id *)arg1;	// IMP=0x000000000002f4f7
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f4ca
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;	// IMP=0x000000000002f4ad
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x000000000002f34a
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002f32e
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 torsoprintRequestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002f1d5
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000002f1b9

@end

