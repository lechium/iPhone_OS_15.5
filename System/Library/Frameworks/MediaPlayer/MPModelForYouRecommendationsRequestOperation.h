//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPModelForYouRecommendationsRequestOperation
{
}

- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;	// IMP=0x000000000016e116
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;	// IMP=0x000000000016e01d
- (void)_produceResponseWithRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016d8db
- (id)_missingContentIdentifiersInRecommendationsArray:(id)arg1 storeItemMetadataResults:(id)arg2;	// IMP=0x000000000016d639
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016d2a2
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016cdd0

@end
