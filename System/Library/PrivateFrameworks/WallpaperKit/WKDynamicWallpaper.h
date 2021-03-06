//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WallpaperKit/WKValueBasedWallpaper-Protocol.h>

@class NSDictionary, NSString, UIImage;

@interface WKDynamicWallpaper <WKValueBasedWallpaper>
{
    NSDictionary *__dynamicDictionary;	// 8 = 0x8
    UIImage *__thumbnailImage;	// 16 = 0x10
}

+ (id)na_identity;	// IMP=0x000000000002114a
- (void).cxx_destruct;	// IMP=0x00000000000215b3
@property(retain, nonatomic) UIImage *_thumbnailImage; // @synthesize _thumbnailImage=__thumbnailImage;
@property(retain, nonatomic) NSDictionary *_dynamicDictionary; // @synthesize _dynamicDictionary=__dynamicDictionary;
- (CDUnknownBlockType)descriptionBuilderBlock;	// IMP=0x0000000000021418
- (unsigned long long)hash;	// IMP=0x00000000000213bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021347
- (id)wallpaperValue;	// IMP=0x0000000000021138
- (id)thumbnailImage;	// IMP=0x000000000002108f
@property(readonly, nonatomic) unsigned long long backingType;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020fc8
- (id)initWithIdentifier:(long long)arg1 dictionary:(id)arg2;	// IMP=0x0000000000020f49
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2;	// IMP=0x0000000000020e8b

// Remaining properties
@property(readonly, nonatomic) long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

