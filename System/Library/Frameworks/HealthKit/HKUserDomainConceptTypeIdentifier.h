//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKUserDomainConceptTypeIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    long long _code;	// 8 = 0x8
    NSString *_schema;	// 16 = 0x10
}

+ (id)listUserDomainConceptIdentifier;	// IMP=0x00000000001f8adc
+ (id)medicalUserDomainConceptIdentifier;	// IMP=0x00000000001f8ab3
+ (id)baseUserDomainConceptIdentifier;	// IMP=0x00000000001f8a8d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f896a
- (void).cxx_destruct;	// IMP=0x00000000001f8b19
@property(readonly, copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f89e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f8972
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f895f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f88c4
- (unsigned long long)hash;	// IMP=0x00000000001f889f
- (id)description;	// IMP=0x00000000001f885d
- (id)initWithCode:(long long)arg1 schema:(id)arg2;	// IMP=0x00000000001f87df
- (id)init;	// IMP=0x00000000001f8765

@end
