//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMAVChat, IMAVChatProxy, NSDictionary, NSString;

@interface IMAVChatParticipantProxy : NSObject
{
    NSDictionary *_info;	// 8 = 0x8
    IMAVChatProxy *_chat;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003e538
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000003e460
- (_Bool)isLocalParticipant;	// IMP=0x000000000003e40e
@property(readonly, nonatomic) _Bool _inviteDelivered;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) IMAVChat *avChat;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;	// IMP=0x000000000003e2f5

@end
