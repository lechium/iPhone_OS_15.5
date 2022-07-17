//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCColor, FCLoadableFont;

@interface FCTextInfo : NSObject <NSCopying>
{
    FCLoadableFont *_font;	// 8 = 0x8
    long long _fontSizeAdjustment;	// 16 = 0x10
    double _lineHeightMultiplier;	// 24 = 0x18
    FCColor *_color;	// 32 = 0x20
}

+ (id)textInfoFromJSONValues:(id)arg1;	// IMP=0x000000000027a502
- (void).cxx_destruct;	// IMP=0x000000000027a905
@property(copy, nonatomic) FCColor *color; // @synthesize color=_color;
@property(nonatomic) double lineHeightMultiplier; // @synthesize lineHeightMultiplier=_lineHeightMultiplier;
@property(nonatomic) long long fontSizeAdjustment; // @synthesize fontSizeAdjustment=_fontSizeAdjustment;
@property(copy, nonatomic) FCLoadableFont *font; // @synthesize font=_font;
- (double)fontSizeWithInitialFontSize:(double)arg1;	// IMP=0x000000000027a87b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027a751

@end
