//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, PXExtendedTraitCollection, PXLayoutMetricInterpolator, UIColor;

@interface PXFeatureSpec : NSObject
{
    _Bool _shouldInsetAllPhotoDetailsContent;	// 8 = 0x8
    _Bool __shouldUseMiniMargins;	// 9 = 0x9
    unsigned long long _options;	// 16 = 0x10
    long long _sizeClass;	// 24 = 0x18
    long long _sizeSubclass;	// 32 = 0x20
    long long _layoutOrientation;	// 40 = 0x28
    long long _layoutDirection;	// 48 = 0x30
    long long _userInterfaceIdiom;	// 56 = 0x38
    long long _userInterfaceFeature;	// 64 = 0x40
    long long _userInterfaceStyle;	// 72 = 0x48
    long long _userInterfaceLevel;	// 80 = 0x50
    long long _contentSizeCategory;	// 88 = 0x58
    double _displayScale;	// 96 = 0x60
    long long _windowOrientation;	// 104 = 0x68
    NSArray *_collectionTileImageOverlaySpecs;	// 112 = 0x70
    NSArray *_collectionTileImageOverlaySpecsHighlighted;	// 120 = 0x78
    NSCache *__viewSpecCache;	// 128 = 0x80
    PXLayoutMetricInterpolator *__horizontalContentGuideInsetsInterpolator;	// 136 = 0x88
    PXExtendedTraitCollection *_extendedTraitCollection;	// 144 = 0x90
    struct CGSize _layoutReferenceSize;	// 152 = 0x98
    struct UIEdgeInsets _safeAreaInsets;	// 168 = 0xa8
    struct UIEdgeInsets _layoutMargins;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000008b7be5
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(readonly, nonatomic) _Bool _shouldUseMiniMargins; // @synthesize _shouldUseMiniMargins=__shouldUseMiniMargins;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator; // @synthesize _horizontalContentGuideInsetsInterpolator=__horizontalContentGuideInsetsInterpolator;
@property(readonly, nonatomic) NSCache *_viewSpecCache; // @synthesize _viewSpecCache=__viewSpecCache;
@property(readonly, nonatomic) _Bool shouldInsetAllPhotoDetailsContent; // @synthesize shouldInsetAllPhotoDetailsContent=_shouldInsetAllPhotoDetailsContent;
@property(readonly, nonatomic) NSArray *collectionTileImageOverlaySpecsHighlighted; // @synthesize collectionTileImageOverlaySpecsHighlighted=_collectionTileImageOverlaySpecsHighlighted;
@property(readonly, nonatomic) NSArray *collectionTileImageOverlaySpecs; // @synthesize collectionTileImageOverlaySpecs=_collectionTileImageOverlaySpecs;
@property(readonly, nonatomic) long long windowOrientation; // @synthesize windowOrientation=_windowOrientation;
@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) long long contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) long long userInterfaceLevel; // @synthesize userInterfaceLevel=_userInterfaceLevel;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) long long userInterfaceFeature; // @synthesize userInterfaceFeature=_userInterfaceFeature;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(readonly, nonatomic) long long sizeSubclass; // @synthesize sizeSubclass=_sizeSubclass;
@property(readonly, nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5;	// IMP=0x00000000008b77c3
- (long long)_capitalizationStyleFromTextAttributes:(id)arg1 defaultCapitalizationStyle:(long long)arg2;	// IMP=0x00000000008b7717
@property(readonly, nonatomic) long long localizedLeadingTextAlignment;
@property(readonly, nonatomic) double collectionTileImageCornerRadius;
- (id)collectionTileImageOverlayColorHighlighted;	// IMP=0x00000000008b7687
- (id)collectionTileImageOverlayColor;	// IMP=0x00000000008b7663
@property(readonly, nonatomic) double defaultDarkenSourceOverAmount;
@property(readonly, nonatomic) UIColor *defaultPlacesPlaceholderColor;
@property(readonly, nonatomic) UIColor *defaultPlaceholderColor;
@property(readonly, nonatomic) double defaultCornerRadius;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor;
@property(readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
- (id)fullscreenMiroViewSpecWithBoundingSize:(struct CGSize)arg1;	// IMP=0x00000000008b7140
- (id)fullscreenMiroViewSpec;	// IMP=0x00000000008b7112
- (struct UIEdgeInsets)_fullscreenContentInsetsForWidth:(double)arg1;	// IMP=0x00000000008b70dc
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;	// IMP=0x00000000008b6be0
- (void)configureViewSpec:(id)arg1;	// IMP=0x00000000008b6b5e
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;	// IMP=0x00000000008b6a56
- (struct UIEdgeInsets)contentGuideInsetsForScrollAxis:(long long)arg1;	// IMP=0x00000000008b65cb
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000008b5f66
- (id)initWithExtendedTraitCollection:(id)arg1;	// IMP=0x00000000008b5f52
- (id)init;	// IMP=0x00000000008b5f3e
@property(readonly, nonatomic) double spacingBetweenYearCards;
@property(readonly, nonatomic) double spacingBetweenMonthCards;
@property(readonly, nonatomic) struct UIEdgeInsets curatedLibraryEdgeToEdgeContentDefaultPadding;

@end
