//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKConceptIdentifier;

@interface HKIdentifierConceptSelection
{
    HKConceptIdentifier *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a2c2a
- (void).cxx_destruct;	// IMP=0x00000000000a2e71
@property(readonly, copy, nonatomic) HKConceptIdentifier *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a2cfc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a2cd2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a2c32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a2c1f
- (id)description;	// IMP=0x00000000000a2bde
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000a2b64
- (id)init;	// IMP=0x00000000000a2aea

@end
