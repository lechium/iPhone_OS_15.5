//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/AVAssetDownloadDelegate-Protocol.h>
#import <CFNetwork/AVAssetDownloadDelegatePrivate-Protocol.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate>
{
    _Bool _sentWillDownloadToURL;	// 10 = 0xa
    _Bool _sentWillBeginDelayedRequest;	// 11 = 0xb
    AVURLAsset *_URLAsset;	// 16 = 0x10
    unsigned long long _AVAssetDownloadToken;	// 24 = 0x18
    NSArray *_mediaSelections;	// 32 = 0x20
    NSString *_assetTitle;	// 40 = 0x28
    NSData *_assetArtworkData;	// 48 = 0x30
    NSDictionary *_options;	// 56 = 0x38
    NSString *_childAssetDownloadTasksSessionIdentifier;	// 64 = 0x40
    NSURLSession *_childAssetDownloadSession;	// 72 = 0x48
    NSArray *_childAssetDownloadTasks;	// 80 = 0x50
}

@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;	// IMP=0x000000000012dfbc
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;	// IMP=0x000000000012df43
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012debf
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000012de46
- (void)_onqueue_cancel;	// IMP=0x000000000012ddf4
- (void)_onqueue_suspend;	// IMP=0x000000000012dc6f
- (void)_onqueue_resume;	// IMP=0x000000000012da99
- (_Bool)_isAVAssetTask;	// IMP=0x000000000012da91
- (id)response;	// IMP=0x000000000012da5d
- (id)currentRequest;	// IMP=0x000000000012da29
- (id)originalRequest;	// IMP=0x000000000012d9f5
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000012d9a1
- (void)dealloc;	// IMP=0x000000000012d8e5
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;	// IMP=0x000000000012d731

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
