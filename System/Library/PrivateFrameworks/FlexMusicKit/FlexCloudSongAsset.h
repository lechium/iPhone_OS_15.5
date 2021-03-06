//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FlexCloudManager;

@interface FlexCloudSongAsset
{
    FlexCloudManager *_cloudManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002e7b4
@property(readonly) __weak FlexCloudManager *cloudManager; // @synthesize cloudManager=_cloudManager;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x000000000002e77f
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x000000000002e763
- (_Bool)contentUpdateAvaliable;	// IMP=0x000000000002e75b
- (unsigned long long)assetStatus;	// IMP=0x000000000002e708
- (void)purgeLocalCache;	// IMP=0x000000000002e69b
- (void)cancelDownload;	// IMP=0x000000000002e619
- (void)requestDownloadWithOptions:(id)arg1;	// IMP=0x000000000002e574
- (void)requestDownload;	// IMP=0x000000000002e53b
- (_Bool)isCloudBacked;	// IMP=0x000000000002e533
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;	// IMP=0x000000000002e4a2

@end

