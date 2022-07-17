//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/SYLinkContextClientProtocol-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection, SYNotesActivationObserver;
@protocol OS_dispatch_queue, SYLinkContextClientDelegate;

@interface SYLinkContextClient : NSObject <SYLinkContextClientProtocol>
{
    _Bool __forTesting;	// 8 = 0x8
    id <SYLinkContextClientDelegate> _delegate;	// 16 = 0x10
    NSXPCConnection *__connection;	// 24 = 0x18
    NSMutableSet *__pendingCreateLinkCompletionBlocks;	// 32 = 0x20
    NSMutableSet *__pendingFetchLinkCompletionBlocks;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *__clientQueue;	// 48 = 0x30
    SYNotesActivationObserver *__notesObserver;	// 56 = 0x38
    CDUnknownBlockType _testingShouldSendCreateLinkRequest;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000012583
@property(copy, nonatomic) CDUnknownBlockType testingShouldSendCreateLinkRequest; // @synthesize testingShouldSendCreateLinkRequest=_testingShouldSendCreateLinkRequest;
@property(readonly, nonatomic) _Bool _forTesting; // @synthesize _forTesting=__forTesting;
@property(retain, nonatomic) SYNotesActivationObserver *_notesObserver; // @synthesize _notesObserver=__notesObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // @synthesize _clientQueue=__clientQueue;
@property(readonly, nonatomic) NSMutableSet *_pendingFetchLinkCompletionBlocks; // @synthesize _pendingFetchLinkCompletionBlocks=__pendingFetchLinkCompletionBlocks;
@property(readonly, nonatomic) NSMutableSet *_pendingCreateLinkCompletionBlocks; // @synthesize _pendingCreateLinkCompletionBlocks=__pendingCreateLinkCompletionBlocks;
@property(retain, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(nonatomic) __weak id <SYLinkContextClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createConnectionWithEndpoint:(id)arg1;	// IMP=0x0000000000012347
- (void)_invalidateConnection;	// IMP=0x0000000000011e29
- (void)_configureConnectionAndResume;	// IMP=0x00000000000119fc
- (void)_createConnectionIfNeeded;	// IMP=0x0000000000011803
- (oneway void)userEditDidAddContentItemDatas:(id)arg1;	// IMP=0x000000000001158f
- (oneway void)userDidRemoveContentItemDatas:(id)arg1;	// IMP=0x000000000001131b
- (oneway void)userWillAddLinkWithActivityData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010df4
- (id)_linkContextDictionariesFromDataArray:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010a54
- (void)_processFetchLinkContextsRequestForUserActivity:(id)arg1 serviceProxy:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001025b
- (void)fetchLinkContextsForUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fd93
- (void)_sendRequestToCreateLinkWithContentItemData:(id)arg1 preferNewDocument:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f951
- (void)createAndShowContextualLinkWithUserActivity:(id)arg1 linkPreviewMetadata:(id)arg2 preferNewDocument:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f070
- (void)_sendInitialMessage;	// IMP=0x000000000000ef30
- (void)_updateObserverAndCreateConnectionIfNeeded;	// IMP=0x000000000000ec59
- (void)dealloc;	// IMP=0x000000000000eb49
- (id)initForTesting:(_Bool)arg1;	// IMP=0x000000000000ea64
- (id)init;	// IMP=0x000000000000ea50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
