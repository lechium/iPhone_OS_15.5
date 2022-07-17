//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _days;	// 16 = 0x10
    struct GEOWiFiQualityTimeRange *_timeRanges;	// 40 = 0x28
    unsigned long long _timeRangesCount;	// 48 = 0x30
    unsigned long long _timeRangesSpace;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a14671
- (void).cxx_destruct;	// IMP=0x0000000000a151ca
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a150cc
- (unsigned long long)hash;	// IMP=0x0000000000a15073
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a14f8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a14dfb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a14c6b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a149f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a149e9
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a14166
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a14140
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a13bf3
- (id)jsonRepresentation;	// IMP=0x0000000000a13bd0
- (id)dictionaryRepresentation;	// IMP=0x0000000000a13917
- (id)description;	// IMP=0x0000000000a13868
- (void)setTimeRanges:(struct GEOWiFiQualityTimeRange *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000a137f9
- (struct GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a1371c
- (void)addTimeRanges:(struct GEOWiFiQualityTimeRange)arg1;	// IMP=0x0000000000a136aa
- (void)clearTimeRanges;	// IMP=0x0000000000a1365a
@property(readonly, nonatomic) struct GEOWiFiQualityTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;	// IMP=0x0000000000a132fc
- (id)daysAsString:(int)arg1;	// IMP=0x0000000000a1324b
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000a13229
- (int)daysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a13153
- (void)addDays:(int)arg1;	// IMP=0x0000000000a1311a
- (void)clearDays;	// IMP=0x0000000000a130fe
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;	// IMP=0x0000000000a12a43
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a129e7
- (id)init;	// IMP=0x0000000000a1298b

@end
