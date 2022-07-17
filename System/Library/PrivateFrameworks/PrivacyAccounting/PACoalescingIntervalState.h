//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PAAccessInterval;

@interface PACoalescingIntervalState : NSObject
{
    unsigned long long _continuousStartTime;	// 8 = 0x8
    unsigned long long _absoluteStartTime;	// 16 = 0x10
    unsigned long long _lastCoalescedTime;	// 24 = 0x18
    PAAccessInterval *_interval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000eba2
@property(readonly, nonatomic) PAAccessInterval *interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) double timestampAdjustment;
@property(readonly, nonatomic) double idleTime;
- (void)touch;	// IMP=0x000000000000eae5
- (id)description;	// IMP=0x000000000000ea39
- (id)initWithInterval:(id)arg1;	// IMP=0x000000000000e9ae

@end
