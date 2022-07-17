//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOClientNetworkMetrics *_networkMetrics;	// 16 = 0x10
    double _queuedTime;	// 24 = 0x18
    int _responseSource;	// 32 = 0x20
    struct {
        unsigned int has_queuedTime:1;
        unsigned int has_responseSource:1;
    } _flags;	// 36 = 0x24
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f4e189
- (void).cxx_destruct;	// IMP=0x0000000000f4ee3b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f4edd5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f4ed0c
- (unsigned long long)hash;	// IMP=0x0000000000f4eb91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f4ea63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f4e995
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f4e8f8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f4e84f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f4e840
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f4dbc6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f4dbb4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f4d8fa
- (id)jsonRepresentation;	// IMP=0x0000000000f4d7e8
- (id)dictionaryRepresentation;	// IMP=0x0000000000f4d4e1
- (id)description;	// IMP=0x0000000000f4d432
@property(nonatomic) _Bool hasQueuedTime;
@property(nonatomic) double queuedTime;
@property(retain, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property(readonly, nonatomic) _Bool hasNetworkMetrics;
- (int)StringAsResponseSource:(id)arg1;	// IMP=0x0000000000f4d2ec
- (id)responseSourceAsString:(int)arg1;	// IMP=0x0000000000f4d26c
@property(nonatomic) _Bool hasResponseSource;
@property(nonatomic) int responseSource;

@end
