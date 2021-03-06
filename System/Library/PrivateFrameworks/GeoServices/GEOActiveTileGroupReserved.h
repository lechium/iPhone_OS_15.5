//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOActiveTileGroupReserved : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_authToken;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000081fec8
- (void).cxx_destruct;	// IMP=0x0000000000820369
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000820323
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000082029f
- (unsigned long long)hash;	// IMP=0x0000000000820264
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008201a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000820116
- (void)copyTo:(id)arg1;	// IMP=0x00000000008200c1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000820066
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000820057
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000081fc58
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000081fc4b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000081fb6b
- (id)jsonRepresentation;	// IMP=0x000000000081fa59
- (id)dictionaryRepresentation;	// IMP=0x000000000081f8a6
- (id)description;	// IMP=0x000000000081f7f7
@property(retain, nonatomic) NSString *authToken;
@property(readonly, nonatomic) _Bool hasAuthToken;

@end

