//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _additionalPlaceTypes;	// 16 = 0x10
    NSString *_deviceCountryCode;	// 40 = 0x28
    NSString *_deviceSku;	// 48 = 0x30
    NSString *_displayRegion;	// 56 = 0x38
    NSMutableArray *_locations;	// 64 = 0x40
    NSMutableArray *_serviceTags;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_additionalPlaceTypes:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayRegion:1;
        unsigned int read_locations:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fb2aa8
+ (Class)serviceTagType;	// IMP=0x0000000000fb1353
+ (Class)locationType;	// IMP=0x0000000000fb0430
- (void).cxx_destruct;	// IMP=0x0000000000fb41a0
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fb3e7f
- (unsigned long long)hash;	// IMP=0x0000000000fb3db4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fb3c0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fb375d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fb34b9
- (Class)responseClass;	// IMP=0x0000000000fb34a8
- (unsigned int)requestTypeCode;	// IMP=0x0000000000fb349d
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000fb334c
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000fb321f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fb2e51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fb2e44
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fb285d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fb284b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fb1cd3
- (id)jsonRepresentation;	// IMP=0x0000000000fb1cc4
- (id)dictionaryRepresentation;	// IMP=0x0000000000fb1413
- (id)description;	// IMP=0x0000000000fb1364
- (id)serviceTagAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fb1322
- (unsigned long long)serviceTagsCount;	// IMP=0x0000000000fb12f6
- (void)addServiceTag:(id)arg1;	// IMP=0x0000000000fb1242
- (void)clearServiceTags;	// IMP=0x0000000000fb121a
@property(retain, nonatomic) NSMutableArray *serviceTags;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) _Bool hasDeviceSku;
@property(retain, nonatomic) NSString *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;	// IMP=0x0000000000fb0934
- (id)additionalPlaceTypesAsString:(int)arg1;	// IMP=0x0000000000fb06a7
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000fb0685
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fb05af
- (void)addAdditionalPlaceType:(int)arg1;	// IMP=0x0000000000fb0576
- (void)clearAdditionalPlaceTypes;	// IMP=0x0000000000fb055a
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
- (id)locationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fb03ff
- (unsigned long long)locationsCount;	// IMP=0x0000000000fb03d3
- (void)addLocation:(id)arg1;	// IMP=0x0000000000fb031f
- (void)clearLocations;	// IMP=0x0000000000fb02f7
@property(retain, nonatomic) NSMutableArray *locations;
- (void)dealloc;	// IMP=0x0000000000faf66d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000faf611
- (id)init;	// IMP=0x0000000000faf5b5

@end
