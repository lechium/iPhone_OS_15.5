//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_os_activity> *_sessionActivity;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 32 = 0x20
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 40 = 0x28
    NSObject<OS_os_activity> *_changeWaitActivity;	// 48 = 0x30
    _SYMessageTimerTable *_timers;	// 56 = 0x38
    _Bool _canRestart;	// 64 = 0x40
    _Bool _canRollback;	// 65 = 0x41
    _Bool _cancelled;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x000000000001d58f
- (_Bool)wasCancelled;	// IMP=0x000000000001d57d
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x000000000001d56d
- (_Bool)canRollback;	// IMP=0x000000000001d55b
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000001d54b
- (_Bool)canRestart;	// IMP=0x000000000001d539
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001d51c
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001d4a1
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000001d3c3
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ccfa
- (void)_installStateListener;	// IMP=0x000000000001cbe2
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;	// IMP=0x000000000001cb38
- (void)_processNextState;	// IMP=0x000000000001c8f4
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000001c80f
- (void)_notifySessionComplete;	// IMP=0x000000000001c5e8
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x000000000001c242
- (void)_fetchNextBatch;	// IMP=0x000000000001bceb
- (void)_waitForMessageWindow;	// IMP=0x000000000001bad9
- (void)_setupChangeConcurrency;	// IMP=0x000000000001ba09
- (unsigned long long)protocolVersion;	// IMP=0x000000000001b9fe
- (_Bool)isSending;	// IMP=0x000000000001b9f6
- (_Bool)isResetSync;	// IMP=0x000000000001b9ee
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x000000000001b8b5
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000001b72c
- (unsigned int)state;	// IMP=0x000000000001b71c
- (id)initWithService:(id)arg1;	// IMP=0x000000000001b3fc

@end
