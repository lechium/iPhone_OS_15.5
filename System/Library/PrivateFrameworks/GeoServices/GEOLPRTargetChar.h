//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLPRTargetChar : PBCodable <NSCopying>
{
    int _charIndex;	// 8 = 0x8
    int _type;	// 12 = 0xc
    struct {
        unsigned int has_charIndex:1;
        unsigned int has_type:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000006861bd
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000686484
- (unsigned long long)hash;	// IMP=0x0000000000686422
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000686339
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006862bc
- (void)copyTo:(id)arg1;	// IMP=0x000000000068624a
- (void)writeTo:(id)arg1;	// IMP=0x00000000006861d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006861ca
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000068615d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000068614b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000685f46
- (id)jsonRepresentation;	// IMP=0x0000000000685f37
- (id)dictionaryRepresentation;	// IMP=0x0000000000685dce
- (id)description;	// IMP=0x0000000000685d1f
@property(nonatomic) _Bool hasCharIndex;
@property(nonatomic) int charIndex;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000685c2d
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000685bc6
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end

