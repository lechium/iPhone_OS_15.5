//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetDownloadSessionInternal, AVMediaSelection, NSArray, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal *_internal;	// 8 = 0x8
}

+ (id)assetDownloadSessionWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;	// IMP=0x000000000010f087
+ (void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2;	// IMP=0x000000000010f05d
+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x000000000010f010
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;	// IMP=0x000000000010efd9
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x000000000010ef8e
@property(readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) unsigned long long countOfBytesReceived;
@property(readonly, nonatomic) unsigned long long availableFileSize;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSURL *destinationURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)startLoadingMetadata;	// IMP=0x000000000010f4ba
- (void)stop;	// IMP=0x000000000010f382
- (void)pause;	// IMP=0x000000000010f24a
- (void)start;	// IMP=0x000000000010f0f1
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000010f0d7
- (void)dealloc;	// IMP=0x000000000010edd4
- (id)initWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;	// IMP=0x000000000010eb77
- (id)initWithDownloadToken:(unsigned long long)arg1;	// IMP=0x000000000010ea3a
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x000000000010dfe6
- (id)init;	// IMP=0x000000000010df9e
- (id)_common_init;	// IMP=0x000000000010def6
- (void)_sendWillDownloadVariants:(id)arg1;	// IMP=0x000000000011014f
- (void)_sendProgessUpdateWithExpectedBytesToDownload:(unsigned long long)arg1 bytesDownloaded:(unsigned long long)arg2;	// IMP=0x0000000000110095
- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)arg1;	// IMP=0x000000000010ffa6
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)arg1;	// IMP=0x000000000010feb7
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)arg1 currentLoadedTimeRanges:(id)arg2 timeRangeExpectedToLoad:(id)arg3 selectedMediaArray:(id)arg4;	// IMP=0x000000000010fae0
- (void)_sendDownloadFailureToDelegateWithError:(id)arg1;	// IMP=0x000000000010fa2e
- (void)_sendDownloadSuccessToDelegate;	// IMP=0x000000000010f987
- (void)_downloadFailureCallbackWithError:(id)arg1;	// IMP=0x000000000011021a
- (void)_downloadSuccessCallback;	// IMP=0x0000000000110201
- (void)_removeFigPlaybackItemListeners;	// IMP=0x0000000000112951
- (void)_addFigPlaybackItemListeners;	// IMP=0x0000000000112611
- (id)_figPlaybackItemNotificationNames;	// IMP=0x00000000001125df
- (void)_removeFigAssetListeners;	// IMP=0x0000000000112415
- (void)_addFigAssetListeners;	// IMP=0x0000000000112082
- (id)_figAssetNotificationNames;	// IMP=0x000000000011202e
- (id)_errorFromAssetNotificationPayload:(id)arg1;	// IMP=0x0000000000111faf
- (struct OpaqueFigAsset *)_createDuplicateFigAssetFromAVAsset:(id)arg1;	// IMP=0x0000000000111e9d
- (id)_verifyDownloadConfigurationForAssetType;	// IMP=0x0000000000111dd2
- (int)_readyForInspection;	// IMP=0x0000000000111d7b
- (int)_primeCache;	// IMP=0x0000000000111cee
- (void)_primeCacheOnDispatchQueue;	// IMP=0x0000000000111bb7
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;	// IMP=0x0000000000111b31
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;	// IMP=0x00000000001118fc
- (id)_startOnQueue;	// IMP=0x00000000001117c0
- (id)_startOnQueueFirstTime;	// IMP=0x00000000001114d0
- (void)_startLoadingMetadataOnQueue;	// IMP=0x000000000011148f
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x0000000000111481
- (int)_setFileFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x0000000000111303
- (struct OpaqueFigAsset *)_figAsset;	// IMP=0x00000000001112f5
- (id)_weakReference;	// IMP=0x00000000001112e7
- (void)_setupFigClientObjectAsync:(id)arg1;	// IMP=0x0000000000111126
- (id)_setupFigClientObjectForStreaming:(id)arg1;	// IMP=0x00000000001104d7
- (id)_setupFigClientObjectForFileDownload:(id)arg1;	// IMP=0x0000000000110402
- (void)cancelAndReleaseProgressTimerOnQueue;	// IMP=0x00000000001103b9
- (_Bool)startProgressTimerOnQueueWithError:(id *)arg1;	// IMP=0x0000000000110234

@end

