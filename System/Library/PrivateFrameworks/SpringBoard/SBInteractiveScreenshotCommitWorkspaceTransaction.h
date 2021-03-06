//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBTransientOverlayPresentWorkspaceTransactionObserver-Protocol.h>

@class NSString, NSTimer, NSUUID, SBTransientOverlayViewController;
@protocol SBInteractiveScreenshotCommitWorkspaceTransactionDelegate;

@interface SBInteractiveScreenshotCommitWorkspaceTransaction <SBTransientOverlayPresentWorkspaceTransactionObserver>
{
    _Bool _hasBeganPresentation;	// 8 = 0x8
    _Bool _hasFinishedPresentation;	// 9 = 0x9
    _Bool _hasQueuedPresentationTransaction;	// 10 = 0xa
    _Bool _hasRequestedPlaceholderChromeRemoval;	// 11 = 0xb
    _Bool _hasWatchdogExpired;	// 12 = 0xc
    NSTimer *_watchdogTimeoutTimer;	// 16 = 0x10
    _Bool _hasFinishedFlashAnimation;	// 24 = 0x18
    _Bool _hasFinishedSettlingAnimation;	// 25 = 0x19
    NSUUID *_gestureSessionID;	// 32 = 0x20
    SBTransientOverlayViewController *_screenshotMarkupTransientOverlayViewController;	// 40 = 0x28
    id <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> _interactiveScreenshotCommitDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000045f4f4
@property(nonatomic) __weak id <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> interactiveScreenshotCommitDelegate; // @synthesize interactiveScreenshotCommitDelegate=_interactiveScreenshotCommitDelegate;
@property(retain, nonatomic) SBTransientOverlayViewController *screenshotMarkupTransientOverlayViewController; // @synthesize screenshotMarkupTransientOverlayViewController=_screenshotMarkupTransientOverlayViewController;
@property(nonatomic) _Bool hasFinishedSettlingAnimation; // @synthesize hasFinishedSettlingAnimation=_hasFinishedSettlingAnimation;
@property(nonatomic) _Bool hasFinishedFlashAnimation; // @synthesize hasFinishedFlashAnimation=_hasFinishedFlashAnimation;
@property(readonly, copy, nonatomic) NSUUID *gestureSessionID; // @synthesize gestureSessionID=_gestureSessionID;
- (void)_updateState;	// IMP=0x000000000045f05c
- (void)_handleWatchdogTimeout;	// IMP=0x000000000045f03f
- (void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)arg1;	// IMP=0x000000000045ef76
- (void)_begin;	// IMP=0x000000000045edde
- (id)initWithTransitionRequest:(id)arg1 gestureSessionID:(id)arg2;	// IMP=0x000000000045ed5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

