//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CompletionListTableViewController, SFStartPageViewController, UniversalSearchFirstTimeExperienceViewController;

@interface AbstractCatalogViewController : UIViewController
{
}

- (void)_relinquishOwnershipOfViewControllerFromCurrentParent:(id)arg1;	// IMP=0x00000000000ad905
- (_Bool)_takeOwnershipOfViewController:(id)arg1;	// IMP=0x00000000000ad73a
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;	// IMP=0x00000000000ad734
- (void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;	// IMP=0x00000000000ad6e8
- (void)takeOwnershipOfUniversalSearchFirstTimeExperienceViewController;	// IMP=0x00000000000ad679
@property(readonly, nonatomic) UniversalSearchFirstTimeExperienceViewController *universalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfStartPageViewController;	// IMP=0x00000000000ad66b
- (void)relinquishOwnershipOfStartPageViewControllerFromCurrentParent;	// IMP=0x00000000000ad61f
- (void)takeOwnershipOfStartPageViewController;	// IMP=0x00000000000ad5b0
@property(readonly, nonatomic) SFStartPageViewController *startPageViewController;
- (void)didGainOwnershipOfCompletionsViewController;	// IMP=0x00000000000ad5a2
- (void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;	// IMP=0x00000000000ad556
- (void)takeOwnershipOfCompletionsViewController;	// IMP=0x00000000000ad4e7
@property(readonly, nonatomic) CompletionListTableViewController *completionsViewControllerIfLoaded;
@property(readonly, nonatomic) CompletionListTableViewController *completionsViewController;
- (_Bool)isResponsibleForLayoutOfViewController:(id)arg1;	// IMP=0x00000000000ad495
- (void)setForegroundChildViewControllerNeedsUpdate;	// IMP=0x00000000000ad458
@property(readonly, nonatomic) UIViewController *foregroundChildViewController;
- (void)updatePreferredContentSize;	// IMP=0x00000000000ad2f7
@property(readonly, nonatomic) double requiredContentWidth;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000ad2dc
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000ad0f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ad0b3

@end

