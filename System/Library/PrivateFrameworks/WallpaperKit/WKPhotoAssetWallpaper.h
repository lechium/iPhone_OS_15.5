//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WallpaperKit/WKValueBasedWallpaper-Protocol.h>

@class NSString, PHAsset;

@interface WKPhotoAssetWallpaper <WKValueBasedWallpaper>
{
    PHAsset *__asset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c47f
@property(retain, nonatomic) PHAsset *_asset; // @synthesize _asset=__asset;
- (id)wallpaperValue;	// IMP=0x000000000000c448
- (id)thumbnailImage;	// IMP=0x000000000000c440
@property(readonly, nonatomic) unsigned long long backingType;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithPhotoAsset:(id)arg1;	// IMP=0x000000000000c3ab

// Remaining properties
@property(readonly, nonatomic) long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

