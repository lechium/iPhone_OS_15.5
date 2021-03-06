//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMCommLimitsPolicyCache : NSObject
{
    NSMutableDictionary *_conversationContextToParticipantIDsHash;	// 8 = 0x8
    NSMutableDictionary *_participantIDsHashToConversationContext;	// 16 = 0x10
    NSMutableDictionary *_participantIDsHashToChatIdentifier;	// 24 = 0x18
    NSMutableDictionary *_chatIdentifierToParticipantIDsHash;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d68e4
@property(retain, nonatomic) NSMutableDictionary *chatIdentifierToParticipantIDsHash; // @synthesize chatIdentifierToParticipantIDsHash=_chatIdentifierToParticipantIDsHash;
@property(retain, nonatomic) NSMutableDictionary *participantIDsHashToChatIdentifier; // @synthesize participantIDsHashToChatIdentifier=_participantIDsHashToChatIdentifier;
@property(retain, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext; // @synthesize participantIDsHashToConversationContext=_participantIDsHashToConversationContext;
@property(retain, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash; // @synthesize conversationContextToParticipantIDsHash=_conversationContextToParticipantIDsHash;
- (id)contextForParticipantIDsHash:(id)arg1;	// IMP=0x00000000000d67f5
- (void)addSentinelContextForParticipantIDsHash:(id)arg1;	// IMP=0x00000000000d6750
- (void)addTrackingForConversationContext:(id)arg1 forParticipantIDsHash:(id)arg2;	// IMP=0x00000000000d664c
- (id)conversationContextForChat:(id)arg1;	// IMP=0x00000000000d6541
- (id)chatForConversationContext:(id)arg1;	// IMP=0x00000000000d647d
- (id)chatForParticipantIDsHash:(id)arg1;	// IMP=0x00000000000d639b
- (_Bool)isFetchingCommLimitsPolicyForChat:(id)arg1;	// IMP=0x00000000000d6298
- (void)removeTrackingForChat:(id)arg1;	// IMP=0x00000000000d6041
- (void)addTrackingForChat:(id)arg1 participantIDsHash:(id)arg2;	// IMP=0x00000000000d5f62
- (id)init;	// IMP=0x00000000000d5ebf

@end

