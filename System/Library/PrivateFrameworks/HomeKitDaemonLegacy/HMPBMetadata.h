//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_hapCategories;	// 8 = 0x8
    NSMutableArray *_hapCharacteristics;	// 16 = 0x10
    NSMutableArray *_hapServices;	// 24 = 0x18
    int _version;	// 32 = 0x20
    struct {
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

+ (Class)hapCategoriesType;	// IMP=0x00000000008d6816
+ (Class)hapServicesType;	// IMP=0x00000000008d6805
+ (Class)hapCharacteristicsType;	// IMP=0x00000000008d67f4
- (void).cxx_destruct;	// IMP=0x00000000008d648d
@property(retain, nonatomic) NSMutableArray *hapCategories; // @synthesize hapCategories=_hapCategories;
@property(retain, nonatomic) NSMutableArray *hapServices; // @synthesize hapServices=_hapServices;
@property(retain, nonatomic) NSMutableArray *hapCharacteristics; // @synthesize hapCharacteristics=_hapCharacteristics;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008d60bd
- (unsigned long long)hash;	// IMP=0x00000000008d6026
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008d5ef6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008d5a95
- (void)copyTo:(id)arg1;	// IMP=0x00000000008d5884
- (void)writeTo:(id)arg1;	// IMP=0x00000000008d557b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008d556e
- (id)dictionaryRepresentation;	// IMP=0x00000000008d4f50
- (id)description;	// IMP=0x00000000008d4ea1
- (id)hapCategoriesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4e84
- (unsigned long long)hapCategoriesCount;	// IMP=0x00000000008d4e67
- (void)addHapCategories:(id)arg1;	// IMP=0x00000000008d4dfd
- (void)clearHapCategories;	// IMP=0x00000000008d4de0
- (id)hapServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4dc3
- (unsigned long long)hapServicesCount;	// IMP=0x00000000008d4da6
- (void)addHapServices:(id)arg1;	// IMP=0x00000000008d4d3c
- (void)clearHapServices;	// IMP=0x00000000008d4d1f
- (id)hapCharacteristicsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4d02
- (unsigned long long)hapCharacteristicsCount;	// IMP=0x00000000008d4ce5
- (void)addHapCharacteristics:(id)arg1;	// IMP=0x00000000008d4c7b
- (void)clearHapCharacteristics;	// IMP=0x00000000008d4c5e
@property(nonatomic) _Bool hasVersion;

@end

