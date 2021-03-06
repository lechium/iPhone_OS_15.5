//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPSiriContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_additionalDetails;	// 16 = 0x10
    NSString *_siriIncidentType;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_additionalDetails:1;
        unsigned int read_siriIncidentType:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000036da6e
- (void).cxx_destruct;	// IMP=0x000000000036e059
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000036dfe4
- (unsigned long long)hash;	// IMP=0x000000000036df88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036de97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036dcef
- (void)copyTo:(id)arg1;	// IMP=0x000000000036dc21
- (void)writeTo:(id)arg1;	// IMP=0x000000000036da8a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000036da7b
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000036d962
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000036d950
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000036d7cc
- (id)jsonRepresentation;	// IMP=0x000000000036d7bd
- (id)dictionaryRepresentation;	// IMP=0x000000000036d6b4
- (id)description;	// IMP=0x000000000036d605
@property(retain, nonatomic) NSString *additionalDetails;
@property(readonly, nonatomic) _Bool hasAdditionalDetails;
@property(retain, nonatomic) NSString *siriIncidentType;
@property(readonly, nonatomic) _Bool hasSiriIncidentType;
- (id)initWithData:(id)arg1;	// IMP=0x000000000036cf65
- (id)init;	// IMP=0x000000000036cf09

@end

