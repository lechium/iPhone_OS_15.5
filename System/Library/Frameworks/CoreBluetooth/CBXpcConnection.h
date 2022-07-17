//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSMutableDictionary *_options;	// 16 = 0x10
    int _sessionType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcConnection;	// 40 = 0x28
    _Bool _uiAppIsBackgrounded;	// 48 = 0x30
    id <CBXpcConnectionDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000042cc0
@property(nonatomic) __weak id <CBXpcConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationWillEnterForegroundNotification;	// IMP=0x0000000000042c70
- (void)_applicationDidEnterBackgroundNotification;	// IMP=0x0000000000042c50
- (void)_handleConnectionEvent:(id)arg1;	// IMP=0x0000000000042af0
- (void)_handleFinalized;	// IMP=0x0000000000042a80
- (void)_handleInvalid;	// IMP=0x0000000000042990
- (void)_handleReset;	// IMP=0x0000000000042890
- (void)_handleMsg:(id)arg1;	// IMP=0x0000000000042610
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000042320
- (id)_nameForMessage:(unsigned short)arg1;	// IMP=0x00000000000422c0
- (void)_sendBarrier;	// IMP=0x00000000000421d0
- (void)_checkOut;	// IMP=0x00000000000421b0
- (void)_checkIn;	// IMP=0x0000000000042030
- (void)setTargetQueue:(id)arg1;	// IMP=0x0000000000041fe0
- (void)disconnect;	// IMP=0x0000000000041f70
- (void)sendMsgWithReply:(unsigned short)arg1 args:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041d20
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x00000000000417f0
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000041680
- (id)getEventQueue;	// IMP=0x0000000000041670
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;	// IMP=0x00000000000411c0

@end
