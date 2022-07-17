//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGMIMetricsSubmodelsProbabilities : PBCodable <NSCopying>
{
    float _attachmentsProbability;	// 8 = 0x8
    float _conversationProbability;	// 12 = 0xc
    float _domainFromSenderProbability;	// 16 = 0x10
    float _listIdProbability;	// 20 = 0x14
    float _mailboxProbability;	// 24 = 0x18
    float _mailboxTypeProbability;	// 28 = 0x1c
    float _personCCRecipientsProbability;	// 32 = 0x20
    float _personFromSenderInDyadicConversationProbability;	// 36 = 0x24
    float _personFromSenderProbability;	// 40 = 0x28
    float _personToRecipientsProbability;	// 44 = 0x2c
    float _standardMailRulesProbability;	// 48 = 0x30
    float _subjectContentProbability;	// 52 = 0x34
    float _subjectCountStatsProbability;	// 56 = 0x38
    struct {
        unsigned int attachmentsProbability:1;
        unsigned int conversationProbability:1;
        unsigned int domainFromSenderProbability:1;
        unsigned int listIdProbability:1;
        unsigned int mailboxProbability:1;
        unsigned int mailboxTypeProbability:1;
        unsigned int personCCRecipientsProbability:1;
        unsigned int personFromSenderInDyadicConversationProbability:1;
        unsigned int personFromSenderProbability:1;
        unsigned int personToRecipientsProbability:1;
        unsigned int standardMailRulesProbability:1;
        unsigned int subjectContentProbability:1;
        unsigned int subjectCountStatsProbability:1;
    } _has;	// 60 = 0x3c
}

@property(nonatomic) float mailboxTypeProbability; // @synthesize mailboxTypeProbability=_mailboxTypeProbability;
@property(nonatomic) float mailboxProbability; // @synthesize mailboxProbability=_mailboxProbability;
@property(nonatomic) float standardMailRulesProbability; // @synthesize standardMailRulesProbability=_standardMailRulesProbability;
@property(nonatomic) float subjectCountStatsProbability; // @synthesize subjectCountStatsProbability=_subjectCountStatsProbability;
@property(nonatomic) float attachmentsProbability; // @synthesize attachmentsProbability=_attachmentsProbability;
@property(nonatomic) float listIdProbability; // @synthesize listIdProbability=_listIdProbability;
@property(nonatomic) float conversationProbability; // @synthesize conversationProbability=_conversationProbability;
@property(nonatomic) float domainFromSenderProbability; // @synthesize domainFromSenderProbability=_domainFromSenderProbability;
@property(nonatomic) float personCCRecipientsProbability; // @synthesize personCCRecipientsProbability=_personCCRecipientsProbability;
@property(nonatomic) float personToRecipientsProbability; // @synthesize personToRecipientsProbability=_personToRecipientsProbability;
@property(nonatomic) float subjectContentProbability; // @synthesize subjectContentProbability=_subjectContentProbability;
@property(nonatomic) float personFromSenderInDyadicConversationProbability; // @synthesize personFromSenderInDyadicConversationProbability=_personFromSenderInDyadicConversationProbability;
@property(nonatomic) float personFromSenderProbability; // @synthesize personFromSenderProbability=_personFromSenderProbability;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000145cfe
- (unsigned long long)hash;	// IMP=0x0000000000144fa8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000144ca9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000144ad0
- (void)copyTo:(id)arg1;	// IMP=0x000000000014491a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000144724
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000144717
- (id)dictionaryRepresentation;	// IMP=0x000000000014423c
- (id)description;	// IMP=0x000000000014418d
@property(nonatomic) _Bool hasMailboxTypeProbability;
@property(nonatomic) _Bool hasMailboxProbability;
@property(nonatomic) _Bool hasStandardMailRulesProbability;
@property(nonatomic) _Bool hasSubjectCountStatsProbability;
@property(nonatomic) _Bool hasAttachmentsProbability;
@property(nonatomic) _Bool hasListIdProbability;
@property(nonatomic) _Bool hasConversationProbability;
@property(nonatomic) _Bool hasDomainFromSenderProbability;
@property(nonatomic) _Bool hasPersonCCRecipientsProbability;
@property(nonatomic) _Bool hasPersonToRecipientsProbability;
@property(nonatomic) _Bool hasSubjectContentProbability;
@property(nonatomic) _Bool hasPersonFromSenderInDyadicConversationProbability;
@property(nonatomic) _Bool hasPersonFromSenderProbability;

@end
