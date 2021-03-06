//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSCopying><NSSecureCoding><NSObject;

@interface HKAttributeConceptSelection
{
    long long _type;	// 8 = 0x8
    unsigned long long _operatorType;	// 16 = 0x10
    id <NSCopying><NSSecureCoding><NSObject> _value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019cbd5
- (void).cxx_destruct;	// IMP=0x000000000019cf7e
@property(readonly, copy, nonatomic) id <NSCopying><NSSecureCoding><NSObject> value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019cd5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ccbc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019cbdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019cbca
- (id)description;	// IMP=0x000000000019cb29
- (id)initWithAttribute:(long long)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x000000000019ca89
- (id)init;	// IMP=0x000000000019ca0f

@end

