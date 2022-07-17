//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/NSCopying-Protocol.h>

@interface EDPBModelFeaturesImportant : PBCodable <NSCopying>
{
    unsigned int _numRecipients;	// 8 = 0x8
    int _timeReceived;	// 12 = 0xc
    unsigned int _unknownFeatureCount;	// 16 = 0x10
    _Bool _ccContainsContact;	// 20 = 0x14
    _Bool _ccIsTopDirectAddressesBasedOnRespond;	// 21 = 0x15
    _Bool _ccIsTopDirectAddressesBasedOnScroll;	// 22 = 0x16
    _Bool _ccIsTopDirectAddressesBasedOnSend;	// 23 = 0x17
    _Bool _ccIsTopDirectAddressesBasedOnView;	// 24 = 0x18
    _Bool _ccIsTopIndirectAddressesBasedOnRespond;	// 25 = 0x19
    _Bool _ccIsTopIndirectAddressesBasedOnScroll;	// 26 = 0x1a
    _Bool _ccIsTopIndirectAddressesBasedOnSend;	// 27 = 0x1b
    _Bool _ccIsTopIndirectAddressesBasedOnView;	// 28 = 0x1c
    _Bool _ccIsVip;	// 29 = 0x1d
    _Bool _fromListId;	// 30 = 0x1e
    _Bool _messageIsForward;	// 31 = 0x1f
    _Bool _messageIsReply;	// 32 = 0x20
    _Bool _senderIsContact;	// 33 = 0x21
    _Bool _senderIsTopDirectAddressesBasedOnRespond;	// 34 = 0x22
    _Bool _senderIsTopDirectAddressesBasedOnScroll;	// 35 = 0x23
    _Bool _senderIsTopDirectAddressesBasedOnSend;	// 36 = 0x24
    _Bool _senderIsTopDirectAddressesBasedOnView;	// 37 = 0x25
    _Bool _senderIsTopIndirectAddressesBasedOnRespond;	// 38 = 0x26
    _Bool _senderIsTopIndirectAddressesBasedOnScroll;	// 39 = 0x27
    _Bool _senderIsTopIndirectAddressesBasedOnSend;	// 40 = 0x28
    _Bool _senderIsTopIndirectAddressesBasedOnView;	// 41 = 0x29
    _Bool _senderIsVip;	// 42 = 0x2a
    _Bool _subjectIsTopWordsBasedOnRespond;	// 43 = 0x2b
    _Bool _subjectIsTopWordsBasedOnScroll;	// 44 = 0x2c
    _Bool _subjectIsTopWordsBasedOnSend;	// 45 = 0x2d
    _Bool _subjectIsTopWordsBasedOnView;	// 46 = 0x2e
    _Bool _toContainsContact;	// 47 = 0x2f
    _Bool _toIsTopDirectAddressesBasedOnRespond;	// 48 = 0x30
    _Bool _toIsTopDirectAddressesBasedOnScroll;	// 49 = 0x31
    _Bool _toIsTopDirectAddressesBasedOnSend;	// 50 = 0x32
    _Bool _toIsTopDirectAddressesBasedOnView;	// 51 = 0x33
    _Bool _toIsTopIndirectAddressesBasedOnRespond;	// 52 = 0x34
    _Bool _toIsTopIndirectAddressesBasedOnScroll;	// 53 = 0x35
    _Bool _toIsTopIndirectAddressesBasedOnSend;	// 54 = 0x36
    _Bool _toIsTopIndirectAddressesBasedOnView;	// 55 = 0x37
    _Bool _toIsVip;	// 56 = 0x38
    _Bool _userIsBcc;	// 57 = 0x39
    _Bool _userIsCc;	// 58 = 0x3a
    _Bool _userIsSender;	// 59 = 0x3b
    _Bool _userIsTo;	// 60 = 0x3c
    struct {
        unsigned int numRecipients:1;
        unsigned int timeReceived:1;
        unsigned int unknownFeatureCount:1;
        unsigned int ccContainsContact:1;
        unsigned int ccIsTopDirectAddressesBasedOnRespond:1;
        unsigned int ccIsTopDirectAddressesBasedOnScroll:1;
        unsigned int ccIsTopDirectAddressesBasedOnSend:1;
        unsigned int ccIsTopDirectAddressesBasedOnView:1;
        unsigned int ccIsTopIndirectAddressesBasedOnRespond:1;
        unsigned int ccIsTopIndirectAddressesBasedOnScroll:1;
        unsigned int ccIsTopIndirectAddressesBasedOnSend:1;
        unsigned int ccIsTopIndirectAddressesBasedOnView:1;
        unsigned int ccIsVip:1;
        unsigned int fromListId:1;
        unsigned int messageIsForward:1;
        unsigned int messageIsReply:1;
        unsigned int senderIsContact:1;
        unsigned int senderIsTopDirectAddressesBasedOnRespond:1;
        unsigned int senderIsTopDirectAddressesBasedOnScroll:1;
        unsigned int senderIsTopDirectAddressesBasedOnSend:1;
        unsigned int senderIsTopDirectAddressesBasedOnView:1;
        unsigned int senderIsTopIndirectAddressesBasedOnRespond:1;
        unsigned int senderIsTopIndirectAddressesBasedOnScroll:1;
        unsigned int senderIsTopIndirectAddressesBasedOnSend:1;
        unsigned int senderIsTopIndirectAddressesBasedOnView:1;
        unsigned int senderIsVip:1;
        unsigned int subjectIsTopWordsBasedOnRespond:1;
        unsigned int subjectIsTopWordsBasedOnScroll:1;
        unsigned int subjectIsTopWordsBasedOnSend:1;
        unsigned int subjectIsTopWordsBasedOnView:1;
        unsigned int toContainsContact:1;
        unsigned int toIsTopDirectAddressesBasedOnRespond:1;
        unsigned int toIsTopDirectAddressesBasedOnScroll:1;
        unsigned int toIsTopDirectAddressesBasedOnSend:1;
        unsigned int toIsTopDirectAddressesBasedOnView:1;
        unsigned int toIsTopIndirectAddressesBasedOnRespond:1;
        unsigned int toIsTopIndirectAddressesBasedOnScroll:1;
        unsigned int toIsTopIndirectAddressesBasedOnSend:1;
        unsigned int toIsTopIndirectAddressesBasedOnView:1;
        unsigned int toIsVip:1;
        unsigned int userIsBcc:1;
        unsigned int userIsCc:1;
        unsigned int userIsSender:1;
        unsigned int userIsTo:1;
    } _has;	// 64 = 0x40
}

