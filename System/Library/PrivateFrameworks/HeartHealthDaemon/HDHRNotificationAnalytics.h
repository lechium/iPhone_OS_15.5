//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHRNotificationMetric;

__attribute__((visibility("hidden")))
@interface HDHRNotificationAnalytics : NSObject
{
    HDHRNotificationMetric *_metric;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b73f
- (void)submit;	// IMP=0x000000000000b299
- (void)_submitMetric;	// IMP=0x000000000000b283
- (void)_setDoNotDisturbOn:(_Bool)arg1;	// IMP=0x000000000000b22f
- (id)_createMetricFromEventSample:(id)arg1;	// IMP=0x000000000000ae26
- (id)initWithEventSample:(id)arg1;	// IMP=0x000000000000ad39

@end
