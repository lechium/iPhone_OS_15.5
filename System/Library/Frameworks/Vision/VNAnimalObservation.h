//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelObservation-Protocol.h>

@class VNAnimalprint;

@interface VNAnimalObservation <VNEntityIdentificationModelObservation>
{
    VNAnimalprint *_animalprint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007334f
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000073342
- (void).cxx_destruct;	// IMP=0x000000000007332f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000731e8
- (unsigned long long)hash;	// IMP=0x000000000007314f
- (id)vn_cloneObject;	// IMP=0x00000000000730c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073029
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072e76
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3 labels:(id)arg4 animalprint:(id)arg5;	// IMP=0x0000000000072d5c
- (id)initWithAnimalprint:(id)arg1 confidence:(float)arg2;	// IMP=0x0000000000072c97
- (void)setAnimalprint:(id)arg1;	// IMP=0x0000000000072c83
@property(readonly, nonatomic) VNAnimalprint *animalprint;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a91a9

@end

