//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSCopying-Protocol.h>
#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding>
{
    HAPMetadataConstraints *_constraints;	// 8 = 0x8
    NSString *_manufacturerDescription;	// 16 = 0x10
    NSString *_format;	// 24 = 0x18
    NSString *_units;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015b567
- (void).cxx_destruct;	// IMP=0x000000000015b514
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(retain, nonatomic) HAPMetadataConstraints *constraints; // @synthesize constraints=_constraints;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015b325
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015b20d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b083
- (_Bool)isEqualToCharacteristicMetadata:(id)arg1;	// IMP=0x000000000015adde
- (id)_generateValidConstraints:(id)arg1;	// IMP=0x000000000015abcd
- (id)description;	// IMP=0x000000000015aa63
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;	// IMP=0x000000000015a77e

@end

