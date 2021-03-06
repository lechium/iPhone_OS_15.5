//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIFont;

@interface _UILegibilityLabel
{
    _Bool _usesSecondaryColor;	// 184 = 0xb8
    NSString *_string;	// 192 = 0xc0
    UIFont *_font;	// 200 = 0xc8
}

@property(readonly, nonatomic) _Bool usesSecondaryColor; // @synthesize usesSecondaryColor=_usesSecondaryColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)updateImage;	// IMP=0x0000000000850146
@property(readonly, nonatomic) double baselineOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000084ffa1
- (void)dealloc;	// IMP=0x000000000084fd7e
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;	// IMP=0x000000000084fbed
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;	// IMP=0x000000000084fbd5

@end

