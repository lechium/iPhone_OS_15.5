//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalDateInterval, NSString;

@interface HDCodableMedicationDosage : PBCodable <NSCopying>
{
    NSString *_instruction;	// 8 = 0x8
    HDCodableMedicalCoding *_methodCoding;	// 16 = 0x10
    HDCodableMedicalCoding *_routeCoding;	// 24 = 0x18
    HDCodableMedicalCoding *_siteCoding;	// 32 = 0x20
    HDCodableMedicalDateInterval *_timingPeriod;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001128d7
@property(retain, nonatomic) HDCodableMedicalCoding *methodCoding; // @synthesize methodCoding=_methodCoding;
@property(retain, nonatomic) HDCodableMedicalCoding *routeCoding; // @synthesize routeCoding=_routeCoding;
@property(retain, nonatomic) HDCodableMedicalCoding *siteCoding; // @synthesize siteCoding=_siteCoding;
@property(retain, nonatomic) HDCodableMedicalDateInterval *timingPeriod; // @synthesize timingPeriod=_timingPeriod;
@property(retain, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001126ff
- (unsigned long long)hash;	// IMP=0x000000000011265c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001124fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001123e4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000112321
- (void)writeTo:(id)arg1;	// IMP=0x000000000011226d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000112260
- (id)dictionaryRepresentation;	// IMP=0x0000000000111e40
- (id)description;	// IMP=0x0000000000111d91
@property(readonly, nonatomic) _Bool hasMethodCoding;
@property(readonly, nonatomic) _Bool hasRouteCoding;
@property(readonly, nonatomic) _Bool hasSiteCoding;
@property(readonly, nonatomic) _Bool hasTimingPeriod;
@property(readonly, nonatomic) _Bool hasInstruction;

@end

