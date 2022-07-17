//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SRUserAttentionController, SUICAutoDismissalStrategy;
@protocol SRCompactAutoDismissControllerDelegate;

@interface SRCompactAutoDismissController : NSObject
{
    long long _currentRequestSource;	// 8 = 0x8
    id <SRCompactAutoDismissControllerDelegate> _delegate;	// 16 = 0x10
    long long _autoDismissalReason;	// 24 = 0x18
    SRUserAttentionController *_userAttentionController;	// 32 = 0x20
    SUICAutoDismissalStrategy *_autoDismissalStrategy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000007b99
@property(retain, nonatomic, getter=_autoDismissalStrategy, setter=_setAutoDismissalStrategy:) SUICAutoDismissalStrategy *autoDismissalStrategy; // @synthesize autoDismissalStrategy=_autoDismissalStrategy;
@property(retain, nonatomic, getter=_userAttentionController, setter=_setUserAttentionController:) SRUserAttentionController *userAttentionController; // @synthesize userAttentionController=_userAttentionController;
@property(nonatomic) long long autoDismissalReason; // @synthesize autoDismissalReason=_autoDismissalReason;
- (void)_handleVideoPlaybackDidFinishNotification;	// IMP=0x0010000000007b1b
- (void)_handleVideoPlaybackDidStartNotification;	// IMP=0x0010000000007ae4
- (void)autoDismissalStrategyDidChangeAutoDismissalDecision:(id)arg1 dismissalReason:(long long)arg2 permanent:(_Bool)arg3;	// IMP=0x0010000000007918
- (void)userAttentionController:(id)arg1 didGainAttentionWithEvent:(long long)arg2;	// IMP=0x00100000000077df
- (void)userAttentionController:(id)arg1 didLoseAttentionWithEvent:(long long)arg2;	// IMP=0x00100000000076eb
- (void)_cancelDelayedUserAttentionControllerStop;	// IMP=0x00100000000076ba
- (void)_stopUserAttentionControllerIfNeededAfterDelay:(double)arg1;	// IMP=0x0010000000007671
- (void)_stopUserAttentionControllerIfNeeded;	// IMP=0x0010000000007541
- (void)_startUserAttentionControllerIfNeededForTypes:(unsigned long long)arg1;	// IMP=0x0010000000006fff
- (void)_startUserAttentionControllerIfNeeded;	// IMP=0x0010000000006fe8
- (void)_dismissForLongIdling;	// IMP=0x0010000000006f28
- (void)_cancelScheduledAutoDismissalForLongIdlingIfNeeded;	// IMP=0x0010000000006e77
- (void)scheduleAutoDismissalForLongIdling:(double)arg1;	// IMP=0x0010000000006da9
- (void)invalidate;	// IMP=0x0010000000006d7b
- (void)setUseExtendedTimeout:(_Bool)arg1;	// IMP=0x0010000000006d1e
- (void)stopAutoDismissalController;	// IMP=0x0010000000006d0c
- (void)startAutoDismissalController;	// IMP=0x0010000000006cfa
- (void)setRequestOptions:(id)arg1;	// IMP=0x0010000000006a2c
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000068fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
