//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EMMessageConversationFlagChangeAction
{
    long long _conversationNotificationLevel;	// 8 = 0x8
    long long _originalConversationNotificationLevel;	// 16 = 0x10
    long long _conversationID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f4ef
@property long long conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) long long originalConversationNotificationLevel; // @synthesize originalConversationNotificationLevel=_originalConversationNotificationLevel;
@property(readonly, nonatomic) long long conversationNotificationLevel; // @synthesize conversationNotificationLevel=_conversationNotificationLevel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f5c2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f4f7
- (long long)signpostType;	// IMP=0x000000000003f4e4
- (id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3;	// IMP=0x000000000003f47a
- (id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2;	// IMP=0x000000000003f3df

@end

