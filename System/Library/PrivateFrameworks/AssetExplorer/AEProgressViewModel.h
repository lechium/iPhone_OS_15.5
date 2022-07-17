//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <AssetExplorer/PXAssetsDataSourceManagerObserver-Protocol.h>

@class AEProgressViewModelSnapshot, NSDictionary, NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver>
{
    AEProgressViewModelSnapshot *_currentSnapshot;	// 8 = 0x8
    PXAssetsDataSourceManager *__dataSourceManager;	// 16 = 0x10
    NSDictionary *__progressByAsset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020c6f
@property(retain, nonatomic, setter=_setProgressByAsset:) NSDictionary *_progressByAsset; // @synthesize _progressByAsset=__progressByAsset;
@property(readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;	// IMP=0x0000000000020c45
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000020876
- (id)mutableChangeObject;	// IMP=0x000000000002086d
- (void)cancelProgressForAssetUUIDs:(id)arg1;	// IMP=0x000000000002058c
- (void)setProgress:(id)arg1 forAssetReference:(id)arg2;	// IMP=0x0000000000020450
- (id)_createSnapshot;	// IMP=0x000000000002008b
@property(readonly, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
- (void)dealloc;	// IMP=0x000000000001ff6c
- (id)initWithDataSourceManager:(id)arg1;	// IMP=0x000000000001feb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
