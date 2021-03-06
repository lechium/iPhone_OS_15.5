//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSessionConfiguration, NWURLSessionDelegateWrapper;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

@interface NWURLSession : NSObject
{
    _Atomic unsigned long long taskIdentifier;	// 8 = 0x8
    NSString *_sessionDescription;	// 16 = 0x10
    NSURLSessionConfiguration *_internalConfiguration;	// 24 = 0x18
    NSMutableSet *_dataTasks;	// 32 = 0x20
    NSMutableSet *_uploadTasks;	// 40 = 0x28
    NSMutableSet *_downloadTasks;	// 48 = 0x30
    NSMutableSet *_streamTasks;	// 56 = 0x38
    NSMutableSet *_webSocketTasks;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NWURLSessionDelegateWrapper *_delegateWrapper;	// 80 = 0x50
}

+ (void)_disableAppSSO;	// IMP=0x000000000004de40
+ (void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004de20
- (void).cxx_destruct;	// IMP=0x000000000004dda0
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004dd60
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004dc40
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004db10
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d980
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d830
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d710
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d5e0
- (id)webSocketTaskWithRequest:(id)arg1;	// IMP=0x000000000004d5d0
- (id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2;	// IMP=0x000000000004d5c0
- (id)webSocketTaskWithURL:(id)arg1;	// IMP=0x000000000004d5b0
- (id)streamTaskWithNetService:(id)arg1;	// IMP=0x000000000004d5a0
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;	// IMP=0x000000000004d590
- (id)downloadTaskWithResumeData:(id)arg1;	// IMP=0x000000000004d580
- (id)downloadTaskWithURL:(id)arg1;	// IMP=0x000000000004d490
- (id)downloadTaskWithRequest:(id)arg1;	// IMP=0x000000000004d380
- (id)uploadTaskWithStreamedRequest:(id)arg1;	// IMP=0x000000000004d280
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;	// IMP=0x000000000004d100
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;	// IMP=0x000000000004cfd0
- (id)dataTaskWithURL:(id)arg1;	// IMP=0x000000000004cee0
- (id)dataTaskWithRequest:(id)arg1;	// IMP=0x000000000004cdd0
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cdc0
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cda0
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cd90
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cd80
- (void)invalidateAndCancel;	// IMP=0x000000000004cc20
- (void)finishTasksAndInvalidate;	// IMP=0x000000000004cc10
@property(readonly, nonatomic) id <NSURLSessionDelegate> delegate;
@property(readonly, nonatomic) NSOperationQueue *delegateQueue;
@property(readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000000004c870
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000004c810

@end

