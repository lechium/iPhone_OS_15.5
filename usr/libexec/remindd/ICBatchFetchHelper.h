//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ICBatchFetchHelper : NSObject
{
    long long _batchSize;	// 8 = 0x8
    NSMutableSet *_ckIdentifiers;	// 16 = 0x10
    NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
    NSMutableArray *_dispatchBlocks;	// 32 = 0x20
    NSCache *_managedObjectIDCache;	// 40 = 0x28
    NSCache *_missingCKIdentifierCache;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000083dc7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCache *missingCKIdentifierCache; // @synthesize missingCKIdentifierCache=_missingCKIdentifierCache;
@property(retain, nonatomic) NSCache *managedObjectIDCache; // @synthesize managedObjectIDCache=_managedObjectIDCache;
@property(retain, nonatomic) NSMutableArray *dispatchBlocks; // @synthesize dispatchBlocks=_dispatchBlocks;
@property(nonatomic) __weak NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSMutableSet *ckIdentifiers; // @synthesize ckIdentifiers=_ckIdentifiers;
@property long long batchSize; // @synthesize batchSize=_batchSize;
- (void)dealloc;	// IMP=0x0010000000083c4c
- (void)removeCachedManagedObjectForCKIdentifier:(id)arg1;	// IMP=0x0010000000083bb4
- (void)setCachedManagedObject:(id)arg1 forCKIdentifier:(id)arg2;	// IMP=0x0010000000083a52
- (id)cachedManagedObjectForCKIdentifier:(id)arg1;	// IMP=0x0010000000083520
- (_Bool)isMissingCKIdentifier:(id)arg1;	// IMP=0x001000000008346a
- (void)flushOnCurrentQueue:(_Bool)arg1;	// IMP=0x00100000000832a6
- (void)flush;	// IMP=0x0010000000083292
- (void)addDispatchBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008312a
- (void)addCKIdentifiers:(id)arg1 onCurrentQueue:(_Bool)arg2 dispatchBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000082dbc
- (void)addCKIdentifiers:(id)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082da5
- (void)_dispatchBlockApplyingBackPressureIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x0010000000082bdb
- (void)_flush;	// IMP=0x0010000000081dec
- (_Bool)_canObtainPermanentIDForObject:(id)arg1 context:(id)arg2 ckIdentifier:(id)arg3;	// IMP=0x0010000000081a23
- (id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 batchSize:(unsigned long long)arg3 cacheCountLimit:(unsigned long long)arg4;	// IMP=0x00100000000818b4

@end
