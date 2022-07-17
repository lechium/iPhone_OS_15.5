//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSWatchMetricsConfiguration, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    SSWatchMetricsConfiguration *_metricsConfiguration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000175459
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (_Bool)isEnabled;	// IMP=0x00000000001753eb
- (id)_connection;	// IMP=0x0000000000175396
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000174ff2
- (id)init;	// IMP=0x0000000000174f16

@end
