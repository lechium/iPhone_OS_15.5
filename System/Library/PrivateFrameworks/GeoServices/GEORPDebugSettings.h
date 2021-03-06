//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORPDebugSettings : PBCodable <NSCopying>
{
    NSMutableArray *_keywords;	// 8 = 0x8
    int _mode;	// 16 = 0x10
    struct {
        unsigned int has_mode:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001154a72
+ (Class)keywordsType;	// IMP=0x000000000115421e
- (void).cxx_destruct;	// IMP=0x00000000011553aa
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001155220
- (unsigned long long)hash;	// IMP=0x00000000011551bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011550c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001154ed5
- (void)copyTo:(id)arg1;	// IMP=0x0000000001154dd9
- (void)writeTo:(id)arg1;	// IMP=0x0000000001154c84
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001154c75
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001154788
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000115477b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001154421
- (id)jsonRepresentation;	// IMP=0x0000000001154417
- (id)dictionaryRepresentation;	// IMP=0x00000000011542de
- (id)description;	// IMP=0x000000000115422f
- (id)keywordsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001154201
- (unsigned long long)keywordsCount;	// IMP=0x00000000011541e4
- (void)addKeywords:(id)arg1;	// IMP=0x000000000115417a
- (void)clearKeywords;	// IMP=0x000000000115415d
@property(retain, nonatomic) NSMutableArray *keywords;
- (int)StringAsMode:(id)arg1;	// IMP=0x00000000011540a2
- (id)modeAsString:(int)arg1;	// IMP=0x000000000115403c
@property(nonatomic) _Bool hasMode;
@property(nonatomic) int mode;

@end

