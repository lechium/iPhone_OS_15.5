//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBarSwipeAffordanceDelegate-Protocol.h>
#import <SpringBoard/SBBarSwipeAffordanceObserver-Protocol.h>
#import <SpringBoard/SBFZStackParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGrabberPointerClickDelegate-Protocol.h>
#import <SpringBoard/SBModalViewControllerStackDelegate-Protocol.h>
#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/UIAlertControllerCoordinatedActionPerforming-Protocol.h>
#import <SpringBoard/_SBAlertControllerDelegate-Protocol.h>

@class NSString, SBAlertItem, SBAlertLayoutPresentationVerifier, SBBarSwipeAffordanceView, SBFWindow, SBFZStackParticipant, SBFZStackResolver, SBHomeGestureArbiter, SBHomeGestureParticipant, SBModalViewControllerStack, SBReachabilityManager, SBSystemGestureManager;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver>
{
    id <SBFLockOutStatusProvider> _lockOutProvider;	// 8 = 0x8
    SBSystemGestureManager *_systemGestureManager;	// 16 = 0x10
    SBHomeGestureParticipant *_homeGestureParticipant;	// 24 = 0x18
    SBHomeGestureArbiter *_homeGestureArbiter;	// 32 = 0x20
    SBFZStackParticipant *_zStackParticipant;	// 40 = 0x28
    SBFZStackResolver *_zStackResolver;	// 48 = 0x30
    SBReachabilityManager *_reachabilityManager;	// 56 = 0x38
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;	// 64 = 0x40
    SBBarSwipeAffordanceView *_barSwipeView;	// 72 = 0x48
    SBModalViewControllerStack *_modalViewControllerStack;	// 80 = 0x50
    SBFWindow *_window;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004992fd
@property(retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack; // @synthesize modalViewControllerStack=_modalViewControllerStack;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;	// IMP=0x0000000000499267
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;	// IMP=0x000000000049922a
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;	// IMP=0x000000000049920b
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;	// IMP=0x00000000004991f1
- (void)zStackParticipantDidChange:(id)arg1;	// IMP=0x000000000049918d
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;	// IMP=0x0000000000499129
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;	// IMP=0x0000000000499090
- (void)_updateHomeGestureParticipant;	// IMP=0x0000000000498f54
- (void)handleReachabilityYOffsetDidChange;	// IMP=0x0000000000498ede
- (void)alertControllerDidDisappear:(id)arg1;	// IMP=0x0000000000498de6
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000498dd4
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x0000000000498d14
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000498c25
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000000498b78
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000000498b36
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000498929
- (void)presentAlertItem:(id)arg1 isLocked:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000498726
@property(readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
- (void)dealloc;	// IMP=0x00000000004986e1
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 zStackResolver:(id)arg4 reachabilityManager:(id)arg5 alertLayoutPresentationVerifier:(id)arg6 enableGestures:(_Bool)arg7;	// IMP=0x0000000000498332
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 zStackResolver:(id)arg4 reachabilityManager:(id)arg5 alertLayoutPresentationVerifier:(id)arg6;	// IMP=0x0000000000498307

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

