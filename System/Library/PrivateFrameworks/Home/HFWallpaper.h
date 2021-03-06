//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    HFCroppedWallpaperInfo *_cropInfo;	// 16 = 0x10
    NSString *_assetIdentifier;	// 24 = 0x18
}

+ (id)customWallpaperWithAssetIdentifier:(id)arg1;	// IMP=0x000000000020be79
+ (struct CGSize)contentSizeForWallpaper;	// IMP=0x000000000020b96b
+ (struct CGSize)size;	// IMP=0x000000000020b8d7
- (void).cxx_destruct;	// IMP=0x000000000020c5ca
@property(readonly, copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(copy, nonatomic) HFCroppedWallpaperInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)sliceIdentifierForVariant:(long long)arg1;	// IMP=0x000000000020c4fa
- (id)wallpaperIdentifier;	// IMP=0x000000000020c377
- (id)dictionaryRepresentation;	// IMP=0x000000000020c15f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020c0ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020bffc
- (id)description;	// IMP=0x000000000020bece
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000020bbcd
- (id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3;	// IMP=0x000000000020ba77

@end

