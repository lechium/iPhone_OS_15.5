//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSURLSessionDelegate-Protocol.h>

@class KTContextStore, KTLogClient, NSString, TransparencyManagedDataStore;
@protocol OS_dispatch_workloop;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate>
{
    KTContextStore *_contextStore;	// 8 = 0x8
    KTLogClient *_logClient;	// 16 = 0x10
    TransparencyManagedDataStore *_dataStore;	// 24 = 0x18
    NSObject<OS_dispatch_workloop> *_workloop;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009e1d3
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property __weak KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) KTContextStore *contextStore; // @synthesize contextStore=_contextStore;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000009dee5
- (void)handleDownloadRecordFailure:(id)arg1 task:(id)arg2 downloadMetadata:(id)arg3 error:(id)arg4;	// IMP=0x000000000009d498
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000000009cf6a
- (void)handleDownloadRecord:(id)arg1 downloadData:(id)arg2 downloadMetadata:(id)arg3;	// IMP=0x000000000009c5e0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x000000000009c426
- (id)initWithDataStore:(id)arg1 workloop:(id)arg2;	// IMP=0x000000000009c388

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

