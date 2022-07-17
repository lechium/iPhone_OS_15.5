//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying>
{
    NSString *_articleId;	// 8 = 0x8
    int _emailOptInInviteLocation;	// 16 = 0x10
    int _newsletterSubscriptionType;	// 20 = 0x14
    NSString *_parentFeedId;	// 24 = 0x18
    int _parentFeedType;	// 32 = 0x20
    int _userAction;	// 36 = 0x24
    struct {
        unsigned int emailOptInInviteLocation:1;
        unsigned int newsletterSubscriptionType:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001bce98
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bcd70
- (unsigned long long)hash;	// IMP=0x00000000001bcc86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bcaff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bc9e9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bc901
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bc8f4
- (id)dictionaryRepresentation;	// IMP=0x00000000001bc1bf
- (id)description;	// IMP=0x00000000001bc110
@property(nonatomic) _Bool hasNewsletterSubscriptionType;
@property(nonatomic) int newsletterSubscriptionType; // @synthesize newsletterSubscriptionType=_newsletterSubscriptionType;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;	// IMP=0x00000000001bbd78
- (id)parentFeedTypeAsString:(int)arg1;	// IMP=0x00000000001bbbfc
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(nonatomic) _Bool hasEmailOptInInviteLocation;
@property(nonatomic) int emailOptInInviteLocation; // @synthesize emailOptInInviteLocation=_emailOptInInviteLocation;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end
