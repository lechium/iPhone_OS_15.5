//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IFColor, NSString;

__attribute__((visibility("hidden")))
@interface ISTextLayer
{
    IFColor *_color;	// 104 = 0x68
    NSString *_text;	// 112 = 0x70
    NSString *_fontName;	// 120 = 0x78
    double _fontSize;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000001df36
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) IFColor *color; // @synthesize color=_color;
- (id)init;	// IMP=0x000000000001de2b

@end

