//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CHRAnalyticsManager : NSObject
{
    MISSING_TYPE *healthStore;	// 8 = 0x8
    MISSING_TYPE *conceptStore;	// 16 = 0x10
    MISSING_TYPE *queuedEvents;	// 24 = 0x18
    MISSING_TYPE *managerQueue;	// 32 = 0x20
    MISSING_TYPE *optInDetermined;	// 40 = 0x28
}

+ (id)shared;	// IMP=0x0000000000169e30
- (void).cxx_destruct;	// IMP=0x000000000016ce00
- (void)postPrivacyInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(_Bool)arg3;	// IMP=0x000000000016c380
- (void)postUserInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(long long)arg3 category:(id)arg4 conceptIdentifier:(id)arg5;	// IMP=0x000000000016a8e0
- (void)postOnboardingFunnelEventWithStep:(long long)arg1 context:(long long)arg2 gatewayUrl:(id)arg3;	// IMP=0x000000000016a690
- (void)submitAndFlushQueuedEvents;	// IMP=0x000000000016a100
- (id)init;	// IMP=0x000000000016a0d0

@end

