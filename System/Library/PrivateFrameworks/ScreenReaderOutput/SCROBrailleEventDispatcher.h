//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject
{
    NSLock *_queueLock;	// 8 = 0x8
    struct __CFRunLoop *_runLoop;	// 16 = 0x10
    struct __CFRunLoopSource *_queueSource;	// 24 = 0x18
    NSMutableArray *_queue;	// 32 = 0x20
    NSMutableArray *_brailleEventQueue;	// 40 = 0x28
    id _target;	// 48 = 0x30
    _Bool _isValid;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000226c4
- (void)_processQueue;	// IMP=0x0000000000022310
- (void)enqueueEvent:(id)arg1;	// IMP=0x0000000000022244
- (_Bool)isValid;	// IMP=0x0000000000022202
- (void)invalidate;	// IMP=0x0000000000022177
- (void)start;	// IMP=0x0000000000022066
- (void)dealloc;	// IMP=0x0000000000021fd5
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000021f07

@end

