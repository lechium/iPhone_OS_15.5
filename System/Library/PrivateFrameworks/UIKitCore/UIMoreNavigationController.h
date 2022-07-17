//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIMoreListController, UINavigationController, UIViewController;

@interface UIMoreNavigationController
{
    UIMoreListController *_moreListController;	// 400 = 0x190
    UINavigationController *_originalNavigationController;	// 408 = 0x198
    UIViewController *_originalRootViewController;	// 416 = 0x1a0
}

+ (Class)_moreListControllerClass;	// IMP=0x00000000004008cf
- (void).cxx_destruct;	// IMP=0x00000000004016d1
@property(readonly, nonatomic) UIViewController *moreListController; // @synthesize moreListController=_moreListController;
@property(nonatomic) _Bool moreViewControllersChanged;
@property(nonatomic) _Bool allowsCustomizing;
@property(retain, nonatomic) NSArray *moreViewControllers;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000401595
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;	// IMP=0x0000000000401542
- (void)_redisplayMoreTableView;	// IMP=0x00000000004014fa
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000401464
- (void)_ensureChildrenHaveParentViewController;	// IMP=0x00000000004012a0
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long *)arg2;	// IMP=0x0000000000401171
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000400fcb
@property(nonatomic) UIViewController *displayedViewController;
- (void)_restoreOriginalNavigationController;	// IMP=0x0000000000400af2
- (void)restoreOriginalNavigationControllerIfNecessary:(id)arg1;	// IMP=0x0000000000400ad1
- (id)_preparedViewController:(id)arg1;	// IMP=0x0000000000400970
- (id)init;	// IMP=0x00000000004008e0

@end
