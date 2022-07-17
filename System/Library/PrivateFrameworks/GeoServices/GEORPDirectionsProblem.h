//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserSearchInput, NSData, NSMutableArray, PBDataReader;

@interface GEORPDirectionsProblem : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_clientSuggestedRoutes;	// 16 = 0x10
    NSData *_directionsResponseId;	// 24 = 0x18
    GEORPUserSearchInput *_endWaypoint;	// 32 = 0x20
    NSMutableArray *_instructionCorrections;	// 40 = 0x28
    NSData *_overviewScreenshotImageData;	// 48 = 0x30
    NSMutableArray *_problematicRouteIndexs;	// 56 = 0x38
    GEORPUserSearchInput *_startWaypoint;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    unsigned int _problematicLineIndex;	// 84 = 0x54
    unsigned int _problematicStepIndex;	// 88 = 0x58
    struct {
        unsigned int has_problematicLineIndex:1;
        unsigned int has_problematicStepIndex:1;
        unsigned int read_clientSuggestedRoutes:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_instructionCorrections:1;
        unsigned int read_overviewScreenshotImageData:1;
        unsigned int read_problematicRouteIndexs:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e34d7a
+ (Class)instructionCorrectionType;	// IMP=0x0000000000e332bc
+ (Class)problematicRouteIndexType;	// IMP=0x0000000000e32d6e
+ (Class)clientSuggestedRouteType;	// IMP=0x0000000000e32b03
- (void).cxx_destruct;	// IMP=0x0000000000e3768a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e37250
- (unsigned long long)hash;	// IMP=0x0000000000e3710e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e36eb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e36874
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e36558
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e36289
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e35a5b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e35a4c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e34721
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e3470f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e33d3f
- (id)jsonRepresentation;	// IMP=0x0000000000e33d30
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3337c
- (id)description;	// IMP=0x0000000000e332cd
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e3328b
- (unsigned long long)instructionCorrectionsCount;	// IMP=0x0000000000e3325f
- (void)addInstructionCorrection:(id)arg1;	// IMP=0x0000000000e331a9
- (void)clearInstructionCorrections;	// IMP=0x0000000000e3317f
@property(retain, nonatomic) NSMutableArray *instructionCorrections;
@property(retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property(readonly, nonatomic) _Bool hasEndWaypoint;
@property(retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property(readonly, nonatomic) _Bool hasStartWaypoint;
@property(nonatomic) _Bool hasProblematicLineIndex;
@property(nonatomic) unsigned int problematicLineIndex;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e32d3d
- (unsigned long long)problematicRouteIndexsCount;	// IMP=0x0000000000e32d11
- (void)addProblematicRouteIndex:(id)arg1;	// IMP=0x0000000000e32c5b
- (void)clearProblematicRouteIndexs;	// IMP=0x0000000000e32c31
@property(retain, nonatomic) NSMutableArray *problematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e32ad2
- (unsigned long long)clientSuggestedRoutesCount;	// IMP=0x0000000000e32aa6
- (void)addClientSuggestedRoute:(id)arg1;	// IMP=0x0000000000e329f0
- (void)clearClientSuggestedRoutes;	// IMP=0x0000000000e329c6
@property(retain, nonatomic) NSMutableArray *clientSuggestedRoutes;
@property(nonatomic) _Bool hasProblematicStepIndex;
@property(nonatomic) unsigned int problematicStepIndex;
@property(retain, nonatomic) NSData *overviewScreenshotImageData;
@property(readonly, nonatomic) _Bool hasOverviewScreenshotImageData;
@property(retain, nonatomic) NSData *directionsResponseId;
@property(readonly, nonatomic) _Bool hasDirectionsResponseId;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e3175f
- (id)init;	// IMP=0x0000000000e31703

@end
