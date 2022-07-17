//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString, PGGraphBuilder;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    _Bool _petPrintClusteringEnabled;	// 16 = 0x10
}

+ (id)blocklistScenePetLabels;	// IMP=0x000000000020ea89
+ (id)scenePetLabels;	// IMP=0x000000000020ea7c
- (void).cxx_destruct;	// IMP=0x000000000020e7f4
- (id)_petsDetectedWithType:(short)arg1 inPhotoLibrary:(id)arg2 withGraph:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000020e240
- (id)momentNodesForPerson:(id)arg1 inPhotoLibrary:(id)arg2 withGraph:(id)arg3;	// IMP=0x000000000020df94
- (unsigned long long)_speciesForSceneLabel:(id)arg1;	// IMP=0x000000000020ded8
- (unsigned long long)_speciesForDetectionType:(short)arg1;	// IMP=0x000000000020de00
- (id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000020d7f9
- (void)_removeAllPetNodesForGraph:(id)arg1;	// IMP=0x000000000020d758
- (id)_petSceneNodesForGraph:(id)arg1;	// IMP=0x000000000020d6a8
- (id)_supportedPetDetectionTypes;	// IMP=0x000000000020d69b
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000020c9bf
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x000000000020c9aa
- (void)setGraphBuilder:(id)arg1;	// IMP=0x000000000020c999
- (id)initForTesting;	// IMP=0x000000000020c961
- (id)init;	// IMP=0x000000000020c929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
