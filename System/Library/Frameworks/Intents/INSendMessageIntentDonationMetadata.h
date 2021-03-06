//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INSendMessageIntentDonationMetadata
{
    _Bool _mentionsCurrentUser;	// 8 = 0x8
    _Bool _replyToCurrentUser;	// 9 = 0x9
    _Bool _notifyRecipientAnyway;	// 10 = 0xa
    unsigned long long _recipientCount;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013ab21
+ (Class)_intentClass;	// IMP=0x000000000013ab10
@property(nonatomic) unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(nonatomic) _Bool notifyRecipientAnyway; // @synthesize notifyRecipientAnyway=_notifyRecipientAnyway;
@property(nonatomic, getter=isReplyToCurrentUser) _Bool replyToCurrentUser; // @synthesize replyToCurrentUser=_replyToCurrentUser;
@property(nonatomic) _Bool mentionsCurrentUser; // @synthesize mentionsCurrentUser=_mentionsCurrentUser;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013a9b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013a8c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013a806
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013a6d3
- (unsigned long long)hash;	// IMP=0x000000000013a689
- (id)init;	// IMP=0x000000000013a65a
- (id)_init;	// IMP=0x000000000013a648

@end

