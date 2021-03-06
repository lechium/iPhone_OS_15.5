//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSLockScreenServiceConnection;

@interface SBSLockScreenService : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    SBSLockScreenServiceConnection *_lock_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000078ca
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;	// IMP=0x00000000000077c0
- (id)preventPasscodeLockWithReason:(id)arg1;	// IMP=0x00000000000076b6
- (void)requestPasscodeCheckUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000075be
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000074c6
- (void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000073e8
- (void)invalidate;	// IMP=0x00000000000073b4
- (void)dealloc;	// IMP=0x000000000000730f
- (id)init;	// IMP=0x00000000000072b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

