//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class NSString;

@interface SBGridLayoutSwitcherModifier <PTSettingsKeyObserver>
{
    struct CGPoint _previousContentOffset;	// 24 = 0x18
    _Bool _isScrollingForward;	// 40 = 0x28
    _Bool _usesFixedCardSize;	// 41 = 0x29
    _Bool _centersContentVertically;	// 42 = 0x2a
    double _unroundedCardScale;	// 48 = 0x30
    unsigned long long _scrollAxis;	// 56 = 0x38
    unsigned long long _fixedGroupingSize;	// 64 = 0x40
    unsigned long long _alignment;	// 72 = 0x48
    unsigned long long _layoutDirection;	// 80 = 0x50
    struct CGSize _fixedCardSize;	// 88 = 0x58
}

@property(nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool centersContentVertically; // @synthesize centersContentVertically=_centersContentVertically;
@property(nonatomic) struct CGSize fixedCardSize; // @synthesize fixedCardSize=_fixedCardSize;
@property(nonatomic, getter=isUsingFixedCardSize) _Bool usesFixedCardSize; // @synthesize usesFixedCardSize=_usesFixedCardSize;
@property(nonatomic) unsigned long long fixedGroupingSize; // @synthesize fixedGroupingSize=_fixedGroupingSize;
@property(nonatomic) unsigned long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) double cardScale; // @synthesize cardScale=_unroundedCardScale;
- (struct CGSize)_scaledCardSize;	// IMP=0x00000000006bac32
- (struct CGSize)_cardSize;	// IMP=0x00000000006babd1
- (unsigned long long)_numberOfRows;	// IMP=0x00000000006baae4
- (unsigned long long)_numberOfColumns;	// IMP=0x00000000006ba9f6
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;	// IMP=0x00000000006ba97e
- (double)_gridSwitcherPageScale;	// IMP=0x00000000006ba90c
- (double)_cardHeaderHeight;	// IMP=0x00000000006ba8a5
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;	// IMP=0x00000000006ba874
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;	// IMP=0x00000000006ba843
- (double)_cardCornerRadiusInSwitcher;	// IMP=0x00000000006ba817
- (double)_horizontalSpacing;	// IMP=0x00000000006ba7c9
- (double)_verticalSpacing;	// IMP=0x00000000006ba733
- (double)_trailingPadding;	// IMP=0x00000000006ba707
- (double)_leadingPadding;	// IMP=0x00000000006ba6db
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;	// IMP=0x00000000006ba058
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000006b9ee4
- (struct _NSRange)visibleAppLayoutRangeForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000006b9d30
- (void)_applyPrototypeSettings;	// IMP=0x00000000006b9cac
- (void)resetAdjustedScrollingState;	// IMP=0x00000000006b9ca6
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;	// IMP=0x00000000006b9ca0
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;	// IMP=0x00000000006b9c46
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x00000000006b9c40
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;	// IMP=0x00000000006b9a44
- (struct CGSize)_fittedContentSize;	// IMP=0x00000000006b98df
- (struct CGSize)_contentSize;	// IMP=0x00000000006b97a4
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;	// IMP=0x00000000006b96e1
- (id)scrollViewAttributes;	// IMP=0x00000000006b960a
- (double)contentPageViewScaleForAppLayout:(id)arg1;	// IMP=0x00000000006b95f8
- (double)snapshotScaleForAppLayout:(id)arg1;	// IMP=0x00000000006b95e6
- (unsigned long long)_indexOfLeadingCard;	// IMP=0x00000000006b94cc
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;	// IMP=0x00000000006b9455
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006b942f
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;	// IMP=0x00000000006b9427
- (_Bool)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000006b9412
- (id)appLayoutsToCacheFullsizeSnapshots;	// IMP=0x00000000006b9405
- (id)appLayoutsToCacheSnapshots;	// IMP=0x00000000006b936b
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b9312
- (double)shadowOffsetForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b9309
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000006b92fb
- (double)titleOpacityForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b92ed
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b92df
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000006b92d1
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006b9293
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006b928b
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000006b91a3
- (double)contentViewScale;	// IMP=0x00000000006b9195
- (_Bool)_isIndexVisible:(unsigned long long)arg1;	// IMP=0x00000000006b9038
- (_Bool)isResizeGrabberVisibleForAppLayout:(id)arg1;	// IMP=0x00000000006b9030
- (id)visibleHomeAffordanceLayoutElements;	// IMP=0x00000000006b9017
- (_Bool)isHomeAffordanceSupportedForAppLayout:(id)arg1;	// IMP=0x00000000006b8fd3
- (id)visibleAppLayouts;	// IMP=0x00000000006b8f18
- (double)rotationAngleForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b8f0f
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b8efd
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x00000000006b8ed8
- (id)handleTransitionEvent:(id)arg1;	// IMP=0x00000000006b8e27
- (id)handleScrollEvent:(id)arg1;	// IMP=0x00000000006b8d6d
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;	// IMP=0x00000000006b8cf7
- (struct CGSize)spacing;	// IMP=0x00000000006b8cb5
- (struct CGSize)fittedContentSize;	// IMP=0x00000000006b8ca3
- (unsigned long long)numberOfRows;	// IMP=0x00000000006b8c91
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x00000000006b8c44
- (id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5;	// IMP=0x00000000006b8b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
