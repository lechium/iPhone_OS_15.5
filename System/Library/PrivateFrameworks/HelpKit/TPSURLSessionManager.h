//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HelpKit/NSURLSessionDataDelegate-Protocol.h>
#import <HelpKit/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession, PPCRedirect;
@protocol OS_dispatch_queue, TPSURLSessionCustomAuthHandling, TPSURLSessionDelegate, TPSURLSessionManagerDelegate;

@interface TPSURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    struct TPSURLSessionDelegateResponds _defaultSessionDelegateResponds;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sessionTaskQueue;	// 16 = 0x10
    _Bool _respondsToRequestResumed;	// 24 = 0x18
    _Bool _respondsToRequestCompleted;	// 25 = 0x19
    _Bool _respondsToDidReceiveChallenge;	// 26 = 0x1a
    _Bool _coalesceRequests;	// 27 = 0x1b
    id <TPSURLSessionManagerDelegate> _delegate;	// 32 = 0x20
    id <TPSURLSessionDelegate> _defaultSessionDelegate;	// 40 = 0x28
    id <TPSURLSessionCustomAuthHandling> _authenticationHandler;	// 48 = 0x30
    NSMutableDictionary *_coalesceTaskURLMap;	// 56 = 0x38
    NSMutableDictionary *_uncoalesceTaskMap;	// 64 = 0x40
    NSURLSession *_URLSession;	// 72 = 0x48
    PPCRedirect *_urlRedirector;	// 80 = 0x50
}

+ (id)defaultManager;	// IMP=0x000000000002d60f
- (void).cxx_destruct;	// IMP=0x0000000000030063
@property(retain, nonatomic) PPCRedirect *urlRedirector; // @synthesize urlRedirector=_urlRedirector;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSMutableDictionary *uncoalesceTaskMap; // @synthesize uncoalesceTaskMap=_uncoalesceTaskMap;
@property(retain, nonatomic) NSMutableDictionary *coalesceTaskURLMap; // @synthesize coalesceTaskURLMap=_coalesceTaskURLMap;
@property(nonatomic) _Bool coalesceRequests; // @synthesize coalesceRequests=_coalesceRequests;
@property(nonatomic) _Bool respondsToDidReceiveChallenge; // @synthesize respondsToDidReceiveChallenge=_respondsToDidReceiveChallenge;
@property(nonatomic) _Bool respondsToRequestCompleted; // @synthesize respondsToRequestCompleted=_respondsToRequestCompleted;
@property(nonatomic) _Bool respondsToRequestResumed; // @synthesize respondsToRequestResumed=_respondsToRequestResumed;
@property(retain, nonatomic) id <TPSURLSessionCustomAuthHandling> authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(nonatomic) __weak id <TPSURLSessionDelegate> defaultSessionDelegate; // @synthesize defaultSessionDelegate=_defaultSessionDelegate;
@property(nonatomic) __weak id <TPSURLSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fe49
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002fcfd
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000002faf2
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000000002f9ba
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000000002f948
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002f870
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x000000000002f687
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000002f5f5
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002edef
- (id)sessionTaskForTask:(id)arg1;	// IMP=0x000000000002ebd4
- (void)removeTaskFromMap:(id)arg1;	// IMP=0x000000000002ea72
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000000002e8de
- (void)cancelSessionItem:(id)arg1;	// IMP=0x000000000002e759
- (void)resumeSessionItem:(id)arg1;	// IMP=0x000000000002e610
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e01d
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e005
- (id)newURLSessionItemWithRequest:(id)arg1 identifier:(id)arg2 networkDelegate:(id)arg3;	// IMP=0x000000000002dff0
- (id)_mappedURLRequest:(id)arg1;	// IMP=0x000000000002dc6f
- (id)init;	// IMP=0x000000000002d721
- (void)dealloc;	// IMP=0x000000000002d664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
