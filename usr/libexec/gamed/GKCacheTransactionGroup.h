//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKClientProxy, GKResourceManager, NSManagedObjectContext;

@interface GKCacheTransactionGroup
{
    NSManagedObjectContext *_context;	// 64 = 0x40
    GKClientProxy *_client;	// 72 = 0x48
    GKResourceManager *_resourceManager;	// 80 = 0x50
}

+ (id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3;	// IMP=0x004000000012872c
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x0010000000128613
+ (id)dispatchGroup;	// IMP=0x00100000001284fa
- (void).cxx_destruct;	// IMP=0x002000000012a342
@property(nonatomic) __weak GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a1a6
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a031
- (void)stripGKPlayerInternalPIIs;	// IMP=0x0010000000129c53
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129add
- (void)readResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000129967
- (void)writeResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000129955
- (void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001296a0
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129346
- (void)dealloc;	// IMP=0x0010000000128fb8
- (id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4;	// IMP=0x0010000000128c7c
- (id)initWithName:(id)arg1;	// IMP=0x0010000000128b5a
- (id)transactionGroup;	// IMP=0x0010000000128a0f

@end
