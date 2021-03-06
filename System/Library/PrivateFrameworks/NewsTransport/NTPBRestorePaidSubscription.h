//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>
{
    NSMutableArray *_items;	// 8 = 0x8
    NSMutableArray *_restoredPaidSubscriptionChannelIds;	// 16 = 0x10
}

+ (Class)itemsType;	// IMP=0x00000000000864c9
+ (Class)restoredPaidSubscriptionChannelIdsType;	// IMP=0x00000000000863f7
- (void).cxx_destruct;	// IMP=0x00000000000872a4
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds; // @synthesize restoredPaidSubscriptionChannelIds=_restoredPaidSubscriptionChannelIds;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000087018
- (unsigned long long)hash;	// IMP=0x0000000000086fcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086f03
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086c07
- (void)writeTo:(id)arg1;	// IMP=0x00000000000869f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000869e9
- (id)dictionaryRepresentation;	// IMP=0x0000000000086589
- (id)description;	// IMP=0x00000000000864da
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000864ac
- (unsigned long long)itemsCount;	// IMP=0x000000000008648f
- (void)addItems:(id)arg1;	// IMP=0x0000000000086425
- (void)clearItems;	// IMP=0x0000000000086408
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000863da
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;	// IMP=0x00000000000863bd
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;	// IMP=0x0000000000086353
- (void)clearRestoredPaidSubscriptionChannelIds;	// IMP=0x0000000000086336

@end

