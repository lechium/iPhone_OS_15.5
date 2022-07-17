//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIKBRenderConfig, UIKBRenderingContext;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderingContext *_renderingContext;	// 8 = 0x8
    NSMutableArray *_segmentTraits;	// 16 = 0x10
    _Bool _suppressSegmentTraits;	// 24 = 0x18
    double _rivenSizeFactor;	// 32 = 0x20
    _Bool _lightweightFactory;	// 40 = 0x28
    double _scale;	// 48 = 0x30
    struct CGSize _stretchFactor;	// 56 = 0x38
    _Bool _boldTextEnabled;	// 72 = 0x48
    _Bool _increasedContrastEnabled;	// 73 = 0x49
    _Bool _allowsPaddles;	// 74 = 0x4a
    _Bool _preferStringKeycapOverImage;	// 75 = 0x4b
    _Bool _drawsOneHandedAffordance;	// 76 = 0x4c
}

+ (_Bool)couldUseGlyphSelectorForDisplayString:(id)arg1;	// IMP=0x000000000096f6e6
+ (id)_characterSetForGlyphSelectors;	// IMP=0x000000000096f689
+ (id)segmentedControlColor:(_Bool)arg1;	// IMP=0x000000000096efd6
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;	// IMP=0x000000000096ecbb
+ (id)lightweightFactoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;	// IMP=0x000000000096b25b
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;	// IMP=0x000000000096b23f
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2 skipLayoutSegments:(_Bool)arg3;	// IMP=0x000000000096b118
+ (Class)factoryClassForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;	// IMP=0x000000000096ab35
+ (long long)_graphicsQuality;	// IMP=0x000000000096aab7
+ (_Bool)_enabled;	// IMP=0x000000000096aa99
@property(nonatomic) _Bool drawsOneHandedAffordance; // @synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance;
@property(nonatomic) _Bool preferStringKeycapOverImage; // @synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage;
@property(nonatomic) _Bool allowsPaddles; // @synthesize allowsPaddles=_allowsPaddles;
@property(nonatomic) _Bool increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(readonly, nonatomic) _Bool boldTextEnabled; // @synthesize boldTextEnabled=_boldTextEnabled;
@property(nonatomic) struct CGSize stretchFactor; // @synthesize stretchFactor=_stretchFactor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property(nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
- (_Bool)allowsPaddleForKey:(id)arg1;	// IMP=0x000000000096f9fe
- (Class)contentViewClassForPopupKey:(id)arg1;	// IMP=0x000000000096f9b4
- (_Bool)popupKeyUsesCustomKeyContentView:(id)arg1;	// IMP=0x000000000096f99b
- (long long)glyphSelectorForDisplayString:(id)arg1;	// IMP=0x000000000096f726
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x000000000096f086
- (id)thinTextFontName;	// IMP=0x000000000096f079
- (id)lightTextFontName;	// IMP=0x000000000096f06c
- (id)lightPadKeycapsFontName;	// IMP=0x000000000096f050
- (id)thinKeycapsFontName;	// IMP=0x000000000096f034
- (id)lightKeycapsFontName;	// IMP=0x000000000096f018
- (id)controlKeyShadowColorName;	// IMP=0x000000000096efc4
- (id)defaultKeyShadowColorName;	// IMP=0x000000000096ef84
- (id)controlKeyForegroundColorName;	// IMP=0x000000000096ef2f
- (id)lowQualityLayeredBackgroundColorName;	// IMP=0x000000000096eeef
- (id)_defaultControlKeyBackgroundColorName;	// IMP=0x000000000096ee8c
- (id)_controlKeyBackgroundColorName;	// IMP=0x000000000096ee0f
- (id)controlKeyBackgroundColorName;	// IMP=0x000000000096edfd
- (id)defaultKeyBackgroundColorName;	// IMP=0x000000000096edbd
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x000000000096edb5
- (long long)enabledBlendForm;	// IMP=0x000000000096ed56
- (void)suppressLayoutSegments;	// IMP=0x000000000096ecb1
- (void)addLayoutSegment:(id)arg1;	// IMP=0x000000000096ec5f
- (_Bool)useBlueThemingForKey:(id)arg1;	// IMP=0x000000000096ebbd
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;	// IMP=0x000000000096ebb5
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000096ea5c
- (id)displayContentsForKey:(id)arg1;	// IMP=0x000000000096db27
- (id)keyImageNameWithSkinnyVariation:(id)arg1;	// IMP=0x000000000096d9ab
- (double)skinnyKeyThreshold;	// IMP=0x000000000096d99d
- (id)ZWNJKeyImageName;	// IMP=0x000000000096d990
- (id)spaceKeyGrabberHandlesImageName;	// IMP=0x000000000096d983
- (id)messagesWriteboardKeyImageName;	// IMP=0x000000000096d976
- (id)biuKeyImageName;	// IMP=0x000000000096d969
- (id)boldKeyImageName;	// IMP=0x000000000096d95c
- (id)undoKeyImageName;	// IMP=0x000000000096d94f
- (id)pasteKeyImageName;	// IMP=0x000000000096d942
- (id)copyKeyImageName;	// IMP=0x000000000096d935
- (id)cutKeyImageName;	// IMP=0x000000000096d928
- (id)rightArrowKeyImageName;	// IMP=0x000000000096d91b
- (id)leftArrowKeyImageName;	// IMP=0x000000000096d90e
- (id)shiftLockImageName;	// IMP=0x000000000096d901
- (id)shiftOnKeyImageName;	// IMP=0x000000000096d8f4
- (id)shiftKeyImageName;	// IMP=0x000000000096d8e7
- (id)deleteOnKeyImageName;	// IMP=0x000000000096d8da
- (id)deleteKeyImageName;	// IMP=0x000000000096d8cd
- (id)handwritingMoreKeyImageName;	// IMP=0x000000000096d8c0
- (id)muttitapReverseKeyImageName;	// IMP=0x000000000096d8b3
- (id)multitapCompleteKeyImageName;	// IMP=0x000000000096d8a6
- (id)dismissKeyImageName;	// IMP=0x000000000096d899
- (id)dictationKeyImageName;	// IMP=0x000000000096d88c
- (id)globalEmojiKeyImageName;	// IMP=0x000000000096d84c
- (id)globalKeyImageName;	// IMP=0x000000000096d83f
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(_Bool)arg4 blurBlending:(_Bool)arg5;	// IMP=0x000000000096d459
- (_Bool)keyIsRightToLeftSensitive:(id)arg1;	// IMP=0x000000000096d3fe
- (id)hashStringElement;	// IMP=0x000000000096d3be
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x000000000096cb6c
- (void)customizeLanguageIndicatorTraitsForTraits:(id)arg1;	// IMP=0x000000000096cb09
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x000000000096caa0
- (id)backgroundTraitsForKeyplane:(id)arg1;	// IMP=0x000000000096c9b4
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x000000000096c997
- (void)setupLayoutSegments;	// IMP=0x000000000096c991
- (void)lowQualityTraits:(id)arg1;	// IMP=0x000000000096c8e9
- (double)translucentGapWidth;	// IMP=0x000000000096c8c6
- (void)scaleTraits:(id)arg1;	// IMP=0x000000000096c595
- (struct CGPoint)RivenPointFactor:(struct CGPoint)arg1;	// IMP=0x000000000096c546
- (double)RivenFactor:(double)arg1;	// IMP=0x000000000096c513
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;	// IMP=0x000000000096c40b
- (void)dealloc;	// IMP=0x000000000096c3c1
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000096b656
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000096b325
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;	// IMP=0x000000000096b30f
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;	// IMP=0x000000000096b2f9
- (double)emojiPopupDividerKeyOffset;	// IMP=0x000000000096b2d6
- (double)keyCornerRadius;	// IMP=0x000000000096b2c8
@property(readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
@property(readonly, nonatomic) long long assetIdiom;
- (id)extraPasscodePaddleTraits;	// IMP=0x000000000097d75f
- (id)passcodeShiftedControlKeyTraits;	// IMP=0x000000000097d711
- (id)passcodeActiveControlKeyTraits;	// IMP=0x000000000097d5bc
- (id)passcodeControlKeyTraits;	// IMP=0x000000000097d48c
- (id)passcodeKeyEdgeColorName;	// IMP=0x000000000097d47c
- (double)passcodeEdgeWeight;	// IMP=0x000000000097d46e
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;	// IMP=0x000000000097d38b
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x000000000097d236

@end
