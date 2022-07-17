//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPurchaseOffersItem : PBCodable <NSCopying>
{
    NSString *_purchaseId;	// 8 = 0x8
    int _purchaseType;	// 16 = 0x10
    CDStruct_53d4ade2 _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000001082b
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000107a3
- (unsigned long long)hash;	// IMP=0x0000000000010750
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001068f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000105f7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000010593
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000010586
- (id)dictionaryRepresentation;	// IMP=0x000000000001026a
- (id)description;	// IMP=0x00000000000101bb
- (int)StringAsPurchaseType:(id)arg1;	// IMP=0x000000000001010c
- (id)purchaseTypeAsString:(int)arg1;	// IMP=0x000000000001008d
@property(nonatomic) _Bool hasPurchaseType;
@property(nonatomic) int purchaseType; // @synthesize purchaseType=_purchaseType;
@property(readonly, nonatomic) _Bool hasPurchaseId;

@end
