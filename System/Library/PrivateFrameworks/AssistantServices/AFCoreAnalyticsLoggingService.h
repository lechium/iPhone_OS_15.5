//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFCoreAnalyticsLoggingService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedLoggingService;	// IMP=0x00000000000910a6
- (void).cxx_destruct;	// IMP=0x0000000000091369
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)arg1;	// IMP=0x00000000000911c2
- (id)_init;	// IMP=0x0000000000091119
- (id)init;	// IMP=0x000000000009110b

@end
