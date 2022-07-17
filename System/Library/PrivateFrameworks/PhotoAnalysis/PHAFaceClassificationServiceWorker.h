//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PVVisionIntegrating-Protocol.h>

@class NSMutableArray, NSObject, NSString, PHAAnalysisWorkerJob, PVVisionAnalyzer, VNPersonsModel;
@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker <PVVisionIntegrating>
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 8 = 0x8
    NSMutableArray *_pendingAssetIdentifiers;	// 16 = 0x10
    PHAAnalysisWorkerJob *_currentJob;	// 24 = 0x18
    PVVisionAnalyzer *_analyzer;	// 32 = 0x20
    VNPersonsModel *_personsModel;	// 40 = 0x28
    unsigned long long _numberOfAssetsToProcess;	// 48 = 0x30
}

+ (_Bool)persistsState;	// IMP=0x0000000000079600
+ (long long)applicationDataFolderIdentifier;	// IMP=0x00000000000795f5
+ (short)workerType;	// IMP=0x00000000000795ea
- (void).cxx_destruct;	// IMP=0x00000000000792a2
@property unsigned long long numberOfAssetsToProcess; // @synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess;
@property(retain) VNPersonsModel *personsModel; // @synthesize personsModel=_personsModel;
@property(retain) PVVisionAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
- (void)loadPersonsModel;	// IMP=0x0000000000079191
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;	// IMP=0x00000000000790d4
- (void)processPendingAssetIdentifiers;	// IMP=0x0000000000078f73
- (void)_cleanup;	// IMP=0x0000000000078f21
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078f0c
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078e78
- (void)cooldown;	// IMP=0x0000000000078dd5
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078d01
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;	// IMP=0x0000000000078c07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
