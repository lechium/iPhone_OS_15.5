//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHealthRecordRuleset;

@interface HDHealthRecordFindReferencesTask : NSObject
{
    HDHealthRecordRuleset *_ruleset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c852
- (id)debugDescription;	// IMP=0x000000000001c7d2
- (id)_resourceForReference:(id)arg1 containedInResource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001c5bb
- (id)_resourceReference:(id)arg1 presentInResources:(id)arg2;	// IMP=0x000000000001c3b4
- (_Bool)_resourceReference:(id)arg1 containedInResource:(id)arg2;	// IMP=0x000000000001c2fc
- (_Bool)_isIrretrievableReference:(id)arg1 serverBaseURL:(id)arg2;	// IMP=0x000000000001c09f
- (id)_filterResources:(id)arg1;	// IMP=0x000000000001bfd3
- (_Bool)_canProcessResource:(id)arg1;	// IMP=0x000000000001bf45
- (_Bool)processContainedResourcesInProcessingContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b5a6
- (id)_processedRetrieveReferencesResourceWithResource:(id)arg1 processingContext:(id)arg2 rule:(id)arg3 allResources:(id)arg4;	// IMP=0x000000000001aa91
- (id)_processedContainReferencesResourceWithResource:(id)arg1 processingContext:(id)arg2 rule:(id)arg3 allResources:(id)arg4;	// IMP=0x0000000000019fb0
- (id)processResourcesForReferenceExtractionRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000190ba
- (id)initWithRuleset:(id)arg1;	// IMP=0x0000000000018fd4
- (id)init;	// IMP=0x0000000000018f5a

@end
