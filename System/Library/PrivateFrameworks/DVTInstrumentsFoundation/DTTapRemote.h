//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DTTapMessageHandler, DTXChannel, DTXConnection, NSObject;
@protocol OS_dispatch_queue;

@interface DTTapRemote
{
    DTXConnection *_connection;	// 8 = 0x8
    DTXChannel *_channel;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_unprocessedMessageQueue;	// 24 = 0x18
    _Bool _connectionEnabled;	// 32 = 0x20
    DTTapMessageHandler *_messageHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004a8ee
@property(readonly, retain, nonatomic) DTTapMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
- (id)_fetchDataForReason:(unsigned long long)arg1;	// IMP=0x000000000004a7c2
- (void)_unpause;	// IMP=0x000000000004a5de
- (void)_pause;	// IMP=0x000000000004a3fa
- (void)_stop;	// IMP=0x000000000004a1f3
- (void)_start;	// IMP=0x000000000004a01f
- (void)messageReceived:(id)arg1;	// IMP=0x0000000000049efc
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 messageHandler:(id)arg3 connection:(id)arg4;	// IMP=0x0000000000049999

@end

