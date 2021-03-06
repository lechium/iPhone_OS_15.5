//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface LICacheClearScheduler : NSObject
{
    _Bool _timerFired;	// 8 = 0x8
    _Bool _holdTransaction;	// 9 = 0x9
    id _object;	// 16 = 0x10
    double _delay;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_memoryPreasure;	// 40 = 0x28
    unsigned long long _memoryPreasureState;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transaction;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDUnknownBlockType _clearHandler;	// 72 = 0x48
}

+ (id)transactionDescription:(id)arg1;	// IMP=0x00000000000086b0
- (void).cxx_destruct;	// IMP=0x0000000000008c6e
@property(readonly) CDUnknownBlockType clearHandler; // @synthesize clearHandler=_clearHandler;
@property _Bool holdTransaction; // @synthesize holdTransaction=_holdTransaction;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property unsigned long long memoryPreasureState; // @synthesize memoryPreasureState=_memoryPreasureState;
@property(retain) NSObject<OS_dispatch_source> *memoryPreasure; // @synthesize memoryPreasure=_memoryPreasure;
@property _Bool timerFired; // @synthesize timerFired=_timerFired;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property double delay; // @synthesize delay=_delay;
- (void)_queue_clearCache;	// IMP=0x0000000000008a20
@property(readonly) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1 delay:(double)arg2 holdTransaction:(_Bool)arg3 clearHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000827c

@end

