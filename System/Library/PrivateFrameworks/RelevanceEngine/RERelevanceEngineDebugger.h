//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, REObserverStore;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger
{
    REObserverStore *_observerStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000248c2
- (void)_unregisterEngine:(id)arg1;	// IMP=0x00000000000248a5
- (void)_registerEngine:(id)arg1;	// IMP=0x0000000000024888
- (id)orderedElementsForEngine:(id)arg1;	// IMP=0x0000000000024336
- (id)allRelevanceProviderValuesForEngine:(id)arg1;	// IMP=0x0000000000024258
- (id)dataSourceElementsForEngine:(id)arg1;	// IMP=0x0000000000023ed3
- (void)reloadDataSourceForEngine:(id)arg1;	// IMP=0x0000000000023e3f
- (id)diagnosticLogsForEngine:(id)arg1;	// IMP=0x0000000000023c86
- (_Bool)_isValidEngine:(id)arg1;	// IMP=0x0000000000023bbb
- (id)firstEngine;	// IMP=0x0000000000023b6b
- (id)engineWithName:(id)arg1;	// IMP=0x0000000000023998
@property(readonly, nonatomic) NSArray *availableEngines;
- (id)_init;	// IMP=0x00000000000238f0

@end

