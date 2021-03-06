//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying>
{
    HDCodableMedicalDate *_endDate;	// 8 = 0x8
    HDCodableMedicalDate *_startDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000394016
@property(retain, nonatomic) HDCodableMedicalDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) HDCodableMedicalDate *startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000393f3b
- (unsigned long long)hash;	// IMP=0x0000000000393eee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000393e26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000393d88
- (void)copyTo:(id)arg1;	// IMP=0x0000000000393d25
- (void)writeTo:(id)arg1;	// IMP=0x0000000000393cc8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000393cbb
- (id)dictionaryRepresentation;	// IMP=0x0000000000393a05
- (id)description;	// IMP=0x0000000000393956
@property(readonly, nonatomic) _Bool hasEndDate;
@property(readonly, nonatomic) _Bool hasStartDate;

@end

