//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate;

@interface VCPPersonBuilder : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPFaceClusterer *_faceClusterer;	// 16 = 0x10
    VCPPhotosFaceProcessingContext *_context;	// 24 = 0x18
    VCPPhotosPersistenceDelegate *_persistenceDelegate;	// 32 = 0x20
    NSMutableDictionary *_state;	// 40 = 0x28
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;	// 48 = 0x30
    _Bool _personBuilderMergeCandidatesEnabled;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000020e109
- (_Bool)performPersonBuildingWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000020db8c
- (_Bool)_setAllFaceGroupsNeedPersonBuilding;	// IMP=0x000000000020d823
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1;	// IMP=0x000000000020d7b4
- (void)setPersonBuilderMergeCandidatesEnabled:(_Bool)arg1;	// IMP=0x000000000020d744
- (void)_setFaceAnalysisStateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000020d670
- (void)_readFaceAnalysisState;	// IMP=0x000000000020d52d
- (id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x000000000020d428

@end

