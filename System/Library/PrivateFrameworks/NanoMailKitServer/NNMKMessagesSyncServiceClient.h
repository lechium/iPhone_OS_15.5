//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient
{
    id <NNMKMessagesSyncServiceClientDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000289dd
@property(nonatomic) __weak id <NNMKMessagesSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000028690
- (void)connectivityChanged;	// IMP=0x0000000000028654
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;	// IMP=0x00000000000285ec
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;	// IMP=0x0000000000028589
- (id)updateMailboxSelection:(id)arg1;	// IMP=0x0000000000028512
- (id)sendAttachmentAtURL:(id)arg1 forComposedMessageId:(id)arg2;	// IMP=0x00000000000283fd
- (id)sendMessage:(id)arg1;	// IMP=0x000000000002834f
- (void)requestCompactMessages:(id)arg1;	// IMP=0x00000000000282e0
- (void)warnMessagesFilteredOut:(id)arg1;	// IMP=0x0000000000028271
- (id)moveMessages:(id)arg1;	// IMP=0x00000000000281fa
- (id)deleteMessages:(id)arg1;	// IMP=0x0000000000028183
- (id)updateMessagesStatus:(id)arg1;	// IMP=0x000000000002810c
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000280d0

@end
