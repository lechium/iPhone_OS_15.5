//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGNeighborScoreComputer, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGMemoryPhotoKitPersister : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSObject<OS_os_log> *_loggingConnection;	// 16 = 0x10
    PGNeighborScoreComputer *_neighborScoreComputer;	// 24 = 0x18
    _Bool _isAppleMusicSubscriber;	// 32 = 0x20
}

+ (void)setStoryColorGradeKindFromPhotosGraphProperties:(id)arg1 onMemoryChangeRequest:(id)arg2;	// IMP=0x000000000031c2ef
- (void).cxx_destruct;	// IMP=0x000000000031a6df
- (_Bool)_shouldPrefetchAudioForMemoriesInPhotoLibrary:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000031a572
- (_Bool)_shouldPrefetchMetadataForMemoriesInPhotoLibrary:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x000000000031a405
- (void)cacheMusicAudioAndArtworkForEnrichedMemories:(id)arg1 inflationContext:(id)arg2 photoLibrary:(id)arg3;	// IMP=0x0000000000319e08
- (_Bool)updateExistingMemories:(id)arg1 fetchedGraphEphemeralMemoryByUniqueIdentifier:(id)arg2 progressReporter:(id)arg3;	// IMP=0x0000000000319c16
- (id)_encodedFeaturesFromFeatureNodes:(id)arg1;	// IMP=0x0000000000319a52
- (unsigned long long)_memoryIndexOffsetOnDate:(id)arg1 includePendingMemories:(_Bool)arg2;	// IMP=0x00000000003196b4
- (_Bool)_enforceUniqueCreationDatesWithPendingState:(unsigned short)arg1;	// IMP=0x00000000003196a7
- (id)_memoryCreationRequestForEnrichedMemory:(id)arg1 pendingState:(unsigned short)arg2 creationDate:(id)arg3 photosGraphDataDictionary:(id)arg4;	// IMP=0x00000000003192c7
- (id)memoryLocalIdentifiersFromPersistingEnrichedMemories:(id)arg1 withPendingState:(unsigned short)arg2 graph:(id)arg3 progressReporter:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000318bc0
- (_Bool)persistGraphEphemeralMemoriesFromEnrichedMemories:(id)arg1 graph:(id)arg2 progressReporter:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003189be
- (id)_photosGraphDataDictionaryForEnrichedMemory:(id)arg1;	// IMP=0x0000000000318913
- (id)_photosGraphDataDictionaryByEnrichedMemoryIdentifierForEnrichedMemories:(id)arg1;	// IMP=0x00000000003186fc
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;	// IMP=0x0000000000318601

@end
