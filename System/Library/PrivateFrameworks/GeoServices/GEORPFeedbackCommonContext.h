//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABAssignmentResponse, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPNavigationSettings, GEORPSearchCommonContext, GEORPSourceInfo, GEORPUserPath, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _userPaths;	// 24 = 0x18
    NSMutableArray *_auxiliaryControls;	// 48 = 0x30
    double _clientCreatedAt;	// 56 = 0x38
    GEORPUserPath *_combinedUserPath;	// 64 = 0x40
    GEOABAssignmentResponse *_currentAbAssignmentResponse;	// 72 = 0x48
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;	// 80 = 0x50
    GEORPMapLocation *_mapLocation;	// 88 = 0x58
    GEORPNavigationSettings *_navigationSettings;	// 96 = 0x60
    unsigned long long _originatingAuxiliaryControlIndex;	// 104 = 0x68
    GEORPSearchCommonContext *_searchCommon;	// 112 = 0x70
    GEORPSourceInfo *_sourceInfo;	// 120 = 0x78
    NSMutableArray *_visibleTileSets;	// 128 = 0x80
    unsigned int _readerMarkPos;	// 136 = 0x88
    unsigned int _readerMarkLength;	// 140 = 0x8c
    struct os_unfair_lock_s _readerLock;	// 144 = 0x90
    int _deviceGmtOffset;	// 148 = 0x94
    int _pinType;	// 152 = 0x98
    _Bool _isSprMap;	// 156 = 0x9c
    struct {
        unsigned int has_clientCreatedAt:1;
        unsigned int has_originatingAuxiliaryControlIndex:1;
        unsigned int has_deviceGmtOffset:1;
        unsigned int has_pinType:1;
        unsigned int has_isSprMap:1;
        unsigned int read_unknownFields:1;
        unsigned int read_userPaths:1;
        unsigned int read_auxiliaryControls:1;
        unsigned int read_combinedUserPath:1;
        unsigned int read_currentAbAssignmentResponse:1;
        unsigned int read_currentEnvironmentManifestUrls:1;
        unsigned int read_mapLocation:1;
        unsigned int read_navigationSettings:1;
        unsigned int read_searchCommon:1;
        unsigned int read_sourceInfo:1;
        unsigned int read_visibleTileSets:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 160 = 0xa0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000043f349
+ (Class)auxiliaryControlType;	// IMP=0x000000000043ba80
+ (Class)visibleTileSetType;	// IMP=0x000000000043aa4d
- (void).cxx_destruct;	// IMP=0x0000000000441e9b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000441dcf
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004417f0
- (unsigned long long)hash;	// IMP=0x00000000004414f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044117b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000440b6d
- (void)copyTo:(id)arg1;	// IMP=0x00000000004407ac
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000044077b
- (void)writeTo:(id)arg1;	// IMP=0x000000000043ffac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000043ff9d
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000043eba1
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000043eb8f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000043d60e
- (id)jsonRepresentation;	// IMP=0x000000000043d4fc
- (id)dictionaryRepresentation;	// IMP=0x000000000043c407
- (id)description;	// IMP=0x000000000043c358
@property(retain, nonatomic) GEORPUserPath *combinedUserPath;
@property(readonly, nonatomic) _Bool hasCombinedUserPath;
@property(nonatomic) _Bool hasIsSprMap;
@property(nonatomic) _Bool isSprMap;
@property(retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property(readonly, nonatomic) _Bool hasCurrentAbAssignmentResponse;
@property(retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property(readonly, nonatomic) _Bool hasSearchCommon;
@property(retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property(readonly, nonatomic) _Bool hasSourceInfo;
@property(retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property(readonly, nonatomic) _Bool hasNavigationSettings;
@property(retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property(readonly, nonatomic) _Bool hasCurrentEnvironmentManifestUrls;
@property(nonatomic) _Bool hasDeviceGmtOffset;
@property(nonatomic) int deviceGmtOffset;
@property(nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;	// IMP=0x000000000043ba4f
- (unsigned long long)auxiliaryControlsCount;	// IMP=0x000000000043ba23
- (void)addAuxiliaryControl:(id)arg1;	// IMP=0x000000000043b96c
- (void)clearAuxiliaryControls;	// IMP=0x000000000043b941
@property(retain, nonatomic) NSMutableArray *auxiliaryControls;
@property(nonatomic) _Bool hasClientCreatedAt;
@property(nonatomic) double clientCreatedAt;
- (int)StringAsUserPaths:(id)arg1;	// IMP=0x000000000043b078
- (id)userPathsAsString:(int)arg1;	// IMP=0x000000000043accd
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043aca8
- (int)userPathAtIndex:(unsigned long long)arg1;	// IMP=0x000000000043abd2
- (void)addUserPath:(int)arg1;	// IMP=0x000000000043ab96
- (void)clearUserPaths;	// IMP=0x000000000043ab77
@property(readonly, nonatomic) int *userPaths;
@property(readonly, nonatomic) unsigned long long userPathsCount;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000043aa1c
- (unsigned long long)visibleTileSetsCount;	// IMP=0x000000000043a9f0
- (void)addVisibleTileSet:(id)arg1;	// IMP=0x000000000043a939
- (void)clearVisibleTileSets;	// IMP=0x000000000043a90e
@property(retain, nonatomic) NSMutableArray *visibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation;
@property(readonly, nonatomic) _Bool hasMapLocation;
- (int)StringAsPinType:(id)arg1;	// IMP=0x0000000000438e88
- (id)pinTypeAsString:(int)arg1;	// IMP=0x0000000000438dbb
@property(nonatomic) _Bool hasPinType;
@property(nonatomic) int pinType;
- (void)dealloc;	// IMP=0x0000000000438d05
- (id)initWithData:(id)arg1;	// IMP=0x0000000000438ca9
- (id)init;	// IMP=0x0000000000438c4d
- (void)_recordManifestURLs:(id)arg1;	// IMP=0x000000000128af89
- (void)_recordCurrentEnvironment:(id)arg1;	// IMP=0x000000000128adf3
- (void)recordEnvironmentAndManifestURLs;	// IMP=0x000000000128ad44

@end

