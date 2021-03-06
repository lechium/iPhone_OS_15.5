//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

__attribute__((visibility("hidden")))
@interface UIKBRenderTraits : NSObject <NSCopying>
{
    NSMutableArray *_renderEffects;	// 8 = 0x8
    NSMutableArray *_foregroundRenderEffects;	// 16 = 0x10
    _Bool _honorControlOpacity;	// 24 = 0x18
    _Bool _controlOpacities;	// 25 = 0x19
    _Bool _blurBlending;	// 26 = 0x1a
    _Bool _renderSecondarySymbolsSeparately;	// 27 = 0x1b
    UIKBRenderGeometry *_geometry;	// 32 = 0x20
    UIKBGradient *_backgroundGradient;	// 40 = 0x28
    UIKBGradient *_layeredBackgroundGradient;	// 48 = 0x30
    UIKBGradient *_layeredForegroundGradient;	// 56 = 0x38
    UIKBTextStyle *_symbolStyle;	// 64 = 0x40
    UIKBTextStyle *_fallbackSymbolStyle;	// 72 = 0x48
    NSArray *_secondarySymbolStyles;	// 80 = 0x50
    NSArray *_variantGeometries;	// 88 = 0x58
    UIKBRenderTraits *_variantTraits;	// 96 = 0x60
    UIKBRenderTraits *_highlightedVariantTraits;	// 104 = 0x68
    long long _blendForm;	// 112 = 0x70
    NSArray *_renderFlags;	// 120 = 0x78
    long long _renderFlagsForAboveEffects;	// 128 = 0x80
    NSString *_hashString;	// 136 = 0x88
}

+ (id)traitsWithSymbolStyle:(id)arg1;	// IMP=0x0000000000999733
+ (id)traitsWithGeometry:(id)arg1;	// IMP=0x00000000009996ec
+ (id)emptyTraits;	// IMP=0x00000000009996d3
@property(retain, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(nonatomic) long long renderFlagsForAboveEffects; // @synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects;
@property(nonatomic) _Bool renderSecondarySymbolsSeparately; // @synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately;
@property(retain, nonatomic) NSArray *renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) long long blendForm; // @synthesize blendForm=_blendForm;
@property(nonatomic) _Bool blurBlending; // @synthesize blurBlending=_blurBlending;
@property(nonatomic) _Bool controlOpacities; // @synthesize controlOpacities=_controlOpacities;
@property(retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // @synthesize highlightedVariantTraits=_highlightedVariantTraits;
@property(retain, nonatomic) UIKBRenderTraits *variantTraits; // @synthesize variantTraits=_variantTraits;
@property(retain, nonatomic) NSArray *variantGeometries; // @synthesize variantGeometries=_variantGeometries;
@property(readonly, nonatomic) NSArray *foregroundRenderEffects; // @synthesize foregroundRenderEffects=_foregroundRenderEffects;
@property(readonly, nonatomic) NSArray *renderEffects; // @synthesize renderEffects=_renderEffects;
@property(retain, nonatomic) NSArray *secondarySymbolStyles; // @synthesize secondarySymbolStyles=_secondarySymbolStyles;
@property(retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // @synthesize fallbackSymbolStyle=_fallbackSymbolStyle;
@property(retain, nonatomic) UIKBTextStyle *symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(retain, nonatomic) UIKBGradient *layeredForegroundGradient; // @synthesize layeredForegroundGradient=_layeredForegroundGradient;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // @synthesize layeredBackgroundGradient=_layeredBackgroundGradient;
@property(retain, nonatomic) UIKBGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIKBRenderGeometry *geometry; // @synthesize geometry=_geometry;
- (void)modifyForMasking;	// IMP=0x000000000099a730
- (void)overlayWithTraits:(id)arg1;	// IMP=0x000000000099a214
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000999f9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000999c8e
- (id)description;	// IMP=0x00000000009998fa
- (void)dealloc;	// IMP=0x0000000000999859
- (void)removeAllRenderEffects;	// IMP=0x000000000099981e
- (void)addForegroundRenderEffect:(id)arg1;	// IMP=0x00000000009997cc
- (void)addRenderEffect:(id)arg1;	// IMP=0x000000000099977a

@end

