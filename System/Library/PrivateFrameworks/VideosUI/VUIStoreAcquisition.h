//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VUIAcquisitionRequest;

@interface VUIStoreAcquisition : NSObject
{
    NSMutableArray *_pendingQueue;	// 8 = 0x8
    unsigned long long _concurrentCount;	// 16 = 0x10
    VUIAcquisitionRequest *_activeRequest;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000012dbd2
- (void).cxx_destruct;	// IMP=0x000000000012eea6
- (void)postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2;	// IMP=0x000000000012ed28
- (void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(_Bool)arg5;	// IMP=0x000000000012ea78
- (void)_handleCustomRequest:(id)arg1;	// IMP=0x000000000012ea72
- (void)_handleRequest:(id)arg1;	// IMP=0x000000000012e1f6
- (void)_processRequest:(id)arg1;	// IMP=0x000000000012e109
- (void)_processFirstRequest;	// IMP=0x000000000012e03f
- (void)cancelAcquisition:(id)arg1;	// IMP=0x000000000012e025
- (id)acquireWithProperties:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012dc85
- (id)init;	// IMP=0x000000000012dc27

@end

