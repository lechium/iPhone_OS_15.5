//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_locationResults;	// 16 = 0x10
    NSMutableArray *_networkResults;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _statusCode;	// 44 = 0x2c
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_locationResults:1;
        unsigned int read_networkResults:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a2a052
+ (Class)networkResultsType;	// IMP=0x0000000000a290f9
+ (Class)locationResultsType;	// IMP=0x0000000000a28e94
- (void).cxx_destruct;	// IMP=0x0000000000a2b608
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a2b38e
- (unsigned long long)hash;	// IMP=0x0000000000a2b2fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a2b1d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a2ad97
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a2abb0
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000a2a93b
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000a2a680
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a2a2ee
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a2a2df
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a29d9f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a29d8d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a29753
- (id)jsonRepresentation;	// IMP=0x0000000000a29744
- (id)dictionaryRepresentation;	// IMP=0x0000000000a291b9
- (id)description;	// IMP=0x0000000000a2910a
- (id)networkResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a290c8
- (unsigned long long)networkResultsCount;	// IMP=0x0000000000a2909c
- (void)addNetworkResults:(id)arg1;	// IMP=0x0000000000a28fe8
- (void)clearNetworkResults;	// IMP=0x0000000000a28fc0
@property(retain, nonatomic) NSMutableArray *networkResults;
- (id)locationResultsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000a28e63
- (unsigned long long)locationResultsCount;	// IMP=0x0000000000a28e37
- (void)addLocationResults:(id)arg1;	// IMP=0x0000000000a28d83
- (void)clearLocationResults;	// IMP=0x0000000000a28d5b
@property(retain, nonatomic) NSMutableArray *locationResults;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x0000000000a282f0
- (id)statusCodeAsString:(int)arg1;	// IMP=0x0000000000a28216
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a28153
- (id)init;	// IMP=0x0000000000a280f7

@end

