//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability;

@interface SVDAudioPlaybackCapability
{
    _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability *_backing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b52
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x0000000000004af4
- (void).cxx_destruct;	// IMP=0x0000000000004c1c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004b84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004b5a
- (id)_swiftBacking;	// IMP=0x0000000000004adf
- (long long)supportsAudioPlayback;	// IMP=0x0000000000004ac2
- (id)initWithStatus:(long long)arg1;	// IMP=0x0000000000004a4b

@end
