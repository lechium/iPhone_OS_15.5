//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator>
{
    NSConditionLock *_lock;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    unsigned long long _numThreads;	// 24 = 0x18
    unsigned long long _maxThreads;	// 32 = 0x20
    unsigned long long _threadPriorityTrigger;	// 40 = 0x28
    double _threadRecycleTimeout;	// 48 = 0x30
}

+ (void)flushAllInvocationQueues;	// IMP=0x000000000003160b
+ (id)sharedInvocationQueue;	// IMP=0x0000000000030a32
- (void).cxx_destruct;	// IMP=0x0000000000031b99
@property(nonatomic) double threadRecycleTimeout; // @synthesize threadRecycleTimeout=_threadRecycleTimeout;
@property(nonatomic) unsigned long long threadPriorityTrigger; // @synthesize threadPriorityTrigger=_threadPriorityTrigger;
@property(readonly, nonatomic) unsigned long long threadCount; // @synthesize threadCount=_numThreads;
- (id)copyDiagnosticInformation;	// IMP=0x00000000000318b8
- (void)didCancel:(id)arg1;	// IMP=0x000000000003171d
- (void)_drainQueue:(id)arg1;	// IMP=0x0000000000031113
- (void)removeAllItems;	// IMP=0x00000000000310bb
- (void)addInvocation:(id)arg1;	// IMP=0x0000000000030d19
@property(readonly, nonatomic) unsigned long long invocationCount;
@property(nonatomic) unsigned long long maxThreadCount;
- (void)dealloc;	// IMP=0x0000000000030c12
- (id)init;	// IMP=0x0000000000030bfa
- (id)initWithMaxThreadCount:(unsigned long long)arg1;	// IMP=0x0000000000030af1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
