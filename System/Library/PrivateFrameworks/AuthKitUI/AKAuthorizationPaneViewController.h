//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>

@class AKAuthorizationPaneContext, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, UITableView, UIVisualEffectView;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isWristDetectionEnabled;	// 8 = 0x8
    id <AKAuthorizationPaneDelegate> _paneDelegate;	// 16 = 0x10
    id <AKAuthorizationEditableDataSources> _editableDataSources;	// 24 = 0x18
    UIStackView *_paneHeaderStackView;	// 32 = 0x20
    UIStackView *_paneFooterStackView;	// 40 = 0x28
    AKAuthorizationPaneContext *_headerPaneContext;	// 48 = 0x30
    AKAuthorizationPaneContext *_footerPaneContext;	// 56 = 0x38
    NSMutableArray *_mutableConstraints;	// 64 = 0x40
    UITableView *_tableView;	// 72 = 0x48
    NSLayoutConstraint *_headerWidthConstraint;	// 80 = 0x50
    NSLayoutConstraint *_footerWidthConstraint;	// 88 = 0x58
    UIVisualEffectView *_blurryTray;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000771a
@property(retain, nonatomic) UIVisualEffectView *blurryTray; // @synthesize blurryTray=_blurryTray;
@property(readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint; // @synthesize footerWidthConstraint=_footerWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint; // @synthesize headerWidthConstraint=_headerWidthConstraint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) _Bool isWristDetectionEnabled; // @synthesize isWristDetectionEnabled=_isWristDetectionEnabled;
@property(retain, nonatomic) NSMutableArray *mutableConstraints; // @synthesize mutableConstraints=_mutableConstraints;
@property(retain, nonatomic) AKAuthorizationPaneContext *footerPaneContext; // @synthesize footerPaneContext=_footerPaneContext;
@property(retain, nonatomic) AKAuthorizationPaneContext *headerPaneContext; // @synthesize headerPaneContext=_headerPaneContext;
@property(readonly, nonatomic) UIStackView *paneFooterStackView; // @synthesize paneFooterStackView=_paneFooterStackView;
@property(readonly, nonatomic) UIStackView *paneHeaderStackView; // @synthesize paneHeaderStackView=_paneHeaderStackView;
@property(nonatomic) __weak id <AKAuthorizationEditableDataSources> editableDataSources; // @synthesize editableDataSources=_editableDataSources;
@property(nonatomic) __weak id <AKAuthorizationPaneDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000007588
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000755d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000007532
- (long long)_safeIndexWithCount:(long long)arg1;	// IMP=0x0000000000007517
- (id)_indexPathForLastRow;	// IMP=0x0000000000007415
- (id)_newStackView;	// IMP=0x00000000000073ae
- (id)_newContainerView;	// IMP=0x000000000000734b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000007343
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000733b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000007333
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000007322
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000000731a
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000007312
- (void)_adjustForPositionOfScrollView:(id)arg1;	// IMP=0x0000000000007116
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000007104
- (double)_navigationBarHeaderHeight;	// IMP=0x0000000000007062
- (double)_deviceSafeAreaBottomInset;	// IMP=0x0000000000006f9b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006ea6
- (void)sizeToFitPaneContent;	// IMP=0x0000000000006cca
- (double)maximumContentHeight;	// IMP=0x0000000000006c28
- (double)intrinsicContentHeight;	// IMP=0x00000000000069d2
- (_Bool)_shouldEmbedContentTray;	// IMP=0x0000000000006974
- (_Bool)shouldEmbedContentTrayIfNeeded;	// IMP=0x000000000000696c
- (double)contentScrollOffset;	// IMP=0x00000000000068f6
- (_Bool)_isContentUnderNavigationBar;	// IMP=0x0000000000006807
- (_Bool)_isContentUnderTray;	// IMP=0x00000000000067e7
- (double)_contentTrayOffsetAdjustedForScrollInset:(_Bool)arg1;	// IMP=0x000000000000643d
- (void)_updateBlurForTray;	// IMP=0x0000000000006312
- (void)_configureContentTrayIfNeeded;	// IMP=0x00000000000054ac
- (void)_setCompressedHeightForView:(id)arg1;	// IMP=0x00000000000053e5
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000004fa6
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000004ea1
- (void)_setupContexts;	// IMP=0x0000000000004d85
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000004ce1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000004c0f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000004a81
- (void)viewDidLoad;	// IMP=0x000000000000406b
- (id)init;	// IMP=0x000000000000401b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

