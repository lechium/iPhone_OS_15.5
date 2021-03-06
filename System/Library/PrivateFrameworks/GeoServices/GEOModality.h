//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOModality : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    int _confidence;	// 16 = 0x10
    _Bool _expectedModality;	// 20 = 0x14
    _Bool _notMoving;	// 21 = 0x15
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_confidence:1;
        unsigned int has_expectedModality:1;
        unsigned int has_notMoving:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c6dc52
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c6e15c
- (unsigned long long)hash;	// IMP=0x0000000000c6dfd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6de80
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6ddcd
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c6dd21
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6dc6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c6dc5f
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c6dbf2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c6dbe0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c6d912
- (id)jsonRepresentation;	// IMP=0x0000000000c6d903
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6d6e5
- (id)description;	// IMP=0x0000000000c6d636
- (int)StringAsConfidence:(id)arg1;	// IMP=0x0000000000c6d5a4
- (id)confidenceAsString:(int)arg1;	// IMP=0x0000000000c6d53e
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) int confidence;
@property(nonatomic) _Bool hasNotMoving;
@property(nonatomic) _Bool notMoving;
@property(nonatomic) _Bool hasExpectedModality;
@property(nonatomic) _Bool expectedModality;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

