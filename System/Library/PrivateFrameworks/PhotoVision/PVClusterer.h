//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVFaceClusteringProtocol-Protocol.h>

@class NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, PVCanceler, PVContext, PVEventManager, PVQueue, PVSuggestionRequest, VNCanceller, VNClustererBuilder;
@protocol PVPersistenceDelegate, PVVisionIntegrating;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol>
{
    id <PVVisionIntegrating> _visionIntegration;	// 8 = 0x8
    id <PVPersistenceDelegate> _persistenceDelegate;	// 16 = 0x10
    PVQueue *_processingQueue;	// 24 = 0x18
    PVContext *_context;	// 32 = 0x20
    NSURL *_cacheDirUrl;	// 40 = 0x28
    NSURL *_cacheFileUrl;	// 48 = 0x30
    NSString *_clusteringType;	// 56 = 0x38
    NSNumber *_threshold;	// 64 = 0x40
    NSSet *_faceCSNsInClusterCache;	// 72 = 0x48
    unsigned long long _nextSeqNum;	// 80 = 0x50
    NSMutableSet *_faceIdStrsToAdd;	// 88 = 0x58
    NSMutableSet *_faceCSNsToRemove;	// 96 = 0x60
    unsigned long long _accumulatedChangesCount;	// 104 = 0x68
    unsigned long long _nextClusterTriggeringAccumulatedChangesCount;	// 112 = 0x70
    PVCanceler *_clusteringCanceler;	// 120 = 0x78
    VNCanceller *_visionCanceler;	// 128 = 0x80
    VNClustererBuilder *_clusterBuilder;	// 136 = 0x88
    _Bool _rebuildClusterer;	// 144 = 0x90
    NSMutableArray *_outstandingSuggestionRequests;	// 152 = 0x98
    PVSuggestionRequest *_currentSuggestionRequest;	// 160 = 0xa0
    NSLock *_suggestionLock;	// 168 = 0xa8
    NSLock *_currentStatusSnapshotLock;	// 176 = 0xb0
    CDStruct_6069b02b _currentStatusSnapshot;	// 184 = 0xb8
    _Bool _currentStatusSnapshotIsValid;	// 208 = 0xd0
    NSLock *_propertyDictionaryLock;	// 216 = 0xd8
    NSMutableDictionary *_propertyDictionary;	// 224 = 0xe0
    long long _clustererBringUpState;	// 232 = 0xe8
    NSDate *_timestampOfLastClusterComparison;	// 240 = 0xf0
    PVEventManager *_eventManager;	// 248 = 0xf8
}

+ (_Bool)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000302a9
+ (void)initialize;	// IMP=0x0000000000030285
- (void).cxx_destruct;	// IMP=0x000000000002d9c7
@property __weak PVEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) long long clustererBringUpState; // @synthesize clustererBringUpState=_clustererBringUpState;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002d78a
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000002d6bd
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002d3d9
@property(readonly, nonatomic) _Bool needsUpdate;
@property(readonly, nonatomic) _Bool needsFullSync;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) long long clustererState;
- (id)_stringForPVClustererBringUpState:(long long)arg1;	// IMP=0x000000000002cfbc
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002cec6
- (void)_readPropertyDictionary;	// IMP=0x000000000002ccb6
- (id)_propertyDictionaryFileURL;	// IMP=0x000000000002cc99
- (_Bool)getClusters:(id *)arg1 threshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002c989
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;	// IMP=0x000000000002c47c
- (_Bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002c0e4
- (_Bool)isReadyToReturnSuggestions;	// IMP=0x000000000002c0b8
- (void)cancelAllSuggestionRequests;	// IMP=0x000000000002c010
- (void)cancelSuggestionRequest:(id)arg1;	// IMP=0x000000000002bcfd
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000002bae3
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002b878
- (long long)restoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000002b61e
- (_Bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000002b21b
- (_Bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ab08
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;	// IMP=0x000000000002a5c2
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029de5
- (_Bool)_processingQueueResetClusterCache:(id *)arg1;	// IMP=0x0000000000029b20
- (_Bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000298c9
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000297bd
- (_Bool)_processingQueueSaveClusterCache:(id *)arg1;	// IMP=0x0000000000028eda
- (_Bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id *)arg1 lastClusterSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000028af3
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;	// IMP=0x0000000000026c15
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id *)arg2 withCanceler:(id)arg3;	// IMP=0x00000000000266fa
- (void)_removeEmptyGroups;	// IMP=0x00000000000265fe
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3;	// IMP=0x0000000000025f26
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(_Bool)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4;	// IMP=0x0000000000025dd2
- (id)_faceObservationsFromFaceCSNs:(id)arg1;	// IMP=0x0000000000025b83
- (_Bool)_performAndPersistClustersByAddingFaceObs:(id)arg1 groupingIdentifiers:(id)arg2 removingFaceObs:(id)arg3 updateFaces:(id)arg4 canceler:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000024c79
- (id)status;	// IMP=0x0000000000024a69
- (void)_recordCurrentStatus:(CDStruct_6069b02b)arg1;	// IMP=0x0000000000024a13
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;	// IMP=0x00000000000249a9
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;	// IMP=0x0000000000024956
- (void)_recordClusterRebuildRequired:(_Bool)arg1;	// IMP=0x0000000000024903
- (void)_recordClusteringState:(_Bool)arg1;	// IMP=0x00000000000248b0
- (void)cancelClustering;	// IMP=0x0000000000024899
- (void)_cancelClusteringAndRestoreClusterCache:(_Bool)arg1;	// IMP=0x00000000000247ea
- (void)performClusteringWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000246ea
- (void)clusterAndWait;	// IMP=0x0000000000024665
- (void)clusterIfNecessaryAndWait;	// IMP=0x00000000000245e0
- (unsigned long long)numberOfAccumulatedClusterChanges;	// IMP=0x0000000000024536
- (_Bool)_processingQueuePerformForcedFaceClustering:(_Bool)arg1 withCanceler:(id)arg2;	// IMP=0x0000000000023659
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;	// IMP=0x0000000000023452
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;	// IMP=0x0000000000023316
- (void)terminate;	// IMP=0x0000000000023259
- (id)initWithContext:(id)arg1 persistenceDelegate:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;	// IMP=0x0000000000022e4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
