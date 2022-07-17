//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTQoSLinkCharacteristics : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_bitRateMaxUL;	// 8 = 0x8
    NSNumber *_bitRateMaxDL;	// 16 = 0x10
    NSNumber *_bitRateGuaranteedUL;	// 24 = 0x18
    NSNumber *_bitRateGuaranteedDL;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000944de
- (void).cxx_destruct;	// IMP=0x0000000000094552
@property(retain, nonatomic) NSNumber *bitRateGuaranteedDL; // @synthesize bitRateGuaranteedDL=_bitRateGuaranteedDL;
@property(retain, nonatomic) NSNumber *bitRateGuaranteedUL; // @synthesize bitRateGuaranteedUL=_bitRateGuaranteedUL;
@property(retain, nonatomic) NSNumber *bitRateMaxDL; // @synthesize bitRateMaxDL=_bitRateMaxDL;
@property(retain, nonatomic) NSNumber *bitRateMaxUL; // @synthesize bitRateMaxUL=_bitRateMaxUL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009439c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000094284
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000940d8
- (id)init;	// IMP=0x00000000000940a9
- (id)description;	// IMP=0x0000000000093f69

@end
