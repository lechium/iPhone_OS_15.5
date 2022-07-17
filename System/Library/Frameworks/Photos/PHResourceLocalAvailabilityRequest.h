//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSProgressReporting-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PHAsset;

@interface PHResourceLocalAvailabilityRequest : NSObject <NSProgressReporting>
{
    NSMutableDictionary *_progressByRequestIdentifier;	// 8 = 0x8
    CDUnknownBlockType _downloadCompletionHandler;	// 16 = 0x10
    _Bool __downloadCancelled;	// 24 = 0x18
    PHAsset *_asset;	// 32 = 0x20
    long long _requestType;	// 40 = 0x28
    double _progressFraction;	// 48 = 0x30
    NSProgress *_progress;	// 56 = 0x38
    CDUnknownBlockType _progressChangeHandler;	// 64 = 0x40
    NSArray *__assetResources;	// 72 = 0x48
    NSMutableArray *__activeAssetResourcesRequest;	// 80 = 0x50
}

+ (id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000008d30b
+ (id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2;	// IMP=0x000000000008d16b
+ (id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2 options:(id)arg3;	// IMP=0x000000000008cf75
+ (id)indexesForAssetsRequiringResourceRetrieval:(id)arg1 requestType:(long long)arg2;	// IMP=0x000000000008cf60
+ (id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 includeAllAssetResources:(_Bool)arg3 fulfillOnDemandResources:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000008cd88
+ (id)utiKeysForURLKeys;	// IMP=0x000000000008cd58
+ (id)resourceInfoKeysForResourceTypesForVideos;	// IMP=0x000000000008cd28
+ (id)resourceInfoKeysForResourceTypesForPhotos;	// IMP=0x000000000008ccf8
+ (id)singularResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 useOriginalResources:(_Bool)arg4 knownUnsupported:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000008c3a3
+ (id)originalsAndFullSizeResourcesToShareForAsset:(id)arg1 fromAvailableResources:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000008c0d5
+ (_Bool)setValuesInDictionary:(id)arg1 fromDictionary:(id)arg2 keysToCopy:(id)arg3;	// IMP=0x000000000008beb0
+ (id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008b7e8
+ (id)_resourcesToShareForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008b7d1
+ (id)fetchResourcesToShareForAsset:(id)arg1 requestOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008b6ec
- (void).cxx_destruct;	// IMP=0x0000000000088548
@property(readonly, nonatomic) NSMutableArray *_activeAssetResourcesRequest; // @synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest;
@property(retain, nonatomic, setter=_setAssetResources:) NSArray *_assetResources; // @synthesize _assetResources=__assetResources;
@property(nonatomic, getter=_isDownloadCancelled, setter=_setDownloadCancelled:) _Bool _downloadCancelled; // @synthesize _downloadCancelled=__downloadCancelled;
@property(copy, nonatomic) CDUnknownBlockType progressChangeHandler; // @synthesize progressChangeHandler=_progressChangeHandler;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, setter=_setProgressFraction:) double progressFraction; // @synthesize progressFraction=_progressFraction;
@property(readonly) long long requestType; // @synthesize requestType=_requestType;
@property(readonly) PHAsset *asset; // @synthesize asset=_asset;
- (long long)resourceAvailabilityForOptions:(id)arg1 resourceInfo:(id *)arg2;	// IMP=0x00000000000881ba
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(_Bool)arg3;	// IMP=0x0000000000088006
- (void)cancelRetrievalRequest;	// IMP=0x0000000000087f3b
- (void)_cancelActiveAssetResourceRequests;	// IMP=0x0000000000087e18
- (void)_didFinishDownloadWithSuccess:(_Bool)arg1 resourceInfo:(id)arg2 error:(id)arg3;	// IMP=0x0000000000087d5b
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000087bee
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2;	// IMP=0x0000000000087abe
- (void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000087297
- (void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000086ba5
- (void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000860ca
- (void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000085c92
- (void)retrieveRequiredResourcesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085b50
- (void)fetchResourceAvailabilityWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085a06
- (id)initWithAsset:(id)arg1 requestType:(long long)arg2;	// IMP=0x000000000008576c
- (id)init;	// IMP=0x00000000000856f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
