//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDetectionprint;

@interface VNDetectionprintObservation
{
    VNDetectionprint *_detectionprint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d031a
- (void).cxx_destruct;	// IMP=0x00000000000d0307
@property(readonly, copy) VNDetectionprint *detectionprint; // @synthesize detectionprint=_detectionprint;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d022c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d01af
- (id)vn_cloneObject;	// IMP=0x00000000000d0139
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0037
- (unsigned long long)hash;	// IMP=0x00000000000cffb8
- (id)initWithOriginatingRequestSpecifier:(id)arg1 detectionprint:(id)arg2;	// IMP=0x00000000000cff34

@end
