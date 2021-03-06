//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBUnknownFields;

@interface GEORoadDescription : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_formattedDescription;	// 16 = 0x10
    int _navigationFriendliness;	// 24 = 0x18
    struct {
        unsigned int has_navigationFriendliness:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008ee680
- (void).cxx_destruct;	// IMP=0x00000000008eecda
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008eec74
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008eebd3
- (unsigned long long)hash;	// IMP=0x00000000008eeb6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008eea72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ee9c4
- (void)copyTo:(id)arg1;	// IMP=0x00000000008ee94f
- (void)writeTo:(id)arg1;	// IMP=0x00000000008ee8d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008ee8c1
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008ee2c2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008ee2b0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008ee062
- (id)jsonRepresentation;	// IMP=0x00000000008edf50
- (id)dictionaryRepresentation;	// IMP=0x00000000008edc82
- (id)description;	// IMP=0x00000000008edbd3
- (int)StringAsNavigationFriendliness:(id)arg1;	// IMP=0x00000000008edb24
- (id)navigationFriendlinessAsString:(int)arg1;	// IMP=0x00000000008edaa5
@property(nonatomic) _Bool hasNavigationFriendliness;
@property(nonatomic) int navigationFriendliness;
@property(retain, nonatomic) GEOFormattedString *formattedDescription;
@property(readonly, nonatomic) _Bool hasFormattedDescription;

@end

