//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/ASDJobManagerObserver-Protocol.h>

@class ASDJobManager, NSString;

@interface SSDownloadManagerAppShim <ASDJobManagerObserver>
{
    ASDJobManager *_jobManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000187bb8
- (void)__app_sendDownloadsChanged:(id)arg1 filterSoftware:(_Bool)arg2;	// IMP=0x0000000000187a8a
- (void)__app_setPropertiesForActivity:(id)arg1 withDownload:(id)arg2;	// IMP=0x0000000000186c74
- (void)__app_resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000186b3a
- (void)__app_pauseDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000186a00
- (id)__app_newManifestWithType:(long long)arg1;	// IMP=0x00000000001869ba
- (id)__app_newActivityWithDownload:(id)arg1;	// IMP=0x00000000001866ed
- (id)__app_newAssetWithDownloadAsset:(id)arg1 assetType:(id)arg2;	// IMP=0x00000000001860da
- (void)__app_installManifest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000185f99
- (void)__app_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000185ca7
- (id)__app_getAllDownloads;	// IMP=0x0000000000185b08
- (void)__app_finishDownloads:(id)arg1;	// IMP=0x00000000001858e2
- (void)__app_filterDownloads:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x0000000000185611
- (id)__app_extractJobIDsFromSoftwareDownloads:(id)arg1;	// IMP=0x00000000001853f1
- (void)__app_dispatchBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x000000000018530b
- (id)__app_downloadsForJobs:(id)arg1;	// IMP=0x0000000000185114
- (id)__app_convertOptions:(id)arg1;	// IMP=0x0000000000185066
- (void)__app_cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000184f2c
- (void)_sendDownloadsChanged:(id)arg1;	// IMP=0x0000000000184ed2
- (void)_pauseDownloads:(id)arg1 forced:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000184c4f
- (void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001848aa
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;	// IMP=0x0000000000184797
- (void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000184469
- (void)restartDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000184246
- (void)resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000183fcc
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000183e9a
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000183d68
- (void)finishDownloads:(id)arg1;	// IMP=0x0000000000183c2d
- (void)cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001839b3
- (void)cancelAllDownloadsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000183984
- (void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2;	// IMP=0x000000000018386f
- (void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2;	// IMP=0x000000000018375a
- (void)jobManager:(id)arg1 changedJobs:(id)arg2;	// IMP=0x0000000000183645
- (id)initWithManagerOptions:(id)arg1;	// IMP=0x0000000000183559

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

