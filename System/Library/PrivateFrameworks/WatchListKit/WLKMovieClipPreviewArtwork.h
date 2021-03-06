//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WLKArtworkVariant;

@interface WLKMovieClipPreviewArtwork : NSObject
{
    _Bool _supportsLayeredImage;	// 8 = 0x8
    NSString *_bgColor;	// 16 = 0x10
    NSString *_textColor1;	// 24 = 0x18
    NSString *_textColor2;	// 32 = 0x20
    NSString *_textColor3;	// 40 = 0x28
    NSString *_textColor4;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    struct CGSize _artworkSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000051cc1
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *textColor4; // @synthesize textColor4=_textColor4;
@property(readonly, copy, nonatomic) NSString *textColor3; // @synthesize textColor3=_textColor3;
@property(readonly, copy, nonatomic) NSString *textColor2; // @synthesize textColor2=_textColor2;
@property(readonly, copy, nonatomic) NSString *textColor1; // @synthesize textColor1=_textColor1;
@property(readonly, copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) _Bool supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, nonatomic) WLKArtworkVariant *artworkVariant;
- (id)init;	// IMP=0x0000000000051ab5
- (id)_init;	// IMP=0x0000000000051a86
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000051883

@end

