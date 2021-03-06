//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParametersPoiAddressOnly : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    GEOPDViewportInfo *_viewportInfo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _maxResults;	// 52 = 0x34
    _Bool _highlightDiff;	// 56 = 0x38
    CDStruct_f55cf389 _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004e5a80
- (void).cxx_destruct;	// IMP=0x00000000004e641c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004e63ab
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004e61ec
- (unsigned long long)hash;	// IMP=0x00000000004e6141
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e5ff0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e5dd6
- (void)copyTo:(id)arg1;	// IMP=0x00000000004e5cc7
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000004e5c96
- (void)writeTo:(id)arg1;	// IMP=0x00000000004e5a9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004e5a8d
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000004e5974
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000004e5962
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004e56d5
- (id)jsonRepresentation;	// IMP=0x00000000004e55c3
- (id)dictionaryRepresentation;	// IMP=0x00000000004e52a0
- (id)description;	// IMP=0x00000000004e51f1
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasQuery;
- (id)initWithData:(id)arg1;	// IMP=0x00000000004e4667
- (id)init;	// IMP=0x00000000004e460b

@end

