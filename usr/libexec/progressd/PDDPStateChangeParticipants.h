//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPStateChangeParticipants : PBCodable
{
    NSMutableArray *_recipientGroups;	// 8 = 0x8
    NSString *_recipientPersonId;	// 16 = 0x10
    NSMutableArray *_recipientPersonIds;	// 24 = 0x18
    NSString *_senderPersonId;	// 32 = 0x20
}

+ (Class)recipientGroupsType;	// IMP=0x00200000000763f0
+ (Class)recipientPersonIdsType;	// IMP=0x001000000007631e
- (void).cxx_destruct;	// IMP=0x0020000000077609
@property(retain, nonatomic) NSString *recipientPersonId; // @synthesize recipientPersonId=_recipientPersonId;
@property(retain, nonatomic) NSMutableArray *recipientGroups; // @synthesize recipientGroups=_recipientGroups;
@property(retain, nonatomic) NSMutableArray *recipientPersonIds; // @synthesize recipientPersonIds=_recipientPersonIds;
@property(retain, nonatomic) NSString *senderPersonId; // @synthesize senderPersonId=_senderPersonId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000772e9
- (unsigned long long)hash;	// IMP=0x0010000000077265
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000077139
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000076df3
- (void)copyTo:(id)arg1;	// IMP=0x0010000000076c4d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000769f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000769ec
- (id)dictionaryRepresentation;	// IMP=0x00100000000764c5
- (id)description;	// IMP=0x0010000000076416
@property(readonly, nonatomic) _Bool hasRecipientPersonId;
- (id)recipientGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000763d3
- (unsigned long long)recipientGroupsCount;	// IMP=0x00100000000763b6
- (void)addRecipientGroups:(id)arg1;	// IMP=0x001000000007634c
- (void)clearRecipientGroups;	// IMP=0x001000000007632f
- (id)recipientPersonIdsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000076301
- (unsigned long long)recipientPersonIdsCount;	// IMP=0x00100000000762e4
- (void)addRecipientPersonIds:(id)arg1;	// IMP=0x001000000007627a
- (void)clearRecipientPersonIds;	// IMP=0x001000000007625d
@property(readonly, nonatomic) _Bool hasSenderPersonId;

@end

