//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLFeatureValue, NSString;

@interface VNCoreMLFeatureValueObservation
{
    MLFeatureValue *_featureValue;	// 80 = 0x50
    NSString *_featureName;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001304dc
- (void).cxx_destruct;	// IMP=0x00000000001304ab
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, copy, nonatomic) MLFeatureValue *featureValue; // @synthesize featureValue=_featureValue;
- (id)description;	// IMP=0x0000000000130372
- (id)vn_cloneObject;	// IMP=0x00000000001302bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000130217
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001300a8
- (id)initWithOriginatingRequestSpecifier:(id)arg1 featureName:(id)arg2 featureValue:(id)arg3;	// IMP=0x000000000012ff72

@end

