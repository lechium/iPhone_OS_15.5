//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryAutoEditDecisionListsProducerFactory-Protocol.h>

@class PFStoryAutoEditConfiguration;

@interface PXStoryDefaultAutoEditDecisionListsProducerFactory : NSObject <PXStoryAutoEditDecisionListsProducerFactory>
{
    PFStoryAutoEditConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009f4f2b
- (id)fallbackAutoEditDecisionListsProducer;	// IMP=0x00000000009f4c04
- (id)autoEditDecisionListsProducerForAssetCollection:(id)arg1 displayAssets:(id)arg2 movieHighlights:(id)arg3 targetOverallDurationInfo:(CDStruct_5d4c7ed3)arg4;	// IMP=0x00000000009f4b34
- (id)init;	// IMP=0x00000000009f4ace

@end

