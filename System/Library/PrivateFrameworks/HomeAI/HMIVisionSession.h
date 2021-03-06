//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSString, VNSession;

@interface HMIVisionSession : HMFObject <HMFTimerDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    VNSession *_session;	// 16 = 0x10
    HMFTimer *_watchdogTimer;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000091c6b
+ (id)sharedInstance;	// IMP=0x000000000009186f
- (void).cxx_destruct;	// IMP=0x0000000000091c8b
@property(readonly) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000091b19
@property(readonly) VNSession *vnSession;
- (id)init;	// IMP=0x00000000000919be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

