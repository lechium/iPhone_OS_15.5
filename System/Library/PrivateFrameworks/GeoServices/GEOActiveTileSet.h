//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOActiveTileSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOTileSetRegion *_availableTiles;	// 24 = 0x18
    unsigned long long _availableTilesCount;	// 32 = 0x20
    unsigned long long _availableTilesSpace;	// 40 = 0x28
    NSString *_baseURL;	// 48 = 0x30
    NSMutableArray *_countryRegionAllowlists;	// 56 = 0x38
    NSMutableArray *_deviceSKUAllowlists;	// 64 = 0x40
    NSString *_localizationURL;	// 72 = 0x48
    NSMutableArray *_sentinelTiles;	// 80 = 0x50
    NSMutableArray *_supportedLanguages;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    int _checksumType;	// 108 = 0x6c
    int _requestStyle;	// 112 = 0x70
    int _scale;	// 116 = 0x74
    int _size;	// 120 = 0x78
    int _style;	// 124 = 0x7c
    unsigned int _timeToLiveSeconds;	// 128 = 0x80
    int _updateBehavior;	// 132 = 0x84
    unsigned int _version;	// 136 = 0x88
    _Bool _useAuthProxy;	// 140 = 0x8c
    struct {
        unsigned int has_checksumType:1;
        unsigned int has_requestStyle:1;
        unsigned int has_timeToLiveSeconds:1;
        unsigned int has_updateBehavior:1;
        unsigned int has_useAuthProxy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availableTiles:1;
        unsigned int read_baseURL:1;
        unsigned int read_countryRegionAllowlists:1;
        unsigned int read_deviceSKUAllowlists:1;
        unsigned int read_localizationURL:1;
        unsigned int read_sentinelTiles:1;
        unsigned int read_supportedLanguages:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 144 = 0x90
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000826fd7
+ (Class)deviceSKUAllowlistType;	// IMP=0x0000000000823eba
+ (Class)countryRegionAllowlistType;	// IMP=0x0000000000823986
+ (Class)supportedLanguageType;	// IMP=0x00000000008235ef
+ (Class)sentinelTileType;	// IMP=0x0000000000823243
+ (id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;	// IMP=0x0000000000a4e0b0
- (void).cxx_destruct;	// IMP=0x00000000008293db
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000082918b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000828ad2
- (unsigned long long)hash;	// IMP=0x00000000008288b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082857f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000827d77
- (void)copyTo:(id)arg1;	// IMP=0x00000000008278ec
- (void)writeTo:(id)arg1;	// IMP=0x00000000008271e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008271da
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000826c07
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000826bf5
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000082508a
- (id)jsonRepresentation;	// IMP=0x0000000000824f78
- (id)dictionaryRepresentation;	// IMP=0x0000000000823f7a
- (id)description;	// IMP=0x0000000000823ecb
- (id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000823e89
- (unsigned long long)deviceSKUAllowlistsCount;	// IMP=0x0000000000823e5d
- (void)addDeviceSKUAllowlist:(id)arg1;	// IMP=0x0000000000823da8
- (void)clearDeviceSKUAllowlists;	// IMP=0x0000000000823d7f
@property(retain, nonatomic) NSMutableArray *deviceSKUAllowlists;
@property(nonatomic) _Bool hasUseAuthProxy;
@property(nonatomic) _Bool useAuthProxy;
- (int)StringAsRequestStyle:(id)arg1;	// IMP=0x0000000000823b84
- (id)requestStyleAsString:(int)arg1;	// IMP=0x0000000000823b2f
@property(nonatomic) _Bool hasRequestStyle;
@property(nonatomic) int requestStyle;
- (int)StringAsChecksumType:(id)arg1;	// IMP=0x0000000000823a5b
- (id)checksumTypeAsString:(int)arg1;	// IMP=0x0000000000823a06
@property(nonatomic) _Bool hasChecksumType;
@property(nonatomic) int checksumType;
- (id)countryRegionAllowlistAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000823955
- (unsigned long long)countryRegionAllowlistsCount;	// IMP=0x0000000000823929
- (void)addCountryRegionAllowlist:(id)arg1;	// IMP=0x0000000000823874
- (void)clearCountryRegionAllowlists;	// IMP=0x000000000082384b
@property(retain, nonatomic) NSMutableArray *countryRegionAllowlists;
- (int)StringAsUpdateBehavior:(id)arg1;	// IMP=0x00000000008236cb
- (id)updateBehaviorAsString:(int)arg1;	// IMP=0x0000000000823676
@property(nonatomic) _Bool hasUpdateBehavior;
@property(nonatomic) int updateBehavior;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008235be
- (unsigned long long)supportedLanguagesCount;	// IMP=0x0000000000823592
- (void)addSupportedLanguage:(id)arg1;	// IMP=0x00000000008234dd
- (void)clearSupportedLanguages;	// IMP=0x00000000008234b4
@property(retain, nonatomic) NSMutableArray *supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL;
@property(readonly, nonatomic) _Bool hasLocalizationURL;
- (id)sentinelTileAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000823212
- (unsigned long long)sentinelTilesCount;	// IMP=0x00000000008231e6
- (void)addSentinelTile:(id)arg1;	// IMP=0x0000000000823131
- (void)clearSentinelTiles;	// IMP=0x0000000000823108
@property(retain, nonatomic) NSMutableArray *sentinelTiles;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000822f79
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000822e86
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;	// IMP=0x0000000000822df3
- (void)clearAvailableTiles;	// IMP=0x0000000000822da1
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned long long availableTilesCount;
@property(nonatomic) _Bool hasTimeToLiveSeconds;
@property(nonatomic) unsigned int timeToLiveSeconds;
@property(nonatomic) unsigned int version;
- (int)StringAsSize:(id)arg1;	// IMP=0x0000000000822a59
- (id)sizeAsString:(int)arg1;	// IMP=0x00000000008229f3
@property(nonatomic) int size;
- (int)StringAsScale:(id)arg1;	// IMP=0x0000000000822935
- (id)scaleAsString:(int)arg1;	// IMP=0x00000000008228cf
@property(nonatomic) int scale;
- (int)StringAsStyle:(id)arg1;	// IMP=0x0000000000821ec8
- (id)styleAsString:(int)arg1;	// IMP=0x00000000008219d5
@property(nonatomic) int style;
@property(retain, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) _Bool hasBaseURL;
- (void)dealloc;	// IMP=0x0000000000820452
- (id)initWithData:(id)arg1;	// IMP=0x00000000008203f6
- (id)init;	// IMP=0x000000000082039a
- (void)_resetBestLanguage;	// IMP=0x0000000000a4e44b
- (_Bool)isEquivalentTileSet:(id)arg1;	// IMP=0x0000000000a4e358
- (id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2;	// IMP=0x0000000000a4e1bb
- (_Bool)isDisputedBordersAllowlistedForCountry:(id)arg1 region:(id)arg2;	// IMP=0x0000000000a4e07c
- (id)_bestCountryRegionAllowlistMatchForCountry:(id)arg1 region:(id)arg2;	// IMP=0x0000000000a4dcab
- (id)bestLanguageWithOverrideLocale:(id)arg1;	// IMP=0x0000000000a4db0a
- (id)dataForGenericTileType:(int)arg1 configuration:(id)arg2;	// IMP=0x0000000000a4d8ee
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a4d886
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(CDStruct_90e2a262)arg2;	// IMP=0x0000000000a4d7ec
- (unsigned int)maximumZoomLevelForMapPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000a4d768
- (unsigned int)minimumZoomLevelForMapPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000a4d3de
- (unsigned int)maximumZoomLevelInRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000a4d352
- (unsigned int)minimumZoomLevelInRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000a4d288

@end

