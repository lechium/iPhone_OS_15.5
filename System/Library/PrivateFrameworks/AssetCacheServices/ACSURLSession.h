//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetCacheServices/NSURLSessionDataDelegate-Protocol.h>
#import <AssetCacheServices/NSURLSessionDelegate-Protocol.h>
#import <AssetCacheServices/NSURLSessionDownloadDelegate-Protocol.h>
#import <AssetCacheServices/NSURLSessionStreamDelegate-Protocol.h>
#import <AssetCacheServices/NSURLSessionTaskDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol ACSURLSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface ACSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>
{
    _Bool _canUseCachingServer;	// 8 = 0x8
    int __phase;	// 12 = 0xc
    NSObject<OS_os_log> *__logHandle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *__queue;	// 24 = 0x18
    NSURLSession *__nsurlSession;	// 32 = 0x20
    NSDictionary *__locateOptions;	// 40 = 0x28
    id <ACSURLSessionDelegate> __clientDelegate;	// 48 = 0x30
    NSOperationQueue *__clientDelegateOpQueue;	// 56 = 0x38
    NSMutableDictionary *__tasks;	// 64 = 0x40
}

+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x00000000000016dd
+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3;	// IMP=0x00000000000016b0
+ (id)sharedSession;	// IMP=0x00000000000015ec
- (void).cxx_destruct;	// IMP=0x00000000000107d1
@property int _phase; // @synthesize _phase=__phase;
@property(retain) NSMutableDictionary *_tasks; // @synthesize _tasks=__tasks;
@property(retain) NSOperationQueue *_clientDelegateOpQueue; // @synthesize _clientDelegateOpQueue=__clientDelegateOpQueue;
@property(retain) id <ACSURLSessionDelegate> _clientDelegate; // @synthesize _clientDelegate=__clientDelegate;
@property(retain) NSDictionary *_locateOptions; // @synthesize _locateOptions=__locateOptions;
@property(retain) NSURLSession *_nsurlSession; // @synthesize _nsurlSession=__nsurlSession;
@property(retain) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(retain) NSObject<OS_os_log> *_logHandle; // @synthesize _logHandle=__logHandle;
@property _Bool canUseCachingServer; // @synthesize canUseCachingServer=_canUseCachingServer;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;	// IMP=0x00000000000105df
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;	// IMP=0x000000000001051b
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;	// IMP=0x0000000000010457
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;	// IMP=0x0000000000010393
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x000000000000fe9c
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000000000f973
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000000000ee5e
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e811
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000000e310
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;	// IMP=0x000000000000deb2
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x000000000000d5bd
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000cbc7
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000000c0b4
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x000000000000bc1b
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x000000000000b771
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b12f
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000aa85
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a383
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;	// IMP=0x0000000000009f78
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009e86
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009948
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000000000094e2
- (void)_copyAttributesFromNSURLTask:(id)arg1 toNSURLTask:(id)arg2;	// IMP=0x000000000000942e
- (id)_linkedLocationWithLocation:(id)arg1;	// IMP=0x0000000000009307
- (id)_errorWithResumeDataFromError:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3;	// IMP=0x0000000000009068
- (_Bool)_resumeData:(id)arg1 toNSURLResumeData:(id *)arg2 originalRequest:(id *)arg3 currentRequest:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000008521
- (id)_resumeDataWithNSURLResumeData:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000082b7
- (void)_downloadTask:(id)arg1 completedWithLocation:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000767c
- (void)_dataTask:(id)arg1 completedWithData:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006c98
- (void)_onqueue_resumeTask:(id)arg1;	// IMP=0x00000000000063d1
- (void)_resumeTask:(id)arg1;	// IMP=0x0000000000006191
- (void)_suspendTask:(id)arg1;	// IMP=0x0000000000005f9e
- (id)_downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005557
- (void)_cancelDownloadTask:(id)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004e7c
- (void)_cancelTask:(id)arg1;	// IMP=0x0000000000004c8c
- (void)_onqueue_task:(id)arg1 willUseCachingServer:(_Bool)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000048eb
- (void)_locateCachingServerForURL:(id)arg1 isUpload:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000461f
- (id)_onqueue_uniqueTasks;	// IMP=0x0000000000004361
- (id)_onqueue_taskForNSURLTask:(id)arg1;	// IMP=0x0000000000004068
- (void)_onqueue_removeTaskForNSURLTask:(id)arg1;	// IMP=0x0000000000003d65
- (void)_removeTask:(id)arg1;	// IMP=0x0000000000003b6a
- (void)_onqueue_addTask:(id)arg1 forNSURLTask:(id)arg2;	// IMP=0x000000000000383b
- (void)_addTask:(id)arg1;	// IMP=0x00000000000035e6
- (id)_keyForNSURLTask:(id)arg1;	// IMP=0x0000000000003541
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000031e1
- (id)initWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x0000000000002dcb
- (id)downloadTaskWithResumeData:(id)arg1;	// IMP=0x0000000000002db7
- (id)downloadTaskWithURL:(id)arg1;	// IMP=0x0000000000002d51
- (id)downloadTaskWithRequest:(id)arg1;	// IMP=0x0000000000002c0d
- (id)uploadTaskWithStreamedRequest:(id)arg1;	// IMP=0x0000000000002ac9
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;	// IMP=0x000000000000294e
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;	// IMP=0x00000000000027ae
- (id)dataTaskWithURL:(id)arg1;	// IMP=0x0000000000002748
- (id)dataTaskWithRequest:(id)arg1;	// IMP=0x0000000000002604
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002435
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ffb
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ef9
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001da2
- (void)invalidateAndCancel;	// IMP=0x0000000000001a9e
- (void)finishTasksAndInvalidate;	// IMP=0x0000000000001914
@property(copy) NSString *sessionDescription;
@property(readonly, copy) NSDictionary *locateOptions;
@property(readonly, copy) NSURLSessionConfiguration *configuration;
@property(readonly, retain) id <ACSURLSessionDelegate> delegate;
@property(readonly, retain) NSOperationQueue *delegateQueue;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011b4a
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011ab8
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011692
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011205
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010ce8
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010c56
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

