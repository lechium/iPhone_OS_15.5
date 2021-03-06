//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOLPRValueMapping : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_mappedValues;	// 16 = 0x10
    NSMutableArray *_timeConditions;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_mappedValues:1;
        unsigned int read_timeConditions:1;
        unsigned int read_values:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000068a172
+ (Class)timeConditionsType;	// IMP=0x000000000068966a
+ (Class)mappedValueType;	// IMP=0x0000000000689405
+ (Class)valueType;	// IMP=0x00000000006891a0
- (void).cxx_destruct;	// IMP=0x000000000068b237
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000068aee7
- (unsigned long long)hash;	// IMP=0x000000000068ae6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068ad46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068a80b
- (void)copyTo:(id)arg1;	// IMP=0x000000000068a5ae
- (void)writeTo:(id)arg1;	// IMP=0x000000000068a18e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068a17f
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000068a066
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000068a054
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000689a64
- (id)jsonRepresentation;	// IMP=0x0000000000689a55
- (id)dictionaryRepresentation;	// IMP=0x000000000068972a
- (id)description;	// IMP=0x000000000068967b
- (id)timeConditionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000689639
- (unsigned long long)timeConditionsCount;	// IMP=0x000000000068960d
- (void)addTimeConditions:(id)arg1;	// IMP=0x0000000000689559
- (void)clearTimeConditions;	// IMP=0x0000000000689531
@property(retain, nonatomic) NSMutableArray *timeConditions;
- (id)mappedValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006893d4
- (unsigned long long)mappedValuesCount;	// IMP=0x00000000006893a8
- (void)addMappedValue:(id)arg1;	// IMP=0x00000000006892f4
- (void)clearMappedValues;	// IMP=0x00000000006892cc
@property(retain, nonatomic) NSMutableArray *mappedValues;
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068916f
- (unsigned long long)valuesCount;	// IMP=0x0000000000689143
- (void)addValue:(id)arg1;	// IMP=0x000000000068908f
- (void)clearValues;	// IMP=0x0000000000689067
@property(retain, nonatomic) NSMutableArray *values;
- (id)initWithData:(id)arg1;	// IMP=0x00000000006888fb
- (id)init;	// IMP=0x000000000068889f

@end

