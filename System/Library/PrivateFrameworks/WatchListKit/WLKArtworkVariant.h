//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject
{
    NSString *_artworkURLTemplate;	// 8 = 0x8
    _Bool _supportsLayeredImage;	// 16 = 0x10
    _Bool _alpha;	// 17 = 0x11
    NSString *_artworkURLString;	// 24 = 0x18
    long long _artworkType;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    struct CGSize _artworkSize;	// 48 = 0x30
}

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 cropCode:(id)arg3 format:(id)arg4;	// IMP=0x000000000001edb4
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 format:(id)arg3;	// IMP=0x000000000001ed9a
- (void).cxx_destruct;	// IMP=0x000000000001f2e3
@property(nonatomic, getter=hasAlpha) _Bool alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, copy, nonatomic) NSString *artworkURLString; // @synthesize artworkURLString=_artworkURLString;
- (id)_sizeDescription:(struct CGSize)arg1;	// IMP=0x000000000001f260
- (id)description;	// IMP=0x000000000001f14a
- (id)artworkSizeTemplateURL;	// IMP=0x000000000001f046
- (id)artworkURLForSize:(struct CGSize)arg1 cropCode:(id)arg2 format:(id)arg3;	// IMP=0x000000000001ece3
- (id)artworkURLForSize:(struct CGSize)arg1 format:(id)arg2;	// IMP=0x000000000001eccc
- (id)artworkURLForSize:(struct CGSize)arg1;	// IMP=0x000000000001ecb8
@property(readonly, copy, nonatomic) NSURL *artworkURL;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001e3da

@end

