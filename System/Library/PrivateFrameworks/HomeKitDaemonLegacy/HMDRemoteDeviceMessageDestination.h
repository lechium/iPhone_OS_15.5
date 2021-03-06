//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination
{
    HMDDevice *_device;	// 8 = 0x8
    HMDDeviceHandle *_preferredHandle;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x000000000071442a
- (void).cxx_destruct;	// IMP=0x00000000007143f9
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)remoteDestinationString;	// IMP=0x00000000007141ae
- (id)description;	// IMP=0x000000000071419a
- (id)debugDescription;	// IMP=0x0000000000714183
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000714031
- (id)shortDescription;	// IMP=0x0000000000713f6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000713e53
- (unsigned long long)hash;	// IMP=0x0000000000713dc6
- (id)initWithTarget:(id)arg1 device:(id)arg2;	// IMP=0x0000000000713d4e
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000713c98

@end

