//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetSource-Protocol.h>
#import <PhotosUICore/PXGItemsLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionedLayoutBody-Protocol.h>
#import <PhotosUICore/PXZoomableInlineHeadersLayoutGeometrySource-Protocol.h>

@class NSArray, NSCache, NSDateInterval, NSMapTable, NSMutableSet, NSString, PXAssetReference, PXAssetsDataSource, PXAssetsDataSourceManager, PXGAnchor, PXGBurstStackEffect, PXGEdgeStretchEffect, PXGItemsLayout, PXGOneColumnLayout, PXGZoomLayout, PXMediaProvider, PXNumberAnimator, PXPhotosGridAssetDecorationSource, PXZoomableInlineHeadersLayout, PXZoomablePhotosLayoutSpec, PXZoomablePhotosViewModel;
@protocol PXDisplayAssetFetchResult, PXZoomablePhotosContentLayout;

@interface PXZoomablePhotosLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGDisplayAssetSource, PXZoomableInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout, PXPhotosSectionedLayoutBody>
{
    CDStruct_af00bf4e _preUpdateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _postUpdateFlags;	// 32 = 0x20
    PXGZoomLayout *_zoomLayout;	// 56 = 0x38
    PXGEdgeStretchEffect *_edgeStretchEffect;	// 64 = 0x40
    unsigned int _pinchEffectCaptureSpriteIndex;	// 72 = 0x48
    struct _PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;	// 76 = 0x4c
    unsigned int _backgroundMediaVersion;	// 84 = 0x54
    PXZoomableInlineHeadersLayout *_inlineHeadersLayout;	// 88 = 0x58
    PXAssetsDataSourceManager *_dataSourceManager;	// 96 = 0x60
    PXAssetsDataSource *_currentDataSource;	// 104 = 0x68
    PXMediaProvider *_preheatMediaProvider;	// 112 = 0x70
    struct _NSRange _preheatedThumbsForItemsByColumnIndex[10];	// 120 = 0x78
    _Bool _isPreheatingByColumnIndex[10];	// 280 = 0x118
    _Bool _isPerformingUpdate;	// 290 = 0x122
    struct _NSRange _prefetchedForLoadedItems;	// 296 = 0x128
    struct _NSRange _cachedClampedItemRange;	// 312 = 0x138
    id <PXDisplayAssetFetchResult> _cachedClampedFetchResult;	// 328 = 0x148
    NSArray *_layers;	// 336 = 0x150
    NSArray *_itemLayouts;	// 344 = 0x158
    PXGItemsLayout<PXZoomablePhotosContentLayout> *_itemLayoutByHeaderLevel[2];	// 352 = 0x160
    PXGItemsLayout<PXZoomablePhotosContentLayout> *_decadesItemLayout;	// 368 = 0x170
    NSMutableSet *_itemLayoutsAllowedToLoad;	// 376 = 0x178
    PXNumberAnimator *_decorationAlphaAnimator;	// 384 = 0x180
    NSDateInterval *_lastReturnedDateInterval;	// 392 = 0x188
    long long _lastReturnedDateIntervalDataSourceIdentifier;	// 400 = 0x190
    NSArray *_lastReturnedLocationNames;	// 408 = 0x198
    long long _lastReturnedLocationNamesDataSourceIdentifier;	// 416 = 0x1a0
    _Bool _scrolledWhileAnimatingZoom;	// 424 = 0x1a8
    _Bool _performedInitialVisualShift;	// 425 = 0x1a9
    long long _visuallyStableAnchorItem;	// 432 = 0x1b0
    long long _visuallyStableAnchorItemDesiredColumn;	// 440 = 0x1b8
    _Bool _visuallyStableAnchorAllowedCloseToTop;	// 448 = 0x1c0
    PXGBurstStackEffect *_burstStackEffect;	// 456 = 0x1c8
    struct _PXGSpriteIndexRange _debugVisualizationSpriteIndexRange;	// 464 = 0x1d0
    NSArray *_debugVisualizationSpriteTitles;	// 472 = 0x1d8
    struct UIEdgeInsets _surroundingScrollableContent;	// 480 = 0x1e0
    NSCache *_providedEffectByAsset;	// 512 = 0x200
    _Bool _preventFillingTopAreaInsets;	// 520 = 0x208
    _Bool _shouldAnimateTowardsAnchor;	// 521 = 0x209
    _Bool _wasTracking;	// 522 = 0x20a
    _Bool _wantsOverBackgroundFloatingHeaderAppearance;	// 523 = 0x20b
    _Bool _enableAddContentAccessoryItem;	// 524 = 0x20c
    PXZoomablePhotosLayoutSpec *_spec;	// 528 = 0x210
    PXAssetReference *__anchorAssetReference;	// 536 = 0x218
    PXZoomablePhotosViewModel *_viewModel;	// 544 = 0x220
    PXAssetsDataSource *_presentedDataSource;	// 552 = 0x228
    PXPhotosGridAssetDecorationSource *_assetDecorationSource;	// 560 = 0x230
    CDUnknownBlockType _addContentHandler;	// 568 = 0x238
    long long _bodyLayoutAXGroupRole;	// 576 = 0x240
    PXGAnchor *_anchor;	// 584 = 0x248
    NSMapTable *_visualAnchorAssetReferenceItemByLayout;	// 592 = 0x250
    PXGOneColumnLayout *_oneColLayout;	// 600 = 0x258
    CDUnknownBlockType _effectProvider;	// 608 = 0x260
    struct CGPoint _scaleCenterTargetInViewport;	// 616 = 0x268
    struct CGPoint _normalizedScaleCenterInAnchorSprite;	// 632 = 0x278
    struct UIEdgeInsets _overlayInsets;	// 648 = 0x288
    struct UIEdgeInsets _inlineHeaderOverlayInsets;	// 680 = 0x2a8
    struct UIEdgeInsets _effectiveOverlayInsets;	// 712 = 0x2c8
}

