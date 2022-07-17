//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventGridDurationEndStateErrorInfo : PBCodable <NSCopying>
{
    unsigned int _count;	// 8 = 0x8
    int _type;	// 12 = 0xc
    struct {
        unsigned int has_count:1;
        unsigned int has_type:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013b88a1
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013b8b67
- (unsigned long long)hash;	// IMP=0x00000000013b8b06
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013b8a1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013b89a0
- (void)copyTo:(id)arg1;	// IMP=0x00000000013b892e
- (void)writeTo:(id)arg1;	// IMP=0x00000000013b88bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013b88ae
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013b8841
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013b8834
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013b863e
- (id)jsonRepresentation;	// IMP=0x00000000013b8634
- (id)dictionaryRepresentation;	// IMP=0x00000000013b84c7
- (id)description;	// IMP=0x00000000013b8418
- (int)StringAsType:(id)arg1;	// IMP=0x00000000013b8364
- (id)typeAsString:(int)arg1;	// IMP=0x00000000013b82e6
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) unsigned int count;

@end
