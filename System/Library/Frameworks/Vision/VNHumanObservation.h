//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNTorsoprint;

@interface VNHumanObservation
{
    VNTorsoprint *_torsoprint;	// 8 = 0x8
    _Bool _upperBodyOnly;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022bab8
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x000000000022baab
- (void).cxx_destruct;	// IMP=0x000000000022ba98
@property(readonly, nonatomic) _Bool upperBodyOnly; // @synthesize upperBodyOnly=_upperBodyOnly;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022b8ef
- (unsigned long long)hash;	// IMP=0x000000000022b834
- (id)vn_cloneObject;	// IMP=0x000000000022b79c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022b6dd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022b4e3
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect)arg2 upperBodyOnly:(_Bool)arg3 confidence:(float)arg4;	// IMP=0x000000000022b3fa
- (void)setTorsoprint:(id)arg1;	// IMP=0x000000000022b39c
@property(readonly, nonatomic) VNTorsoprint *torsoprint; // @synthesize torsoprint=_torsoprint;

@end
