//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCacheDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext;
@protocol SKUIResourceLoaderDelegate;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSMutableDictionary *_operationsByRequestID;	// 16 = 0x10
    NSMapTable *_requestsByCacheKey;	// 24 = 0x18
    NSCache *_resourcesByRequestID;	// 32 = 0x20
    _Bool _inBackground;	// 40 = 0x28
    long long _requestCountMap[3];	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 72 = 0x48
    id <SKUIResourceLoaderDelegate> _delegate;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
    NSOperationQueue *_delegateQueue;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000d9fdd
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <SKUIResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_sendDidLoadAllForReason:(long long)arg1;	// IMP=0x00000000000d9e1e
- (void)_sendDidIdleIfNecessary;	// IMP=0x00000000000d9d3f
- (void)_sendDidBeginLoadingIfNecessary;	// IMP=0x00000000000d9c60
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;	// IMP=0x00000000000d9a37
- (void)_reprioritizeOperations;	// IMP=0x00000000000d9957
- (void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2;	// IMP=0x00000000000d98aa
- (long long)_qualityOfService;	// IMP=0x00000000000d9893
- (long long)_queuePriorityForLoadReason:(long long)arg1;	// IMP=0x00000000000d9853
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000000000d97bb
@property(nonatomic) long long resourceCacheLimit;
- (_Bool)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000d96d1
- (void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000d96bf
- (id)requestIdentifierForCacheKey:(id)arg1;	// IMP=0x00000000000d96a9
- (_Bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000d9283
- (_Bool)isIdleForReason:(long long)arg1;	// IMP=0x00000000000d925f
@property(readonly, nonatomic, getter=isIdle) _Bool idle;
- (void)enterForeground;	// IMP=0x00000000000d91ea
- (void)enterBackground;	// IMP=0x00000000000d91cc
- (void)cancelRequestWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000d90e5
- (void)cancelAllRequests;	// IMP=0x00000000000d900d
- (void)removeAllCachedResources;	// IMP=0x00000000000d8ff7
- (id)cachedResourceForRequestIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000d8f69
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000d8ebe
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000d8d35
- (id)init;	// IMP=0x00000000000d8cf3
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000000d8b7b
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000000d8b0a
- (id)initWithOperationQueue:(id)arg1;	// IMP=0x00000000000d8af6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

