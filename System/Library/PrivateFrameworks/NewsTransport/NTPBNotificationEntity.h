//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying>
{
    int _notificationType;	// 8 = 0x8
    int _paidBundleSubscriptionStatus;	// 12 = 0xc
    int _subscriberType;	// 16 = 0x10
    NSMutableArray *_tagIds;	// 24 = 0x18
    struct {
        unsigned int notificationType:1;
        unsigned int paidBundleSubscriptionStatus:1;
        unsigned int subscriberType:1;
    } _has;	// 32 = 0x20
}

+ (Class)tagIdType;	// IMP=0x00000000001f68e1
- (void).cxx_destruct;	// IMP=0x00000000001f76cc
@property(retain, nonatomic) NSMutableArray *tagIds; // @synthesize tagIds=_tagIds;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f74df
- (unsigned long long)hash;	// IMP=0x00000000001f744b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f7332
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f70f8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f6f49
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f6f3c
- (id)dictionaryRepresentation;	// IMP=0x00000000001f6a73
- (id)description;	// IMP=0x00000000001f69c4
@property(nonatomic) _Bool hasPaidBundleSubscriptionStatus;
@property(nonatomic) int paidBundleSubscriptionStatus; // @synthesize paidBundleSubscriptionStatus=_paidBundleSubscriptionStatus;
@property(nonatomic) _Bool hasSubscriberType;
@property(nonatomic) int subscriberType; // @synthesize subscriberType=_subscriberType;
- (id)tagIdAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f68c4
- (unsigned long long)tagIdsCount;	// IMP=0x00000000001f68a7
- (void)addTagId:(id)arg1;	// IMP=0x00000000001f683d
- (void)clearTagIds;	// IMP=0x00000000001f6820
@property(nonatomic) _Bool hasNotificationType;
@property(nonatomic) int notificationType; // @synthesize notificationType=_notificationType;

@end

