//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRPBDevicePropertyDiff;
@protocol NSObject><NSCopying;

@interface NRDevicePropertyDiff
{
    id <NSObject><NSCopying> _value;	// 8 = 0x8
}

+ (id)unpackPropertyValue:(id)arg1;	// IMP=0x000000000005370f
+ (id)packPropertyValue:(id)arg1;	// IMP=0x0000000000052565
+ (id)enclosedClassTypes;	// IMP=0x0000000000052379
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000052010
- (void).cxx_destruct;	// IMP=0x000000000005452e
@property(readonly, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005251a
- (id)description;	// IMP=0x0000000000052473
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000523f7
- (unsigned long long)hash;	// IMP=0x0000000000052392
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000522e8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052168
@property(readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000052018
- (id)initWithValue:(id)arg1;	// IMP=0x0000000000051fa2

@end

