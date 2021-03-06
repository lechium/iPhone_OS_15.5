//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/BRItemNotificationReceiving-Protocol.h>

@class BRCAccountSession, BRCNotificationPipe, NSString, NSURL, brc_task_tracker;

@interface BRCEvictItemOperation <BRItemNotificationReceiving, BRCOperationSubclass>
{
    BRCAccountSession *_session;	// 32 = 0x20
    unsigned long long _section;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    brc_task_tracker *_tracker;	// 56 = 0x38
    BRCNotificationPipe *_pipe;	// 64 = 0x40
    _Bool _isFinished;	// 72 = 0x48
    CDUnknownBlockType _evictionCompletionBlock;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000064144
@property(copy) CDUnknownBlockType evictionCompletionBlock; // @synthesize evictionCompletionBlock=_evictionCompletionBlock;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064117
- (oneway void)invalidate;	// IMP=0x0000000000064105
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000000640fd
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000064026
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063ce2
- (void)main;	// IMP=0x00000000000638d7
- (void)cancel;	// IMP=0x000000000006382c
- (id)initWithSession:(id)arg1 url:(id)arg2;	// IMP=0x00000000000636fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

