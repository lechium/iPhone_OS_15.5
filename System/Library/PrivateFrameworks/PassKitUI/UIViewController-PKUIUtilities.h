//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PKUIUtilities)
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00000000000c339f
- (id)pkui_frontMostViewController;	// IMP=0x00000000000c32dc
- (void)_pk_presentViewController:(id)arg1 animated:(_Bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fca10
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fc9e3
- (void)pk_presentViewController:(id)arg1 animated:(_Bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fc9bb
- (void)pk_paymentSetupPreflight:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fc94f
- (void)pk_paymentSetupSetHideSetupLaterButton:(_Bool)arg1;	// IMP=0x00000000000fc90d
- (void)presentModalViewController:(id)arg1 withPaymentSetupContext:(long long)arg2;	// IMP=0x000000000013fbb7
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x0000000000170bb9
- (id)pk_childrenForAppearance;	// IMP=0x0000000000170ad0
@end
