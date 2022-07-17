//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_consecutiveFailureCountByHMDAccessoryUUID;	// 16 = 0x10
    NSMutableDictionary *_timeOfFirstFailureByHMDAccessoryUUID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000007f4bbe
- (void).cxx_destruct;	// IMP=0x00000000007f47e6
@property(readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID; // @synthesize timeOfFirstFailureByHMDAccessoryUUID=_timeOfFirstFailureByHMDAccessoryUUID;
@property(readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID; // @synthesize consecutiveFailureCountByHMDAccessoryUUID=_consecutiveFailureCountByHMDAccessoryUUID;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
- (double)timeIntervalSinceFirstFailureForAccessoryUUID:(id)arg1;	// IMP=0x00000000007f4696
- (unsigned long long)consecutiveFailureCountForAccessoryUUID:(id)arg1;	// IMP=0x00000000007f4578
- (void)handleSubmittedErrorCode:(long long)arg1 forAccessoryUUID:(id)arg2;	// IMP=0x00000000007f44ac
- (id)init;	// IMP=0x00000000007f43fe

@end
