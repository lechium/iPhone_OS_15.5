//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPPhotosFaceProcessingContext;

@interface VCPFaceMerger : NSObject
{
    VCPPhotosFaceProcessingContext *_context;	// 8 = 0x8
}

+ (_Bool)_allowANE;	// IMP=0x00000000002393d6
- (void).cxx_destruct;	// IMP=0x000000000023bc03
- (id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3;	// IMP=0x000000000023ab0b
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2;	// IMP=0x000000000023a0f0
- (_Bool)_alignBBoxForVCPPhotosFaces:(id)arg1 forImage:(id)arg2;	// IMP=0x0000000000239ae9
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002394a3
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;	// IMP=0x00000000002393de
- (id)_faceObservationsWithBBoxFromVCPPhotosFaces:(id)arg1 mapping:(id)arg2;	// IMP=0x0000000000238f53
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000238ee8

@end

