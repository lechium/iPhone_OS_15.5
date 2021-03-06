//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGGraph, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject
{
    _Bool _petPrintClusteringEnabled;	// 8 = 0x8
    short _detectionType;	// 10 = 0xa
    PGGraph *_graph;	// 16 = 0x10
    PHPhotoLibrary *_photoLibrary;	// 24 = 0x18
    NSObject<OS_os_log> *_loggingConnection;	// 32 = 0x20
}

+ (unsigned long long)petFaceClusteringType;	// IMP=0x00000000001965e6
+ (unsigned long long)petFaceClusterMinSize;	// IMP=0x00000000001965ba
+ (double)petFaceClusteringThreshold;	// IMP=0x000000000019658d
- (void).cxx_destruct;	// IMP=0x0000000000194b1a
@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(nonatomic) _Bool petPrintClusteringEnabled; // @synthesize petPrintClusteringEnabled=_petPrintClusteringEnabled;
@property(nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak PGGraph *graph; // @synthesize graph=_graph;
@property(nonatomic) short detectionType; // @synthesize detectionType=_detectionType;
- (id)removeClusterMatchingPetEntityFaceSet:(id)arg1 fromFaceClustersAtHome:(id)arg2;	// IMP=0x000000000019475d
- (_Bool)updatePetPersonsForFaceClusters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000193a47
- (_Bool)updatePetFaceGroupsForFaceClusters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000192c48
- (_Bool)updateFacesNameSourceToSourceGraphIfNeeded:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000192709
- (void)_sortFaceClusters:(id)arg1;	// IMP=0x00000000001926ed
- (id)_createClustersFromPetFaces:(id)arg1 withErrors:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000192179
- (id)_fetchPetFacesInMomentsForUUIDs:(id)arg1;	// IMP=0x0000000000191fed
- (id)_fetchPetFaceGroups;	// IMP=0x0000000000191f12
- (id)fetchPetPersons;	// IMP=0x0000000000191d71
- (_Bool)updatePetIdentityWithError:(id *)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000191302
- (id)petFacesAtHome;	// IMP=0x0000000000190a72
- (id)momentNodesForFaces:(id)arg1;	// IMP=0x0000000000190781
- (id)initWithDetectionType:(short)arg1 photoLibrary:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4;	// IMP=0x00000000001906b7

@end

