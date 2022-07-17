//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSDate, NSString, PGGraphBuilder, PGMemoryController;

@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    PGMemoryController *_memoryController;	// 16 = 0x10
    NSDate *_localDate;	// 24 = 0x18
}

+ (void)regenerateMemoriesOfCategory:(unsigned long long)arg1 withGraphBuilder:(id)arg2 progressReporter:(id)arg3;	// IMP=0x00000000002ff4da
- (void).cxx_destruct;	// IMP=0x00000000002ff261
@property(copy, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (id)memoryGeneratorsForMemoryCategory:(unsigned long long)arg1 memoryGenerationContext:(id)arg2 controller:(id)arg3;	// IMP=0x00000000002fe47e
- (void)insertMemoriesForCategory:(unsigned long long)arg1 loggingConnection:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fd50c
- (void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)arg1 featureProvider:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002fcfe3
- (void)insertSingletonFeatureNodes;	// IMP=0x00000000002fcfc4
- (id)_memoryController;	// IMP=0x00000000002fce97
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fc73f
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x00000000002fc72a
- (void)setGraphBuilder:(id)arg1;	// IMP=0x00000000002fc6d0
- (id)init;	// IMP=0x00000000002fc66a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
