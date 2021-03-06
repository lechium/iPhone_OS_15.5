//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIAssetExtracting, TRIPaths;

@interface TRIFactorPackStorage : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRIAssetExtracting> _extractor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000093266
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)arg1 namespaceDirName:(id)arg2 context:(id)arg3;	// IMP=0x0000000000092e06
- (void)reportFactorPackDiskUsagesUsingContext:(id)arg1;	// IMP=0x00000000000929e8
- (_Bool)_removeUnreferencedFactorPackSetsWithParentDir:(id)arg1 removedCount:(unsigned int *)arg2;	// IMP=0x00000000000927a4
- (id)_collectChildrenOfParentDir:(id)arg1;	// IMP=0x0000000000092539
- (_Bool)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)arg1 removedCount:(unsigned int *)arg2;	// IMP=0x00000000000921e0
- (_Bool)removeUnreferencedFactorPacksWithRemovedCount:(unsigned int *)arg1;	// IMP=0x0000000000091e60
- (id)_legacyParentDirForFactorPackWithNamespaceName:(id)arg1;	// IMP=0x0000000000091d05
- (id)_legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000091c53
- (id)legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000091bbf
- (id)_parentDirForFactorPackWithNamespaceName:(id)arg1;	// IMP=0x0000000000091aa9
- (id)_pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000000919f7
- (id)pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000009192a
- (id)_removeAssetsWithFactorNames:(id)arg1 copyingModifiedFactorPackWithPath:(id)arg2 appendingToPathsToRemove:(id)arg3 tempDirRef:(id)arg4;	// IMP=0x000000000009150d
- (_Bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 deletingAssetsWithFactorNames:(id)arg3 inUseAssetBehavior:(unsigned char)arg4;	// IMP=0x000000000009100d
- (id)_linkAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;	// IMP=0x0000000000090dc3
- (id)_linkAssetsWithIds:(id)arg1 copyingModifiedFactorPackWithPath:(id)arg2 tempDirRef:(id)arg3;	// IMP=0x0000000000090734
- (_Bool)_linkAssetsUpdatingFactorLevel:(id)arg1 fromFactorPackWithId:(id)arg2 usingAssetStore:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;	// IMP=0x0000000000090066
- (_Bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 linkingNewAssetIds:(id)arg3;	// IMP=0x000000000008fcb3
- (id)loadFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000008fbfc
- (id)loadParsedFactorPackWithDir:(id)arg1;	// IMP=0x000000000008fa55
- (id)loadFactorPackWithDir:(id)arg1;	// IMP=0x000000000008f8ac
- (id)loadParsedFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000008f84d
- (_Bool)saveFactorPack:(id)arg1 factorPackByNamePath:(id *)arg2 factorPackByIdPath:(id *)arg3;	// IMP=0x000000000008eb10
- (id)initWithPaths:(id)arg1;	// IMP=0x000000000008ea99
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;	// IMP=0x000000000008ea00
- (id)init;	// IMP=0x000000000008e9fa

@end

