//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REMLModelManagerProperties-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, REContentRanker, REMLLinearModel, REMLMetricsSet, REMLModel, REObserverStore;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMLModelManager <REMLModelManagerProperties>
{
    REMLLinearModel *_model;	// 8 = 0x8
    REContentRanker *_contentRanker;	// 16 = 0x10
    REMLMetricsSet *_metrics;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_trainingQueue;	// 32 = 0x20
    REObserverStore *_observers;	// 40 = 0x28
    NSString *_modelFileLocation;	// 48 = 0x30
    _Bool _supportsContentRanking;	// 56 = 0x38
    NSArray *_orderedFeatures;	// 64 = 0x40
    unsigned long long _modelStorageBehavior;	// 72 = 0x48
    REObserverStore *_dataStores;	// 80 = 0x50
    id <RERelevanceEngineMetricsRecorder> _metricsRecoder;	// 88 = 0x58
    NSDate *_lastCacheResetDate;	// 96 = 0x60
    unsigned long long _modelVersionNumber;	// 104 = 0x68
    _Bool _validModel;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000004ef3b
@property(readonly, nonatomic) NSArray *orderedFeatures;
@property(readonly, nonatomic) _Bool supportsContentRanking;
@property(readonly, nonatomic) REContentRanker *contentRanker;
@property(readonly, nonatomic) REMLModel *model;
@property(readonly, nonatomic) unsigned long long modelVersionNumber;
- (id)predicitionForLogicalElement:(id)arg1;	// IMP=0x000000000004ee71
- (id)sentimentAnalyzer;	// IMP=0x000000000004ee22
- (id)comparatorWithRules:(id)arg1;	// IMP=0x000000000004ea99
- (void)performModelClearWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e8c9
- (void)manuallySaveModel;	// IMP=0x000000000004e7bd
- (void)_notifyObserversThatModelUpdated;	// IMP=0x000000000004e6e7
- (void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4 purgeCaches:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000004def7
- (void)flushTraining;	// IMP=0x000000000004dec3
- (_Bool)_saveModelToDisk:(id *)arg1;	// IMP=0x000000000004d02b
- (id)createOutputFeatureFromDouble:(double)arg1 error:(id *)arg2;	// IMP=0x000000000004cf3d
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004cf20
- (void)addObserver:(id)arg1;	// IMP=0x000000000004cf03
- (id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2;	// IMP=0x000000000004c2c2
- (_Bool)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(_Bool)arg3;	// IMP=0x000000000004b7b6
- (void)_saveDataStoresToURL:(id)arg1;	// IMP=0x000000000004b5ba
- (void)removeDataStore:(id)arg1;	// IMP=0x000000000004b59d
- (void)addDataStore:(id)arg1;	// IMP=0x000000000004b420
- (void)_logMetrics;	// IMP=0x000000000004b3ad
- (void)dealloc;	// IMP=0x000000000004b2e3
- (id)initWithRelevanceEngine:(id)arg1;	// IMP=0x000000000004a936
- (id)_orderedModelFeatures;	// IMP=0x000000000004eff4

@end
