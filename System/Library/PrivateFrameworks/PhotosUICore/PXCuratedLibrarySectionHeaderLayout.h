//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGTitleSubtitleSource-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>
#import <PhotosUICore/PXLibrarySummaryOutputPresenter-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableIndexSet, NSObject, NSSet, NSString, PXAssetCollectionReference, PXCuratedLibraryActionPerformer, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibraryFilterActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, PXGLayoutGuide, PXNumberAnimator, PXTitleSubtitleLabelSpec;
@protocol OS_dispatch_queue;

@interface PXCuratedLibrarySectionHeaderLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned short _textVersion;	// 32 = 0x20
    unsigned short _ellipsisButtonVersion;	// 34 = 0x22
    unsigned short _filterButtonVersion;	// 36 = 0x24
    unsigned short _filterIndicatorButtonVersion;	// 38 = 0x26
    unsigned short _selectionTitleVersion;	// 40 = 0x28
    unsigned short _selectButtonVersion;	// 42 = 0x2a
    unsigned short _cancelButtonVersion;	// 44 = 0x2c
    unsigned short _toggleAspectFitButtonVersion;	// 46 = 0x2e
    unsigned short _zoomInButtonVersion;	// 48 = 0x30
    unsigned short _zoomOutButtonVersion;	// 50 = 0x32
    unsigned short _controlStackButtonVersion;	// 52 = 0x34
    unsigned short _showSidebarButtonVersion;	// 54 = 0x36
    NSArray *_itemIdentifierBySpriteIndex;	// 56 = 0x38
    _Bool _presentedVisibility;	// 64 = 0x40
    _Bool _presentedTitleVisibility;	// 65 = 0x41
    NSMutableIndexSet *_axSpriteIndexes;	// 72 = 0x48
    unsigned short _gradientResizableCapInsetsIndex;	// 80 = 0x50
    struct CGSize _cachedSizeByButtonIdentifier[11];	// 88 = 0x58
    struct CGSize _cachedExternalTrailingButtonsSize;	// 264 = 0x108
    struct CGSize _cachedExternalLeadingButtonsSize;	// 280 = 0x118
    struct CGSize _cachedExternalTopButtonsSize;	// 296 = 0x128
    struct CGSize _cachedLongestPossibleSelectionTitleSize;	// 312 = 0x138
    long long _asyncDateGeneration;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_asyncDateQueue;	// 336 = 0x150
    _Bool _wantsOverBackgroundAppearance;	// 344 = 0x158
    _Bool _showsBackgroundGradient;	// 345 = 0x159
    _Bool _showsDebugDescription;	// 346 = 0x15a
    _Bool _filterButtonHighlighted;	// 347 = 0x15b
    _Bool _filterIndicatorButtonHighlighted;	// 348 = 0x15c
    _Bool _controlStackButtonSelected;	// 349 = 0x15d
    _Bool _usesCompactToggleAspectFitButton;	// 350 = 0x15e
    float _buttonsZIndex;	// 352 = 0x160
    NSString *_title;	// 360 = 0x168
    NSString *_subtitle;	// 368 = 0x170
    PXAssetCollectionReference *_assetCollectionReference;	// 376 = 0x178
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;	// 384 = 0x180
    double _lateralMargin;	// 392 = 0x188
    double _maxPossibleHeight;	// 400 = 0x190
    double _titleAlpha;	// 408 = 0x198
    double _buttonsAlpha;	// 416 = 0x1a0
    PXCuratedLibraryEllipsisButtonActionPerformer *_ellipsisButtonActionPerformer;	// 424 = 0x1a8
    PXCuratedLibraryFilterActionPerformer *_filterActionPerformer;	// 432 = 0x1b0
    PXCuratedLibraryActionPerformer *_selectButtonActionPerformer;	// 440 = 0x1b8
    PXCuratedLibraryActionPerformer *_cancelButtonActionPerformer;	// 448 = 0x1c0
    PXCuratedLibraryActionPerformer *_zoomInButtonActionPerformer;	// 456 = 0x1c8
    PXCuratedLibraryActionPerformer *_zoomOutButtonActionPerformer;	// 464 = 0x1d0
    PXCuratedLibraryActionPerformer *_toggleAspectFitButtonActionPerformer;	// 472 = 0x1d8
    PXCuratedLibraryActionPerformer *_showSidebarButtonActionPerformer;	// 480 = 0x1e0
    NSString *_selectButtonTitle;	// 488 = 0x1e8
    NSString *_filterButtonCaption;	// 496 = 0x1f0
    NSString *_filterButtonTitle;	// 504 = 0x1f8
    NSString *_selectionTitle;	// 512 = 0x200
    NSString *_longestPossibleSelectionTitle;	// 520 = 0x208
    NSString *_toggleAspectFitButtonTitle;	// 528 = 0x210
    NSSet *_toggleAspectFitButtonPossibleTitles;	// 536 = 0x218
    long long _toggleAspectFitCompactButtonSymbol;	// 544 = 0x220
    long long _safeAreaBehavior;	// 552 = 0x228
    NSArray *_externalTrailingButtonConfigurations;	// 560 = 0x230
    NSArray *_externalLeadingButtonConfigurations;	// 568 = 0x238
    NSArray *_externalTopButtonConfigurations;	// 576 = 0x240
    PXGLayoutGuide *_leadingButtonsLayoutGuide;	// 584 = 0x248
    PXCuratedLibrarySectionHeaderLayoutSpec *_effectiveSpec;	// 592 = 0x250
    PXTitleSubtitleLabelSpec *_effectiveTitleSubtitleLabelSpec;	// 600 = 0x258
    PXTitleSubtitleLabelSpec *_effectiveOverBackgroundTitleSubtitleLabelSpec;	// 608 = 0x260
    double _buttonsMaxY;	// 616 = 0x268
    double _titleSubtitleTopSpacing;	// 624 = 0x270
    double _titleSubtitleLastBaseline;	// 632 = 0x278
    double _gradientAlpha;	// 640 = 0x280
    PXNumberAnimator *_alternateAppearanceMixAnimator;	// 648 = 0x288
    struct CGRect _titleSubtitleFrame;	// 656 = 0x290
}

