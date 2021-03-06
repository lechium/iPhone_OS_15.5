//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOARGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_arrowLabel;	// 24 = 0x18
    NSMutableArray *_gapRanges;	// 32 = 0x20
    GEOFormattedString *_instruction;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _type;	// 60 = 0x3c
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrowLabel:1;
        unsigned int read_gapRanges:1;
        unsigned int read_instruction:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000842fbe
+ (Class)gapRangeType;	// IMP=0x0000000000841c7e
- (void).cxx_destruct;	// IMP=0x0000000000844758
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008445da
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000844304
- (unsigned long long)hash;	// IMP=0x000000000084425b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000844102
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000843d90
- (void)copyTo:(id)arg1;	// IMP=0x0000000000843c06
- (void)writeTo:(id)arg1;	// IMP=0x000000000084373b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000084372c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000842839
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000842827
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000842362
- (id)jsonRepresentation;	// IMP=0x0000000000842250
- (id)dictionaryRepresentation;	// IMP=0x0000000000841d3e
- (id)description;	// IMP=0x0000000000841c8f
- (id)gapRangeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000841c4d
- (unsigned long long)gapRangesCount;	// IMP=0x0000000000841c21
- (void)addGapRange:(id)arg1;	// IMP=0x0000000000841b6d
- (void)clearGapRanges;	// IMP=0x0000000000841b45
@property(retain, nonatomic) NSMutableArray *gapRanges;
@property(retain, nonatomic) NSString *arrowLabel;
@property(readonly, nonatomic) _Bool hasArrowLabel;
@property(retain, nonatomic) GEOFormattedString *instruction;
@property(readonly, nonatomic) _Bool hasInstruction;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000840d45
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000840cdf
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000840c1c
- (id)init;	// IMP=0x0000000000840bc0

@end

