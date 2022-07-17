//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HKThrottleCallback : NSObject
{
    _Bool _delayInProgress;	// 8 = 0x8
    long long _throttleDelayInNanoseconds;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_throttlingQueue;	// 24 = 0x18
    CDUnknownBlockType _lastExecutionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e5ffa
@property(copy, nonatomic) CDUnknownBlockType lastExecutionBlock; // @synthesize lastExecutionBlock=_lastExecutionBlock;
@property(nonatomic) _Bool delayInProgress; // @synthesize delayInProgress=_delayInProgress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *throttlingQueue; // @synthesize throttlingQueue=_throttlingQueue;
@property(nonatomic) long long throttleDelayInNanoseconds; // @synthesize throttleDelayInNanoseconds=_throttleDelayInNanoseconds;
- (void)executeWithThrottle:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e5d46
- (id)initWithThrottleDelay:(double)arg1;	// IMP=0x00000000001e5c8f

@end
