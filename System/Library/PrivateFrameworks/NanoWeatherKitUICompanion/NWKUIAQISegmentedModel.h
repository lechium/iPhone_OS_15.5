//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIImage;

@interface NWKUIAQISegmentedModel
{
    NSArray *_segments;	// 8 = 0x8
    UIImage *_glyph;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001f1d
@property(readonly) UIImage *glyph; // @synthesize glyph=_glyph;
@property(readonly) NSArray *segments; // @synthesize segments=_segments;
- (id)_createGlyphWithName:(id)arg1;	// IMP=0x0000000000001d04
- (id)initWithName:(id)arg1 label:(id)arg2 categoryDescription:(id)arg3 color:(id)arg4 date:(id)arg5 expiration:(id)arg6 segments:(id)arg7 glyph:(id)arg8;	// IMP=0x0000000000001c29
- (id)initWithAirQualityConditions:(id)arg1;	// IMP=0x00000000000018e7

@end
