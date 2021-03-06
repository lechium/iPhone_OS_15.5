//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, VCPSceneTaxonomy;

__attribute__((visibility("hidden")))
@interface VCPVideoSceneClassifier
{
    CDStruct_1b6d18a9 _timeLastProcess;	// 8 = 0x8
    CDStruct_1b6d18a9 _start;	// 32 = 0x20
    NSMutableArray *_results;	// 56 = 0x38
    NSMutableDictionary *_existingScenes;	// 64 = 0x40
    VCPSceneTaxonomy *_sceneTaxomy;	// 72 = 0x48
    NSMutableDictionary *_internalFrameScenes;	// 80 = 0x50
    NSArray *_sceneResults;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000261794
@property(retain) NSArray *sceneResults; // @synthesize sceneResults=_sceneResults;
@property(readonly) NSDictionary *frameScenes;
- (id)results;	// IMP=0x00000000002616d1
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000260960
- (void)addAggregatedScenes:(id)arg1 timerange:(CDStruct_e83c9415)arg2;	// IMP=0x00000000002604cd
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000025f588
- (void)addResult:(id)arg1 start:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 keyIsName:(_Bool)arg4;	// IMP=0x000000000025f130
- (_Bool)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2;	// IMP=0x000000000025eedb
- (void)dealloc;	// IMP=0x000000000025ee1f
- (id)init;	// IMP=0x000000000025eca3

@end

