//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNMKBatchRequestHandler, NNMKSyncController, NNMKSyncSessionController;
@protocol NNMKDeviceRegistryHolder, NNMKSyncStateManager;

@interface NNMKSyncPersistenceHandler : NSObject
{
    id <NNMKDeviceRegistryHolder> _delegate;	// 8 = 0x8
    id <NNMKSyncStateManager> _syncStateManager;	// 16 = 0x10
    NNMKSyncController *_syncController;	// 24 = 0x18
    NNMKBatchRequestHandler *_batchRequestHandler;	// 32 = 0x20
    NNMKSyncSessionController *_sessionController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004ad92
@property(retain, nonatomic) NNMKSyncSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property(retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // @synthesize batchRequestHandler=_batchRequestHandler;
@property(retain, nonatomic) NNMKSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak id <NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;
@property(nonatomic) __weak id <NNMKDeviceRegistryHolder> delegate; // @synthesize delegate=_delegate;
- (id)currentDeviceRegistry;	// IMP=0x000000000004aca3
- (id)protoMessageFromMessage:(id)arg1;	// IMP=0x000000000004ab99
- (id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;	// IMP=0x0000000000049938
- (id)updateMessagesFromConversation:(id)arg1 withState:(unsigned long long)arg2 include:(_Bool)arg3 mailbox:(id)arg4;	// IMP=0x0000000000048f3e
- (id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;	// IMP=0x000000000004854f
- (id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2;	// IMP=0x000000000004700b
- (id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;	// IMP=0x000000000004672b
- (id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(_Bool)arg4;	// IMP=0x0000000000045fe9
- (id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(_Bool)arg3;	// IMP=0x0000000000045835
- (id)addMessages:(id)arg1 containsNewMessages:(_Bool)arg2 mailbox:(id)arg3;	// IMP=0x00000000000444c6
- (id)addAccountAuthenticationStatusRequest:(double)arg1;	// IMP=0x0000000000044489
- (id)addStandaloneAccountIdentity:(id)arg1;	// IMP=0x00000000000440b9
- (id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(_Bool *)arg2;	// IMP=0x000000000004356b
- (void)_createDefaultMailbox:(id)arg1;	// IMP=0x0000000000043279
- (id)persistAccounts:(id)arg1;	// IMP=0x0000000000042728

@end
