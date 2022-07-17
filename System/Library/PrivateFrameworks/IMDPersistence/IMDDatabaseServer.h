//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IMDRemoteDatabaseProtocol;

@interface IMDDatabaseServer
{
}

+ (id)sharedServer;	// IMP=0x00000000000142ac
- (void)handleIMDKVIntegerForKey_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015f0a
- (void)handleDeleteAttachmentsDirectWithPredicate_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015dbe
- (void)handleIMDCoreSpotlightDeleteAttachment_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015c84
- (void)handleIMDMessageRecordUpdateAttachmentSyndicationRanges_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015b27
- (void)handleIMDMessageRecordCopySortedMessagesForChatGUIDFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015880
- (void)handleIMDMessageRecordCopyLastMessageForChatWithRowID_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015609
- (void)handleIMDChatRecordCopyGroupPhotoPaths_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001521f
- (void)handleIMDChatRecordCopyChatsWithAtLeastHandlesOnServiceWithStyle_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014feb
- (void)handleIMDChatRecordCopyChatsWithHandlesOnServiceWithDisplayNameGroupIDStyle_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014dc4
- (void)handleIMDChatRecordCopyChatsWithIdentifier_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014c33
- (void)handleIMDChatRecordCopyChatsSortedByLastMessageDateAndFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000149cc
- (void)handleIMDChatRecordCopySortedChatsFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000146d7
- (void)handleIMDChatRecordCopyChatsFilteredUsingPredicate_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000144b6
- (void)_authorizeOutgoingSandboxedResource:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000014479
- (void)_respondWithMessageRecords:(id)arg1 responseMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000143da
- (void)_respondWithChatRecords:(id)arg1 responseMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001433b
- (void)_asyncPersistenceBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001432c
- (void)_syncPersistenceBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001431a
@property(readonly, nonatomic) id <IMDRemoteDatabaseProtocol> database;

@end
