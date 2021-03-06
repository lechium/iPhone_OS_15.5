//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBReachabilityObserver-Protocol.h>
#import <SpringBoard/SBUIActiveOrientationObserver-Protocol.h>

@class BSMonotonicReferenceTime, NSMutableArray, NSString, SBSharedModalAlertItemPresenter, UIWindow;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver>
{
    _Bool _pendingLayoutVerification;	// 8 = 0x8
    NSMutableArray *_updateReasons;	// 16 = 0x10
    UIWindow *_alertWindow;	// 24 = 0x18
    SBSharedModalAlertItemPresenter *_alertPresenter;	// 32 = 0x20
    BSMonotonicReferenceTime *_firstLogEventTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000054aa7b
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;	// IMP=0x000000000054aa1c
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;	// IMP=0x000000000054a9bd
- (void)handleReachabilityYOffsetDidChange;	// IMP=0x000000000054a9a4
- (void)scheduleAlertLayoutVerificationForReason:(id)arg1;	// IMP=0x0000000000548c81
- (void)setAlertPresenter:(id)arg1;	// IMP=0x0000000000548c70
- (void)setAlertItemWindow:(id)arg1;	// IMP=0x0000000000548c5f
- (void)dealloc;	// IMP=0x0000000000548bd3
- (id)init;	// IMP=0x0000000000548b1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

