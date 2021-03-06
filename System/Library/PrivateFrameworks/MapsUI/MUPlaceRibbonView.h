//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapsUI/UIScrollViewDelegate-Protocol.h>

@class MURatingsCallToActionViewModel, MUScrollableStackView, NSArray, NSMutableArray, NSString;
@protocol MUPlaceRibbonViewDelegate, MUScrollAnalyticActionObserving;

__attribute__((visibility("hidden")))
@interface MUPlaceRibbonView : UIView <UIScrollViewDelegate>
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    MURatingsCallToActionViewModel *_callToActionViewModel;	// 16 = 0x10
    NSMutableArray *_focusItems;	// 24 = 0x18
    struct CGPoint _beginAnalyticsScrollingPoint;	// 32 = 0x20
    id <MUScrollAnalyticActionObserving> _analyticsDelegate;	// 48 = 0x30
    id <MUPlaceRibbonViewDelegate> _delegate;	// 56 = 0x38
    NSArray *_viewModels;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000594e9
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(nonatomic) __weak id <MUPlaceRibbonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MUScrollAnalyticActionObserving> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000059409
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000593d6
- (void)reloadVisibility;	// IMP=0x000000000005903f
- (id)_visibleRibbonItemViews;	// IMP=0x0000000000058f94
@property(readonly, nonatomic) NSArray *focusItems;
@property(readonly, nonatomic) _Bool hasContent;
- (void)_updateAppearance;	// IMP=0x0000000000058a20
- (void)_setupStackView;	// IMP=0x00000000000585ee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000058591

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

