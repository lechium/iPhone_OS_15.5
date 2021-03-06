//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTileSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_baseURL;	// 24 = 0x18
    NSMutableArray *_countryRegionAllowlists;	// 32 = 0x20
    NSMutableArray *_deviceSKUAllowlists;	// 40 = 0x28
    NSString *_localizationURL;	// 48 = 0x30
    NSString *_multiTileURL;	// 56 = 0x38
    NSMutableArray *_supportedLanguages;	// 64 = 0x40
    NSMutableArray *_validVersions;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _alternativeMultipathTCPPort;	// 92 = 0x5c
    int _checksumType;	// 96 = 0x60
    unsigned int _dataSet;	// 100 = 0x64
    int _requestStyle;	// 104 = 0x68
    int _scale;	// 108 = 0x6c
    int _size;	// 112 = 0x70
    int _style;	// 116 = 0x74
    int _updateBehavior;	// 120 = 0x78
    _Bool _multiTileURLUsesStatusCodes;	// 124 = 0x7c
    _Bool _supportsMultipathTCP;	// 125 = 0x7d
    _Bool _useAuthProxy;	// 126 = 0x7e
    struct {
        unsigned int has_alternativeMultipathTCPPort:1;
        unsigned int has_checksumType:1;
        unsigned int has_dataSet:1;
        unsigned int has_requestStyle:1;
        unsigned int has_updateBehavior:1;
        unsigned int has_multiTileURLUsesStatusCodes:1;
        unsigned int has_supportsMultipathTCP:1;
        unsigned int has_useAuthProxy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_baseURL:1;
        unsigned int read_countryRegionAllowlists:1;
        unsigned int read_deviceSKUAllowlists:1;
        unsigned int read_localizationURL:1;
        unsigned int read_multiTileURL:1;
        unsigned int read_supportedLanguages:1;
        unsigned int read_validVersions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 128 = 0x80
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012785e0
+ (Class)deviceSKUAllowlistType;	// IMP=0x0000000001274d0a
+ (Class)countryRegionAllowlistType;	// IMP=0x000000000127468f
+ (Class)supportedLanguageType;	// IMP=0x000000000127428a
+ (Class)validVersionType;	// IMP=0x0000000001273c8e
- (void).cxx_destruct;	// IMP=0x000000000127aa95
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000127a720
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000127a082
- (unsigned long long)hash;	// IMP=0x0000000001279e3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001279a8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001279270
- (void)copyTo:(id)arg1;	// IMP=0x0000000001278e14
- (void)writeTo:(id)arg1;	// IMP=0x00000000012785fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012785ed
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001278265
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001278253
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001276106
- (id)jsonRepresentation;	// IMP=0x0000000001275ff4
- (id)dictionaryRepresentation;	// IMP=0x0000000001274dca
- (id)description;	// IMP=0x0000000001274d1b
- (id)deviceSKUAllowlistAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001274cd9
- (unsigned long long)deviceSKUAllowlistsCount;	// IMP=0x0000000001274cad
- (void)addDeviceSKUAllowlist:(id)arg1;	// IMP=0x0000000001274bf6
- (void)clearDeviceSKUAllowlists;	// IMP=0x0000000001274bcb
@property(retain, nonatomic) NSMutableArray *deviceSKUAllowlists;
@property(nonatomic) _Bool hasAlternativeMultipathTCPPort;
@property(nonatomic) unsigned int alternativeMultipathTCPPort;
@property(nonatomic) _Bool hasSupportsMultipathTCP;
@property(nonatomic) _Bool supportsMultipathTCP;
@property(nonatomic) _Bool hasUseAuthProxy;
@property(nonatomic) _Bool useAuthProxy;
- (int)StringAsRequestStyle:(id)arg1;	// IMP=0x00000000012748f5
- (id)requestStyleAsString:(int)arg1;	// IMP=0x00000000012748a0
@property(nonatomic) _Bool hasRequestStyle;
@property(nonatomic) int requestStyle;
@property(nonatomic) _Bool hasDataSet;
@property(nonatomic) unsigned int dataSet;
- (int)StringAsChecksumType:(id)arg1;	// IMP=0x0000000001274767
- (id)checksumTypeAsString:(int)arg1;	// IMP=0x0000000001274712
@property(nonatomic) _Bool hasChecksumType;
@property(nonatomic) int checksumType;
- (id)countryRegionAllowlistAtIndex:(unsigned long long)arg1;	// IMP=0x000000000127465e
- (unsigned long long)countryRegionAllowlistsCount;	// IMP=0x0000000001274632
- (void)addCountryRegionAllowlist:(id)arg1;	// IMP=0x000000000127457b
- (void)clearCountryRegionAllowlists;	// IMP=0x0000000001274550
@property(retain, nonatomic) NSMutableArray *countryRegionAllowlists;
- (int)StringAsUpdateBehavior:(id)arg1;	// IMP=0x00000000012743ce
- (id)updateBehaviorAsString:(int)arg1;	// IMP=0x0000000001274379
@property(nonatomic) _Bool hasUpdateBehavior;
@property(nonatomic) int updateBehavior;
@property(nonatomic) _Bool hasMultiTileURLUsesStatusCodes;
@property(nonatomic) _Bool multiTileURLUsesStatusCodes;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001274259
- (unsigned long long)supportedLanguagesCount;	// IMP=0x000000000127422d
- (void)addSupportedLanguage:(id)arg1;	// IMP=0x0000000001274176
- (void)clearSupportedLanguages;	// IMP=0x000000000127414b
@property(retain, nonatomic) NSMutableArray *supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL;
@property(readonly, nonatomic) _Bool hasLocalizationURL;
- (int)StringAsSize:(id)arg1;	// IMP=0x0000000001273e55
- (id)sizeAsString:(int)arg1;	// IMP=0x0000000001273def
@property(nonatomic) int size;
- (int)StringAsScale:(id)arg1;	// IMP=0x0000000001273d31
- (id)scaleAsString:(int)arg1;	// IMP=0x0000000001273ccb
@property(nonatomic) int scale;
- (id)validVersionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001273c5d
- (unsigned long long)validVersionsCount;	// IMP=0x0000000001273c31
- (void)addValidVersion:(id)arg1;	// IMP=0x0000000001273b7a
- (void)clearValidVersions;	// IMP=0x0000000001273b4f
@property(retain, nonatomic) NSMutableArray *validVersions;
- (int)StringAsStyle:(id)arg1;	// IMP=0x0000000001273054
- (id)styleAsString:(int)arg1;	// IMP=0x0000000001272b62
@property(nonatomic) int style;
@property(retain, nonatomic) NSString *multiTileURL;
@property(readonly, nonatomic) _Bool hasMultiTileURL;
@property(retain, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) _Bool hasBaseURL;
- (id)initWithData:(id)arg1;	// IMP=0x000000000127120f
- (id)init;	// IMP=0x00000000012711b3

@end

