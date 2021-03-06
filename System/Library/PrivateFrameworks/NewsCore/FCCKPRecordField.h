//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <NSCopying>
{
    FCCKPRecordFieldIdentifier *_identifier;	// 8 = 0x8
    FCCKPRecordFieldValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011ea7a
@property(retain, nonatomic) FCCKPRecordFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) FCCKPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011e99f
- (unsigned long long)hash;	// IMP=0x000000000011e952
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011e88a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e7ec
- (void)writeTo:(id)arg1;	// IMP=0x000000000011e78f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011e782
- (id)dictionaryRepresentation;	// IMP=0x000000000011e49a
- (id)description;	// IMP=0x000000000011e3eb
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

