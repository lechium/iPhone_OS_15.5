//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _hash;	// 16 = 0x10
    REFeatureSet *_features;	// 24 = 0x18
    REFeatureTransformer *_transformer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008b566
@property(readonly, nonatomic) REFeatureTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) REFeatureSet *features; // @synthesize features=_features;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008b4b5
- (void)_computeHash;	// IMP=0x000000000008b352
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;	// IMP=0x000000000008b204
- (id)_dependentFeatures;	// IMP=0x000000000008b1ef
- (id)_rootFeatures;	// IMP=0x000000000008b1da
- (long long)_bitCount;	// IMP=0x000000000008b1bd
- (unsigned long long)hash;	// IMP=0x000000000008b1ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b0f1
- (unsigned long long)featureType;	// IMP=0x000000000008b0d4
- (id)name;	// IMP=0x000000000008b0bf
- (id)initWithTransformer:(id)arg1 features:(id)arg2;	// IMP=0x000000000008ad70

@end
