//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBFMutableMobileKeyBagState
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064ef0
@property(nonatomic) long long escrowCount; // @dynamic escrowCount;
@property(nonatomic) _Bool recoveryEnabled; // @dynamic recoveryEnabled;
@property(nonatomic) _Bool recoveryPossible; // @dynamic recoveryPossible;
@property(nonatomic) _Bool recoveryRequired; // @dynamic recoveryRequired;
@property(nonatomic) _Bool shouldWipe; // @dynamic shouldWipe;
@property(nonatomic) _Bool permanentlyBlocked; // @dynamic permanentlyBlocked;
@property(nonatomic) unsigned long long failedAttemptCount; // @dynamic failedAttemptCount;
@property(nonatomic) double backOffTime; // @dynamic backOffTime;
@property(nonatomic) long long lockState; // @dynamic lockState;
- (id)_mutableState;	// IMP=0x00000000000648e2
- (id)init;	// IMP=0x00000000000648c9
- (id)initWithMKBLockStateInfo:(id)arg1;	// IMP=0x000000000006486e

@end

