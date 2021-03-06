//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FPUIAuthenticationLandingViewController, NSURL;
@protocol FPUIAuthenticationDelegate;

@interface FPUIAuthenticationViewController : UIViewController
{
    id <FPUIAuthenticationDelegate> _authenticationDelegate;	// 8 = 0x8
    NSURL *_initialConnectionURL;	// 16 = 0x10
    FPUIAuthenticationLandingViewController *_landingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000023dc
@property __weak FPUIAuthenticationLandingViewController *landingViewController; // @synthesize landingViewController=_landingViewController;
@property(copy, nonatomic) NSURL *initialConnectionURL; // @synthesize initialConnectionURL=_initialConnectionURL;
@property(nonatomic) __weak id <FPUIAuthenticationDelegate> authenticationDelegate; // @synthesize authenticationDelegate=_authenticationDelegate;
- (void)viewDidLoad;	// IMP=0x0000000000001e28
- (id)initWithServerURL:(id)arg1;	// IMP=0x0000000000001daa

@end

