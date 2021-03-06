//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, UIColor, UIFont;

@interface ICAttributedStringRippler : NSObject
{
    _Bool _reduceMotion;	// 8 = 0x8
    NSAttributedString *_string;	// 16 = 0x10
    UIColor *_endColor;	// 24 = 0x18
    NSArray *_colors;	// 32 = 0x20
    NSArray *_shadowColors;	// 40 = 0x28
    NSArray *_scales;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    unsigned long long _preFrames;	// 64 = 0x40
    unsigned long long _animateFrames;	// 72 = 0x48
    unsigned long long _postFrames;	// 80 = 0x50
    unsigned long long _delayFrames;	// 88 = 0x58
    UIFont *_initialFont;	// 96 = 0x60
    double _initialFontSize;	// 104 = 0x68
}

+ (unsigned long long)framesPerSecond;	// IMP=0x00000000000922b6
+ (double)refreshInterval;	// IMP=0x000000000009227e
+ (_Bool)canAnimateString:(id)arg1;	// IMP=0x00000000000921d8
- (void).cxx_destruct;	// IMP=0x0000000000093174
@property(nonatomic) double initialFontSize; // @synthesize initialFontSize=_initialFontSize;
@property(retain, nonatomic) UIFont *initialFont; // @synthesize initialFont=_initialFont;
@property(nonatomic) _Bool reduceMotion; // @synthesize reduceMotion=_reduceMotion;
@property(nonatomic) unsigned long long delayFrames; // @synthesize delayFrames=_delayFrames;
@property(nonatomic) unsigned long long postFrames; // @synthesize postFrames=_postFrames;
@property(nonatomic) unsigned long long animateFrames; // @synthesize animateFrames=_animateFrames;
@property(nonatomic) unsigned long long preFrames; // @synthesize preFrames=_preFrames;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSArray *scales; // @synthesize scales=_scales;
@property(copy, nonatomic) NSArray *shadowColors; // @synthesize shadowColors=_shadowColors;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (_Bool)finishedForTimeIndex:(unsigned long long)arg1;	// IMP=0x0000000000092f9c
- (id)attributedStringForTimeIndex:(unsigned long long)arg1;	// IMP=0x0000000000092c11
- (double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;	// IMP=0x0000000000092b46
- (id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;	// IMP=0x0000000000092ab8
- (id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;	// IMP=0x0000000000092a2a
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(_Bool *)arg4;	// IMP=0x000000000009291d
@property(readonly, nonatomic) unsigned long long finishedTimeIndex;
@property(readonly, nonatomic) unsigned long long currentTimeIndex;
- (void)start;	// IMP=0x0000000000092834
- (void)generateValues;	// IMP=0x00000000000922c1
- (id)initWithAttributedString:(id)arg1 endColor:(id)arg2;	// IMP=0x0000000000092054

@end

