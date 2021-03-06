//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, NSString, RidesharingContainerViewController, RidesharingErrorAlertProvider, UIAlertController;

__attribute__((visibility("hidden")))
@interface RidesharingCoordinator : NSObject
{
    RidesharingErrorAlertProvider *_errorAlertProvider;	// 8 = 0x8
    UIAlertController *_errorAlert;	// 16 = 0x10
    AppCoordinator *_appCoordinator;	// 24 = 0x18
    RidesharingContainerViewController *_containerViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006f7fac
@property(retain, nonatomic) RidesharingContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (_Bool)_ridesharingIsCurrentMode;	// IMP=0x00100000006f7e8f
- (void)viewController:(id)arg1 presentErrorAlertIfNeeded:(id)arg2;	// IMP=0x00100000006f777c
- (void)viewControllerSendFeedbackAction;	// IMP=0x00100000006f759a
- (void)viewControllerRideCompletionAction:(id)arg1;	// IMP=0x00100000006f755b
- (void)viewController:(id)arg1 minimizeConfirmation:(id)arg2;	// IMP=0x00100000006f73f7
- (void)presentConfirmedRideWithApplicationIdentifier:(id)arg1;	// IMP=0x00100000006f7267
- (void)presentExpirationAlertControllerWithRequestRideStatus:(id)arg1;	// IMP=0x00100000006f6ef0
- (void)presentDetailsPicking;	// IMP=0x00100000006f6e35
- (_Bool)_wasPresentedFromProactiveTray;	// IMP=0x00100000006f6d98
- (id)initWithContainerViewController:(id)arg1;	// IMP=0x00100000006f6ccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

