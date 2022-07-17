//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    double _bottomPadding;	// 8 = 0x8
    struct UIEdgeInsets _gradientBoundsInsets;	// 16 = 0x10
    CDStruct_ce7ae26c _flags;	// 48 = 0x30
    NSIndexPath *_indexPathForLastFocusedItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002f7d0
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;	// IMP=0x000000000002f7b7
- (struct CGRect)_visibleBounds;	// IMP=0x000000000002f6c1
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f67e
- (void)layoutBelowIfNeeded;	// IMP=0x000000000002f642
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000002f5a2
- (void)reloadData;	// IMP=0x000000000002f558
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000002f286
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;	// IMP=0x000000000002f1f7
@property(nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets _gradientBoundsInsets;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;	// IMP=0x000000000002f1a7
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000002f15c
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000002f0d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002f04b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
