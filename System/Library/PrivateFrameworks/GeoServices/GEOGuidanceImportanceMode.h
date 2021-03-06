//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOGuidanceImportanceMode : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _guidancePreferenceTypes;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008b067f
- (void).cxx_destruct;	// IMP=0x00000000008b0a05
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008b09bf
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008b090a
- (unsigned long long)hash;	// IMP=0x00000000008b08da
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008b0845
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008b07d7
- (void)copyTo:(id)arg1;	// IMP=0x00000000008b0710
- (void)writeTo:(id)arg1;	// IMP=0x00000000008b069b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008b068c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008b061f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008b060d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008b0338
- (id)jsonRepresentation;	// IMP=0x00000000008b0226
- (id)dictionaryRepresentation;	// IMP=0x00000000008aff96
- (id)description;	// IMP=0x00000000008afee7
- (int)StringAsGuidancePreferenceTypes:(id)arg1;	// IMP=0x00000000008afe85
- (id)guidancePreferenceTypesAsString:(int)arg1;	// IMP=0x00000000008afe30
- (void)setGuidancePreferenceTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008afe19
- (int)guidancePreferenceTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008afd4c
- (void)addGuidancePreferenceType:(int)arg1;	// IMP=0x00000000008afd39
- (void)clearGuidancePreferenceTypes;	// IMP=0x00000000008afd28
@property(readonly, nonatomic) int *guidancePreferenceTypes;
@property(readonly, nonatomic) unsigned long long guidancePreferenceTypesCount;
- (void)dealloc;	// IMP=0x00000000008afcc5

@end

