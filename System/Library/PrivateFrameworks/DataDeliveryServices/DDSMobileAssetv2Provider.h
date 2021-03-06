//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetProviding-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol DDSAssetProvidingDelegate, DDSAssetQueryResultCaching;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding>
{
    _Bool _encounteredAssertionUpdateError;	// 8 = 0x8
    id <DDSAssetProvidingDelegate> delegate;	// 16 = 0x10
    NSMutableDictionary *_remainingAssetsByQueryId;	// 24 = 0x18
    id <DDSAssetQueryResultCaching> _assetQueryResultsCache;	// 32 = 0x20
    NSMutableDictionary *_downloadStateByAssetID;	// 40 = 0x28
}

+ (long long)supportedCompatibilityVersion;	// IMP=0x0000000000013fe7
+ (id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2;	// IMP=0x00000000000131a8
+ (id)latestAssetsOnlyFromAssets:(id)arg1;	// IMP=0x0000000000012ee5
- (void).cxx_destruct;	// IMP=0x0000000000014294
@property(retain, nonatomic) NSMutableDictionary *downloadStateByAssetID; // @synthesize downloadStateByAssetID=_downloadStateByAssetID;
@property(retain, nonatomic) id <DDSAssetQueryResultCaching> assetQueryResultsCache; // @synthesize assetQueryResultsCache=_assetQueryResultsCache;
@property(nonatomic) _Bool encounteredAssertionUpdateError; // @synthesize encounteredAssertionUpdateError=_encounteredAssertionUpdateError;
@property(readonly, nonatomic) NSMutableDictionary *remainingAssetsByQueryId; // @synthesize remainingAssetsByQueryId=_remainingAssetsByQueryId;
@property(retain, nonatomic) id <DDSAssetProvidingDelegate> delegate; // @synthesize delegate;
- (void)didUpdateCatalogWithError:(id)arg1;	// IMP=0x0000000000013f45
- (void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;	// IMP=0x0000000000013e88
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;	// IMP=0x0000000000013c9d
- (void)serverDidUpdateAssetsWithType:(id)arg1;	// IMP=0x0000000000013c60
- (void)removeAssets:(id)arg1;	// IMP=0x0000000000013929
- (void)removeOldAssetsForAssertions:(id)arg1;	// IMP=0x0000000000013534
- (void)removeAssetsForAssertions:(id)arg1;	// IMP=0x00000000000133b3
- (void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012ba4
- (id)downloadOptionsForCatalogWithType:(id)arg1 discretionaryDownload:(_Bool)arg2;	// IMP=0x0000000000012b2f
- (id)downloadOptionsForPolicy:(id)arg1 discretionaryDownload:(_Bool)arg2;	// IMP=0x0000000000012a87
- (void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 discretionaryDownload:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012587
- (void)beginDownloadForAssertion:(id)arg1 discretionaryDownload:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011c58
- (void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(_Bool)arg2;	// IMP=0x0000000000011732
- (_Bool)shouldMatchAttributeValue:(id)arg1 givenValue:(id)arg2;	// IMP=0x00000000000116c7
- (id)performAssetsForQuery:(id)arg1 errorPtr:(id *)arg2;	// IMP=0x0000000000010da2
- (id)assetsForQuery:(id)arg1 errorPtr:(id *)arg2;	// IMP=0x0000000000010b98
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010aef
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;	// IMP=0x000000000001085a
- (id)init;	// IMP=0x00000000000107ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

