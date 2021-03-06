//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOPublisherAttributionSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_appAdamID;	// 16 = 0x10
    NSMutableArray *_localizedAttributions;	// 24 = 0x18
    NSString *_websiteURL;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_appAdamID:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_websiteURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fca1e6
+ (Class)localizedAttributionType;	// IMP=0x0000000000fc9548
- (void).cxx_destruct;	// IMP=0x0000000000fcaee4
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fcad34
- (unsigned long long)hash;	// IMP=0x0000000000fcacb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fcab93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fca850
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fca6e9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fca403
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fca3f4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fc9f33
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fc9f21
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fc9baa
- (id)jsonRepresentation;	// IMP=0x0000000000fc9b9b
- (id)dictionaryRepresentation;	// IMP=0x0000000000fc9886
- (id)description;	// IMP=0x0000000000fc97d7
@property(retain, nonatomic) NSString *websiteURL;
@property(readonly, nonatomic) _Bool hasWebsiteURL;
@property(retain, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool hasAppAdamID;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fc9517
- (unsigned long long)localizedAttributionsCount;	// IMP=0x0000000000fc94eb
- (void)addLocalizedAttribution:(id)arg1;	// IMP=0x0000000000fc9437
- (void)clearLocalizedAttributions;	// IMP=0x0000000000fc940f
@property(retain, nonatomic) NSMutableArray *localizedAttributions;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fc8c07
- (id)init;	// IMP=0x0000000000fc8bab

@end

