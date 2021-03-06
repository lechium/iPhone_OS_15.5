//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFPrivacyReportDetailToggleTableViewCellDelegate-Protocol.h>
#import <SafariServices/SFPrivacyReportExplanationTableViewCellDelegate-Protocol.h>
#import <SafariServices/SFPrivacyReportGridViewDelegate-Protocol.h>
#import <SafariServices/SFPrivacyReportPrivacyProxyTipTableViewCellDelegate-Protocol.h>
#import <SafariServices/UITableViewDelegatePrivate-Protocol.h>
#import <SafariServices/_SFTableViewDiffableDataSourceDelegate-Protocol.h>

@class NSString, UITableView, WBSPrivacyReportData, _SFTableViewDiffableDataSource;

@interface SFPrivacyReportViewController : UIViewController <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate, UITableViewDelegatePrivate, _SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    _Bool _showExplanationDetailView;	// 16 = 0x10
    WBSPrivacyReportData *_privacyReportData;	// 24 = 0x18
    _SFTableViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
    _Bool _needsRowHeightUpdate;	// 40 = 0x28
    long long _listDetailType;	// 48 = 0x30
    double _maxCountForDetailList;	// 56 = 0x38
    _Bool _showingCurrentWebsite;	// 64 = 0x40
    _Bool _usesInsetStyle;	// 65 = 0x41
    NSString *_domain;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000b9db
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b9b8
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b834
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b6e2
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b68a
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b682
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000000b65c
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000000b636
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;	// IMP=0x000000000000b5af
- (void)setNeedsUpdateRowHeight;	// IMP=0x000000000000b499
- (void)gridViewDidUpdateContentSize:(id)arg1;	// IMP=0x000000000000b487
- (void)cellPrivacyProxyStateChanged:(id)arg1;	// IMP=0x000000000000b473
- (void)cellPrivacyProxyUpsellDismissed:(id)arg1;	// IMP=0x000000000000b406
- (void)cellDidToggleExpandDetailedExplanation:(id)arg1;	// IMP=0x000000000000b3c9
- (void)cellDidToggleDetailType:(id)arg1;	// IMP=0x000000000000b38b
- (_Bool)_privacyProxyTip:(long long *)arg1;	// IMP=0x000000000000b280
- (id)_cellForRowWithIndexPath:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x000000000000a9f9
- (long long)_sectionTypeFromSectionIndex:(long long)arg1;	// IMP=0x000000000000a953
- (void)_doneBarButtonItemAction:(id)arg1;	// IMP=0x000000000000a93a
- (void)_reloadDataLoadingReport:(_Bool)arg1;	// IMP=0x000000000000a009
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000009f14
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000009e72
- (void)_updateLayoutMargins;	// IMP=0x0000000000009d4b
- (void)_updateUsesInsetStyle;	// IMP=0x0000000000009c87
- (void)_createTableViewIfNeededLoadingReport:(_Bool)arg1;	// IMP=0x000000000000984a
- (void)viewDidLoad;	// IMP=0x00000000000095f6
- (id)initWithDomain:(id)arg1;	// IMP=0x0000000000009572
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000009504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

