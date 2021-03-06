//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, STCoreUser;
@protocol OS_dispatch_source;

@interface STPINController : NSObject
{
    NSDate *_timeoutEndDate;	// 8 = 0x8
    STCoreUser *_user;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_backoffTimer;	// 24 = 0x18
}

+ (unsigned long long)pinLength;	// IMP=0x000000000004ecc9
- (void).cxx_destruct;	// IMP=0x00000000000513bf
@property(retain) NSObject<OS_dispatch_source> *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) STCoreUser *user; // @synthesize user=_user;
@property(copy) NSDate *timeoutEndDate; // @synthesize timeoutEndDate=_timeoutEndDate;
- (void)_beginTimeoutUntilDate:(id)arg1;	// IMP=0x0000000000050e1d
- (id)_timeoutEndDateForAttemptNumber:(long long)arg1;	// IMP=0x0000000000050dda
- (_Bool)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 allowPasscodeRecovery:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000506a0
- (void)authenticateWithPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050689
- (void)authenticateWithPIN:(id)arg1 allowPasscodeRecovery:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050496
- (_Bool)authenticateWithPIN:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000501cd
- (_Bool)_saveChangesForUser:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ffba
- (_Bool)_setPasscode:(id)arg1 recoveryAppleID:(id)arg2 forUser:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004fea2
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 recoveryAppleIDPrompt:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ef8d
- (_Bool)_isPINValid:(id)arg1;	// IMP=0x000000000004eeba
- (void)removePIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ee9d
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 withRecoveryAppleIDPrompt:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ee82
- (void)setPIN:(id)arg1 withRecoveryAppleIDPrompt:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ee68
@property(readonly) _Bool canRecoveryAuthenticate;
- (id)initWithUser:(id)arg1;	// IMP=0x000000000004eb75

@end

