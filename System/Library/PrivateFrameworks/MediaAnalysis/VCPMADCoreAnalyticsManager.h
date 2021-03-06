//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPMADCoreAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    unsigned long long _singleAnalyticsSentCount;	// 16 = 0x10
    unsigned long long _sessionAnalyticsSentCount;	// 24 = 0x18
    NSMutableDictionary *_sessionAnalytics;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000008301d
- (void).cxx_destruct;	// IMP=0x0000000000084358
- (void)flush;	// IMP=0x00000000000840f7
- (void)sendSessionEvent:(id)arg1;	// IMP=0x0000000000083e9f
- (void)accumulateDoubleValue:(double)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x00000000000839e8
- (void)accumulateInt64Value:(long long)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x00000000000834fa
- (void)setValue:(id)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x000000000008314c
- (void)sendEvent:(id)arg1 withAnalytics:(id)arg2;	// IMP=0x000000000008313b
- (void)dealloc;	// IMP=0x00000000000830af
- (id)init;	// IMP=0x0000000000082f50

@end

