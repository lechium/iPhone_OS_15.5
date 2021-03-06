//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOResourceRequesterLocalProxy : NSObject
{
    NSMutableDictionary *_requestHandlersPending;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000047d1d
- (void)_resetRequestTimeout;	// IMP=0x0010000000047be3
- (void)_failAllPendingRequests;	// IMP=0x001000000004790c
- (void)failedToResolveResources:(id)arg1 withError:(id)arg2;	// IMP=0x001000000004764d
- (void)didResolvePaths:(id)arg1 forResources:(id)arg2;	// IMP=0x00100000000473db
- (void)_cleanUpFinishedHandlers:(id)arg1;	// IMP=0x00100000000471ae
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;	// IMP=0x0010000000046fbb
- (id)resourcesRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2 queue:(id)arg3 signpost:(unsigned long long)arg4;	// IMP=0x0010000000046c6f
- (void)dealloc;	// IMP=0x0010000000046b8f
- (void)_fetchResources:(id)arg1 force:(_Bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000461f8
- (void)fetchResources:(id)arg1 force:(_Bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000046008
- (id)init;	// IMP=0x0010000000045f67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

