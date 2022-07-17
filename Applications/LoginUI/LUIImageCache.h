//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface LUIImageCache : NSObject
{
    NSCache *_diameterPhotoCache;	// 8 = 0x8
    NSCache *_diameterMonogramCache;	// 16 = 0x10
    NSCache *_tintedImageCache;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000000bcc5
- (void).cxx_destruct;	// IMP=0x002000000000c45d
@property(retain, nonatomic) NSCache *tintedImageCache; // @synthesize tintedImageCache=_tintedImageCache;
@property(retain, nonatomic) NSCache *diameterMonogramCache; // @synthesize diameterMonogramCache=_diameterMonogramCache;
@property(retain, nonatomic) NSCache *diameterPhotoCache; // @synthesize diameterPhotoCache=_diameterPhotoCache;
- (void)clearAllCaches;	// IMP=0x001000000000c3e6
- (id)tintedImageFromImage:(id)arg1 color:(id)arg2;	// IMP=0x001000000000c0c0
- (id)imageForContact:(id)arg1 forMonogramDiameter:(double)arg2;	// IMP=0x001000000000bf7f
- (void)cacheImage:(id)arg1 forContact:(id)arg2 monogramDiameter:(double)arg3 imageType:(unsigned long long)arg4;	// IMP=0x001000000000be04
- (id)_cacheForImageType:(unsigned long long)arg1;	// IMP=0x001000000000bdcb

@end
