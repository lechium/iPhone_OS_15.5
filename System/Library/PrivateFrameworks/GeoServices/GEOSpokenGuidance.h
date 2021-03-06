//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSpokenGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_announcements;	// 24 = 0x18
    NSMutableArray *_timeGaps;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _alignment;	// 52 = 0x34
    unsigned int _endDesiredTime;	// 56 = 0x38
    unsigned int _exclusiveSetIdentifier;	// 60 = 0x3c
    unsigned int _numChainedVariants;	// 64 = 0x40
    unsigned int _priority;	// 68 = 0x44
    unsigned int _repetitionInterval;	// 72 = 0x48
    unsigned int _startDesiredTime;	// 76 = 0x4c
    _Bool _tapBeforeAnnouncement;	// 80 = 0x50
    struct {
        unsigned int has_alignment:1;
        unsigned int has_endDesiredTime:1;
        unsigned int has_exclusiveSetIdentifier:1;
        unsigned int has_numChainedVariants:1;
        unsigned int has_priority:1;
        unsigned int has_repetitionInterval:1;
        unsigned int has_startDesiredTime:1;
        unsigned int has_tapBeforeAnnouncement:1;
        unsigned int read_unknownFields:1;
        unsigned int read_announcements:1;
        unsigned int read_timeGaps:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000094517c
+ (Class)timeGapType;	// IMP=0x00000000009437ec
+ (Class)announcementType;	// IMP=0x000000000094315b
- (void).cxx_destruct;	// IMP=0x0000000000946ac3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000946874
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000946437
- (unsigned long long)hash;	// IMP=0x00000000009462b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000946054
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000945b31
- (void)copyTo:(id)arg1;	// IMP=0x0000000000945885
- (void)writeTo:(id)arg1;	// IMP=0x0000000000945407
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009453f8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000944c73
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000944c61
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000094436e
- (id)jsonRepresentation;	// IMP=0x000000000094425c
- (id)dictionaryRepresentation;	// IMP=0x0000000000943910
- (id)description;	// IMP=0x0000000000943861
@property(nonatomic) _Bool hasExclusiveSetIdentifier;
@property(nonatomic) unsigned int exclusiveSetIdentifier;
- (id)timeGapAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009437bb
- (unsigned long long)timeGapsCount;	// IMP=0x000000000094378f
- (void)addTimeGap:(id)arg1;	// IMP=0x00000000009436da
- (void)clearTimeGaps;	// IMP=0x00000000009436b1
@property(retain, nonatomic) NSMutableArray *timeGaps;
@property(nonatomic) _Bool hasTapBeforeAnnouncement;
@property(nonatomic) _Bool tapBeforeAnnouncement;
@property(nonatomic) _Bool hasNumChainedVariants;
@property(nonatomic) unsigned int numChainedVariants;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) unsigned int priority;
@property(nonatomic) _Bool hasRepetitionInterval;
@property(nonatomic) unsigned int repetitionInterval;
- (int)StringAsAlignment:(id)arg1;	// IMP=0x0000000000943334
- (id)alignmentAsString:(int)arg1;	// IMP=0x00000000009432a7
@property(nonatomic) _Bool hasAlignment;
@property(nonatomic) int alignment;
@property(nonatomic) _Bool hasEndDesiredTime;
@property(nonatomic) unsigned int endDesiredTime;
@property(nonatomic) _Bool hasStartDesiredTime;
@property(nonatomic) unsigned int startDesiredTime;
- (id)announcementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000094312a
- (unsigned long long)announcementsCount;	// IMP=0x00000000009430fe
- (void)addAnnouncement:(id)arg1;	// IMP=0x0000000000943049
- (void)clearAnnouncements;	// IMP=0x0000000000943020
@property(retain, nonatomic) NSMutableArray *announcements;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000941e9d
- (id)init;	// IMP=0x0000000000941e41

@end

