//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDQuickLinkParams : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _quickLinkItemIndex;	// 16 = 0x10
    struct {
        unsigned int has_quickLinkItemIndex:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000bcfbdc
- (void).cxx_destruct;	// IMP=0x0000000000bcfee1
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000bcfe9b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000bcfe31
- (unsigned long long)hash;	// IMP=0x0000000000bcfdea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bcfd2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bcfcaf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000bcfc5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bcfbf8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bcfbe9
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000bcfb7c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000bcfb6a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000bcfa8d
- (id)jsonRepresentation;	// IMP=0x0000000000bcf97b
- (id)dictionaryRepresentation;	// IMP=0x0000000000bcf7a7
- (id)description;	// IMP=0x0000000000bcf6f8
@property(nonatomic) _Bool hasQuickLinkItemIndex;
@property(nonatomic) int quickLinkItemIndex;

@end

