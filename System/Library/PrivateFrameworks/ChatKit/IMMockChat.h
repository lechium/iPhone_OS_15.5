//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMChat.h>

@class IMHandle, IMMessage, NSArray;

@interface IMMockChat : IMChat
{
    NSArray *_mockChatItems;	// 344 = 0x158
    IMHandle *_incomingHandle;	// 352 = 0x160
    IMHandle *_outgoingHandle;	// 360 = 0x168
    IMMessage *_lastMockIMMessage;	// 368 = 0x170
    NSArray *_extraParticipants;	// 376 = 0x178
    unsigned long long _mockUnreadMessageCount;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x0000000000197374
@property(nonatomic) unsigned long long mockUnreadMessageCount; // @synthesize mockUnreadMessageCount=_mockUnreadMessageCount;
@property(retain, nonatomic) NSArray *extraParticipants; // @synthesize extraParticipants=_extraParticipants;
@property(retain, nonatomic) IMMessage *lastMockIMMessage; // @synthesize lastMockIMMessage=_lastMockIMMessage;
@property(retain, nonatomic) IMHandle *outgoingHandle; // @synthesize outgoingHandle=_outgoingHandle;
@property(retain, nonatomic) IMHandle *incomingHandle; // @synthesize incomingHandle=_incomingHandle;
@property(retain, nonatomic) NSArray *mockChatItems; // @synthesize mockChatItems=_mockChatItems;
- (id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001970b7
- (id)_messageFromMockItemInfo:(id)arg1;	// IMP=0x0000000000196d9f
- (void)appendMockItemWithInfo:(id)arg1;	// IMP=0x0000000000196ca8
- (void)setupWithMockItemInfoArray:(id)arg1;	// IMP=0x0000000000196b33
- (void)deleteChatItems:(id)arg1;	// IMP=0x0000000000196844
- (_Bool)deleteAllHistory;	// IMP=0x0000000000196824
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;	// IMP=0x000000000019681c
- (unsigned long long)unreadMessageCount;	// IMP=0x000000000019680a
- (unsigned long long)messageCount;	// IMP=0x00000000001967c6
- (id)lastMessage;	// IMP=0x00000000001967b1
- (id)lastFinishedMessage;	// IMP=0x000000000019679c
- (id)lastFinishedMessageDate;	// IMP=0x0000000000196783
- (id)displayName;	// IMP=0x0000000000196776
- (id)chatItems;	// IMP=0x0000000000196764
- (id)recipient;	// IMP=0x0000000000196752
- (id)participants;	// IMP=0x0000000000196640
- (void)addExtraParticipants:(id)arg1;	// IMP=0x000000000019662e
- (id)init;	// IMP=0x000000000019612b

@end

