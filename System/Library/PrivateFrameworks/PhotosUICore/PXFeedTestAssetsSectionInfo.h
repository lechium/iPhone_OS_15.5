//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXFeedTestAssetsSectionInfo
{
    NSArray *_plAssets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000075cbd9
@property(readonly, nonatomic) NSArray *plAssets; // @synthesize plAssets=_plAssets;
- (id)_fetchPhotoAssets:(long long)arg1;	// IMP=0x000000000075c8e3
- (id)countsByAssetDisplayType;	// IMP=0x000000000075c70a
- (id)assetForItemAtIndex:(long long)arg1;	// IMP=0x000000000075c6ab
- (long long)typeForItemAtIndex:(long long)arg1;	// IMP=0x000000000075c6a3
- (long long)sectionType;	// IMP=0x000000000075c69b
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000075c61a

@end

