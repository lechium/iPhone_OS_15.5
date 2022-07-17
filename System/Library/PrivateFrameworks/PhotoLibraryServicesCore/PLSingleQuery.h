//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PhotoLibraryServicesCore/NSCopying-Protocol.h>

@class NSData, NSDate, NSString, PLQueryCircularRegion;

@interface PLSingleQuery : PBCodable <NSCopying>
{
    int _comparator;	// 8 = 0x8
    NSData *_firstValue;	// 16 = 0x10
    int _key;	// 24 = 0x18
    NSData *_secondValue;	// 32 = 0x20
    int _unit;	// 40 = 0x28
    int _valueType;	// 44 = 0x2c
    struct {
        unsigned int comparator:1;
        unsigned int key:1;
        unsigned int unit:1;
        unsigned int valueType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a14c1
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) int comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSData *secondValue; // @synthesize secondValue=_secondValue;
@property(retain, nonatomic) NSData *firstValue; // @synthesize firstValue=_firstValue;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(nonatomic) int key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a1358
- (unsigned long long)hash;	// IMP=0x00000000000a126e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a10f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0fe2
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a0f03
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a0e1a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a0e0d
- (id)dictionaryRepresentation;	// IMP=0x00000000000a0c1e
- (id)description;	// IMP=0x00000000000a0b6f
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasComparator;
@property(readonly, nonatomic) _Bool hasSecondValue;
@property(readonly, nonatomic) _Bool hasFirstValue;
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) _Bool hasKey;
- (id)logDescription;	// IMP=0x00000000000609ec
- (void)setValueAndType:(id)arg1;	// IMP=0x0000000000060884
- (int)migratedComparator;	// IMP=0x0000000000060796
@property(retain, nonatomic) PLQueryCircularRegion *secondCircularRegionValue;
@property(retain, nonatomic) PLQueryCircularRegion *circularRegionValue;
@property(retain, nonatomic) NSDate *secondDateValue;
@property(retain, nonatomic) NSDate *dateValue;
@property(retain, nonatomic) NSString *secondStringValue;
@property(retain, nonatomic) NSString *stringValue;
@property(nonatomic) _Bool boolValue;
@property(nonatomic) long long secondIntegerValue;
@property(nonatomic) long long integerValue;
@property(nonatomic) double secondDoubleValue;
@property(nonatomic) double doubleValue;

@end
