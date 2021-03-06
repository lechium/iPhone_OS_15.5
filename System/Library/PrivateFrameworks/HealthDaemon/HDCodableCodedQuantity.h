//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCoding, NSString;

@interface HDCodableCodedQuantity : PBCodable <NSCopying>
{
    HDCodableMedicalCoding *_comparatorCoding;	// 8 = 0x8
    NSString *_rawValue;	// 16 = 0x10
    HDCodableMedicalCoding *_unitCoding;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000454f69
@property(retain, nonatomic) HDCodableMedicalCoding *unitCoding; // @synthesize unitCoding=_unitCoding;
@property(retain, nonatomic) HDCodableMedicalCoding *comparatorCoding; // @synthesize comparatorCoding=_comparatorCoding;
@property(retain, nonatomic) NSString *rawValue; // @synthesize rawValue=_rawValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000454e49
- (unsigned long long)hash;	// IMP=0x0000000000454ddc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000454ce4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000454c20
- (void)copyTo:(id)arg1;	// IMP=0x0000000000454b9d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000454b23
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000454b16
- (id)dictionaryRepresentation;	// IMP=0x000000000045480f
- (id)description;	// IMP=0x0000000000454760
@property(readonly, nonatomic) _Bool hasUnitCoding;
@property(readonly, nonatomic) _Bool hasComparatorCoding;
@property(readonly, nonatomic) _Bool hasRawValue;

@end

