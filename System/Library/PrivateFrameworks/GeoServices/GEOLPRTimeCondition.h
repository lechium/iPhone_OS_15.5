//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _dayOfMonths;	// 16 = 0x10
    CDStruct_95bda58d _dayOfWeeks;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_dayOfMonths:1;
        unsigned int read_dayOfWeeks:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000687dc5
- (void).cxx_destruct;	// IMP=0x000000000068888c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000688791
- (unsigned long long)hash;	// IMP=0x000000000068874c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068868b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000688522
- (void)copyTo:(id)arg1;	// IMP=0x0000000000688393
- (void)writeTo:(id)arg1;	// IMP=0x00000000006881aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068819b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000687b12
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000687b00
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000006875c7
- (id)jsonRepresentation;	// IMP=0x00000000006875b8
- (id)dictionaryRepresentation;	// IMP=0x000000000068737a
- (id)description;	// IMP=0x00000000006872cb
- (void)setDayOfMonths:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006872a9
- (unsigned int)dayOfMonthAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006871d3
- (void)addDayOfMonth:(unsigned int)arg1;	// IMP=0x000000000068719a
- (void)clearDayOfMonths;	// IMP=0x000000000068717e
@property(readonly, nonatomic) unsigned int *dayOfMonths;
@property(readonly, nonatomic) unsigned long long dayOfMonthsCount;
- (int)StringAsDayOfWeeks:(id)arg1;	// IMP=0x0000000000686f48
- (id)dayOfWeeksAsString:(int)arg1;	// IMP=0x0000000000686ea0
- (void)setDayOfWeeks:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000686e7e
- (int)dayOfWeekAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000686da8
- (void)addDayOfWeek:(int)arg1;	// IMP=0x0000000000686d6f
- (void)clearDayOfWeeks;	// IMP=0x0000000000686d53
@property(readonly, nonatomic) int *dayOfWeeks;
@property(readonly, nonatomic) unsigned long long dayOfWeeksCount;
- (void)dealloc;	// IMP=0x00000000006865ae
- (id)initWithData:(id)arg1;	// IMP=0x0000000000686552
- (id)init;	// IMP=0x00000000006864f6

@end

