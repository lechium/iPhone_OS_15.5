//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>

@class NSString, PXCollectionsDataSourceManager, PXContentSyndicationMockSharedAlbumsDataSource;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationMockSharedAlbumsDataSourceManager <PXCollectionsDataSourceManagerObserver>
{
    id <PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;	// 8 = 0x8
    id <PXUIImageProvider> _imageProvider;	// 16 = 0x10
    id <PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;	// 24 = 0x18
    PXCollectionsDataSourceManager *_sharedAlbumsDataSourceManager;	// 32 = 0x20
}

+ (id)createCountsController;	// IMP=0x0000000000003270
- (void).cxx_destruct;	// IMP=0x00000000000037f2
@property(retain, nonatomic) PXCollectionsDataSourceManager *sharedAlbumsDataSourceManager; // @synthesize sharedAlbumsDataSourceManager=_sharedAlbumsDataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000037a8
- (void)_handleDataSourceChange;	// IMP=0x00000000000035ee
- (id)createInitialDataSource;	// IMP=0x00000000000034a7
- (id)createAssetsDataSourceManager;	// IMP=0x0000000000003420
- (id)socialLayerHighlightProvider;	// IMP=0x00000000000033c8
- (id)imageProvider;	// IMP=0x0000000000003352
- (id)assetFetchResultProvider;	// IMP=0x00000000000032dc
- (id)allAssetsFetchResult;	// IMP=0x0000000000003289

// Remaining properties
@property(readonly, nonatomic) PXContentSyndicationMockSharedAlbumsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
