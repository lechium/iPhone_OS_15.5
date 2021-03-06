//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FSVolume, NSMutableArray, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface FSChangeMonitor : NSObject
{
    _Atomic int _resetCount;	// 8 = 0x8
    _Atomic int _suspendCount;	// 12 = 0xc
    struct fpfs_fsevent_stream *_stream;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_streamQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_processQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_fseventsProcessSource;	// 48 = 0x30
    NSMutableArray *_fseventsToProcess;	// 56 = 0x38
    unsigned long long _maxFSEventQueueSize;	// 64 = 0x40
    unsigned long long _fseventProcessBatchSize;	// 72 = 0x48
    _Bool _isCancelled;	// 80 = 0x50
    _Bool _drainEvents;	// 81 = 0x51
    _Bool _isActivated;	// 82 = 0x52
    _Bool _createNoDelay;	// 83 = 0x53
    _Bool _hasMarkSelf;	// 84 = 0x54
    _Bool _optimizeOutOwnEvents;	// 85 = 0x55
    _Bool _isProcessingHistory;	// 86 = 0x56
    FSVolume *_volume;	// 88 = 0x58
    NSMutableArray *_subscriptions;	// 96 = 0x60
    NSMutableArray *_pendingBarrierEvents;	// 104 = 0x68
    NSObject<OS_os_log> *_log;	// 112 = 0x70
    _Bool _plannedRescan;	// 120 = 0x78
    NSURL *_barrierFolderURL;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000000bdc2
@property(nonatomic, getter=hasPlannedRescan) _Bool plannedRescan; // @synthesize plannedRescan=_plannedRescan;
@property(retain, nonatomic) NSURL *barrierFolderURL; // @synthesize barrierFolderURL=_barrierFolderURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegationQueue; // @synthesize delegationQueue=_delegationQueue;
- (void)cancel;	// IMP=0x001000000000bcdb
- (void)_cancel;	// IMP=0x001000000000bc92
- (void)resume;	// IMP=0x001000000000bb1a
- (void)suspend;	// IMP=0x001000000000ba12
- (void)resetWithReason:(long long)arg1 newFSEventID:(unsigned long long)arg2;	// IMP=0x001000000000b4c6
- (void)close;	// IMP=0x001000000000b2c9
- (void)_close;	// IMP=0x001000000000b0c6
- (void)flushStream;	// IMP=0x001000000000b0b8
- (id)description;	// IMP=0x001000000000af5c
- (_Bool)handleFSEvent:(id)arg1 indexInBatch:(unsigned int)arg2 batchSize:(unsigned int)arg3;	// IMP=0x001000000000a34a
- (void)deliverBarrierEvents;	// IMP=0x0010000000009fe1
- (void)processFseventBatch;	// IMP=0x0010000000009981
- (void)queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;	// IMP=0x0010000000009776
- (_Bool)_queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;	// IMP=0x0010000000009421
- (_Bool)setUpStreamForReason:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000009309
- (id)liveFSEventsXPCActivityCriteria;	// IMP=0x0010000000009301
- (struct fpfs_fsevent_stream *)_createStreamNamed:(id)arg1 since:(unsigned long long)arg2 criteria:(id)arg3;	// IMP=0x0010000000008b47
@property(readonly, nonatomic) _Bool hasBufferedEvents;
@property(readonly, nonatomic) double latency;
- (unsigned long long)oldestStartingPoint;	// IMP=0x00100000000088f6
- (void)foreachSubscriptionInState:(unsigned long long)arg1 apply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008711
- (void)disableSubscription:(id)arg1;	// IMP=0x001000000000862a
- (_Bool)activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000856c
- (_Bool)_activateSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008364
- (id)subscribeToEventsAtPath:(id)arg1 sinceEventID:(unsigned long long)arg2 streamUUID:(id)arg3 ignoreOwnEvents:(_Bool)arg4 delegate:(id)arg5 purpose:(id)arg6;	// IMP=0x0010000000008202
- (void)dealloc;	// IMP=0x001000000000816a
- (id)initWithLabel:(id)arg1 workloop:(id)arg2;	// IMP=0x0010000000007c41
- (id)init;	// IMP=0x0010000000007c38

@end

