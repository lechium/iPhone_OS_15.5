//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNFaceObservationAccepting-Protocol.h>
#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNDetectFaceGazeRequest <VNFaceObservationAccepting, VNImageIdealImageSizeProviding>
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00000000000bb26b
+ (unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;	// IMP=0x00000000000bb1f2
+ (Class)configurationClass;	// IMP=0x00000000000bb1e1
@property(readonly) NSArray *supportedImageSizeSet;
@property(nonatomic) float commonGazeLocationRadius;
@property(nonatomic) float minimumFaceDimension;
@property(nonatomic) float gazeHeatMapThreshold;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bb687
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x00000000000bb593
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bb4bc
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000bb3c7
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000000bb28a
- (long long)dependencyProcessingOrdinality;	// IMP=0x00000000000bb278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end
