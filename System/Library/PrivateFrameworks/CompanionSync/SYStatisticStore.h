//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SYStatisticStore : NSObject <NSFilePresenter>
{
    NSString *_path;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    struct sqlite3_stmt *_insertIncoming;	// 24 = 0x18
    struct sqlite3_stmt *_addProcessingTimeIncoming;	// 32 = 0x20
    struct sqlite3_stmt *_addErrorIncoming;	// 40 = 0x28
    struct sqlite3_stmt *_markCompleteIncoming;	// 48 = 0x30
    struct sqlite3_stmt *_insertOutgoing;	// 56 = 0x38
    struct sqlite3_stmt *_updateOutgoingIdentifier;	// 64 = 0x40
    struct sqlite3_stmt *_updateOutgoing;	// 72 = 0x48
    struct sqlite3_stmt *_timestampForID;	// 80 = 0x50
    struct sqlite3_stmt *_reserveRowID;	// 88 = 0x58
    struct sqlite3_stmt *_responseReceived;	// 96 = 0x60
    struct sqlite3_stmt *_requestAcked;	// 104 = 0x68
    struct sqlite3_stmt *_logFileActivity;	// 112 = 0x70
    struct sqlite3_stmt *_updateFileOutgoing;	// 120 = 0x78
    long long _lastIncomingRowID;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_preemption_queue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_operations_queue;	// 144 = 0x90
    NSOperationQueue *_presenterOperationQueue;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x0000000000098a10
+ (id)unpackMessageData:(id)arg1;	// IMP=0x000000000009f75e
- (void).cxx_destruct;	// IMP=0x000000000009f53c
- (void)setFileTransferIdentifier:(id)arg1 forOutgoingMessagesWithRowIDs:(id)arg2;	// IMP=0x000000000009f29b
- (unsigned long long)rowIDForPartialMessage:(id)arg1;	// IMP=0x000000000009f256
- (void)confirmDeliveryOfOutgoingFileTransfer:(id)arg1;	// IMP=0x000000000009f0ad
- (void)updateOutgoingFileTransferWithIdentifier:(id)arg1 sentSuccessfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000009ed8e
- (void)recordOutgoingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 error:(id)arg4 forService:(id)arg5;	// IMP=0x000000000009eae9
- (void)recordIncomingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 forService:(id)arg4;	// IMP=0x000000000009e79b
- (void)confirmDeliveryOfOutgoingMessage:(id)arg1;	// IMP=0x000000000009e663
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 didReceiveResponse:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000009e50e
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 forService:(id)arg2 sentSuccessfully:(_Bool)arg3 sendError:(id)arg4;	// IMP=0x000000000009e241
- (void)assignIdentifier:(id)arg1 toOutgoingMessage:(id)arg2;	// IMP=0x000000000009e01e
- (void)recordOutgoingMessage:(id)arg1 forService:(id)arg2;	// IMP=0x000000000009d80a
- (void)markLastIncomingMessageComplete;	// IMP=0x000000000009d715
- (void)updateLastIncomingMessageWithError:(id)arg1;	// IMP=0x000000000009d5c3
- (void)updateLastIncomingMessageWithProcessingTime:(double)arg1;	// IMP=0x000000000009d4a2
- (void)recordIncomingMessage:(id)arg1 forService:(id)arg2;	// IMP=0x000000000009ccd2
- (id)_unpackMessageData:(id)arg1;	// IMP=0x000000000009c5ec
- (void)_unpackPBResponse:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;	// IMP=0x000000000009bd68
- (void)_unpackPBRequest:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;	// IMP=0x000000000009b257
- (id)_unpackMetadata:(id)arg1;	// IMP=0x000000000009b16e
- (id)_keySetForMessageLogTable;	// IMP=0x000000000009afaa
- (double)_getMachTimestamp;	// IMP=0x000000000009af1c
- (void)_openDB;	// IMP=0x0000000000099e1e
- (id)_openDBIfNecessary;	// IMP=0x0000000000099ddc
- (void)_onQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099c96
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099a9d
- (int)_getSchemaVersion;	// IMP=0x000000000009998a
- (_Bool)_openDBFile:(_Bool)arg1;	// IMP=0x0000000000099173
- (void)_ensureCorrectFileOwnership:(id)arg1;	// IMP=0x000000000009901d
- (_Bool)_tableEmpty:(id)arg1;	// IMP=0x0000000000098e83
- (void)_letGoForUnitTests:(id)arg1;	// IMP=0x0000000000098e1f
- (int)_closeDB;	// IMP=0x0000000000098d21
- (void)dealloc;	// IMP=0x0000000000098c43
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000098aa3
- (id)init;	// IMP=0x0000000000098a18
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x000000000009f6b7
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f617
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_initializeFilePresentation;	// IMP=0x000000000009f583
- (id)operationQ;	// IMP=0x000000000009f74d
- (struct sqlite3 *)dbRef;	// IMP=0x000000000009f743
- (void)_pruneOldData;	// IMP=0x000000000009fe71
- (_Bool)_LOCKED_pruneFileTransferLogForServices:(id)arg1;	// IMP=0x000000000009fc00
- (_Bool)_LOCKED_pruneMessageLogForServices:(id)arg1;	// IMP=0x000000000009f98f
- (id)_LOCKED_allServiceNames;	// IMP=0x000000000009f7de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

