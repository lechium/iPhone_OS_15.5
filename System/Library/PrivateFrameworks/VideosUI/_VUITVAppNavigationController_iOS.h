//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _VUITVAppNavigationController_iOS
{
    _Bool _shouldFakeStatusBarVisible;	// 8 = 0x8
    _Bool _shouldPreventContentFromShiftingVertically;	// 9 = 0x9
    _Bool _originalValueForNavigationBarForceFullHeightInLandscape;	// 10 = 0xa
}

@property(nonatomic) _Bool originalValueForNavigationBarForceFullHeightInLandscape; // @synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape;
@property(nonatomic) _Bool shouldPreventContentFromShiftingVertically; // @synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically;
@property(nonatomic) _Bool shouldFakeStatusBarVisible; // @synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002d95c1
- (id)_accessibilityButtonBackgroundDefaultTintColor;	// IMP=0x00000000002d9551
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002d9510
- (void)didPresentTraitsOverridingViewController;	// IMP=0x00000000002d9488
- (void)willPresentTraitsOverridingViewController;	// IMP=0x00000000002d93a2
- (void)viewDidLoad;	// IMP=0x00000000002d9333
- (long long)preferredStatusBarStyle;	// IMP=0x00000000002d92ef

@end
