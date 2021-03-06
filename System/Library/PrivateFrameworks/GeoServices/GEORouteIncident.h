//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPBTransitArtwork, GEORestrictionInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPBTransitArtwork *_artwork;	// 24 = 0x18
    NSString *_crossStreet;	// 32 = 0x20
    long long _endTime;	// 40 = 0x28
    NSString *_incidentId;	// 48 = 0x30
    NSString *_info;	// 56 = 0x38
    GEOLatLng *_position;	// 64 = 0x40
    GEORestrictionInfo *_restrictionInfo;	// 72 = 0x48
    long long _startTime;	// 80 = 0x50
    NSString *_street;	// 88 = 0x58
    long long _updateTime;	// 96 = 0x60
    NSMutableArray *_userReportIds;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    unsigned int _delaySeconds;	// 124 = 0x7c
    unsigned int _laneClosureCount;	// 128 = 0x80
    int _laneClosureType;	// 132 = 0x84
    int _significance;	// 136 = 0x88
    int _type;	// 140 = 0x8c
    unsigned int _userReportsCount;	// 144 = 0x90
    _Bool _endTimeReliable;	// 148 = 0x94
    _Bool _shouldDisplayOnMap;	// 149 = 0x95
    struct {
        unsigned int has_endTime:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_delaySeconds:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_significance:1;
        unsigned int has_type:1;
        unsigned int has_userReportsCount:1;
        unsigned int has_endTimeReliable:1;
        unsigned int has_shouldDisplayOnMap:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_crossStreet:1;
        unsigned int read_incidentId:1;
        unsigned int read_info:1;
        unsigned int read_position:1;
        unsigned int read_restrictionInfo:1;
        unsigned int read_street:1;
        unsigned int read_userReportIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 152 = 0x98
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000922aca
+ (Class)userReportIdType;	// IMP=0x0000000000920ce1
- (void).cxx_destruct;	// IMP=0x00000000009245e0
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000092452e
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000924061
- (unsigned long long)hash;	// IMP=0x0000000000923d9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000923959
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009233c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000923075
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000923044
- (void)writeTo:(id)arg1;	// IMP=0x0000000000922ae6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000922ad7
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009229be
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009229ac
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000921a8e
- (id)jsonRepresentation;	// IMP=0x000000000092197c
- (id)dictionaryRepresentation;	// IMP=0x0000000000920f49
- (id)description;	// IMP=0x0000000000920e9a
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(nonatomic) _Bool hasDelaySeconds;
@property(nonatomic) unsigned int delaySeconds;
- (id)userReportIdAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000920cb0
- (unsigned long long)userReportIdsCount;	// IMP=0x0000000000920c84
- (void)addUserReportId:(id)arg1;	// IMP=0x0000000000920bcf
- (void)clearUserReportIds;	// IMP=0x0000000000920ba6
@property(retain, nonatomic) NSMutableArray *userReportIds;
@property(nonatomic) _Bool hasShouldDisplayOnMap;
@property(nonatomic) _Bool shouldDisplayOnMap;
@property(nonatomic) _Bool hasUserReportsCount;
@property(nonatomic) unsigned int userReportsCount;
@property(retain, nonatomic) GEORestrictionInfo *restrictionInfo;
@property(readonly, nonatomic) _Bool hasRestrictionInfo;
- (int)StringAsSignificance:(id)arg1;	// IMP=0x0000000000920778
- (id)significanceAsString:(int)arg1;	// IMP=0x00000000009206de
@property(nonatomic) _Bool hasSignificance;
@property(nonatomic) int significance;
@property(nonatomic) _Bool hasEndTimeReliable;
@property(nonatomic) _Bool endTimeReliable;
@property(nonatomic) _Bool hasLaneClosureCount;
@property(nonatomic) unsigned int laneClosureCount;
- (int)StringAsLaneClosureType:(id)arg1;	// IMP=0x0000000000920444
- (id)laneClosureTypeAsString:(int)arg1;	// IMP=0x0000000000920385
@property(nonatomic) _Bool hasLaneClosureType;
@property(nonatomic) int laneClosureType;
@property(nonatomic) _Bool hasUpdateTime;
@property(nonatomic) long long updateTime;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) long long endTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) long long startTime;
@property(retain, nonatomic) NSString *crossStreet;
@property(readonly, nonatomic) _Bool hasCrossStreet;
@property(retain, nonatomic) NSString *street;
@property(readonly, nonatomic) _Bool hasStreet;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000091fd5c
- (id)typeAsString:(int)arg1;	// IMP=0x000000000091fc4b
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) NSString *info;
@property(readonly, nonatomic) _Bool hasInfo;
@property(retain, nonatomic) NSString *incidentId;
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(retain, nonatomic) GEOLatLng *position;
@property(readonly, nonatomic) _Bool hasPosition;
- (id)initWithData:(id)arg1;	// IMP=0x000000000091e49b
- (id)init;	// IMP=0x000000000091e43f

@end

