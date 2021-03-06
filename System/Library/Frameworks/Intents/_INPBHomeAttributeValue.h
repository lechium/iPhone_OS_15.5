//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAttributeValue-Protocol.h>

@class NSString, _INPBHomeAttributeRange;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int booleanValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int limitValue:1;
        unsigned int unit:1;
        unsigned int valueType:1;
    } _has;	// 8 = 0x8
    _Bool _booleanValue;	// 12 = 0xc
    int _limitValue;	// 16 = 0x10
    int _unit;	// 20 = 0x14
    int _valueType;	// 24 = 0x18
    double _doubleValue;	// 32 = 0x20
    long long _integerValue;	// 40 = 0x28
    _INPBHomeAttributeRange *_rangeValue;	// 48 = 0x30
    NSString *_stringValue;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e0910
- (void).cxx_destruct;	// IMP=0x00000000000e03a5
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) _INPBHomeAttributeRange *rangeValue; // @synthesize rangeValue=_rangeValue;
@property(nonatomic) int limitValue; // @synthesize limitValue=_limitValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
- (id)dictionaryRepresentation;	// IMP=0x00000000000dfeaa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000df75b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df580
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000df4ee
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df3ef
- (void)writeTo:(id)arg1;	// IMP=0x00000000000df21c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000df20f
- (int)StringAsValueType:(id)arg1;	// IMP=0x00000000000df120
- (id)valueTypeAsString:(int)arg1;	// IMP=0x00000000000df086
@property(nonatomic) _Bool hasValueType;
- (int)StringAsUnit:(id)arg1;	// IMP=0x00000000000def54
- (id)unitAsString:(int)arg1;	// IMP=0x00000000000deec8
@property(nonatomic) _Bool hasUnit;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasRangeValue;
- (int)StringAsLimitValue:(id)arg1;	// IMP=0x00000000000ded8f
- (id)limitValueAsString:(int)arg1;	// IMP=0x00000000000ded39
@property(nonatomic) _Bool hasLimitValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasBooleanValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

