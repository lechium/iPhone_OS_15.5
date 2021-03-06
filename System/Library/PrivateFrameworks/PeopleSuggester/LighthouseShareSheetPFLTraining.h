//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FidesPHSEvaluatorDataSource, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, _DKKnowledgeStore;

@interface LighthouseShareSheetPFLTraining : NSObject
{
    _DKKnowledgeStore *_knowledgeStore;	// 8 = 0x8
    FidesPHSEvaluatorDataSource *_dataSource;	// 16 = 0x10
    NSDictionary *_processDataReturnDict;	// 24 = 0x18
    NSMutableArray *_featureMatricesForAllShareEvents;	// 32 = 0x20
    NSMutableDictionary *_featureNameDict;	// 40 = 0x28
    NSDictionary *_selectedFeaturesConfig;	// 48 = 0x30
    NSString *_configTreeSpecification;	// 56 = 0x38
    NSString *_configDepthSpecification;	// 64 = 0x40
    NSString *_configBoltTaskIDSpecification;	// 72 = 0x48
}

+ (id)processDataForStore:(id)arg1 recipeInfo:(id)arg2;	// IMP=0x00000000000bd2a9
+ (id)processDataForStore:(id)arg1 taskParameters:(id)arg2;	// IMP=0x00000000000bbd5e
+ (id)taskResultFromDict:(id)arg1;	// IMP=0x00000000000bb963
+ (void)initialize;	// IMP=0x00000000000bb915
- (void).cxx_destruct;	// IMP=0x00000000000c269a
@property(retain, nonatomic) NSString *configBoltTaskIDSpecification; // @synthesize configBoltTaskIDSpecification=_configBoltTaskIDSpecification;
@property(retain, nonatomic) NSString *configDepthSpecification; // @synthesize configDepthSpecification=_configDepthSpecification;
@property(retain, nonatomic) NSString *configTreeSpecification; // @synthesize configTreeSpecification=_configTreeSpecification;
@property(retain, nonatomic) NSDictionary *selectedFeaturesConfig; // @synthesize selectedFeaturesConfig=_selectedFeaturesConfig;
@property(retain, nonatomic) NSMutableDictionary *featureNameDict; // @synthesize featureNameDict=_featureNameDict;
@property(retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents; // @synthesize featureMatricesForAllShareEvents=_featureMatricesForAllShareEvents;
@property(retain, nonatomic) NSDictionary *processDataReturnDict; // @synthesize processDataReturnDict=_processDataReturnDict;
@property(retain, nonatomic) FidesPHSEvaluatorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) _DKKnowledgeStore *knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (float)sigmoid:(float)arg1;	// IMP=0x00000000000c257a
- (id)createDataSourceForDodMLRecipe:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c2300
- (id)createDataSourceForRecipe:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c2086
- (void)processDataForMetricEvaluationForStore:(id)arg1;	// IMP=0x00000000000c0f30
- (id)evaluateMetricsWithModelURL:(id)arg1;	// IMP=0x00000000000bfe2a
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1;	// IMP=0x00000000000bf6e0
- (id)generateResultsDictionayWithModelURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bf3c2
- (id)runTask:(id)arg1 knowledgeStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bee77
- (id)runWithRecipeInfo:(id)arg1 knowledgeStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000be8b7

@end

