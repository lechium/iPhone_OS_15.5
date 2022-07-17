//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSIOSAlbumSharingDaemon, MSIOSMediaStreamDaemon, NSString, NSTimer;

@interface MediaStreamMonitor : NSObject
{
    NSTimer *_idleTimer;	// 8 = 0x8
    _Bool _lastNotifiedState;	// 16 = 0x10
    NSTimer *_idleStateNotificationTimer;	// 24 = 0x18
    MSIOSMediaStreamDaemon *_daemon;	// 32 = 0x20
    MSIOSAlbumSharingDaemon *_albumSharingDaemon;	// 40 = 0x28
    int _busyCount;	// 48 = 0x30
    NSTimer *_photoStreamDaemonPokeTimer;	// 56 = 0x38
    NSTimer *_albumSharingDaemonPokeTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000029a7
@property(nonatomic) __weak MSIOSAlbumSharingDaemon *albumSharingDaemon; // @synthesize albumSharingDaemon=_albumSharingDaemon;
@property(nonatomic) __weak MSIOSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
- (void)doNothingTimer:(id)arg1;	// IMP=0x0010000000002953
- (void)idleStateNotificationTimerDidFire:(id)arg1;	// IMP=0x0010000000002871
- (void)mstreamdIdleTimerDidFire:(id)arg1;	// IMP=0x001000000000275a
- (void)albumSharingDaemonPokeTimerDidFire:(id)arg1;	// IMP=0x00100000000026bf
- (void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;	// IMP=0x00100000000026ad
- (void)MSAlbumSharingDaemonDidUnidle:(id)arg1;	// IMP=0x0010000000002648
- (void)MSAlbumSharingDaemonDidIdle:(id)arg1;	// IMP=0x0010000000002537
- (void)photoStreamDaemonPokeTimerDidFire:(id)arg1;	// IMP=0x001000000000249c
- (void)mediaStreamDaemonDidUnidle:(id)arg1;	// IMP=0x0010000000002437
- (void)mediaStreamDaemonDidIdle:(id)arg1;	// IMP=0x0010000000002326
- (void)_didUnidle;	// IMP=0x001000000000225b
- (void)_resetIdleTimer;	// IMP=0x001000000000216b
- (void)_didIdle;	// IMP=0x0010000000001f90
- (void)_stopIdleTimer;	// IMP=0x0010000000001ef2
- (void)_startIdleTimerWithInterval:(double)arg1;	// IMP=0x0010000000001e15
- (void)dealloc;	// IMP=0x0010000000001da6
- (id)init;	// IMP=0x0010000000001bbb
- (id)_dormantTimerWithSelector:(SEL)arg1;	// IMP=0x0010000000001b2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
