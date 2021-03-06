//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController
{
}

- (id)_accessibilityButtonBackgroundDefaultTintColor;	// IMP=0x0000000000388a3b
- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;	// IMP=0x0000000000388959
- (_Bool)_topViewControllerPrefersNavigationBarBackgroundViewHidden;	// IMP=0x00000000003888f5
- (void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(_Bool)arg2;	// IMP=0x0000000000388847
- (void)_scheduleConfigurationOfNavigationBar;	// IMP=0x0000000000388772
- (void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(_Bool)arg2;	// IMP=0x0000000000387726
- (void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(_Bool)arg5 accessibilityButtonBackgroundTintColor:(id)arg6;	// IMP=0x00000000003875a6
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000387565
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;	// IMP=0x00000000003874f2
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003874b1
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000387470
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000387419
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003873c2
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000038736b
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0000000000387300
- (id)childViewControllerForStatusBarHidden;	// IMP=0x0000000000387295
- (id)description;	// IMP=0x000000000038719a

@end