- (void).cxx_destruct;	// IMP=0x0000000000048731
@property(readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator; // @synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator;
@property(nonatomic) double gradientAlpha; // @synthesize gradientAlpha=_gradientAlpha;
@property(nonatomic) double titleSubtitleLastBaseline; // @synthesize titleSubtitleLastBaseline=_titleSubtitleLastBaseline;
@property(nonatomic) double titleSubtitleTopSpacing; // @synthesize titleSubtitleTopSpacing=_titleSubtitleTopSpacing;
@property(nonatomic) double buttonsMaxY; // @synthesize buttonsMaxY=_buttonsMaxY;
@property(nonatomic) _Bool usesCompactToggleAspectFitButton; // @synthesize usesCompactToggleAspectFitButton=_usesCompactToggleAspectFitButton;
@property(nonatomic) _Bool controlStackButtonSelected; // @synthesize controlStackButtonSelected=_controlStackButtonSelected;
@property(readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveOverBackgroundTitleSubtitleLabelSpec; // @synthesize effectiveOverBackgroundTitleSubtitleLabelSpec=_effectiveOverBackgroundTitleSubtitleLabelSpec;
@property(readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveTitleSubtitleLabelSpec; // @synthesize effectiveTitleSubtitleLabelSpec=_effectiveTitleSubtitleLabelSpec;
@property(retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *effectiveSpec; // @synthesize effectiveSpec=_effectiveSpec;
@property(retain, nonatomic) PXGLayoutGuide *leadingButtonsLayoutGuide; // @synthesize leadingButtonsLayoutGuide=_leadingButtonsLayoutGuide;
@property(copy, nonatomic) NSArray *externalTopButtonConfigurations; // @synthesize externalTopButtonConfigurations=_externalTopButtonConfigurations;
@property(copy, nonatomic) NSArray *externalLeadingButtonConfigurations; // @synthesize externalLeadingButtonConfigurations=_externalLeadingButtonConfigurations;
@property(copy, nonatomic) NSArray *externalTrailingButtonConfigurations; // @synthesize externalTrailingButtonConfigurations=_externalTrailingButtonConfigurations;
@property(nonatomic) long long safeAreaBehavior; // @synthesize safeAreaBehavior=_safeAreaBehavior;
@property(readonly, nonatomic) struct CGRect titleSubtitleFrame; // @synthesize titleSubtitleFrame=_titleSubtitleFrame;
@property(nonatomic) long long toggleAspectFitCompactButtonSymbol; // @synthesize toggleAspectFitCompactButtonSymbol=_toggleAspectFitCompactButtonSymbol;
@property(copy, nonatomic) NSSet *toggleAspectFitButtonPossibleTitles; // @synthesize toggleAspectFitButtonPossibleTitles=_toggleAspectFitButtonPossibleTitles;
@property(copy, nonatomic) NSString *toggleAspectFitButtonTitle; // @synthesize toggleAspectFitButtonTitle=_toggleAspectFitButtonTitle;
@property(copy, nonatomic) NSString *longestPossibleSelectionTitle; // @synthesize longestPossibleSelectionTitle=_longestPossibleSelectionTitle;
@property(copy, nonatomic) NSString *selectionTitle; // @synthesize selectionTitle=_selectionTitle;
@property(nonatomic) _Bool filterIndicatorButtonHighlighted; // @synthesize filterIndicatorButtonHighlighted=_filterIndicatorButtonHighlighted;
@property(nonatomic) _Bool filterButtonHighlighted; // @synthesize filterButtonHighlighted=_filterButtonHighlighted;
@property(copy, nonatomic) NSString *filterButtonTitle; // @synthesize filterButtonTitle=_filterButtonTitle;
@property(copy, nonatomic) NSString *filterButtonCaption; // @synthesize filterButtonCaption=_filterButtonCaption;
@property(copy, nonatomic) NSString *selectButtonTitle; // @synthesize selectButtonTitle=_selectButtonTitle;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *showSidebarButtonActionPerformer; // @synthesize showSidebarButtonActionPerformer=_showSidebarButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *toggleAspectFitButtonActionPerformer; // @synthesize toggleAspectFitButtonActionPerformer=_toggleAspectFitButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *zoomOutButtonActionPerformer; // @synthesize zoomOutButtonActionPerformer=_zoomOutButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *zoomInButtonActionPerformer; // @synthesize zoomInButtonActionPerformer=_zoomInButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *cancelButtonActionPerformer; // @synthesize cancelButtonActionPerformer=_cancelButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *selectButtonActionPerformer; // @synthesize selectButtonActionPerformer=_selectButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryFilterActionPerformer *filterActionPerformer; // @synthesize filterActionPerformer=_filterActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryEllipsisButtonActionPerformer *ellipsisButtonActionPerformer; // @synthesize ellipsisButtonActionPerformer=_ellipsisButtonActionPerformer;
@property(nonatomic) float buttonsZIndex; // @synthesize buttonsZIndex=_buttonsZIndex;
@property(nonatomic) _Bool showsDebugDescription; // @synthesize showsDebugDescription=_showsDebugDescription;
@property(nonatomic) _Bool showsBackgroundGradient; // @synthesize showsBackgroundGradient=_showsBackgroundGradient;
@property(nonatomic) _Bool wantsOverBackgroundAppearance; // @synthesize wantsOverBackgroundAppearance=_wantsOverBackgroundAppearance;
@property(nonatomic) double buttonsAlpha; // @synthesize buttonsAlpha=_buttonsAlpha;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(nonatomic) double maxPossibleHeight; // @synthesize maxPossibleHeight=_maxPossibleHeight;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
@property(retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000048204
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000000481f2
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x00000000000481e0
- (id)axSpriteIndexes;	// IMP=0x00000000000481bb
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x0000000000047f35
- (id)_configurationForButton:(unsigned long long)arg1 overBackgroundVariant:(_Bool)arg2;	// IMP=0x0000000000047e68
- (id)_configurationForButton:(unsigned long long)arg1;	// IMP=0x0000000000047e04
- (id)configurationForButton:(unsigned long long)arg1 spec:(id)arg2;	// IMP=0x00000000000475ec
- (void)_discardAllCachedButtonSizes;	// IMP=0x00000000000475ac
- (struct CGSize)_sizeOfButton:(unsigned long long)arg1;	// IMP=0x00000000000474f5
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000046f37
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000046e42
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;	// IMP=0x0000000000046df4
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000046da4
- (id)_titleSubtitleSpecForItemIdentifier:(id)arg1;	// IMP=0x0000000000046cb0
- (id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x0000000000046b1c
- (id)subtitleForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x0000000000046b0a
- (id)titleForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x0000000000046af8
- (void)_handleAsyncDateDescription:(id)arg1 placement:(long long)arg2 generation:(long long)arg3;	// IMP=0x0000000000046546
- (void)_updateTitleAndSubtitle;	// IMP=0x0000000000046058
- (id)_effectiveTitleSubtitleLabelSpec:(id)arg1;	// IMP=0x0000000000045fb5
- (void)_updateEffectiveSpec;	// IMP=0x0000000000045cc2
- (void)_invalidateFilterIndicatorButton;	// IMP=0x0000000000044e66
- (void)_invalidateFilterButton;	// IMP=0x0000000000044d31
- (void)_updateLastBaseline;	// IMP=0x00000000000439aa
- (void)alphaDidChange;	// IMP=0x0000000000043020
- (void)screenScaleDidChange;	// IMP=0x0000000000042f0d
- (void)referenceOptionsDidChange;	// IMP=0x0000000000042dfa
- (void)referenceSizeDidChange;	// IMP=0x0000000000042ce7
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000042b97
- (void)visibleRectDidChange;	// IMP=0x0000000000042983
- (void)setVisibleRect:(struct CGRect)arg1;	// IMP=0x00000000000428a4
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x00000000000424ca
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000000422aa
- (id)_selectionTitleLabelConfigurationWithTitle:(id)arg1;	// IMP=0x000000000004223e
@property(readonly, nonatomic) unsigned long long toggleAspectFitButton;
- (struct UIEdgeInsets)safeAreaInsetsWithCurrentBehavior;	// IMP=0x0000000000042025
- (void)_updateSpritesAlpha;	// IMP=0x0000000000041c8c
- (void)_updateSpriteTags;	// IMP=0x0000000000041b8c
- (void)_updateButtonActionPerformers;	// IMP=0x0000000000041ad4
- (void)_updateSprites;	// IMP=0x000000000003f462
- (void)update;	// IMP=0x000000000003ed8c
- (id)init;	// IMP=0x000000000003eb77

// Remaining properties
@property(nonatomic) double alpha; // @dynamic alpha;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSDictionary *defaultAttributes;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *emphasizedAttributes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wantsDisclosureIndicator;

@end

