//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptions : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_attributes;	// 16 = 0x10
    NSMutableArray *_subscriptionChannels;	// 24 = 0x18
    NSMutableArray *_unsubscriptionChannels;	// 32 = 0x20
}

+ (Class)attributesType;	// IMP=0x0020000000067862
+ (Class)unsubscriptionChannelsType;	// IMP=0x0010000000067790
+ (Class)subscriptionChannelsType;	// IMP=0x00100000000676be
- (void).cxx_destruct;	// IMP=0x00200000000690b3
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannels; // @synthesize unsubscriptionChannels=_unsubscriptionChannels;
@property(retain, nonatomic) NSMutableArray *subscriptionChannels; // @synthesize subscriptionChannels=_subscriptionChannels;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000068cc7
- (unsigned long long)hash;	// IMP=0x0010000000068c43
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000068b17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000686e2
- (void)copyTo:(id)arg1;	// IMP=0x00100000000684ce
- (void)writeTo:(id)arg1;	// IMP=0x00100000000681c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000681bc
- (id)dictionaryRepresentation;	// IMP=0x0010000000067922
- (id)description;	// IMP=0x0010000000067873
- (id)attributesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000067845
- (unsigned long long)attributesCount;	// IMP=0x0010000000067828
- (void)addAttributes:(id)arg1;	// IMP=0x00100000000677be
- (void)clearAttributes;	// IMP=0x00100000000677a1
- (id)unsubscriptionChannelsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000067773
- (unsigned long long)unsubscriptionChannelsCount;	// IMP=0x0010000000067756
- (void)addUnsubscriptionChannels:(id)arg1;	// IMP=0x00100000000676ec
- (void)clearUnsubscriptionChannels;	// IMP=0x00100000000676cf
- (id)subscriptionChannelsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000676a1
- (unsigned long long)subscriptionChannelsCount;	// IMP=0x0010000000067684
- (void)addSubscriptionChannels:(id)arg1;	// IMP=0x001000000006761a
- (void)clearSubscriptionChannels;	// IMP=0x00100000000675fd
@property(readonly, nonatomic) _Bool hasAppId;

@end
