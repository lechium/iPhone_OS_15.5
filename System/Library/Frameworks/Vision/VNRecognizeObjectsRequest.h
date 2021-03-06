//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNRecognizeObjectsRequest <VNImageIdealImageSizeProviding>
{
}

+ (Class)configurationClass;	// IMP=0x00000000000bd5f1
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00000000000bd5e4
+ (id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000bd560
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x00000000000bd505
+ (id)supportedPrivateRevisions;	// IMP=0x00000000000bd4d5
@property(readonly) NSArray *supportedImageSizeSet;
- (CDUnknownBlockType)resultsSortingComparator;	// IMP=0x00000000000bd4af
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000bd3c5
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bd2be
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000000bd0f6
@property float modelNonMaximumSuppressionThreshold;
@property float modelMinimumDetectionConfidence;
@property _Bool useImageAnalyzerScaling;
@property unsigned long long imageCropAndScaleOption;
- (id)supportedIdentifiersAndReturnError:(id *)arg1;	// IMP=0x00000000000bcc9f
- (id)_applicableDetectorAndGetConfigurationOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bcb88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

