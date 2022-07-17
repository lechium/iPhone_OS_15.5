//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface _HMDLocalDeviceHandle
{
    NSUUID *_deviceIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000026540d
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x00000000002653dd
- (void).cxx_destruct;	// IMP=0x00000000002651b4
@property(readonly, copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000265108
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026506d
- (id)destination;	// IMP=0x0000000000264fec
- (_Bool)isLocal;	// IMP=0x0000000000264fe4
- (id)privateDescription;	// IMP=0x0000000000264f5d
- (id)description;	// IMP=0x0000000000264f0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000264e39
- (unsigned long long)hash;	// IMP=0x0000000000264df5
- (id)initWithDestination:(id)arg1;	// IMP=0x0000000000264b28
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x00000000002649cd

@end
