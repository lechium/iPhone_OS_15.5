//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/UIScrollViewDelegate-Protocol.h>

@class NSString, OBTableHeaderFooterView, UITableView, UIView;

@interface OBTableWelcomeController <UIScrollViewDelegate>
{
    _Bool _adoptTableViewScrollView;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    OBTableHeaderFooterView *_headerContainer;	// 24 = 0x18
    OBTableHeaderFooterView *_footerContainer;	// 32 = 0x20
    UIView *_hostedTableFooterView;	// 40 = 0x28
    UIView *_hostedTableHeaderView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c469
@property(retain, nonatomic) UIView *hostedTableHeaderView; // @synthesize hostedTableHeaderView=_hostedTableHeaderView;
@property(retain, nonatomic) UIView *hostedTableFooterView; // @synthesize hostedTableFooterView=_hostedTableFooterView;
@property(nonatomic) _Bool adoptTableViewScrollView; // @synthesize adoptTableViewScrollView=_adoptTableViewScrollView;
@property(retain, nonatomic) OBTableHeaderFooterView *footerContainer; // @synthesize footerContainer=_footerContainer;
@property(retain, nonatomic) OBTableHeaderFooterView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_updateHeaderFooterViewSizeIfNeeded;	// IMP=0x000000000001c35d
- (void)_layoutFooterContainerFloatButtonTray;	// IMP=0x000000000001c160
- (void)_layoutFooterContainerInlineButtonTray;	// IMP=0x000000000001bf0f
- (void)_setupScrollView;	// IMP=0x000000000001becd
- (void)_updateTableHeaderViewSizeIfNeeded;	// IMP=0x000000000001bcb4
- (void)_updateButtonTrayTableFooterContainerSizeIfNeeded;	// IMP=0x000000000001ba7f
- (_Bool)_scrollContentUnderButtonTrayForGroupedStyle;	// IMP=0x000000000001b727
- (_Bool)_scrollViewContentIsUnderTray;	// IMP=0x000000000001b5eb
- (_Bool)contentViewUnderButtonTray;	// IMP=0x000000000001b4b6
- (_Bool)_buttonTrayInlined;	// IMP=0x000000000001b3ca
- (void)_inlineButtonTray;	// IMP=0x000000000001b253
- (void)_floatButtonTray;	// IMP=0x000000000001b03e
- (void)_layoutButtonTray;	// IMP=0x000000000001afcf
- (double)headerViewBottomToTableViewTopPadding;	// IMP=0x000000000001af65
- (void)setTableHeaderView:(id)arg1;	// IMP=0x000000000001ad98
- (void)setTableFooterView:(id)arg1;	// IMP=0x000000000001ad6a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001acef
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001acae
- (void)_setTableViewWithHeaderFooterDonation:(id)arg1;	// IMP=0x000000000001a6cf
- (void)_updateHeaderTopOffsetConstraint;	// IMP=0x000000000001a68d
- (void)viewDidLoad;	// IMP=0x000000000001a594
- (void)loadView;	// IMP=0x000000000001a47a
- (id)scrollView;	// IMP=0x000000000001a40f
- (void)_setTableViewNonHeaderFooterDonation:(id)arg1;	// IMP=0x000000000001a025
- (void)_updateDirectionalLayoutMarginsForTableView;	// IMP=0x0000000000019e23
- (void)updateDirectionalLayoutMargins;	// IMP=0x0000000000019de2
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x0000000000019d4e
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x0000000000019d1c
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;	// IMP=0x0000000000019cc0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x0000000000019c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

