//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMChatContext;

@interface CKMutableMessageContext
{
}

@property(nonatomic, getter=isAudioMessage) _Bool audioMessage; // @dynamic audioMessage;
@property(nonatomic, getter=isSenderUnauthenticated) _Bool senderUnauthenticated; // @dynamic senderUnauthenticated;
@property(nonatomic, getter=isSenderUnknown) _Bool senderUnknown; // @dynamic senderUnknown;
@property(nonatomic, getter=isSpam) _Bool spam; // @dynamic spam;
@property(nonatomic, getter=isFromMe) _Bool fromMe; // @dynamic fromMe;
@property(copy, nonatomic) IMChatContext *chatContext; // @dynamic chatContext;

@end
