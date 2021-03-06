//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PHMomentShare, PXAssetsDataSource, PXCMMContext, PXCMMSendBackSuggestion;
@protocol OS_dispatch_queue;

@interface PXCMMSendBackSuggestionSource
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    unsigned long long _sourceType;	// 16 = 0x10
    _Bool _hasInitiatedFetchRequest;	// 24 = 0x18
    _Bool _shouldShowBanner;	// 25 = 0x19
    PXAssetsDataSource *_assetsDataSource;	// 32 = 0x20
    PHMomentShare *_originatingMomentShare;	// 40 = 0x28
    PXCMMSendBackSuggestion *_suggestion;	// 48 = 0x30
    PXCMMContext *_sendBackContext;	// 56 = 0x38
}

+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;	// IMP=0x0000000000342902
+ (id)_assetsInDateRanges:(id)arg1;	// IMP=0x00000000003423d8
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;	// IMP=0x0000000000341f47
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0000000000341bd9
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;	// IMP=0x0000000000341a5e
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;	// IMP=0x00000000003418c8
+ (id)new;	// IMP=0x000000000034184e
- (void).cxx_destruct;	// IMP=0x000000000034157f
@property(readonly, nonatomic) _Bool shouldShowBanner; // @synthesize shouldShowBanner=_shouldShowBanner;
@property(readonly, nonatomic) PXCMMContext *sendBackContext; // @synthesize sendBackContext=_sendBackContext;
@property(readonly, nonatomic) PXCMMSendBackSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
- (id)_sendBackFetchResultUsingPhotosGraph;	// IMP=0x00000000003414db
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;	// IMP=0x0000000000341389
- (id)_createSendBackContext;	// IMP=0x000000000034113f
- (id)_allMetadataAssets;	// IMP=0x0000000000341013
- (id)mutableChangeObject;	// IMP=0x000000000034100a
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000340fdb
- (void)setShouldShowBanner:(_Bool)arg1;	// IMP=0x0000000000340fb3
- (void)setSendBackContext:(id)arg1;	// IMP=0x0000000000340f4d
- (void)setSuggestion:(id)arg1;	// IMP=0x0000000000340ee7
- (void)_fetchQueue_fetchSuggestedSendBackContext;	// IMP=0x000000000034099e
- (void)_fetchSuggestedSendBackContext;	// IMP=0x000000000034080d
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;	// IMP=0x000000000034035c
- (_Bool)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;	// IMP=0x0000000000340191
- (void)startLoading;	// IMP=0x000000000034011b
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3;	// IMP=0x0000000000340000
- (id)init;	// IMP=0x000000000033ff86

@end

