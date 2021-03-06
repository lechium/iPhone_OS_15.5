//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLModelConfiguration, NSArray, NSDictionary, NSString, _PSBehaviorRuleFeatureExtraction;

@interface _PSRuleRankingMLModel : NSObject
{
    _Bool _isAdaptedModel;	// 8 = 0x8
    _Bool _isAdaptedMLModelOK;	// 9 = 0x9
    double _scoreThreshold;	// 16 = 0x10
    NSArray *_scores;	// 24 = 0x18
    MLModel *_mlModel;	// 32 = 0x20
    NSDictionary *_metadata;	// 40 = 0x28
    NSDictionary *_psConfigForAdaptableModel;	// 48 = 0x30
    MLModelConfiguration *_adaptableModelConfiguration;	// 56 = 0x38
    NSString *_adaptedModelRecipeVersion;	// 64 = 0x40
    _PSBehaviorRuleFeatureExtraction *_feaExtHandle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000ba37
@property(retain) _PSBehaviorRuleFeatureExtraction *feaExtHandle; // @synthesize feaExtHandle=_feaExtHandle;
@property(retain) NSString *adaptedModelRecipeVersion; // @synthesize adaptedModelRecipeVersion=_adaptedModelRecipeVersion;
@property(nonatomic) _Bool isAdaptedMLModelOK; // @synthesize isAdaptedMLModelOK=_isAdaptedMLModelOK;
@property(retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // @synthesize adaptableModelConfiguration=_adaptableModelConfiguration;
@property(retain) NSDictionary *psConfigForAdaptableModel; // @synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel;
@property _Bool isAdaptedModel; // @synthesize isAdaptedModel=_isAdaptedModel;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) MLModel *mlModel; // @synthesize mlModel=_mlModel;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property double scoreThreshold; // @synthesize scoreThreshold=_scoreThreshold;
- (id)rankRules:(id)arg1 contextItems:(id)arg2;	// IMP=0x000000000000adac
- (id)scoresOnRules:(id)arg1 contextItems:(id)arg2;	// IMP=0x000000000000a806
- (id)giveModelDescription;	// IMP=0x000000000000a7f0
- (id)extractAdaptedModelRecipeID;	// IMP=0x000000000000a7de
- (_Bool)isAdaptedModelUsed;	// IMP=0x000000000000a7cc
- (_Bool)isAdaptedModelCreated;	// IMP=0x000000000000a745
- (void)loadDefaultRuleMinerMLModel;	// IMP=0x000000000000a307
- (id)getAdaptedModelVersion;	// IMP=0x000000000000a1ad
- (id)initWithAdaptableModelConfig:(id)arg1 isAdaptedMLModelOK:(_Bool)arg2 scoreThreshold:(double)arg3;	// IMP=0x0000000000009f03
- (id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2 isAdaptedModel:(_Bool)arg3 psConfigForAdaptableModel:(id)arg4 isAdaptedMLModelOK:(_Bool)arg5;	// IMP=0x0000000000009cda

@end

