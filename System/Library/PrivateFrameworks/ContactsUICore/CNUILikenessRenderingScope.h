//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, PRMonogramColor;

@interface CNUILikenessRenderingScope : NSObject
{
    _Bool _rightToLeft;	// 8 = 0x8
    _Bool _excludePointSizeInEqualityCheck;	// 9 = 0x9
    double _scale;	// 16 = 0x10
    double _strokeWidth;	// 24 = 0x18
    struct CGColor *_strokeColor;	// 32 = 0x20
    unsigned long long _style;	// 40 = 0x28
    unsigned long long _backgroundStyle;	// 48 = 0x30
    PRMonogramColor *_color;	// 56 = 0x38
    NSIndexSet *_maskedAvatarIndices;	// 64 = 0x40
    struct CGSize _pointSize;	// 72 = 0x48
}

+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(_Bool)arg3 style:(unsigned long long)arg4 color:(id)arg5;	// IMP=0x000000000000b2f7
+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(_Bool)arg5 style:(unsigned long long)arg6 color:(id)arg7;	// IMP=0x000000000000b22c
+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(_Bool)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9;	// IMP=0x000000000000b16c
- (void).cxx_destruct;	// IMP=0x000000000000bbad
@property(nonatomic) _Bool excludePointSizeInEqualityCheck; // @synthesize excludePointSizeInEqualityCheck=_excludePointSizeInEqualityCheck;
@property(readonly, nonatomic) NSIndexSet *maskedAvatarIndices; // @synthesize maskedAvatarIndices=_maskedAvatarIndices;
@property(readonly, nonatomic) PRMonogramColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(readonly, nonatomic) struct CGColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize pointSize; // @synthesize pointSize=_pointSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bb2f
- (unsigned long long)hash;	// IMP=0x000000000000b9c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b864
- (void)setStrokeColor:(struct CGColor *)arg1;	// IMP=0x000000000000b833
- (id)description;	// IMP=0x000000000000b50a
- (void)dealloc;	// IMP=0x000000000000b4cb
- (id)initWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(_Bool)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9;	// IMP=0x000000000000b3b9

@end
