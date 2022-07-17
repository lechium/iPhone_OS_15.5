//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNClassifyFaceAttributesRequest <VNFaceObservationAccepting>
{
}

+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x000000000014ade6
+ (id)supportedPrivateRevisions;	// IMP=0x000000000014adb6
+ (const CDStruct_d47b9615 *)dependentRequestCompatibility;	// IMP=0x000000000014ac3b
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x000000000014aea2
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;	// IMP=0x000000000014ac33
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000014ac21
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014a8d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end
