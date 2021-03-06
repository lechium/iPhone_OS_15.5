//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthenticationServices/UITableViewDelegate-Protocol.h>

@class ASCredentialRequestPaneContext, NSLayoutConstraint, NSString, UIStackView, UITableView, UIVisualEffectView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestPaneViewController : UIViewController <UITableViewDelegate>
{
    _Bool _isTableViewRequired;	// 8 = 0x8
    UIVisualEffectView *_blurryTray;	// 16 = 0x10
    NSLayoutConstraint *_headerWidthConstraint;	// 24 = 0x18
    NSLayoutConstraint *_footerWidthConstraint;	// 32 = 0x20
    id <ASCredentialRequestPaneViewControllerDelegate> _delegate;	// 40 = 0x28
    UIStackView *_paneHeaderStackView;	// 48 = 0x30
    UIStackView *_paneFooterStackView;	// 56 = 0x38
    ASCredentialRequestPaneContext *_headerPaneContext;	// 64 = 0x40
    ASCredentialRequestPaneContext *_footerPaneContext;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000025f9e
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) ASCredentialRequestPaneContext *footerPaneContext; // @synthesize footerPaneContext=_footerPaneContext;
@property(readonly, nonatomic) ASCredentialRequestPaneContext *headerPaneContext; // @synthesize headerPaneContext=_headerPaneContext;
@property(readonly, nonatomic) UIStackView *paneFooterStackView; // @synthesize paneFooterStackView=_paneFooterStackView;
@property(readonly, nonatomic) UIStackView *paneHeaderStackView; // @synthesize paneHeaderStackView=_paneHeaderStackView;
@property(nonatomic) __weak id <ASCredentialRequestPaneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000025f00
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000025ef8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000025ee6
- (double)_intrinsicContentHeight;	// IMP=0x0000000000025d31
- (double)_maximumContentHeight;	// IMP=0x0000000000025c8f
- (double)_navigationBarHeaderHeight;	// IMP=0x0000000000025bed
- (long long)_safeIndexWithCount:(long long)arg1;	// IMP=0x0000000000025bd2
- (id)_indexPathForLastRow;	// IMP=0x0000000000025b09
- (_Bool)_isContentUnderTray;	// IMP=0x0000000000025965
- (void)_updateBlurForTray;	// IMP=0x0000000000025877
- (void)_adjustForPositionOfScrollView:(id)arg1;	// IMP=0x000000000002564b
@property(readonly, nonatomic) long long numberOfTableRows;
- (void)_setUpContexts;	// IMP=0x000000000002554f
- (id)_newContainerView;	// IMP=0x00000000000254ec
- (id)_newStackView;	// IMP=0x0000000000025485
- (double)_blurryTrayMinimumHeight;	// IMP=0x0000000000025443
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002534e
- (void)sizeToFitPaneContent;	// IMP=0x000000000002514d
- (void)_setCompressedHeightForView:(id)arg1;	// IMP=0x0000000000025086
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000024f66
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000024e99
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000024e36
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000024d7a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000024c13
- (void)viewDidLoad;	// IMP=0x000000000002380d
- (id)initRequiringTableView:(_Bool)arg1;	// IMP=0x0000000000023794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

