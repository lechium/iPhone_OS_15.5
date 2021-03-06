//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange, PBDataReader, PBUnknownFields;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;	// 24 = 0x18
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;	// 32 = 0x20
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_highFrequencyFilter:1;
        unsigned int read_lowFrequencyFilter:1;
        unsigned int read_operatingHoursRange:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fa228b
- (void).cxx_destruct;	// IMP=0x0000000000fa2f4c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000fa2e9d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fa2ccd
- (unsigned long long)hash;	// IMP=0x0000000000fa2c51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fa2b2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fa2945
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fa2857
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fa2688
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fa2679
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fa1b89
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fa1b77
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fa1900
- (id)jsonRepresentation;	// IMP=0x0000000000fa17ee
- (id)dictionaryRepresentation;	// IMP=0x0000000000fa14c8
- (id)description;	// IMP=0x0000000000fa1419
@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;
@property(readonly, nonatomic) _Bool hasOperatingHoursRange;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property(readonly, nonatomic) _Bool hasLowFrequencyFilter;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property(readonly, nonatomic) _Bool hasHighFrequencyFilter;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fa0889
- (id)init;	// IMP=0x0000000000fa082d

@end

