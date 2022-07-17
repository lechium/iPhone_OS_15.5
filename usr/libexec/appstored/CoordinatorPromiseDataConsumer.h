//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoordinatorPromiseProvider, CoordinatorPromiseSpecification, IXOwnedDataPromise, NSString;
@protocol AssetDataConsumer, CoordinatorPromiseDataConsumerDelegate, OS_dispatch_queue;

@interface CoordinatorPromiseDataConsumer : NSObject
{
    IXOwnedDataPromise *_dataPromise;	// 8 = 0x8
    id <CoordinatorPromiseDataConsumerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CoordinatorPromiseProvider *_promiseProvider;	// 32 = 0x20
    CoordinatorPromiseSpecification *_specification;	// 40 = 0x28
    id <AssetDataConsumer> _streamAdapter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001f014
- (_Bool)_resetStreamAdapterWithError:(id *)arg1;	// IMP=0x001000000001ee4a
- (void)_notifyDelegateForCurrentDataPromise;	// IMP=0x001000000001ec9b
@property(readonly, copy) NSString *description;
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001eaca
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e9d2
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e6a0
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e4ad
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e3b5
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e283
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e10b
@property __weak id <CoordinatorPromiseDataConsumerDelegate> delegate;
- (id)initWithPromiseProvider:(id)arg1 promiseID:(id)arg2 specification:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001dd4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
