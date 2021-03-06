//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, UILongPressGestureRecognizer, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout
{
    UILongPressGestureRecognizer *_editingGestureRecognizer;	// 8 = 0x8
    NSIndexPath *_indexPathForDraggedItem;	// 16 = 0x10
    double _evaluatedHorizontalItemOffset;	// 24 = 0x18
    NSArray *_preparedLayoutAttributes;	// 32 = 0x20
    NSArray *_preparedUpdateItems;	// 40 = 0x28
    _UIActivityGroupActivityCell *_draggingView;	// 48 = 0x30
    struct CGSize _evaluatedItemSize;	// 56 = 0x38
    struct CGSize _evaluatedContentSize;	// 72 = 0x48
    struct UIOffset _draggingOffset;	// 88 = 0x58
    struct UIEdgeInsets _externalSafeInset;	// 104 = 0x68
    struct UIEdgeInsets _evaluatedInset;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000008e9a7
@property(retain, nonatomic) _UIActivityGroupActivityCell *draggingView; // @synthesize draggingView=_draggingView;
@property(nonatomic) struct UIOffset draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(nonatomic) struct UIEdgeInsets externalSafeInset; // @synthesize externalSafeInset=_externalSafeInset;
@property(copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // @synthesize indexPathForDraggedItem=_indexPathForDraggedItem;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;	// IMP=0x000000000008e7c6
- (void)cancelDraggingForGesture:(id)arg1;	// IMP=0x000000000008e52f
- (_Bool)shouldCancelDraggingForGesture:(id)arg1;	// IMP=0x000000000008e407
- (void)updateDraggingViewForGesture:(id)arg1;	// IMP=0x000000000008e2c9
- (void)beginDraggingForGesture:(id)arg1;	// IMP=0x000000000008e13a
- (id)draggingViewForItemAtIndexPath:(id)arg1;	// IMP=0x000000000008df84
- (_Bool)shouldReverseLayoutDirection;	// IMP=0x000000000008df1d
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;	// IMP=0x000000000008de66
- (void)handleEditingGesture:(id)arg1;	// IMP=0x000000000008da02
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;	// IMP=0x000000000008d958
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x000000000008d7dd
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3;	// IMP=0x000000000008d6cd
- (id)_indexPathsForItemsInSection:(long long)arg1;	// IMP=0x000000000008d5c6
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;	// IMP=0x000000000008d50a
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000008d336
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000000008d2f6
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000008d288
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000008cfe1
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000008cd3b
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000008cc84
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000008cae6
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000008c9fe
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000008c9ec
- (void)prepareLayout;	// IMP=0x000000000008c1ce
- (id)indexPathForItemRecognizedByGesture:(id)arg1;	// IMP=0x000000000008bed9

@end

