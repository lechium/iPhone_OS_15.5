//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface GEOMetroRegionAssetProvider : NSObject
{
    unsigned int _catalogLoadRetryMultiplier;	// 8 = 0x8
    NSCache *_fileURLCache;	// 16 = 0x10
}

+ (void)preloadAssetForCountryCode:(id)arg1 preloadQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000001121572
+ (void)_updateCatalogWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000000011212ae
+ (void)_downloadCatalogIfNeededThen:(CDUnknownBlockType)arg1;	// IMP=0x00000000011210c1
+ (void)_unavailableAssetForAssetCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000011207c9
+ (id)_maQueryForAssetCode:(id)arg1;	// IMP=0x0000000001120663
+ (void)_downloadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000112037a
+ (id)sharedProvider;	// IMP=0x0000000001120325
- (void).cxx_destruct;	// IMP=0x0000000001121abb
- (void)_catalogDownloadFinishedWithResult:(long long)arg1;	// IMP=0x0000000001121433
- (void)_updateCatalogAfterDelay:(double)arg1;	// IMP=0x00000000011211a3
- (id)homeCountryCodeAcceptList;	// IMP=0x00000000011210a1
- (id)homeMetroAcceptListForCountryCode:(id)arg1;	// IMP=0x0000000001121088
- (id)_acceptListForCountryCode:(id)arg1 name:(id)arg2;	// IMP=0x0000000001120f06
- (id)urlForInstalledCountryCode:(id)arg1;	// IMP=0x0000000001120e2f
- (id)_bestAvailableAssetForAssetCode:(id)arg1;	// IMP=0x0000000001120aaa
- (id)init;	// IMP=0x000000000112029a

@end

