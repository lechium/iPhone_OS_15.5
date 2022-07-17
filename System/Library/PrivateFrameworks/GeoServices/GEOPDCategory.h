//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOPDCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_localizedNames;	// 16 = 0x10
    int _level;	// 24 = 0x18
    struct {
        unsigned int has_level:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000aa38c3
+ (Class)localizedNameType;	// IMP=0x0000000000aa2c2f
+ (_Bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;	// IMP=0x00000000009faf15
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;	// IMP=0x00000000009faace
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;	// IMP=0x00000000009fa7ca
- (void).cxx_destruct;	// IMP=0x0000000000aa4412
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000aa42a6
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000aa4107
- (unsigned long long)hash;	// IMP=0x0000000000aa40a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa3fa9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa3da2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000aa3ca6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aa3b22
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aa3b13
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000aa3525
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000aa3513
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000aa3212
- (id)jsonRepresentation;	// IMP=0x0000000000aa3100
- (id)dictionaryRepresentation;	// IMP=0x0000000000aa2cef
- (id)description;	// IMP=0x0000000000aa2c40
- (id)localizedNameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000aa2c12
- (unsigned long long)localizedNamesCount;	// IMP=0x0000000000aa2bf5
- (void)addLocalizedName:(id)arg1;	// IMP=0x0000000000aa2b8b
- (void)clearLocalizedNames;	// IMP=0x0000000000aa2b6e
@property(retain, nonatomic) NSMutableArray *localizedNames;
@property(nonatomic) _Bool hasLevel;
@property(nonatomic) int level;

@end
