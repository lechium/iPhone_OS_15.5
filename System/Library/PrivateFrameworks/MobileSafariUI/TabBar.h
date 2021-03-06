//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafariUI/TabCollectionView-Protocol.h>
#import <MobileSafariUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MobileSafariUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, ReorderingAutoscroller, SFTabHoverPreviewController, UIDragInteraction, UIHoverGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIVisualEffectView;
@protocol TabBarDelegate;

@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TabCollectionView>
{
    NSMutableArray *_tabBarItemViewReuseStack;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UITapGestureRecognizer *_tapRecognizer;	// 24 = 0x18
    UIView *_leadingContainer;	// 32 = 0x20
    UIView *_trailingContainer;	// 40 = 0x28
    UIVisualEffectView *_leadingVibrancyEffectView;	// 48 = 0x30
    UIVisualEffectView *_trailingVibrancyEffectView;	// 56 = 0x38
    UIPanGestureRecognizer *_reorderRecognizer;	// 64 = 0x40
    UIDragInteraction *_dragInteraction;	// 72 = 0x48
    UIHoverGestureRecognizer *_hoverRecognizer;	// 80 = 0x50
    _Bool _newTabVisibleInTabBar;	// 88 = 0x58
    _Bool _hidesTitles;	// 89 = 0x59
    _Bool _draggingItem;	// 90 = 0x5a
    id <TabBarDelegate> _delegate;	// 96 = 0x60
    NSArray *_items;	// 104 = 0x68
    long long _tintStyle;	// 112 = 0x70
    double _minimumTabWidth;	// 120 = 0x78
    SFTabHoverPreviewController *_tabHoverPreviewController;	// 128 = 0x80
}

+ (double)defaultHeight;	// IMP=0x000000000010af9d
- (void).cxx_destruct;	// IMP=0x0000000000110348
@property(nonatomic, getter=isDraggingItem) _Bool draggingItem; // @synthesize draggingItem=_draggingItem;
@property(readonly, nonatomic) SFTabHoverPreviewController *tabHoverPreviewController; // @synthesize tabHoverPreviewController=_tabHoverPreviewController;
@property(readonly, nonatomic) double minimumTabWidth; // @synthesize minimumTabWidth=_minimumTabWidth;
@property(nonatomic) _Bool hidesTitles; // @synthesize hidesTitles=_hidesTitles;
@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_relinquishReusableTabBarItemView:(id)arg1;	// IMP=0x0000000000110239
- (id)_requestReusableTabBarItemView;	// IMP=0x000000000011019a
- (void)_didCompleteScrolling;	// IMP=0x0000000000110143
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000011012b
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000110119
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001100d6
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001100c4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000010fff4
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000010ffbe
- (unsigned long long)_scrollableItemCount;	// IMP=0x000000000010ffa1
- (void)_didReceiveMemoryWarning:(id)arg1;	// IMP=0x000000000010ff84
- (void)dealloc;	// IMP=0x000000000010fec0
- (unsigned long long)_maximumTruncationIndexForTitle:(id)arg1;	// IMP=0x000000000010fc4e
@property(readonly, nonatomic) unsigned long long maxNumberOfVisibleTabs;
@property(readonly, nonatomic) unsigned long long indexOfCenterItem;
- (void)_hover:(id)arg1;	// IMP=0x000000000010f944
- (void)_reorder:(id)arg1;	// IMP=0x000000000010f698
- (void)addInteraction:(id)arg1;	// IMP=0x000000000010f617
- (void)_tap:(id)arg1;	// IMP=0x000000000010f4ec
- (id)_itemForTouch:(id)arg1;	// IMP=0x000000000010f4b8
- (void)_activateItemIfNeeded:(id)arg1;	// IMP=0x000000000010f42e
- (void)activateItem:(id)arg1;	// IMP=0x000000000010f41c
- (id)_itemAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000010f1ce
- (void)layoutSubviews;	// IMP=0x000000000010e4c2
- (void)_layoutIndexes:(id)arg1 ofItems:(id)arg2;	// IMP=0x000000000010dfea
- (void)_layoutContainers;	// IMP=0x000000000010d9f9
- (unsigned long long)_effectiveIndexForIndex:(unsigned long long)arg1 ofItems:(id)arg2;	// IMP=0x000000000010d912
- (struct CGRect)_initialFrameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010d730
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010d649
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010d62f
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 withSlowingFactor:(double)arg2;	// IMP=0x000000000010d38d
- (void)_scrollTowardItem:(id)arg1 byAmount:(double)arg2;	// IMP=0x000000000010d113
@property(readonly, nonatomic) double itemWidth;
- (id)itemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000010d0ef
- (unsigned long long)contextMenuOptionsForItem:(id)arg1;	// IMP=0x000000000010d0e4
@property(readonly, nonatomic) _Bool supportsDropTransitionToItemView;
@property(readonly, nonatomic) _Bool supportsSystemDrag;
- (id)targetedDragPreviewForLiftingItem:(id)arg1;	// IMP=0x000000000010cd4b
- (unsigned int)_edgeToAlignWithPreviewForItem:(id)arg1;	// IMP=0x000000000010cb92
- (id)targetItemForDropAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000010c880
- (id)viewForItem:(id)arg1;	// IMP=0x000000000010c829
- (struct CGRect)frameForItem:(id)arg1;	// IMP=0x000000000010c7ce
- (void)scrollToItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000010c291
- (void)_scrollToItemIfNeeded:(id)arg1;	// IMP=0x000000000010c07f
- (_Bool)_isScrollable;	// IMP=0x000000000010c01b
- (double)_scrollableWidth;	// IMP=0x000000000010bfb7
- (double)_itemWidth;	// IMP=0x000000000010beeb
- (void)_layoutItem:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 itemCount:(unsigned long long)arg4 beforeActiveItem:(_Bool)arg5;	// IMP=0x000000000010bb5c
- (void)_toggleMediaStateMutedForItem:(id)arg1;	// IMP=0x000000000010baf9
- (void)_itemDidPressCloseButton:(id)arg1;	// IMP=0x000000000010ba3c
- (void)_updateBackground;	// IMP=0x000000000010b9bb
- (void)_updateReorderRecognizer;	// IMP=0x000000000010b980
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000010b81b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000010b72a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010afaf

// Remaining properties
@property(readonly, nonatomic) _Bool canDragOntoActiveTab;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidesInactiveTabs;
@property(readonly, nonatomic) _Bool lastDecelerationWasInterrupted;
@property(readonly, nonatomic) unsigned long long layoutAxes;
@property(readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property(readonly) Class superclass;

@end

