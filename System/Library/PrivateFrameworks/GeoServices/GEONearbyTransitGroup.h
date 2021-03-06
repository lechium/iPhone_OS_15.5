//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONearbyTransitGroup : PBCodable <NSCopying>
{
    unsigned int _linesShown;	// 8 = 0x8
    unsigned int _lines;	// 12 = 0xc
    struct {
        unsigned int has_linesShown:1;
        unsigned int has_lines:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000152b866
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000152bb2b
- (unsigned long long)hash;	// IMP=0x000000000152bacb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000152b9e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000152b965
- (void)copyTo:(id)arg1;	// IMP=0x000000000152b8f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000152b882
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000152b873
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000152b806
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000152b7f4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000152b69c
- (id)jsonRepresentation;	// IMP=0x000000000152b68d
- (id)dictionaryRepresentation;	// IMP=0x000000000152b561
- (id)description;	// IMP=0x000000000152b4b2
@property(nonatomic) _Bool hasLinesShown;
@property(nonatomic) unsigned int linesShown;
@property(nonatomic) _Bool hasLines;
@property(nonatomic) unsigned int lines;

@end

