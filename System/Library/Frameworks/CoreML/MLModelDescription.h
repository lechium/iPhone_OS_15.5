//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class MLFeatureDescription, MLLayerPath, NSArray, NSDictionary, NSOrderedSet, NSString, NSURL;

@interface MLModelDescription : NSObject <NSSecureCoding>
{
    _Bool _isUpdatable;	// 8 = 0x8
    NSDictionary *_inputDescriptionsByName;	// 16 = 0x10
    NSDictionary *_outputDescriptionsByName;	// 24 = 0x18
    NSString *_predictedFeatureName;	// 32 = 0x20
    NSString *_predictedProbabilitiesName;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
    NSArray *_classLabels;	// 56 = 0x38
    NSURL *_modelURL;	// 64 = 0x40
    NSDictionary *_trainingInputDescriptionsByName;	// 72 = 0x48
    NSDictionary *_parameterDescriptionsByKey;	// 80 = 0x50
    MLLayerPath *_modelPath;	// 88 = 0x58
    NSOrderedSet *_inputFeatureNames;	// 96 = 0x60
    NSOrderedSet *_outputFeatureNames;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006eaf8
+ (id)metadataWithFormat:(void *)arg1;	// IMP=0x000000000006e78d
+ (id)metadataWithSpecification:(void *)arg1;	// IMP=0x000000000006e6ba
- (void).cxx_destruct;	// IMP=0x000000000006e624
@property(readonly) NSOrderedSet *outputFeatureNames; // @synthesize outputFeatureNames=_outputFeatureNames;
@property(readonly) NSOrderedSet *inputFeatureNames; // @synthesize inputFeatureNames=_inputFeatureNames;
@property(retain, nonatomic) MLLayerPath *modelPath; // @synthesize modelPath=_modelPath;
@property(retain, nonatomic) NSDictionary *parameterDescriptionsByKey; // @synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey;
@property(retain, nonatomic) NSDictionary *trainingInputDescriptionsByName; // @synthesize trainingInputDescriptionsByName=_trainingInputDescriptionsByName;
@property(nonatomic) _Bool isUpdatable; // @synthesize isUpdatable=_isUpdatable;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(copy, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *predictedProbabilitiesName; // @synthesize predictedProbabilitiesName=_predictedProbabilitiesName;
@property(readonly, copy, nonatomic) NSString *predictedFeatureName; // @synthesize predictedFeatureName=_predictedFeatureName;
@property(readonly, nonatomic) NSDictionary *outputDescriptionsByName; // @synthesize outputDescriptionsByName=_outputDescriptionsByName;
@property(readonly, nonatomic) NSDictionary *inputDescriptionsByName; // @synthesize inputDescriptionsByName=_inputDescriptionsByName;
- (_Bool)validateAsRegressorDescriptionAndReturnError:(id *)arg1;	// IMP=0x000000000006e4c3
- (_Bool)validateAsClassifierDescriptionAndReturnError:(id *)arg1;	// IMP=0x000000000006e425
@property(readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property(readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property(readonly, copy, nonatomic) MLFeatureDescription *predictedValueFeatureDescription;
- (unsigned long long)hash;	// IMP=0x000000000006e00e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ddd9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d6ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006d421
- (_Bool)verifyInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006d419
- (_Bool)isEqualToDescription:(id)arg1;	// IMP=0x000000000006d34c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d2d0
- (id)description;	// IMP=0x000000000006c81c
- (id)initWithModelSpecification:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000006c740
- (id)initWithModelDescriptionSpecification:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000006c40b
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;	// IMP=0x000000000006c3d7
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6;	// IMP=0x000000000006c3a3
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 metadata:(id)arg8;	// IMP=0x000000000006c0a4
- (id)debugQuickLookObject;	// IMP=0x00000000001631a9

@end

