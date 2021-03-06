//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject, SYMessageStatusRecord, _SYCountedSemaphore;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface SYSendingSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_sessionTimer;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_messageTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 32 = 0x20
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 40 = 0x28
    NSObject<OS_os_activity> *_changeWaitActivity;	// 48 = 0x30
    unsigned long long _batchIndex;	// 56 = 0x38
    NSMutableIndexSet *_ackedBatchIndices;	// 64 = 0x40
    NSObject<OS_os_activity> *_sessionActivity;	// 72 = 0x48
    double _sessionStartTime;	// 80 = 0x50
    NSMutableDictionary *_batchObjectIDsByBatchIndex;	// 88 = 0x58
    SYMessageStatusRecord *_startMessageID;	// 96 = 0x60
    SYMessageStatusRecord *_endMessageID;	// 104 = 0x68
    NSMutableArray *_batchMessageIDs;	// 112 = 0x70
    struct os_unfair_lock_s _flagsLock;	// 120 = 0x78
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int remoteStartSent:1;
        unsigned int remoteStartConfirmed:1;
        unsigned int remoteEndSent:1;
        unsigned int remoteEndConfirmed:1;
        unsigned int localErrorOccurred:1;
    } _flags;	// 124 = 0x7c
}

- (void).cxx_destruct;	// IMP=0x000000000005d1b4
- (void)_continue;	// IMP=0x000000000005d0f1
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000005cdf4
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000005cb07
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;	// IMP=0x000000000005caf5
- (void)_resolvedIdentifierForRequest:(id)arg1;	// IMP=0x000000000005caa6
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c645
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c2e0
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005bd5c
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005b83b
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b831
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b827
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b81d
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000005b6a9
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a8c8
- (void)_startFailedForStateChangeWithError:(id)arg1;	// IMP=0x000000000005a822
- (void)_installStateListener;	// IMP=0x000000000005a70a
- (void)_setMessageTimer;	// IMP=0x000000000005a6aa
- (void)_installTimers;	// IMP=0x0000000000059c88
- (void)_processNextState;	// IMP=0x00000000000598d1
- (void)_sessionFinished;	// IMP=0x000000000005983a
- (void)_notifyErrorAndShutdown;	// IMP=0x00000000000596e1
- (void)_sendEndSessionAndError:(id)arg1;	// IMP=0x00000000000593d6
- (void)_sendSyncRestart;	// IMP=0x0000000000058f96
- (void)_sendSyncCancelled;	// IMP=0x0000000000058c27
- (void)_sendSyncCompleteAndRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005855c
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x0000000000057f2f
- (void)_fetchNextBatch;	// IMP=0x0000000000057713
- (void)_waitForMessageWindow;	// IMP=0x00000000000573fa
- (void)_setupChangeConcurrency;	// IMP=0x00000000000572c1
- (void)_tweakMessageHeader:(id)arg1;	// IMP=0x00000000000571f5
- (id)_newMessageHeader;	// IMP=0x0000000000057196
- (_Bool)_localErrorOccurred;	// IMP=0x0000000000057151
- (void)_setLocalErrorOccurred;	// IMP=0x000000000005711c
- (void)_setComplete;	// IMP=0x00000000000570e7
- (void)_setCancelled;	// IMP=0x00000000000570b2
- (void)_confirmedEnd;	// IMP=0x000000000005707d
- (_Bool)_hasSentEnd;	// IMP=0x0000000000057038
- (void)_sentEnd;	// IMP=0x0000000000057003
- (void)_confirmedStart;	// IMP=0x0000000000056fce
- (void)_sentStart;	// IMP=0x0000000000056f7d
- (double)remainingSessionTime;	// IMP=0x0000000000056f0c
- (_Bool)wasCancelled;	// IMP=0x0000000000056ecf
- (_Bool)isSending;	// IMP=0x0000000000056ec7
- (_Bool)isResetSync;	// IMP=0x0000000000056e81
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x0000000000056e33
- (_Bool)canRollback;	// IMP=0x0000000000056ded
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x0000000000056d9f
- (_Bool)canRestart;	// IMP=0x0000000000056d59
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x0000000000056c27
- (void)setState:(unsigned int)arg1;	// IMP=0x0000000000056a60
- (unsigned int)state;	// IMP=0x0000000000056a24
- (id)initWithService:(id)arg1 isReset:(_Bool)arg2;	// IMP=0x00000000000567d8

@end

