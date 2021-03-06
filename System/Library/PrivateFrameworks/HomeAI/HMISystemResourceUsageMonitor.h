//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMISystemResourceUsageMonitorProtocol-Protocol.h>

@class HMISystemResourceUsageMonitorImpl, NSObject;
@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol>
{
    HMISystemResourceUsageMonitorImpl *_systemResourceUsageMonitorImpl;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006e7f
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl; // @synthesize systemResourceUsageMonitorImpl=_systemResourceUsageMonitorImpl;
- (void)start;	// IMP=0x0000000000006d8f
- (id)getCurrentSystemResourceUsage;	// IMP=0x0000000000006baf
@property __weak id <HMISystemResourceUsageMonitorDelegate> delegate;
- (id)init;	// IMP=0x000000000000688d

@end

