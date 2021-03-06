//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NMArgument : PBCodable
{
    struct NMLocation _locationValue;	// 8 = 0x8
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _unsignedIntListValues;	// 136 = 0x88
    double _doubleValue;	// 160 = 0xa0
    unsigned long long _intValue;	// 168 = 0xa8
    NSMutableArray *_dataListValues;	// 176 = 0xb0
    NSData *_dataValue;	// 184 = 0xb8
    NSMutableArray *_stringListValues;	// 192 = 0xc0
    NSMutableArray *_stringToObjectMaps;	// 200 = 0xc8
    NSString *_stringValue;	// 208 = 0xd0
    int _tag;	// 216 = 0xd8
    NSMutableArray *_tileRequestValues;	// 224 = 0xe0
    _Bool _boolValue;	// 232 = 0xe8
    struct {
        unsigned int locationValue:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int tag:1;
        unsigned int boolValue:1;
    } _has;	// 236 = 0xec
}

+ (Class)tileRequestValueType;	// IMP=0x0020000000032179
+ (Class)dataListValueType;	// IMP=0x00100000000320a7
+ (Class)stringListValueType;	// IMP=0x0010000000031e1d
+ (Class)stringToObjectMapType;	// IMP=0x0010000000031d4b
- (void).cxx_destruct;	// IMP=0x0010000000034ffd
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSMutableArray *tileRequestValues; // @synthesize tileRequestValues=_tileRequestValues;
@property(retain, nonatomic) NSMutableArray *dataListValues; // @synthesize dataListValues=_dataListValues;
@property(nonatomic) struct NMLocation locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSMutableArray *stringListValues; // @synthesize stringListValues=_stringListValues;
@property(retain, nonatomic) NSMutableArray *stringToObjectMaps; // @synthesize stringToObjectMaps=_stringToObjectMaps;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) unsigned long long intValue; // @synthesize intValue=_intValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000348d4
- (unsigned long long)hash;	// IMP=0x0010000000034655
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000034388
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000033cee
- (void)copyTo:(id)arg1;	// IMP=0x00100000000338b2
- (void)writeTo:(id)arg1;	// IMP=0x00100000000333b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000333a4
- (id)dictionaryRepresentation;	// IMP=0x0010000000032284
- (id)description;	// IMP=0x00100000000321d5
@property(nonatomic) _Bool hasDoubleValue;
- (id)tileRequestValueAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003215c
- (unsigned long long)tileRequestValuesCount;	// IMP=0x001000000003213f
- (void)addTileRequestValue:(id)arg1;	// IMP=0x00100000000320d5
- (void)clearTileRequestValues;	// IMP=0x00100000000320b8
- (id)dataListValueAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003208a
- (unsigned long long)dataListValuesCount;	// IMP=0x001000000003206d
- (void)addDataListValue:(id)arg1;	// IMP=0x0010000000032003
- (void)clearDataListValues;	// IMP=0x0010000000031fe6
- (void)setUnsignedIntListValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000031fcf
- (unsigned long long)unsignedIntListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000031f02
- (void)addUnsignedIntListValue:(unsigned long long)arg1;	// IMP=0x0010000000031eee
- (void)clearUnsignedIntListValues;	// IMP=0x0010000000031edd
@property(readonly, nonatomic) unsigned long long *unsignedIntListValues;
@property(readonly, nonatomic) unsigned long long unsignedIntListValuesCount;
@property(nonatomic) _Bool hasLocationValue;
- (id)stringListValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000031e00
- (unsigned long long)stringListValuesCount;	// IMP=0x0010000000031de3
- (void)addStringListValue:(id)arg1;	// IMP=0x0010000000031d79
- (void)clearStringListValues;	// IMP=0x0010000000031d5c
- (id)stringToObjectMapAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000031d2e
- (unsigned long long)stringToObjectMapsCount;	// IMP=0x0010000000031d11
- (void)addStringToObjectMap:(id)arg1;	// IMP=0x0010000000031ca7
- (void)clearStringToObjectMaps;	// IMP=0x0010000000031c8a
@property(readonly, nonatomic) _Bool hasDataValue;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasIntValue;
@property(readonly, nonatomic) _Bool hasStringValue;
- (int)StringAsTag:(id)arg1;	// IMP=0x0010000000031608
- (id)tagAsString:(int)arg1;	// IMP=0x0010000000031285
@property(nonatomic) _Bool hasTag;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (void)dealloc;	// IMP=0x00100000000311d8
- (id)_nm_locationValue;	// IMP=0x001000000004d98d
- (id)_nm_errorValue;	// IMP=0x001000000004d8a8
- (id)_nm_arrayValue;	// IMP=0x001000000004d774
- (id)_nm_dictionaryValue;	// IMP=0x001000000004d264
- (id)_nm_initWithLocation:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004d048
- (id)_nm_initWithErrorValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004d036
- (id)_nm_initWithDictionaryValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004d024
- (id)_nm_initWithArrayValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004d012
- (id)_nm_initWithSecureCodingValue:(id)arg1 tag:(int)arg2;	// IMP=0x001000000004cef6
- (id)_nm_compressedArgument:(int)arg1;	// IMP=0x001000000004cd62

@end

