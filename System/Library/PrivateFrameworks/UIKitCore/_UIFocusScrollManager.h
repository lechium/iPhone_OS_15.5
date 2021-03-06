//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollManager : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    _UIFocusDisplayLinkScrollAnimator *_scrollAnimator;	// 16 = 0x10
    NSHashTable *_stackVisitedScrollingContainers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006fdd70
@property(readonly, nonatomic) NSHashTable *stackVisitedScrollingContainers; // @synthesize stackVisitedScrollingContainers=_stackVisitedScrollingContainers;
@property(readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator; // @synthesize scrollAnimator=_scrollAnimator;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
- (struct CGPoint)_contentOffsetForNonPagingContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;	// IMP=0x00000000006fd368
- (struct CGPoint)_contentOffsetForPagingContainer:(id)arg1 itemFrame:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3;	// IMP=0x00000000006fd1a1
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;	// IMP=0x00000000006fd069
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;	// IMP=0x00000000006fcbcf
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;	// IMP=0x00000000006fcbbd
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowRect:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;	// IMP=0x00000000006fcba9
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;	// IMP=0x00000000006fca84
- (struct CGPoint)_contentOffsetConsideredCurrentForScrollableContainer:(id)arg1;	// IMP=0x00000000006fc9f8
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inEnvironmentScrollableContainer:(id)arg2;	// IMP=0x00000000006fc729
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint)arg2 inEnvironmentScrollableContainer:(id)arg3;	// IMP=0x00000000006fbd3a
- (void)adjustTargetContentOffsetForScrollableContainer:(id)arg1 byDelta:(struct CGPoint)arg2;	// IMP=0x00000000006fbd24
- (void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)arg1 toShowFocusItem:(id)arg2;	// IMP=0x00000000006fba3b
- (void)animateOffsetOfEnvironmentScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;	// IMP=0x00000000006fb8a3
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;	// IMP=0x00000000006fb88d
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;	// IMP=0x00000000006fb877
- (void)cancelScrollingForScrollableContainer:(id)arg1;	// IMP=0x00000000006fb861
- (_Bool)isScrollingScrollableContainer:(id)arg1;	// IMP=0x00000000006fb84b
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;	// IMP=0x00000000006fb543
- (id)initWithScreen:(id)arg1;	// IMP=0x00000000006fb45b

@end

