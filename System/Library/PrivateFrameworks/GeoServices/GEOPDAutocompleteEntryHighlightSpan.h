//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _length;	// 16 = 0x10
    unsigned int _startIndex;	// 20 = 0x14
    struct {
        unsigned int has_length:1;
        unsigned int has_startIndex:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000063ea5b
- (void).cxx_destruct;	// IMP=0x000000000063ee28
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000063ede2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000063ed5b
- (unsigned long long)hash;	// IMP=0x000000000063ecfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063ec12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063eb75
- (void)copyTo:(id)arg1;	// IMP=0x000000000063eb03
- (void)writeTo:(id)arg1;	// IMP=0x000000000063ea77
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063ea68
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000063e9fb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000063e9e9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000063e896
- (id)jsonRepresentation;	// IMP=0x000000000063e784
- (id)dictionaryRepresentation;	// IMP=0x000000000063e55b
- (id)description;	// IMP=0x000000000063e4ac
@property(nonatomic) _Bool hasLength;
@property(nonatomic) unsigned int length;
@property(nonatomic) _Bool hasStartIndex;
@property(nonatomic) unsigned int startIndex;

@end

