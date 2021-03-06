//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORouteTrafficDetail : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_spokenRouteName;	// 24 = 0x18
    NSString *_unabbreviatedRouteName;	// 32 = 0x20
    NSString *_writtenRouteName;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _routeTrafficCondition;	// 60 = 0x3c
    struct {
        unsigned int has_routeTrafficCondition:1;
        unsigned int read_unknownFields:1;
        unsigned int read_spokenRouteName:1;
        unsigned int read_unabbreviatedRouteName:1;
        unsigned int read_writtenRouteName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000092fb4a
- (void).cxx_destruct;	// IMP=0x00000000009306d9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000930688
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009304dd
- (unsigned long long)hash;	// IMP=0x0000000000930434
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009302db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009300b1
- (void)copyTo:(id)arg1;	// IMP=0x000000000092ffa1
- (void)writeTo:(id)arg1;	// IMP=0x000000000092fd8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000092fd7c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000092f897
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000092f885
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000092f4ee
- (id)jsonRepresentation;	// IMP=0x000000000092f3dc
- (id)dictionaryRepresentation;	// IMP=0x000000000092f090
- (id)description;	// IMP=0x000000000092efe1
@property(retain, nonatomic) NSString *unabbreviatedRouteName;
@property(readonly, nonatomic) _Bool hasUnabbreviatedRouteName;
@property(retain, nonatomic) NSString *spokenRouteName;
@property(readonly, nonatomic) _Bool hasSpokenRouteName;
@property(retain, nonatomic) NSString *writtenRouteName;
@property(readonly, nonatomic) _Bool hasWrittenRouteName;
- (int)StringAsRouteTrafficCondition:(id)arg1;	// IMP=0x000000000092e43c
- (id)routeTrafficConditionAsString:(int)arg1;	// IMP=0x000000000092e3a4
@property(nonatomic) _Bool hasRouteTrafficCondition;
@property(nonatomic) int routeTrafficCondition;
- (id)initWithData:(id)arg1;	// IMP=0x000000000092e2e1
- (id)init;	// IMP=0x000000000092e285

@end

