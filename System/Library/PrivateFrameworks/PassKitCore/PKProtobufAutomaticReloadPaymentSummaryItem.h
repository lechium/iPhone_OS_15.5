//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class PKProtobufCustomPrecisionAmount;

@interface PKProtobufAutomaticReloadPaymentSummaryItem : PBCodable <NSCopying>
{
    PKProtobufCustomPrecisionAmount *_thresholdAmount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000256e89
@property(retain, nonatomic) PKProtobufCustomPrecisionAmount *thresholdAmount; // @synthesize thresholdAmount=_thresholdAmount;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000256e0a
- (unsigned long long)hash;	// IMP=0x0000000000256ded
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000256d53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000256cdb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000256cb1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000256c8d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000256c80
- (id)dictionaryRepresentation;	// IMP=0x0000000000256a37
- (id)description;	// IMP=0x0000000000256988
@property(readonly, nonatomic) _Bool hasThresholdAmount;

@end