+ (id)visualizeBestAnchorColumnsForLayouts:(id)arg1 imageWidth:(double)arg2;	// IMP=0x0000000000323d70
+ (void)getBestAnchorColumns:(long long *)arg1 forItemLayouts:(id)arg2 startingAtBaseLayout:(id)arg3 anchorItem:(long long)arg4 normalizedScaleCenterInAnchor:(struct CGPoint)arg5 biasTowardsCenter:(_Bool)arg6;	// IMP=0x00000000003231ae
- (void).cxx_destruct;	// IMP=0x00000000003209fc
@property(nonatomic) _Bool enableAddContentAccessoryItem; // @synthesize enableAddContentAccessoryItem=_enableAddContentAccessoryItem;
@property(copy, nonatomic) CDUnknownBlockType effectProvider; // @synthesize effectProvider=_effectProvider;
@property(nonatomic) _Bool wantsOverBackgroundFloatingHeaderAppearance; // @synthesize wantsOverBackgroundFloatingHeaderAppearance=_wantsOverBackgroundFloatingHeaderAppearance;
@property(nonatomic) struct UIEdgeInsets effectiveOverlayInsets; // @synthesize effectiveOverlayInsets=_effectiveOverlayInsets;
@property(readonly, nonatomic) PXGOneColumnLayout *oneColLayout; // @synthesize oneColLayout=_oneColLayout;
@property(readonly, nonatomic) _Bool wasTracking; // @synthesize wasTracking=_wasTracking;
@property(readonly, nonatomic) _Bool shouldAnimateTowardsAnchor; // @synthesize shouldAnimateTowardsAnchor=_shouldAnimateTowardsAnchor;
@property(readonly, nonatomic) NSMapTable *visualAnchorAssetReferenceItemByLayout; // @synthesize visualAnchorAssetReferenceItemByLayout=_visualAnchorAssetReferenceItemByLayout;
@property(readonly, nonatomic) struct CGPoint normalizedScaleCenterInAnchorSprite; // @synthesize normalizedScaleCenterInAnchorSprite=_normalizedScaleCenterInAnchorSprite;
@property(readonly, nonatomic) struct CGPoint scaleCenterTargetInViewport; // @synthesize scaleCenterTargetInViewport=_scaleCenterTargetInViewport;
@property(readonly, nonatomic) PXGAnchor *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) long long bodyLayoutAXGroupRole; // @synthesize bodyLayoutAXGroupRole=_bodyLayoutAXGroupRole;
@property(copy, nonatomic) CDUnknownBlockType addContentHandler; // @synthesize addContentHandler=_addContentHandler;
@property(nonatomic) _Bool preventFillingTopAreaInsets; // @synthesize preventFillingTopAreaInsets=_preventFillingTopAreaInsets;
@property(nonatomic) struct UIEdgeInsets inlineHeaderOverlayInsets; // @synthesize inlineHeaderOverlayInsets=_inlineHeaderOverlayInsets;
@property(nonatomic) struct UIEdgeInsets overlayInsets; // @synthesize overlayInsets=_overlayInsets;
@property(readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource; // @synthesize assetDecorationSource=_assetDecorationSource;
@property(readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) PXZoomablePhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXAssetReference *anchorAssetReference; // @synthesize anchorAssetReference=__anchorAssetReference;
@property(readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec; // @synthesize spec=_spec;
- (id)debugQuickLookObject;	// IMP=0x00000000003207f1
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000320716
- (id)axSpriteIndexes;	// IMP=0x00000000003206fd
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000320577
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000032056f
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000320451
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000320440
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000320438
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000032042d
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000032022d
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000003201a4
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000320029
- (id)_debugColors;	// IMP=0x000000000031fff9
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;	// IMP=0x000000000031ffe4
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;	// IMP=0x000000000031fe9c
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;	// IMP=0x000000000031fe86
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;	// IMP=0x000000000031fe6d
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;	// IMP=0x000000000031fe1b
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;	// IMP=0x000000000031fc5a
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000031fa4e
- (_Bool)_layoutWantsSingleDateTitle;	// IMP=0x000000000031f9c8
- (struct _NSRange)_rangeOfItemsForContentInRect:(struct CGRect)arg1;	// IMP=0x000000000031f7c8
- (struct UIEdgeInsets)floatingHeadersMarginsForLevel:(unsigned long long)arg1;	// IMP=0x000000000031f7a9
- (struct CGRect)boundsForLevel:(unsigned long long)arg1;	// IMP=0x000000000031f76e
- (CDStruct_c1f6e9bb)spriteTransformForLevel:(unsigned long long)arg1;	// IMP=0x000000000031f741
- (struct CGRect)frameForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 level:(unsigned long long)arg2;	// IMP=0x000000000031f631
- (id)_displayAssetForItem:(long long)arg1;	// IMP=0x000000000031f590
- (CDStruct_2bd92d94)itemsLayout:(id)arg1 cornerRadiusForItem:(long long)arg2;	// IMP=0x000000000031f50d
- (struct CGSize)itemsLayout:(id)arg1 insetForItem:(long long)arg2;	// IMP=0x000000000031f454
- (void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;	// IMP=0x000000000031f3fd
- (unsigned int)itemsLayout:(id)arg1 effectIdForItem:(long long)arg2;	// IMP=0x000000000031f1a1
- (struct CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;	// IMP=0x000000000031f101
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;	// IMP=0x000000000031f0ae
- (id)itemsLayout:(id)arg1 objectReferenceForItem:(long long)arg2;	// IMP=0x000000000031f00d
- (long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000031eea1
- (void)_ensureZoomingAnchor;	// IMP=0x000000000031ecf1
- (CDStruct_c1f6e9bb)_spriteTransformForLayout:(id)arg1;	// IMP=0x000000000031eb78
- (void)_performAnchorAlignmentVisualShiftWithBaseLayout:(id)arg1;	// IMP=0x000000000031e47b
- (_Bool)_performVisualShiftWithLayout:(id)arg1 movingItem:(long long)arg2 toColumn:(long long)arg3;	// IMP=0x000000000031e36f
- (_Bool)_isAllowedToShiftItem:(long long)arg1 inLayout:(id)arg2;	// IMP=0x000000000031e2c9
- (long long)_estimatedItemsPerScreenForLayout:(id)arg1;	// IMP=0x000000000031e22a
- (void)_updateDebugVisualizationSprites;	// IMP=0x000000000031df9b
- (void)_updateFloatingHeaderStyle;	// IMP=0x000000000031deed
- (void)_updatePrefetching;	// IMP=0x000000000031d37a
- (void)_updatePinchEffect;	// IMP=0x000000000031ce75
- (void)_updateBackgroundSprites;	// IMP=0x000000000031cd05
- (void)_updateZoomTransforms;	// IMP=0x000000000031c42b
- (void)_updateDecorationSource;	// IMP=0x000000000031c04f
- (void)_updateDataSource;	// IMP=0x000000000031b572
- (void)_updateVisualShifting;	// IMP=0x000000000031b1c9
- (void)_updateDecorationVisibility;	// IMP=0x000000000031b08d
- (void)_updateZoom;	// IMP=0x0000000000318e25
- (void)_updateLayers;	// IMP=0x0000000000318865
- (void)_updateEffectiveOverlayInsets;	// IMP=0x000000000031850a
- (void)_updateSurroundingScrollableContent;	// IMP=0x00000000003181e0
- (void)_updateEffectProvider;	// IMP=0x0000000000318171
- (void)didUpdate;	// IMP=0x0000000000317ff6
- (void)update;	// IMP=0x00000000003171a1
- (void)willUpdate;	// IMP=0x000000000031701c
- (void)invalidateItemsLayout;	// IMP=0x0000000000316fdf
- (id)presentedItemsGeometryForDataSource:(id)arg1;	// IMP=0x0000000000316f1d
@property(readonly, nonatomic) PXGItemsLayout<PXZoomablePhotosContentLayout> *primaryItemsLayout;
- (void)_callAddContentActionHandler;	// IMP=0x0000000000316e3b
- (_Bool)_wantsDecorationForNumberOfColumns:(long long)arg1;	// IMP=0x0000000000316da8
- (double)_itemCaptionSpacingForLayout:(id)arg1;	// IMP=0x0000000000316cde
- (double)_interItemSpacingForLayout:(id)arg1;	// IMP=0x0000000000316c27
- (_Bool)_layoutHasIndividualItems:(id)arg1;	// IMP=0x0000000000316ba1
- (_Bool)_layoutIsQuiteTransparent:(id)arg1;	// IMP=0x0000000000316afc
- (_Bool)_layoutIsAspectFit:(id)arg1;	// IMP=0x0000000000316a66
- (void)_configureLayout:(id)arg1;	// IMP=0x000000000031639e
- (id)_createLayoutWithNumberOfColumns:(long long)arg1;	// IMP=0x0000000000316203
- (struct CGSize)_scaleForLayout:(id)arg1;	// IMP=0x0000000000315dee
- (id)itemsGeometry;	// IMP=0x0000000000315d9e
- (unsigned long long)contentChangeTrend;	// IMP=0x0000000000315cbb
- (_Bool)isAnimating;	// IMP=0x0000000000315c37
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x0000000000315b6e
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000315b40
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003159c0
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x00000000003159a3
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000003158cb
- (void)scrollSpeedRegimeDidChange;	// IMP=0x000000000031588d
- (void)screenScaleDidChange;	// IMP=0x000000000031584f
- (void)visibleRectDidChange;	// IMP=0x0000000000315804
- (void)appearStateDidChange;	// IMP=0x00000000003157b0
- (void)entityManagerDidChange;	// IMP=0x0000000000315738
- (void)containingScrollViewDidScroll:(struct CGPoint)arg1;	// IMP=0x000000000031566b
@property(readonly, nonatomic) PXGBurstStackEffect *burstStackEffect;
- (void)setSpec:(id)arg1;	// IMP=0x0000000000314b26
- (id)init;	// IMP=0x0000000000314aac
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000000314497

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
