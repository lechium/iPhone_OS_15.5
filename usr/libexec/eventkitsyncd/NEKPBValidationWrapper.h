//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface NEKPBValidationWrapper : PBCodable
{
    double _endDate;	// 8 = 0x8
    unsigned long long _masterCount;	// 16 = 0x10
    unsigned long long _occurrenceCount;	// 24 = 0x18
    double _startDate;	// 32 = 0x20
    _Bool _showAlert;	// 40 = 0x28
    struct {
        unsigned int endDate:1;
        unsigned int masterCount:1;
        unsigned int occurrenceCount:1;
        unsigned int startDate:1;
        unsigned int showAlert:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(nonatomic) unsigned long long masterCount; // @synthesize masterCount=_masterCount;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000025ed9
- (unsigned long long)hash;	// IMP=0x0010000000025c5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000025b23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000025a4f
- (void)copyTo:(id)arg1;	// IMP=0x001000000002599e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000258c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000258bc
- (id)dictionaryRepresentation;	// IMP=0x00100000000252bc
- (id)description;	// IMP=0x001000000002520d
@property(nonatomic) _Bool hasShowAlert;
@property(nonatomic) _Bool hasOccurrenceCount;
@property(nonatomic) _Bool hasMasterCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end

