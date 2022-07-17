//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXExtendedTraitCollection, UIColor;

@interface PXGadgetSpec : NSObject
{
    _Bool _shouldInsetAllContent;	// 8 = 0x8
    _Bool _shouldUseAccessibilityLayout;	// 9 = 0x9
    long long _scrollAxis;	// 16 = 0x10
    double _interItemSpacing;	// 24 = 0x18
    long long _userInterfaceIdiom;	// 32 = 0x20
    long long _layoutSizeClass;	// 40 = 0x28
    long long _layoutOrientation;	// 48 = 0x30
    long long _layoutDirection;	// 56 = 0x38
    double _displayScale;	// 64 = 0x40
    double _layoutReferenceWidth;	// 72 = 0x48
    double _layoutReferenceHeight;	// 80 = 0x50
    UIColor *_backgroundColor;	// 88 = 0x58
    PXExtendedTraitCollection *_extendedTraitCollection;	// 96 = 0x60
    struct UIEdgeInsets _contentInsets;	// 104 = 0x68
    struct UIEdgeInsets _layoutInsets;	// 136 = 0x88
    struct UIEdgeInsets _accessoryViewInset;	// 168 = 0xa8
}

+ (double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)arg1;	// IMP=0x00000000005e68ef
+ (double)sectionHeaderTopSpacingForStyle:(unsigned long long)arg1;	// IMP=0x00000000005e682c
+ (double)sectionHeaderTitleHeightForStyle:(unsigned long long)arg1 dividerHidden:(_Bool)arg2;	// IMP=0x00000000005e66eb
+ (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(_Bool)arg2;	// IMP=0x00000000005e6666
+ (id)horizontalContentInsetsInterpolator;	// IMP=0x000000000009af4c
- (void).cxx_destruct;	// IMP=0x00000000005e663e
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(readonly, nonatomic) struct UIEdgeInsets accessoryViewInset; // @synthesize accessoryViewInset=_accessoryViewInset;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool shouldUseAccessibilityLayout; // @synthesize shouldUseAccessibilityLayout=_shouldUseAccessibilityLayout;
@property(readonly, nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(readonly, nonatomic) double layoutReferenceHeight; // @synthesize layoutReferenceHeight=_layoutReferenceHeight;
@property(readonly, nonatomic) double layoutReferenceWidth; // @synthesize layoutReferenceWidth=_layoutReferenceWidth;
@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(readonly, nonatomic) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(readonly, nonatomic) _Bool shouldInsetAllContent; // @synthesize shouldInsetAllContent=_shouldInsetAllContent;
@property(readonly, nonatomic) long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (double)columnSpacingForColumnSpan:(long long)arg1;	// IMP=0x00000000005e64ad
- (double)columnWidthForColumnSpan:(long long)arg1;	// IMP=0x00000000005e63ea
- (_Bool)isEqualToGadgetSpec:(id)arg1;	// IMP=0x00000000005e616c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005e610f
@property(readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;	// IMP=0x00000000005e5e24
- (struct UIEdgeInsets)acccessoryViewInsetForTraitCollection:(id)arg1;	// IMP=0x000000000009aead
- (_Bool)shouldInsetContentForTraitCollection:(id)arg1;	// IMP=0x000000000009ae48

@end
