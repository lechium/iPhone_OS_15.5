//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AAUISignInViewController, COSAppleIDAuthController, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkeriCloudLoginViewController : UIViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    COSAppleIDAuthController *_authController;	// 16 = 0x10
    AAUISignInViewController *_signInController;	// 24 = 0x18
    NSString *_signInTitle;	// 32 = 0x20
    NSString *_signInMessage;	// 40 = 0x28
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00200000000f7cd4
- (void).cxx_destruct;	// IMP=0x00200000000f8017
@property(retain, nonatomic) NSString *signInMessage; // @synthesize signInMessage=_signInMessage;
@property(retain, nonatomic) NSString *signInTitle; // @synthesize signInTitle=_signInTitle;
@property(retain, nonatomic) AAUISignInViewController *signInController; // @synthesize signInController=_signInController;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)localizedWaitScreenDescription;	// IMP=0x00100000000f7efe
- (double);	// IMP=0x00100000000f7e5a
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000000f7dfc
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000f7cdc
- (void)willPresentModalNavigationController:(id)arg1;	// IMP=0x00100000000f7c9c
- (id)remoteUIStyle;	// IMP=0x00100000000f7c83
- (void)appleIDAuthController:(id)arg1 didSignInWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000f7a62
- (id)performanceMonitorActivityName;	// IMP=0x00100000000f7a55
- (_Bool)allowSkipping;	// IMP=0x00100000000f7a4d
- (id)username;	// IMP=0x00100000000f79c9
- (id)authenticationContext;	// IMP=0x00100000000f7886
- (void)setupViewController;	// IMP=0x00100000000f7086
- (id)viewController;	// IMP=0x00100000000f6fc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

