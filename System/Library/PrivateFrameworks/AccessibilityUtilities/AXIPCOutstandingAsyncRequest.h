//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXIPCOutstandingAsyncRequest : NSObject
{
    unsigned int _replyPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
    struct __CFRunLoopSource *_replyMachPortSource;	// 32 = 0x20
}

+ (void)registerOutstandingRequest:(id)arg1;	// IMP=0x0000000000037dbf
+ (void)unregisterByPort:(unsigned int)arg1;	// IMP=0x0000000000037d40
+ (id)lookupByPort:(unsigned int)arg1;	// IMP=0x0000000000037ca0
+ (void)initialize;	// IMP=0x0000000000037c04
- (void).cxx_destruct;	// IMP=0x0000000000038412
@property(readonly, nonatomic) struct __CFRunLoopSource *replyMachPortSource; // @synthesize replyMachPortSource=_replyMachPortSource;
@property(readonly, nonatomic) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(readonly, nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)initialSendAborted;	// IMP=0x00000000000383a7
- (void)sendOnceRightDestroyed;	// IMP=0x0000000000038287
- (void)rawResponseReceived:(id)arg1;	// IMP=0x0000000000038234
- (void)_responseReceived:(id)arg1;	// IMP=0x0000000000038104
- (void)registerAndListenForResponse;	// IMP=0x00000000000380a7
- (void)dealloc;	// IMP=0x0000000000037fca
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037e70

@end
