//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, PFStoryAutoEditConfiguration, PFStoryClusteringProperties, PXStoryAutoEditConcreteMomentsStatistics;
@protocol OS_os_log, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryAutoEditMomentsStatistics;

@interface PXStoryAutoEditMomentsProvider : NSObject
{
    NSArray *_moments;	// 8 = 0x8
    PXStoryAutoEditConcreteMomentsStatistics *_statistics;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    PFStoryClusteringProperties *_clusteringProperties;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    PFStoryAutoEditConfiguration *_configuration;	// 48 = 0x30
    id <PXDisplayAssetCollection> _assetCollection;	// 56 = 0x38
    id <PXDisplayAssetFetchResult> _displayAssets;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000312eba
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> displayAssets; // @synthesize displayAssets=_displayAssets;
@property(retain, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) PFStoryAutoEditConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PFStoryClusteringProperties *clusteringProperties; // @synthesize clusteringProperties=_clusteringProperties;
- (id)_diagnosticSwiftCodeForMomentsUnitTest;	// IMP=0x0000000000311fd2
- (id)momentForDisplayAssetIndex:(unsigned long long)arg1;	// IMP=0x0000000000311c87
@property(readonly, nonatomic) id <PXStoryAutoEditMomentsStatistics> statistics;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateMomentsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000311b79
@property(readonly, nonatomic) NSArray *moments;
- (void)_computeClustering;	// IMP=0x0000000000310856
- (id)_locationsByAssetUUIDWithAssets:(id)arg1;	// IMP=0x0000000000310664
- (id)_faceprintsByAssetUUIDWithAssets:(id)arg1;	// IMP=0x00000000003105cd
- (id)_faceprintDatasByAssetUUIDWithAssets:(id)arg1;	// IMP=0x0000000000310119
- (id)_faceprintsByAssetUUIDWithAssets:(id)arg1 faceprintDatas:(id)arg2;	// IMP=0x000000000030fe94
- (id)initWithConfiguration:(id)arg1 assetCollection:(id)arg2 displayAssets:(id)arg3;	// IMP=0x000000000030fd5f

@end
