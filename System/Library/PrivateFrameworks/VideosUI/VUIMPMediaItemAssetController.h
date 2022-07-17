//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/MPStoreDownloadManagerObserver-Protocol.h>
#import <VideosUI/VUIMPMediaItemDownloadControllerObserver-Protocol.h>
#import <VideosUI/VUIMediaEntityAssetController-Protocol.h>

@class MPMediaItem, NSString, NSTimer, VUIMPMediaItemDownloadController, VUIMediaEntityAssetControllerState, VUIMediaEntityType;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>
{
    _Bool _supportsStartingDownload;	// 8 = 0x8
    _Bool _requestingPermissionToDownload;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 16 = 0x10
    id <VUIMediaEntityAssetControllerDelegate> _delegate;	// 24 = 0x18
    VUIMediaEntityAssetControllerState *_state;	// 32 = 0x20
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;	// 40 = 0x28
    VUIMPMediaItemDownloadController *_downloadController;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 56 = 0x38
    MPMediaItem *_mediaItem;	// 64 = 0x40
    NSTimer *_waitForDeletionTimer;	// 72 = 0x48
}

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;	// IMP=0x00000000002accd2
+ (_Bool)_supportsStartingDownloadWithMediaItem:(id)arg1;	// IMP=0x00000000002acb99
+ (void)initialize;	// IMP=0x00000000002aa19c
- (void).cxx_destruct;	// IMP=0x00000000002acdeb
@property(retain, nonatomic) NSTimer *waitForDeletionTimer; // @synthesize waitForDeletionTimer=_waitForDeletionTimer;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic, getter=isRequestingPermissionToDownload) _Bool requestingPermissionToDownload; // @synthesize requestingPermissionToDownload=_requestingPermissionToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIMPMediaItemDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void)_notifyDelegateStateDidChange:(id)arg1;	// IMP=0x00000000002acb1f
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002aca6d
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ac94d
- (_Bool)_isDownloaded;	// IMP=0x00000000002ac8df
- (void)_onProcessingQueue_calculateStateAndNotify:(_Bool)arg1;	// IMP=0x00000000002ac706
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(_Bool)arg5 supportsCancellation:(_Bool)arg6 notify:(_Bool)arg7;	// IMP=0x00000000002ac3a0
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(_Bool)arg2;	// IMP=0x00000000002ac374
- (void)_onProcessingQueue_startMonitoringDownload;	// IMP=0x00000000002ac35d
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002aba6e
- (void)_onProcessingQueue_startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ab452
- (void)_onProcessingQueue_invalidateAndSetState;	// IMP=0x00000000002ab420
- (void)_onProcessingQueue_invalidate;	// IMP=0x00000000002ab3cb
- (void)_onProcessingQueue_setDownloadController:(id)arg1;	// IMP=0x00000000002ab315
- (id)_onProcessingQueue_downloadController;	// IMP=0x00000000002ab307
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002ab17f
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;	// IMP=0x00000000002aaf8f
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000002aae9c
- (void)cancelKeyFetch;	// IMP=0x00000000002aae96
- (void)cancelAndRemoveDownload;	// IMP=0x00000000002aae66
- (void)resumeDownload;	// IMP=0x00000000002aae0d
- (void)pauseDownload;	// IMP=0x00000000002aadb4
- (void)fetchNewKeysForDownloadedVideo;	// IMP=0x00000000002aadae
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002aabb9
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002aa8a4
@property(readonly, nonatomic) _Bool contentAllowsCellularDownload;
@property(readonly, nonatomic) _Bool supportsRedownloadingContent;
- (void)invalidate;	// IMP=0x00000000002aa7f6
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000002aa58c
- (id)init;	// IMP=0x00000000002aa51d
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x00000000002aa1e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
