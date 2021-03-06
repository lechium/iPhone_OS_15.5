//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUScriptNavigationBar, SUScriptViewController, UINavigationController;

@interface SUScriptNavigationController
{
    UINavigationController *_navController;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000000096bea
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x0000000000096b21
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x0000000000096acd
- (id)scriptAttributeKeys;	// IMP=0x0000000000096b87
- (id)attributeKeys;	// IMP=0x0000000000096b75
- (id)_navigationController;	// IMP=0x0000000000096a53
- (id)_filteredViewControllers;	// IMP=0x0000000000096640
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;	// IMP=0x00000000000964d8
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000963fd
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009621d
- (void)_popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000961cc
- (void)_popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000009617b
@property(retain) id viewControllers;
@property(readonly) SUScriptViewController *topViewController;
@property(copy) id toolbarHidden;
- (void)setTopViewController:(id)arg1;	// IMP=0x0000000000095d0c
@property _Bool navigationBarHidden;
- (void)setNavigationBar:(id)arg1;	// IMP=0x0000000000095c36
@property(readonly) SUScriptNavigationBar *navigationBar;
- (id)_className;	// IMP=0x00000000000959c6
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000958e6
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009583f
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000095798
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000095758
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000095729
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000956fa
- (void)willPerformBatchedInvocations;	// IMP=0x000000000009568f
- (void)didPerformBatchedInvocations;	// IMP=0x0000000000095641
- (id)newNativeViewController;	// IMP=0x00000000000955f3
- (void)dealloc;	// IMP=0x00000000000955b1
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;	// IMP=0x000000000009535a

@end

