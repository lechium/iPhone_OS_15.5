//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BNBannerController, BNBannerHostMonitor, BNBannerSourceListener, BNContentViewController, CARBannerAuthority, CAREnvironmentConfiguration, FBScene, NSMutableSet, NSString, UITapGestureRecognizer;
@protocol CARNotificationViewControllerDelegate;

@interface CARNotificationViewController : UIViewController
{
    _Bool _invalidated;	// 8 = 0x8
    CAREnvironmentConfiguration *_environmentConfiguration;	// 16 = 0x10
    id _screenBorrowToken;	// 24 = 0x18
    NSString *_screenBorrowingPresentableRequestID;	// 32 = 0x20
    BNBannerHostMonitor *_bannerHostMonitor;	// 40 = 0x28
    BNBannerController *_bannerController;	// 48 = 0x30
    BNBannerSourceListener *_bannerSourceListener;	// 56 = 0x38
    BNContentViewController *_bannerContentViewController;	// 64 = 0x40
    CARBannerAuthority *_bannerAuthority;	// 72 = 0x48
    UITapGestureRecognizer *_tapDismissGestureRecognizer;	// 80 = 0x50
    id <CARNotificationViewControllerDelegate> _delegate;	// 88 = 0x58
    NSMutableSet *_suspensionReasons;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000026857
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSMutableSet *suspensionReasons; // @synthesize suspensionReasons=_suspensionReasons;
@property(readonly, nonatomic) __weak id <CARNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITapGestureRecognizer *tapDismissGestureRecognizer; // @synthesize tapDismissGestureRecognizer=_tapDismissGestureRecognizer;
@property(readonly, nonatomic) CARBannerAuthority *bannerAuthority; // @synthesize bannerAuthority=_bannerAuthority;
@property(readonly, nonatomic) BNContentViewController *bannerContentViewController; // @synthesize bannerContentViewController=_bannerContentViewController;
@property(readonly, nonatomic) BNBannerSourceListener *bannerSourceListener; // @synthesize bannerSourceListener=_bannerSourceListener;
@property(readonly, nonatomic) BNBannerController *bannerController; // @synthesize bannerController=_bannerController;
@property(readonly, nonatomic) BNBannerHostMonitor *bannerHostMonitor; // @synthesize bannerHostMonitor=_bannerHostMonitor;
@property(retain, nonatomic) NSString *screenBorrowingPresentableRequestID; // @synthesize screenBorrowingPresentableRequestID=_screenBorrowingPresentableRequestID;
@property(retain, nonatomic) id screenBorrowToken; // @synthesize screenBorrowToken=_screenBorrowToken;
@property(retain, nonatomic) CAREnvironmentConfiguration *environmentConfiguration; // @synthesize environmentConfiguration=_environmentConfiguration;
- (void)_performCancelTapGesture:(id)arg1;	// IMP=0x0010000000026446
- (id)_layoutDescriptionWithBounds:(struct CGRect)arg1;	// IMP=0x001000000002622b
- (id)_layoutManager;	// IMP=0x00100000000261db
- (void)setSuspended:(_Bool)arg1 cancellingCurrent:(_Bool)arg2 forReason:(id)arg3;	// IMP=0x0010000000026030
- (void)setSuspended:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0010000000026019
- (void)invalidate;	// IMP=0x0010000000025fa7
- (void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;	// IMP=0x0010000000025d88
- (void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;	// IMP=0x0010000000025b4c
- (_Bool)shouldFenceAnimationsForPresentable:(id)arg1;	// IMP=0x0010000000025b44
- (void)presenter:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x0010000000025a9c
- (void)presenterRelinquishesVisibility:(id)arg1;	// IMP=0x00100000000259b6
- (void)presenterRequestsVisibility:(id)arg1;	// IMP=0x00100000000258cd
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3;	// IMP=0x00100000000258b7
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3;	// IMP=0x00100000000258a1
- (struct CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4;	// IMP=0x001000000002588b
- (id)panGestureRecognizerForPresenter:(id)arg1;	// IMP=0x0010000000025883
- (id)defaultTransitioningDelegateForPresenter:(id)arg1;	// IMP=0x001000000002586a
- (id)sceneSpecificationForBannerSourceListener:(id)arg1;	// IMP=0x0010000000025851
- (_Bool)bannerSourceListener:(id)arg1 recommendsSuspending:(_Bool)arg2 forReason:(id)arg3 revokingCurrent:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000000257cd
- (id)bannerSourceListener:(id)arg1 requestsRevokingPresentablesWithIdentification:(id)arg2 reason:(id)arg3 animated:(_Bool)arg4 userInfo:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000256fe
- (_Bool)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000025665
- (id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id *)arg2;	// IMP=0x00100000000255d1
- (void)loadView;	// IMP=0x0010000000025000
- (void)handleTransitionFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2;	// IMP=0x0010000000024e11
- (_Bool)handleHomeEvent;	// IMP=0x0010000000024c1f
@property(readonly, nonatomic) FBScene *visibleNotificationScene;
- (void)dealloc;	// IMP=0x0010000000024b21
- (id)initWithEnvironmentConfiguration:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000247bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
