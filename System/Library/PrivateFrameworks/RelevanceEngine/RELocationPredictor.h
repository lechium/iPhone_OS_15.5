//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REEngineLocationManagerObserver-Protocol.h>
#import <RelevanceEngine/RELocationPredictorProperties-Protocol.h>

@class NSDictionary, NSLock, NSMapTable, NSMutableDictionary, NSString, RTRoutineManager;

@interface RELocationPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties>
{
    RTRoutineManager *_manager;	// 8 = 0x8
    NSMapTable *_routineData;	// 16 = 0x10
    NSMutableDictionary *_overrideRoutineType;	// 24 = 0x18
    NSLock *_routineDataLock;	// 32 = 0x20
}

+ (id)supportedFeatures;	// IMP=0x00000000000f3f82
+ (double)updateInterval;	// IMP=0x00000000000f3f74
- (void).cxx_destruct;	// IMP=0x00000000000f5fc1
@property(readonly, nonatomic) NSDictionary *routineDataByEngine;
- (void)locationManagerDidUpdateLocation:(id)arg1;	// IMP=0x00000000000f5d2c
- (void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2;	// IMP=0x00000000000f5bf2
- (id)predictedLocationNameForEngine:(id)arg1;	// IMP=0x00000000000f5afe
- (id)predictedLocationIdentifierForEngine:(id)arg1;	// IMP=0x00000000000f59e7
- (id)_routineDataForEngine:(id)arg1;	// IMP=0x00000000000f5951
- (id)locationForEngine:(id)arg1 userLocation:(long long)arg2;	// IMP=0x00000000000f56a8
- (void)removeRelevanceEngine:(id)arg1;	// IMP=0x00000000000f551f
- (void)addRelevanceEngine:(id)arg1;	// IMP=0x00000000000f547a
- (void)update;	// IMP=0x00000000000f480b
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x00000000000f4253
- (id)_init;	// IMP=0x00000000000f40a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

