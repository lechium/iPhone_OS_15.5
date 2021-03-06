//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptionResponse : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_subscriptionChannelResponses;	// 16 = 0x10
    NSMutableArray *_unsubscriptionChannelResponses;	// 24 = 0x18
}

+ (Class)unsubscriptionChannelResponseType;	// IMP=0x002000000006c52f
+ (Class)subscriptionChannelResponseType;	// IMP=0x001000000006c45d
- (void).cxx_destruct;	// IMP=0x002000000006d72f
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannelResponses; // @synthesize unsubscriptionChannelResponses=_unsubscriptionChannelResponses;
@property(retain, nonatomic) NSMutableArray *subscriptionChannelResponses; // @synthesize subscriptionChannelResponses=_subscriptionChannelResponses;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006d458
- (unsigned long long)hash;	// IMP=0x001000000006d3eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d2f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006cfe7
- (void)copyTo:(id)arg1;	// IMP=0x001000000006ce64
- (void)writeTo:(id)arg1;	// IMP=0x001000000006cc38
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006cc2b
- (id)dictionaryRepresentation;	// IMP=0x001000000006c5ef
- (id)description;	// IMP=0x001000000006c540
- (id)unsubscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006c512
- (unsigned long long)unsubscriptionChannelResponsesCount;	// IMP=0x001000000006c4f5
- (void)addUnsubscriptionChannelResponse:(id)arg1;	// IMP=0x001000000006c48b
- (void)clearUnsubscriptionChannelResponses;	// IMP=0x001000000006c46e
- (id)subscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006c440
- (unsigned long long)subscriptionChannelResponsesCount;	// IMP=0x001000000006c423
- (void)addSubscriptionChannelResponse:(id)arg1;	// IMP=0x001000000006c3b9
- (void)clearSubscriptionChannelResponses;	// IMP=0x001000000006c39c
@property(readonly, nonatomic) _Bool hasAppId;

@end

