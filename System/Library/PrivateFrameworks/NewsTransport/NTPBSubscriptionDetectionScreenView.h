//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>
{
    int _countOfSubscriptionsDetected;	// 8 = 0x8
    struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int countOfSubscriptionsDetected; // @synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000181de0
- (unsigned long long)hash;	// IMP=0x0000000000181db5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000181d23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000181cc1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000181c96
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000181c89
- (id)dictionaryRepresentation;	// IMP=0x0000000000181a10
- (id)description;	// IMP=0x0000000000181961
@property(nonatomic) _Bool hasCountOfSubscriptionsDetected;

@end

