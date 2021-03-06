//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/SYBacklinkMonitorOperationDelegate-Protocol.h>

@class NSDate, NSString, SYBacklinkMonitorOperation;
@protocol OS_dispatch_queue, SYBacklinkMonitorDelegate, SYBacklinkMonitorTestingDelegate;

@interface SYBacklinkMonitor : NSObject <SYBacklinkMonitorOperationDelegate>
{
    _Bool __needsActivityUpdate;	// 8 = 0x8
    id <SYBacklinkMonitorDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *__monitorQueue;	// 24 = 0x18
    SYBacklinkMonitorOperation *__activeOperation;	// 32 = 0x20
    CDUnknownBlockType __delayedChangeEvaluationBlock;	// 40 = 0x28
    NSDate *__lastOperationStartTime;	// 48 = 0x30
    id <SYBacklinkMonitorTestingDelegate> _testingDelegate;	// 56 = 0x38
    double _testingOperationCoalescingInterval;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000072c5
@property(nonatomic) double testingOperationCoalescingInterval; // @synthesize testingOperationCoalescingInterval=_testingOperationCoalescingInterval;
@property(nonatomic) __weak id <SYBacklinkMonitorTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
@property(retain, nonatomic) NSDate *_lastOperationStartTime; // @synthesize _lastOperationStartTime=__lastOperationStartTime;
@property(copy, nonatomic) CDUnknownBlockType _delayedChangeEvaluationBlock; // @synthesize _delayedChangeEvaluationBlock=__delayedChangeEvaluationBlock;
@property(retain, nonatomic) SYBacklinkMonitorOperation *_activeOperation; // @synthesize _activeOperation=__activeOperation;
@property(nonatomic) _Bool _needsActivityUpdate; // @synthesize _needsActivityUpdate=__needsActivityUpdate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_monitorQueue; // @synthesize _monitorQueue=__monitorQueue;
@property(nonatomic) __weak id <SYBacklinkMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backlinkMonitorOperationDidFinish:(id)arg1;	// IMP=0x0000000000006fc9
- (void)_beginNewOperation;	// IMP=0x0000000000006dab
- (void)_evaluatePendingRequests;	// IMP=0x00000000000069ad
- (void)userActivityDidChange;	// IMP=0x0000000000006904
- (id)init;	// IMP=0x0000000000006880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

