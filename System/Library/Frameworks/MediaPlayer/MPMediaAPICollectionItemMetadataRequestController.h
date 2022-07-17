//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSMutableDictionary *_pendingOperationsIdentiferMap;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000000830c7
- (void).cxx_destruct;	// IMP=0x0000000000082851
- (void)cancelRequest:(id)arg1;	// IMP=0x000000000008283c
- (void)enqueueRequest:(id)arg1 withBatchProgressHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082784
- (id)_init;	// IMP=0x0000000000082642

@end
