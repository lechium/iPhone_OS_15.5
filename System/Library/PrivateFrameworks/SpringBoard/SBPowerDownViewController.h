//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBPasscodeEntryTransientOverlayViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBPowerDownViewDelegate-Protocol.h>

@class NSString, SBFUserAuthenticationController, SBPasscodeEntryTransientOverlayViewController, SBPowerDownView, SPBeaconManager;
@protocol SBFLockOutStatusProvider, SBPowerDownViewControllerDelegate;

@interface SBPowerDownViewController <SBPowerDownViewDelegate, SBPasscodeEntryTransientOverlayViewControllerDelegate>
{
    unsigned long long _aggdStartTime;	// 8 = 0x8
    _Bool _canAlterScreenBrightness;	// 16 = 0x10
    SBPowerDownView *_powerDownView;	// 24 = 0x18
    _Bool _userWantsFindMySuppressed;	// 32 = 0x20
    id <SBPowerDownViewControllerDelegate> _delegate;	// 40 = 0x28
    SPBeaconManager *_beaconManager;	// 48 = 0x30
    SBPasscodeEntryTransientOverlayViewController *_passcodeEntryTransientOverlayViewController;	// 56 = 0x38
    SBFUserAuthenticationController *_userAuthController;	// 64 = 0x40
    id <SBFLockOutStatusProvider> _lockOutController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ea19e
@property(retain, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(nonatomic) _Bool userWantsFindMySuppressed; // @synthesize userWantsFindMySuppressed=_userWantsFindMySuppressed;
@property(retain, nonatomic) SBFUserAuthenticationController *userAuthController; // @synthesize userAuthController=_userAuthController;
@property(retain, nonatomic) SBPasscodeEntryTransientOverlayViewController *passcodeEntryTransientOverlayViewController; // @synthesize passcodeEntryTransientOverlayViewController=_passcodeEntryTransientOverlayViewController;
@property(retain, nonatomic) SPBeaconManager *beaconManager; // @synthesize beaconManager=_beaconManager;
@property(nonatomic) __weak id <SBPowerDownViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetScreenBrightness;	// IMP=0x00000000000ea09a
- (void)_endTimeTrackingIncludingReportWithKey:(id)arg1;	// IMP=0x00000000000ea06b
- (void)_incrementCountForKey:(id)arg1;	// IMP=0x00000000000ea059
- (void)_beginTimeTracking;	// IMP=0x00000000000ea039
- (_Bool)handleLockButtonPress;	// IMP=0x00000000000e9ff2
- (_Bool)shouldPendAlertItems;	// IMP=0x00000000000e9fea
- (_Bool)shouldDisableSiri;	// IMP=0x00000000000e9fe2
- (_Bool)shouldDisableControlCenter;	// IMP=0x00000000000e9fda
- (_Bool)shouldDisableBanners;	// IMP=0x00000000000e9fd2
- (long long)idleTimerMode;	// IMP=0x00000000000e9fc7
- (id)newTransientOverlayPresentationTransitionCoordinator;	// IMP=0x00000000000e9e75
- (id)newTransientOverlayDismissalTransitionCoordinator;	// IMP=0x00000000000e9d23
- (_Bool)allowsStackingOverlayContentAbove;	// IMP=0x00000000000e9d1b
- (void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2;	// IMP=0x00000000000e9cdd
- (void)powerDownViewDidReceiveCancelButtonAction:(id)arg1;	// IMP=0x00000000000e9cc4
- (void)powerDownViewDidFireIdleTimer:(id)arg1;	// IMP=0x00000000000e9cab
- (void)powerDownViewDidCompleteSlide:(id)arg1;	// IMP=0x00000000000e9c92
- (void)powerDownViewDidCancelSlide:(id)arg1;	// IMP=0x00000000000e9c5d
- (void)powerDownViewDidBeginSlide:(id)arg1;	// IMP=0x00000000000e9c4c
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;	// IMP=0x00000000000e9be0
- (id)passcodeEntryTransientOverlayViewControllerStatusText;	// IMP=0x00000000000e9b74
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg1;	// IMP=0x00000000000e9b11
- (_Bool)passcodeEntryTransientOverlayViewController:(id)arg1 authenticatePasscode:(id)arg2;	// IMP=0x00000000000e9913
- (void)_setPasscodeVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e9892
- (void)didTapTemporarilyDisableFindMy;	// IMP=0x00000000000e96a3
- (void)userAcknowledgedFindMyInfo;	// IMP=0x00000000000e9631
- (void)showPowerDownFindMyAlert;	// IMP=0x00000000000e9300
- (void)showPowerDownFindMyAlertWithProceed:(CDUnknownBlockType)arg1 cancelCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e8e3c
- (void)powerDownViewAnimateOutCompleted:(id)arg1;	// IMP=0x00000000000e8e36
- (void)powerDownViewWillAnimateOut:(id)arg1;	// IMP=0x00000000000e8e30
- (void)powerDownViewWillAnimateIn:(id)arg1;	// IMP=0x00000000000e8e2a
- (void)powerDownViewRequestPowerDown:(id)arg1;	// IMP=0x00000000000e8c47
- (void)powerDownViewRequestCancel:(id)arg1;	// IMP=0x00000000000e8bea
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000e8be2
- (int)_preferredStatusBarVisibility;	// IMP=0x00000000000e8bd7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000e8b7a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e8b1d
- (void)viewDidLoad;	// IMP=0x00000000000e8926
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e8874
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000e87f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

