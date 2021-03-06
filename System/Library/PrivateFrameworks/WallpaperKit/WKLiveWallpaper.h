//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WallpaperKit/WKFileBasedWallpaper-Protocol.h>

@class NSString, NSURL;

@interface WKLiveWallpaper <WKFileBasedWallpaper>
{
    NSURL *_fullsizeImageURL;	// 8 = 0x8
    NSURL *_thumbnailImageURL;	// 16 = 0x10
    NSURL *_videoAssetURL;	// 24 = 0x18
    double _stillTimeInVideo;	// 32 = 0x20
}

+ (id)na_identity;	// IMP=0x0000000000009341
- (void).cxx_destruct;	// IMP=0x00000000000099bb
@property(nonatomic) double stillTimeInVideo; // @synthesize stillTimeInVideo=_stillTimeInVideo;
@property(copy, nonatomic) NSURL *videoAssetURL; // @synthesize videoAssetURL=_videoAssetURL;
@property(copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSURL *fullsizeImageURL; // @synthesize fullsizeImageURL=_fullsizeImageURL;
- (CDUnknownBlockType)descriptionBuilderBlock;	// IMP=0x00000000000096a5
- (unsigned long long)hash;	// IMP=0x000000000000964a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000095d4
@property(readonly, nonatomic) unsigned long long backingType;
@property(readonly, nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009235
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 thumbnailImageURL:(id)arg3 fullsizeImageURL:(id)arg4 videoAssetURL:(id)arg5 stillTimeInVideo:(double)arg6;	// IMP=0x000000000000911c

// Remaining properties
@property(readonly, nonatomic) long long identifier;
@property(readonly, copy, nonatomic) NSString *name;

@end

