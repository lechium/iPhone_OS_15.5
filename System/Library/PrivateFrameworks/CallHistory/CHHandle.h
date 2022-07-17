//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/NSCopying-Protocol.h>
#import <CallHistory/NSSecureCoding-Protocol.h>

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    NSString *_normalizedValue;	// 24 = 0x18
}

+ (long long)handleTypeForValue:(id)arg1;	// IMP=0x0000000000008c57
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;	// IMP=0x0000000000008b49
+ (id)normalizedGenericHandleForValue:(id)arg1;	// IMP=0x0000000000008aad
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;	// IMP=0x0000000000008a11
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000083b4
- (void).cxx_destruct;	// IMP=0x0000000000008cef
@property(readonly, copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isTemporary;	// IMP=0x0000000000008c86
- (_Bool)isEqualToHandle:(id)arg1;	// IMP=0x00000000000088ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008863
- (unsigned long long)hash;	// IMP=0x00000000000087b3
- (id)description;	// IMP=0x00000000000085ee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000849e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000083bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000837c
- (id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3;	// IMP=0x000000000000830b
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x0000000000008215
- (id)initWithHandle:(id)arg1;	// IMP=0x0000000000008163

@end
