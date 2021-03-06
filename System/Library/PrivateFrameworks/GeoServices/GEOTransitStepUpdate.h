//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEOTransitBoardingInfo, GEOTransitScheduleInfo, GEOTransitVehiclePositionInfo, NSData, PBDataReader, PBUnknownFields;

@interface GEOTransitStepUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOTransitBoardingInfo *_boardingInfo;	// 24 = 0x18
    GEOInstructionSet *_instructions;	// 32 = 0x20
    GEOTransitScheduleInfo *_scheduleInfo;	// 40 = 0x28
    NSData *_updateIdentifier;	// 48 = 0x30
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_boardingInfo:1;
        unsigned int read_instructions:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000002f6e7e
- (void).cxx_destruct;	// IMP=0x00000000002f7948
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000002f787f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f7658
- (unsigned long long)hash;	// IMP=0x00000000002f75a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f741c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f71cf
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f70a1
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f6e9a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f6e8b
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000002f6d72
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002f6d60
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f69c6
- (id)jsonRepresentation;	// IMP=0x00000000002f68b4
- (id)dictionaryRepresentation;	// IMP=0x00000000002f648a
- (id)description;	// IMP=0x00000000002f63db
@property(retain, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property(readonly, nonatomic) _Bool hasBoardingInfo;
@property(retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) _Bool hasScheduleInfo;
@property(retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property(readonly, nonatomic) _Bool hasVehiclePositionInfo;
@property(retain, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) _Bool hasInstructions;
@property(retain, nonatomic) NSData *updateIdentifier;
@property(readonly, nonatomic) _Bool hasUpdateIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000002f5402
- (id)init;	// IMP=0x00000000002f53a6

@end

