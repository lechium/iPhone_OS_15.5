//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetrics;

@interface AppMetrics : NSObject
{
    AMSMetrics *_metrics;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001f1f34
- (void).cxx_destruct;	// IMP=0x00200000001f2672
- (id)_amsMetrics;	// IMP=0x00100000001f25bc
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f2514
- (void)flushMetricsWithLogKey:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f2229
- (void)insertEventsIntoDatabase:(id)arg1;	// IMP=0x00100000001f20ed
- (void)insertEventIntoDatabase:(id)arg1;	// IMP=0x00100000001f1fc1

@end
