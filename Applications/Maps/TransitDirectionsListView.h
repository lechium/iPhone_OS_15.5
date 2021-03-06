//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableSet, NSSet, NSString, UIStackView, UIView;
@protocol TransitDirectionsListViewDataSource, TransitDirectionsListViewDelegate;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListView : UIScrollView
{
    UIStackView *_stackView;	// 8 = 0x8
    NSMapTable *_viewsByIndexPath;	// 16 = 0x10
    NSMapTable *_viewsByIdentifier;	// 24 = 0x18
    NSMapTable *_indexPathsByView;	// 32 = 0x20
    NSString *_activeItemIdentifier;	// 40 = 0x28
    UIView *_activeItemBackgroundView;	// 48 = 0x30
    NSArray *_activeItemBackgroundConstraints;	// 56 = 0x38
    NSSet *_identifiersForOverriddenSeparatorViews;	// 64 = 0x40
    NSString *_highlightedIdentifier;	// 72 = 0x48
    UIView *_highlightBackgroundView;	// 80 = 0x50
    NSArray *_highlightBackgroundConstraints;	// 88 = 0x58
    NSLayoutConstraint *_stackViewToBottomConstraint;	// 96 = 0x60
    NSMutableSet *_visibleAdvisories;	// 104 = 0x68
    id <TransitDirectionsListViewDelegate> _listDelegate;	// 112 = 0x70
    id <TransitDirectionsListViewDataSource> _dataSource;	// 120 = 0x78
    double _stepBackgroundAlpha;	// 128 = 0x80
    UIView *_footerView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000003d30e9
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) double stepBackgroundAlpha; // @synthesize stepBackgroundAlpha=_stepBackgroundAlpha;
@property(nonatomic) __weak id <TransitDirectionsListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TransitDirectionsListViewDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
- (id)_constraintsForBackgroundView:(id)arg1 foregroundViews:(id)arg2;	// IMP=0x00100000003d2d07
- (id)_allStepViewsForSection:(long long)arg1;	// IMP=0x00100000003d29aa
- (id)_allStepViewsInSectionForStepView:(id)arg1;	// IMP=0x00100000003d292d
- (id)_indexPathForStepView:(id)arg1;	// IMP=0x00100000003d275a
- (void)_updateVisibleAdvisories;	// IMP=0x00100000003d22bc
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00100000003d22aa
- (void)didMoveToWindow;	// IMP=0x00100000003d2248
- (void)_clearHighlight;	// IMP=0x00100000003d21ce
- (void)_clearHighlightForStepView:(id)arg1;	// IMP=0x00100000003d214f
- (void)_addHighlightForStepView:(id)arg1;	// IMP=0x00100000003d1fb4
- (void)_stepViewUnhighlighted:(id)arg1;	// IMP=0x00100000003d1fa2
- (void)_stepViewHighlighted:(id)arg1;	// IMP=0x00100000003d1ef1
- (void)_stepViewSelected:(id)arg1;	// IMP=0x00100000003d1de7
- (void)_refreshSeparatorsAroundActiveStepView:(id)arg1;	// IMP=0x00100000003d1a99
- (void)clearActiveTransitListItem;	// IMP=0x00100000003d1812
- (void)_setActiveStepView:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000003d1681
- (void)setActiveTransitDirectionsListItem:(id)arg1;	// IMP=0x00100000003d15d0
- (_Bool)isActiveTransitDirectionsListItem:(id)arg1;	// IMP=0x00100000003d156c
- (void);	// IMP=0x00100000003d0943
- (void)_requestSeparatorForStepView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000003d0771
- (id)_requestStepViewForIndexPath:(id)arg1;	// IMP=0x00100000003d06ab
- (id)_requestStepViewsForSectionAtIndex:(long long)arg1;	// IMP=0x00100000003d0580
- (void)reloadSeparators;	// IMP=0x00100000003d042c
- (void)reloadData;	// IMP=0x00100000003cfc07
- (id)indexPathForStepView:(id)arg1;	// IMP=0x00100000003cfbea
- (id)allStepViews;	// IMP=0x00100000003cfbcd
- (id)stepViewForItem:(id)arg1;	// IMP=0x00100000003cfb2b
- (id)stepViewForIndexPath:(id)arg1;	// IMP=0x00100000003cfac9
- (id)dequeueStepViewForItem:(id)arg1;	// IMP=0x00100000003cf945
- (id)viewForLastBaselineLayout;	// IMP=0x00100000003cf928
- (id)viewForFirstBaselineLayout;	// IMP=0x00100000003cf90b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000003cf2dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

