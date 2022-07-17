//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString, VNClassificationCustomHierarchy;

@interface VNClassifyImageRequest <VNImageIdealImageSizeProviding>
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00000000000ca35b
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ca042
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x00000000000c9fc2
+ (id)supportedPrivateRevisions;	// IMP=0x00000000000c9f92
+ (Class)configurationClass;	// IMP=0x00000000000c9f81
@property(readonly) NSArray *supportedImageSizeSet;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c9d41
- (_Bool)defineCustomHierarchy:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c9c26
@property(readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property(nonatomic) unsigned long long maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations;
- (id)supportedIdentifiersAndReturnError:(id *)arg1;	// IMP=0x00000000000c98be
- (CDUnknownBlockType)resultsSortingComparator;	// IMP=0x00000000000c98b1
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c980a
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x00000000000c96cf
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c95c8
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;	// IMP=0x00000000000c94d9
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000c9333
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000000c913f
@property(readonly, copy) NSString *description;
- (void)_setCustomHierarchy:(id)arg1;	// IMP=0x00000000000c8f81
- (id)_applicableDetectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c8e53
- (id)_applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000c8dd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end
