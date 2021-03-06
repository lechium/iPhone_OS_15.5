//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLAssetIO/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface MIOModelDescription : NSObject <NSMutableCopying>
{
    struct ModelDescription _modelDescriptionParams;	// 8 = 0x8
    _Bool _updatable;	// 128 = 0x80
    NSDictionary *_parameterDescriptionsByKey;	// 136 = 0x88
    NSArray *_classLabels;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000000018ab7
- (void).cxx_destruct;	// IMP=0x0000000000018a80
@property(readonly, copy, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property(readonly, copy, nonatomic) NSDictionary *parameterDescriptionsByKey; // @synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey;
@property(readonly, nonatomic) _Bool updatable; // @synthesize updatable=_updatable;
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000184ca
- (void)_setShortDescription:(id)arg1 forTrainingInputFeatureWithName:(id)arg2;	// IMP=0x00000000000183b2
- (void)_setShortDescription:(id)arg1 forOutputFeatureWithName:(id)arg2;	// IMP=0x000000000001829a
- (void)_setShortDescription:(id)arg1 forInputFeatureWithName:(id)arg2;	// IMP=0x0000000000018049
@property(readonly, copy, nonatomic) NSArray *trainingInputDescriptions;
@property(readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property(readonly, copy, nonatomic) NSString *predictedFeatureName;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, copy, nonatomic) NSArray *outputDescriptions;
@property(readonly, copy, nonatomic) NSArray *inputDescriptions;
- (unsigned long long)hash;	// IMP=0x0000000000017c8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017746
- (id)description;	// IMP=0x0000000000016fc2
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016ec1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016eb6
- (const void *)modelDescriptionSpecification;	// IMP=0x0000000000016eac
- (id)initWithSpecification:(const void *)arg1 isUpdatable:(_Bool)arg2 modelParameters:(id)arg3 classLabels:(id)arg4;	// IMP=0x0000000000016bbe

@end

