//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, AFMediaPlaybackStateSnapshot, AFNotifyObserver, AFSafetyBlock, AFWatchdogTimer, NSDate, NSString, SOMediaNowPlayingObserver;
@protocol AFContextDonation, OS_dispatch_queue;

@interface ADMediaPlaybackContextProvider : NSObject
{
    id <AFContextDonation> _donationService;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    AFMediaPlaybackStateSnapshot *_previousState;	// 24 = 0x18
    _Bool _isProxyGroupPlayer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    AFWatchdogTimer *_proximityRescanTimer;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    NSDate *_lastSnapshotExpirationDateRenewal;	// 64 = 0x40
    SOMediaNowPlayingObserver *_observer;	// 72 = 0x48
    AFSafetyBlock *_donation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000011538a
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000115304
- (void)_updateExpirationDateForMediaPlaybackSnapshotBasedOnDate:(id)arg1;	// IMP=0x0010000000115274
- (void)updateProximityObservationsForPlayState:(long long)arg1;	// IMP=0x0010000000114fec
- (void)_handlePlaybackStateDidChangeToState:(long long)arg1 fromState:(long long)arg2 onDate:(id)arg3 lastPlayingDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000114060
- (void)_handleProxyGroupPlayerDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x0010000000113f0f
- (void)_donateMediaPlaybackContextWithSnapshot:(id)arg1 date:(id)arg2;	// IMP=0x0010000000113d9e
- (void)nowPlayingObserver:(id)arg1 proxyGroupPlayerStateDidChangeFrom:(_Bool)arg2 to:(_Bool)arg3;	// IMP=0x0010000000113ce9
- (void)nowPlayingObserverNowPlayingInfoDidChange:(id)arg1;	// IMP=0x0010000000113b62
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;	// IMP=0x0010000000113a0e
- (void)pineBoardSystemStateObserver:(id)arg1 pineBoardStateDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000001138ea
- (void)_fetchInitialState;	// IMP=0x0010000000113677
- (id)_initWithDonationService:(id)arg1 instanceContext:(id)arg2 queue:(id)arg3 allowInitialUpdate:(_Bool)arg4;	// IMP=0x0010000000113416
- (id)initWithDonationService:(id)arg1 instanceContext:(id)arg2 queue:(id)arg3;	// IMP=0x00100000001133fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
