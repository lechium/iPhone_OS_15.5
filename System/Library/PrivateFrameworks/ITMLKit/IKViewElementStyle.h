//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKCSSRule, IKColor, IKFourTuple, NSArray, NSMutableDictionary, NSNumber, NSShadow, NSString, NSURL, UIColor;

@interface IKViewElementStyle : NSObject <NSCopying>
{
    _Bool _filterBlockedStyles;	// 8 = 0x8
    NSString *_classDescriptorString;	// 16 = 0x10
    IKCSSRule *_cssRule;	// 24 = 0x18
    NSArray *_mediaQueryList;	// 32 = 0x20
    NSMutableDictionary *_styleDict;	// 40 = 0x28
    NSMutableDictionary *_overridingValuesByStyle;	// 48 = 0x30
}

+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3;	// IMP=0x00000000000675c5
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;	// IMP=0x00000000000673cd
+ (id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(_Bool)arg3;	// IMP=0x0000000000067352
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(_Bool)arg3 inlineStyleRangeCorrect:(_Bool)arg4;	// IMP=0x0000000000066c5c
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(_Bool)arg3;	// IMP=0x0000000000066c47
+ (id)normalizeClassSelectorString:(id)arg1;	// IMP=0x000000000006698b
+ (unsigned long long)imageTreatmentFromString:(id)arg1;	// IMP=0x0000000000066834
+ (unsigned long long)alignmentFromString:(id)arg1;	// IMP=0x00000000000666e8
+ (unsigned long long)positionFromString:(id)arg1;	// IMP=0x0000000000066534
+ (unsigned long long)transitionFromString:(id)arg1;	// IMP=0x00000000000663d9
+ (_Bool)isHiddenStyleRegistered;	// IMP=0x00000000000663c8
+ (void)registerHiddenStyle:(id)arg1;	// IMP=0x0000000000066343
+ (void)clearBlockedStyles;	// IMP=0x000000000006632a
+ (void)addBlockedStyle:(id)arg1;	// IMP=0x00000000000662dd
+ (void)unregisterStyles;	// IMP=0x0000000000066245
+ (id)registeredAliases;	// IMP=0x0000000000066234
+ (id)registeredStyles;	// IMP=0x0000000000066223
+ (void)registerEdgeInsetStyle:(id)arg1 aliasName:(id)arg2 withPositionStyleNames:(id)arg3 inherited:(_Bool)arg4;	// IMP=0x0000000000065fcd
+ (void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(_Bool)arg4;	// IMP=0x0000000000065bc6
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(_Bool)arg3;	// IMP=0x0000000000065bac
+ (id)propertiesForStyleName:(id)arg1;	// IMP=0x000000000006573f
+ (void)initialize;	// IMP=0x0000000000064f14
- (void).cxx_destruct;	// IMP=0x000000000006b439
@property(retain, nonatomic) NSMutableDictionary *overridingValuesByStyle; // @synthesize overridingValuesByStyle=_overridingValuesByStyle;
@property(retain, nonatomic) NSMutableDictionary *styleDict; // @synthesize styleDict=_styleDict;
@property(retain, nonatomic) NSArray *mediaQueryList; // @synthesize mediaQueryList=_mediaQueryList;
@property(readonly, copy, nonatomic) IKCSSRule *cssRule; // @synthesize cssRule=_cssRule;
- (id)_declarationForStyleName:(id)arg1 expectedClass:(Class)arg2;	// IMP=0x000000000006b2cb
- (id)_styleNameForAlias:(id)arg1;	// IMP=0x000000000006b24c
- (void)_addDeclaration:(id)arg1;	// IMP=0x000000000006ab4a
- (void)_addElementStyle:(id)arg1;	// IMP=0x000000000006a9a2
- (void)_addParentStyle:(id)arg1;	// IMP=0x000000000006a73b
- (struct UIEdgeInsets)_edgeInsetsForStyleName:(id)arg1;	// IMP=0x000000000006a6a0
- (id)_newColorFromString:(id)arg1;	// IMP=0x000000000006a104
- (id)_gradientFromString:(id)arg1;	// IMP=0x0000000000069c59
- (unsigned long long)typeForStyle:(id)arg1;	// IMP=0x0000000000069bd6
- (id)prototype;	// IMP=0x0000000000069bbd
- (_Bool)requiresDynamicEvaluation;	// IMP=0x00000000000699cf
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSNumber *lineHeight;
@property(readonly, nonatomic) NSNumber *letterSpacing;
@property(readonly, nonatomic) NSString *maxHeight;
@property(readonly, nonatomic) NSShadow *textShadow;
@property(readonly, nonatomic) IKFourTuple *borderRadius;
@property(readonly, nonatomic) NSString *textStyle;
@property(readonly, nonatomic) NSString *textScale;
@property(readonly, nonatomic) NSString *badgeTreatment;
@property(readonly, nonatomic) NSString *cardType;
@property(readonly, nonatomic) NSString *dividerType;
@property(readonly, nonatomic) NSString *visibility;
@property(readonly, nonatomic) unsigned long long ordinalMaxLength;
@property(readonly, nonatomic) NSString *labelsState;
@property(readonly, nonatomic) NSNumber *transitionInterval;
@property(readonly, nonatomic) NSString *transition;
@property(readonly, nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) NSString *imageTreatment;
@property(readonly, nonatomic) unsigned long long imagePosition;
@property(readonly, nonatomic) long long fillImage;
@property(readonly, nonatomic) long long reflectImage;
@property(readonly, nonatomic) NSString *lockupType;
@property(readonly, nonatomic) IKColor *imageMaskColor;
@property(readonly, nonatomic) IKColor *imagePlaceholderBackgroundColor;
@property(readonly, nonatomic) NSURL *imagePlaceholderURL;
@property(readonly, nonatomic) NSString *itemHeight;
@property(readonly, nonatomic) NSString *itemWidth;
@property(readonly, nonatomic) NSString *maxWidth;
@property(readonly, nonatomic) NSString *rowHeight;
@property(readonly, nonatomic) NSString *columnItemType;
@property(readonly, nonatomic) NSString *columnType;
@property(readonly, nonatomic) long long columnCount;
@property(readonly, nonatomic) long long maxTextLines;
@property(readonly, nonatomic) unsigned long long elementPosition;
@property(readonly, nonatomic) struct UIEdgeInsets elementMargin;
@property(readonly, nonatomic) struct UIEdgeInsets elementPadding;
@property(readonly, nonatomic) unsigned long long elementAlignment;
@property(readonly, nonatomic) unsigned long long textAlignment;
@property(readonly, nonatomic) NSString *fontWeight;
@property(readonly, nonatomic) double fontSize;
@property(readonly, nonatomic) struct UIEdgeInsets borderWidths;
@property(readonly, nonatomic) struct UIEdgeInsets borderMargins;
@property(readonly, nonatomic) IKColor *ikBorderColor;
@property(readonly, nonatomic) IKColor *ikBackgroundColor;
@property(readonly, nonatomic) IKColor *ikHighlightColor;
@property(readonly, nonatomic) IKColor *ikColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *borderColor;
@property(readonly, nonatomic) UIColor *color;
- (unsigned long long)edgeFlagForStyle:(id)arg1;	// IMP=0x0000000000068178
- (id)cssValueForStyle:(id)arg1;	// IMP=0x0000000000067f89
- (id)valueForStyle:(id)arg1;	// IMP=0x0000000000067eb1
- (id)debugDescription;	// IMP=0x0000000000067d38
- (id)description;	// IMP=0x0000000000067c1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067b77
- (id)initWithClassSelector:(id)arg1;	// IMP=0x0000000000067a1c
- (id)initWithCSSRule:(id)arg1 filterBlockedStyles:(_Bool)arg2 selStr:(id)arg3;	// IMP=0x0000000000067814
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;	// IMP=0x0000000000067795
@property(readonly, nonatomic) NSString *classDescriptorString;

@end
