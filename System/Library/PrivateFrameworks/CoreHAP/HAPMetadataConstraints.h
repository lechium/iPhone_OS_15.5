//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSCopying-Protocol.h>
#import <CoreHAP/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HAPMetadataConstraints : HMFObject <NSCopying, NSSecureCoding>
{
    NSNumber *_minimumValue;	// 8 = 0x8
    NSNumber *_maximumValue;	// 16 = 0x10
    NSNumber *_stepValue;	// 24 = 0x18
    NSNumber *_minLength;	// 32 = 0x20
    NSNumber *_maxLength;	// 40 = 0x28
    NSArray *_validValues;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014760d
- (void).cxx_destruct;	// IMP=0x0000000000147598
@property(copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001472e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000147169
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000146f56
- (_Bool)isEqualToMetadataConstraints:(id)arg1;	// IMP=0x0000000000146cbf
- (id)description;	// IMP=0x0000000000146789

@end

