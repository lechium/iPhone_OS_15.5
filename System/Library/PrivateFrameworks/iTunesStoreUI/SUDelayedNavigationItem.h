//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem
{
    _Bool _delayedBackButtonHidden;	// 8 = 0x8
    id _delayedBackButtonTitle;	// 16 = 0x10
    id _delayedLeftBarButtonItems;	// 24 = 0x18
    NSNumber *_delayedLeftItemsSupplementBackButton;	// 32 = 0x20
    id _delayedTitle;	// 40 = 0x28
    id _delayedTitleView;	// 48 = 0x30
    id _delayedRightBarButtonItems;	// 56 = 0x38
    _Bool _shouldDelayChanges;	// 64 = 0x40
    SUNavigationItem *_wrappedNavigationItem;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d3edd
@property(retain, nonatomic) SUNavigationItem *wrappedNavigationItem; // @synthesize wrappedNavigationItem=_wrappedNavigationItem;
@property(nonatomic) _Bool shouldDelayChanges; // @synthesize shouldDelayChanges=_shouldDelayChanges;
- (void)_scheduleCommit;	// IMP=0x00000000000d3e15
- (void)_prepareButtonItemForDisplay:(id)arg1;	// IMP=0x00000000000d3db8
- (id)titleView;	// IMP=0x00000000000d3cf8
- (id)title;	// IMP=0x00000000000d3c38
- (void)setTitleView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d3b51
- (void)setTitleView:(id)arg1;	// IMP=0x00000000000d3a71
- (void)setTitle:(id)arg1;	// IMP=0x00000000000d3999
- (void)setRightBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d3877
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d36ee
- (void)setLeftItemsSupplementBackButton:(_Bool)arg1;	// IMP=0x00000000000d364b
- (void)setLeftBarButtonItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d3529
- (void)setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d33a0
- (void)setHidesBackButton:(_Bool)arg1;	// IMP=0x00000000000d3338
- (void)setBackButtonTitle:(id)arg1;	// IMP=0x00000000000d323a
- (id)rightBarButtonItems;	// IMP=0x00000000000d3173
- (id)rightBarButtonItem;	// IMP=0x00000000000d309c
- (id)navigationBar;	// IMP=0x00000000000d3034
- (_Bool)leftItemsSupplementBackButton;	// IMP=0x00000000000d2fc7
- (id)leftBarButtonItems;	// IMP=0x00000000000d2f00
- (id)leftBarButtonItem;	// IMP=0x00000000000d2e19
- (id)backButtonTitle;	// IMP=0x00000000000d2d59
- (void)commitDelayedChanges;	// IMP=0x00000000000d27e5
- (void)dealloc;	// IMP=0x00000000000d2724
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x00000000000d26b6

@end

