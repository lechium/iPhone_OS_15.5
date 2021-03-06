//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <AssetExplorer/PUAssetsDataSourceManagerDelegate-Protocol.h>
#import <AssetExplorer/PUReviewAssetsDataSourceManagerDelegate-Protocol.h>

@class NSString, PUReviewAssetsDataSourceManager;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate>
{
    PUReviewAssetsDataSourceManager *__attachedDataSourceManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000299e
@property(retain, nonatomic, setter=_setAttachedDataSourceManager:) PUReviewAssetsDataSourceManager *_attachedDataSourceManager; // @synthesize _attachedDataSourceManager=__attachedDataSourceManager;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;	// IMP=0x0000000000002971
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3;	// IMP=0x0000000000002959
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;	// IMP=0x0000000000002953
- (id)createInitialDataSource;	// IMP=0x000000000000293a
- (void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2;	// IMP=0x000000000000276c
- (void)detachCurrentDataSourceManager;	// IMP=0x0000000000002712
- (void)attachDataSourceManager:(id)arg1;	// IMP=0x0000000000002677

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

