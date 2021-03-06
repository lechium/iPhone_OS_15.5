//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSNumber
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000166a39
+ (id)numberWithBool:(_Bool)arg1;	// IMP=0x00000000001644cd
+ (id)numberWithDouble:(double)arg1;	// IMP=0x0000000000164425
+ (id)numberWithFloat:(float)arg1;	// IMP=0x0000000000164380
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;	// IMP=0x0000000000164310
+ (id)numberWithLongLong:(long long)arg1;	// IMP=0x0000000000164280
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;	// IMP=0x0000000000164210
+ (id)numberWithLong:(long long)arg1;	// IMP=0x0000000000164180
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;	// IMP=0x0000000000164110
+ (id)numberWithInteger:(long long)arg1;	// IMP=0x0000000000164080
+ (id)numberWithUnsignedInt:(unsigned int)arg1;	// IMP=0x0000000000164020
+ (id)numberWithInt:(int)arg1;	// IMP=0x0000000000163fb0
+ (id)numberWithUnsignedShort:(unsigned short)arg1;	// IMP=0x0000000000163f50
+ (id)numberWithShort:(short)arg1;	// IMP=0x0000000000163ee0
+ (id)numberWithUnsignedChar:(unsigned char)arg1;	// IMP=0x0000000000163e80
+ (id)numberWithChar:(BOOL)arg1;	// IMP=0x0000000000163e10
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000163deb
+ (void)initialize;	// IMP=0x0000000000163da8
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;	// IMP=0x00000000001675f8
- (id)initWithBool:(_Bool)arg1;	// IMP=0x00000000001675e0
- (id)initWithDouble:(double)arg1;	// IMP=0x00000000001675c8
- (id)initWithFloat:(float)arg1;	// IMP=0x00000000001675b0
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;	// IMP=0x0000000000167598
- (id)initWithLongLong:(long long)arg1;	// IMP=0x0000000000167580
- (id)initWithUnsignedLong:(unsigned long long)arg1;	// IMP=0x0000000000167568
- (id)initWithLong:(long long)arg1;	// IMP=0x0000000000167550
- (id)initWithUnsignedInteger:(unsigned long long)arg1;	// IMP=0x0000000000167538
- (id)initWithInteger:(long long)arg1;	// IMP=0x0000000000167520
- (id)initWithUnsignedInt:(unsigned int)arg1;	// IMP=0x0000000000167508
- (id)initWithInt:(int)arg1;	// IMP=0x00000000001674f0
- (id)initWithUnsignedShort:(unsigned short)arg1;	// IMP=0x00000000001674d8
- (id)initWithShort:(short)arg1;	// IMP=0x00000000001674c0
- (id)initWithUnsignedChar:(unsigned char)arg1;	// IMP=0x00000000001674a8
- (id)initWithChar:(BOOL)arg1;	// IMP=0x0000000000167490
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001671e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000166dc9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000166a41
- (_Bool)_allowsDirectEncoding;	// IMP=0x0000000000166a31
- (Class)classForCoder;	// IMP=0x0000000000166a24
@property(readonly, copy) NSString *stringValue;
- (id)redactedDescription;	// IMP=0x00000000001669fc
- (id)description;	// IMP=0x00000000001669e8
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x00000000001665e3
- (unsigned long long)hash;	// IMP=0x0000000000166263
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000166223
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x0000000000166202
- (long long)compare:(id)arg1;	// IMP=0x0000000000166004
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) long long longLongValue;
@property(readonly) float floatValue;
@property(readonly) double doubleValue;
@property(readonly) unsigned long long unsignedLongValue;
@property(readonly) long long longValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) int intValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) short shortValue;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) BOOL charValue;
@property(readonly) unsigned long long unsignedIntegerValue;
@property(readonly) long long integerValue;
@property(readonly) _Bool boolValue;
- (long long)_reverseCompare:(id)arg1;	// IMP=0x000000000001c6f0
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x000000000001c5f4
- (long long)_cfNumberType;	// IMP=0x000000000001c4de
- (unsigned long long)_cfTypeID;	// IMP=0x000000000001c4d4
@property(readonly) CDStruct_5fe7aead decimalValue;
- (_Bool)isNSNumber__;	// IMP=0x0000000000107de7

@end