@property(nonatomic) _Bool userIsTo; // @synthesize userIsTo=_userIsTo;
@property(nonatomic) _Bool userIsSender; // @synthesize userIsSender=_userIsSender;
@property(nonatomic) _Bool userIsCc; // @synthesize userIsCc=_userIsCc;
@property(nonatomic) _Bool userIsBcc; // @synthesize userIsBcc=_userIsBcc;
@property(nonatomic) _Bool toIsVip; // @synthesize toIsVip=_toIsVip;
@property(nonatomic) _Bool toIsTopIndirectAddressesBasedOnView; // @synthesize toIsTopIndirectAddressesBasedOnView=_toIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool toIsTopIndirectAddressesBasedOnSend; // @synthesize toIsTopIndirectAddressesBasedOnSend=_toIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool toIsTopIndirectAddressesBasedOnScroll; // @synthesize toIsTopIndirectAddressesBasedOnScroll=_toIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool toIsTopIndirectAddressesBasedOnRespond; // @synthesize toIsTopIndirectAddressesBasedOnRespond=_toIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool toIsTopDirectAddressesBasedOnView; // @synthesize toIsTopDirectAddressesBasedOnView=_toIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool toIsTopDirectAddressesBasedOnSend; // @synthesize toIsTopDirectAddressesBasedOnSend=_toIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool toIsTopDirectAddressesBasedOnScroll; // @synthesize toIsTopDirectAddressesBasedOnScroll=_toIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool toIsTopDirectAddressesBasedOnRespond; // @synthesize toIsTopDirectAddressesBasedOnRespond=_toIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool toContainsContact; // @synthesize toContainsContact=_toContainsContact;
@property(nonatomic) _Bool subjectIsTopWordsBasedOnView; // @synthesize subjectIsTopWordsBasedOnView=_subjectIsTopWordsBasedOnView;
@property(nonatomic) _Bool subjectIsTopWordsBasedOnSend; // @synthesize subjectIsTopWordsBasedOnSend=_subjectIsTopWordsBasedOnSend;
@property(nonatomic) _Bool subjectIsTopWordsBasedOnScroll; // @synthesize subjectIsTopWordsBasedOnScroll=_subjectIsTopWordsBasedOnScroll;
@property(nonatomic) _Bool subjectIsTopWordsBasedOnRespond; // @synthesize subjectIsTopWordsBasedOnRespond=_subjectIsTopWordsBasedOnRespond;
@property(nonatomic) _Bool senderIsVip; // @synthesize senderIsVip=_senderIsVip;
@property(nonatomic) _Bool senderIsTopIndirectAddressesBasedOnView; // @synthesize senderIsTopIndirectAddressesBasedOnView=_senderIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool senderIsTopIndirectAddressesBasedOnSend; // @synthesize senderIsTopIndirectAddressesBasedOnSend=_senderIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool senderIsTopIndirectAddressesBasedOnScroll; // @synthesize senderIsTopIndirectAddressesBasedOnScroll=_senderIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool senderIsTopIndirectAddressesBasedOnRespond; // @synthesize senderIsTopIndirectAddressesBasedOnRespond=_senderIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool senderIsTopDirectAddressesBasedOnView; // @synthesize senderIsTopDirectAddressesBasedOnView=_senderIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool senderIsTopDirectAddressesBasedOnSend; // @synthesize senderIsTopDirectAddressesBasedOnSend=_senderIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool senderIsTopDirectAddressesBasedOnScroll; // @synthesize senderIsTopDirectAddressesBasedOnScroll=_senderIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool senderIsTopDirectAddressesBasedOnRespond; // @synthesize senderIsTopDirectAddressesBasedOnRespond=_senderIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool senderIsContact; // @synthesize senderIsContact=_senderIsContact;
@property(nonatomic) unsigned int numRecipients; // @synthesize numRecipients=_numRecipients;
@property(nonatomic) _Bool messageIsReply; // @synthesize messageIsReply=_messageIsReply;
@property(nonatomic) _Bool messageIsForward; // @synthesize messageIsForward=_messageIsForward;
@property(nonatomic) _Bool fromListId; // @synthesize fromListId=_fromListId;
@property(nonatomic) _Bool ccIsVip; // @synthesize ccIsVip=_ccIsVip;
@property(nonatomic) _Bool ccIsTopIndirectAddressesBasedOnView; // @synthesize ccIsTopIndirectAddressesBasedOnView=_ccIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool ccIsTopIndirectAddressesBasedOnSend; // @synthesize ccIsTopIndirectAddressesBasedOnSend=_ccIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool ccIsTopIndirectAddressesBasedOnScroll; // @synthesize ccIsTopIndirectAddressesBasedOnScroll=_ccIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool ccIsTopIndirectAddressesBasedOnRespond; // @synthesize ccIsTopIndirectAddressesBasedOnRespond=_ccIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool ccIsTopDirectAddressesBasedOnView; // @synthesize ccIsTopDirectAddressesBasedOnView=_ccIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool ccIsTopDirectAddressesBasedOnSend; // @synthesize ccIsTopDirectAddressesBasedOnSend=_ccIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool ccIsTopDirectAddressesBasedOnScroll; // @synthesize ccIsTopDirectAddressesBasedOnScroll=_ccIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool ccIsTopDirectAddressesBasedOnRespond; // @synthesize ccIsTopDirectAddressesBasedOnRespond=_ccIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool ccContainsContact; // @synthesize ccContainsContact=_ccContainsContact;
@property(nonatomic) unsigned int unknownFeatureCount; // @synthesize unknownFeatureCount=_unknownFeatureCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c7cd3
- (unsigned long long)hash;	// IMP=0x00000000000c765a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c6b26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c658f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c6033
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c5a3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c5a30
- (id)dictionaryRepresentation;	// IMP=0x00000000000c2f21
- (id)description;	// IMP=0x00000000000c2e51
@property(nonatomic) _Bool hasUserIsTo;
@property(nonatomic) _Bool hasUserIsSender;
@property(nonatomic) _Bool hasUserIsCc;
@property(nonatomic) _Bool hasUserIsBcc;
@property(nonatomic) _Bool hasToIsVip;
@property(nonatomic) _Bool hasToIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool hasToIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasToIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasToIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasToIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool hasToIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasToIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasToIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasToContainsContact;
- (int)StringAsTimeReceived:(id)arg1;	// IMP=0x00000000000c28c0
- (id)timeReceivedAsString:(int)arg1;	// IMP=0x00000000000c2841
@property(nonatomic) _Bool hasTimeReceived;
@property(nonatomic) int timeReceived; // @synthesize timeReceived=_timeReceived;
@property(nonatomic) _Bool hasSubjectIsTopWordsBasedOnView;
@property(nonatomic) _Bool hasSubjectIsTopWordsBasedOnSend;
@property(nonatomic) _Bool hasSubjectIsTopWordsBasedOnScroll;
@property(nonatomic) _Bool hasSubjectIsTopWordsBasedOnRespond;
@property(nonatomic) _Bool hasSenderIsVip;
@property(nonatomic) _Bool hasSenderIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool hasSenderIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasSenderIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasSenderIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasSenderIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool hasSenderIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasSenderIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasSenderIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasSenderIsContact;
@property(nonatomic) _Bool hasNumRecipients;
@property(nonatomic) _Bool hasMessageIsReply;
@property(nonatomic) _Bool hasMessageIsForward;
@property(nonatomic) _Bool hasFromListId;
@property(nonatomic) _Bool hasCcIsVip;
@property(nonatomic) _Bool hasCcIsTopIndirectAddressesBasedOnView;
@property(nonatomic) _Bool hasCcIsTopIndirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasCcIsTopIndirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasCcIsTopIndirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasCcIsTopDirectAddressesBasedOnView;
@property(nonatomic) _Bool hasCcIsTopDirectAddressesBasedOnSend;
@property(nonatomic) _Bool hasCcIsTopDirectAddressesBasedOnScroll;
@property(nonatomic) _Bool hasCcIsTopDirectAddressesBasedOnRespond;
@property(nonatomic) _Bool hasCcContainsContact;
@property(nonatomic) _Bool hasUnknownFeatureCount;

@end
