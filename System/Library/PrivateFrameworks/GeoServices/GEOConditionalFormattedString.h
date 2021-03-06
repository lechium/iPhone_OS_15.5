//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerConditionalString-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOCondition, GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOConditionalFormattedString : PBCodable <GEOServerConditionalString, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOCondition *_condition;	// 24 = 0x18
    GEOFormattedString *_formattedString;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_condition:1;
        unsigned int read_formattedString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000086f0d5
- (void).cxx_destruct;	// IMP=0x000000000086fb02
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000086fa69
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000086f8d0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000086f783
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000086f5c1
- (void)copyTo:(id)arg1;	// IMP=0x000000000086f4f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000086f2f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000086f2e2
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000086ee22
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000086ee10
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000086ec4f
- (id)jsonRepresentation;	// IMP=0x000000000086eb3d
- (id)dictionaryRepresentation;	// IMP=0x000000000086e8b5
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOCondition *condition;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) GEOFormattedString *formattedString;
@property(readonly, nonatomic) _Bool hasFormattedString;
- (id)initWithData:(id)arg1;	// IMP=0x000000000086ded8
- (id)init;	// IMP=0x000000000086de7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

