//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class DMFDevice, NSDictionary;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject
{
    NSDictionary *_valuesByPropertyKey;	// 8 = 0x8
    NSDictionary *_errorsByPropertyKey;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022fc4
- (void).cxx_destruct;	// IMP=0x00000000000234a2
@property(readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey; // @synthesize errorsByPropertyKey=_errorsByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey; // @synthesize valuesByPropertyKey=_valuesByPropertyKey;
- (id)description;	// IMP=0x00000000000233a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000232cd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022fdd
- (Class)classForCoder;	// IMP=0x0000000000022fcc
@property(readonly, nonatomic) DMFDevice *device;
- (id)valueForPropertyKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022d08
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;	// IMP=0x0000000000022c41

@end

