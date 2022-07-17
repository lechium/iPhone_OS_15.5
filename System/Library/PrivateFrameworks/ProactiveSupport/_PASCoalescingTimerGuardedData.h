//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;
@protocol OS_dispatch_source;

@interface _PASCoalescingTimerGuardedData : NSObject
{
    NSObject<OS_dispatch_source> *coalescingSource;	// 8 = 0x8
    unsigned long long currentCoalescingTimerId;	// 16 = 0x10
    NSDate *nextCoalescedEventTime;	// 24 = 0x18
    NSMutableSet *nonCoalescingSources;	// 32 = 0x20
    unsigned long long currentNonCoalescingTimerGeneration;	// 40 = 0x28
    id acc;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003de91

@end
