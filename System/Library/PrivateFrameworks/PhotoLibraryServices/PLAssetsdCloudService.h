//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdCloudServiceProtocol-Protocol.h>

@class NSString, PLLazyObject;

@interface PLAssetsdCloudService <PLAssetsdCloudServiceProtocol>
{
    PLLazyObject *_lazyResourceDownloader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000026e484
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 synchronously:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000026dfe5
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026dd9b
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000026d7dd
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(_Bool)arg4 trackCPLDownload:(_Bool)arg5 downloadIsTransient:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000026d340
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026d0f6
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000026cc54
- (id)resourceDownloader;	// IMP=0x000000000026cc37
- (id)initWithLibraryServicesManager:(id)arg1 lazyResourceDownloader:(id)arg2;	// IMP=0x000000000026cbbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

