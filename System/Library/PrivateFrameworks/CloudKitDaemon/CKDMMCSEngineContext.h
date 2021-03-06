//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDMMCS, NSMutableIndexSet, NSRunLoop, NSString;
@protocol OS_dispatch_semaphore;

@interface CKDMMCSEngineContext : NSObject
{
    _Bool _stopMMCSThread;	// 8 = 0x8
    unsigned int _maxChunkCountForSection;	// 12 = 0xc
    long long _refCount;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    CKDMMCS *_MMCS;	// 32 = 0x20
    struct _mmcs_engine *_MMCSEngine;	// 40 = 0x28
    NSString *_applicationBundleID;	// 48 = 0x30
    NSString *_path;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 64 = 0x40
    NSRunLoop *_runLoop;	// 72 = 0x48
    NSString *_runLoopMode;	// 80 = 0x50
    NSMutableIndexSet *_inMemoryItemsIDs;	// 88 = 0x58
}

+ (_Bool)tearDownMMCSEngineWithContext:(id)arg1;	// IMP=0x00000000001f281b
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000000001f249a
+ (_Bool)hasCachedCKDMMCSEngineContextForPath:(id)arg1;	// IMP=0x00000000001f23e0
+ (id)sharedContextsByPath;	// IMP=0x00000000001efc3d
+ (id)sharedContextsQueue;	// IMP=0x00000000001efb4f
+ (id)_appID;	// IMP=0x00000000001efaf0
- (void).cxx_destruct;	// IMP=0x00000000001f38c4
@property(retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs; // @synthesize inMemoryItemsIDs=_inMemoryItemsIDs;
@property(nonatomic) unsigned int maxChunkCountForSection; // @synthesize maxChunkCountForSection=_maxChunkCountForSection;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) struct _mmcs_engine *MMCSEngine; // @synthesize MMCSEngine=_MMCSEngine;
@property(nonatomic) __weak CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(nonatomic) _Bool stopMMCSThread; // @synthesize stopMMCSThread=_stopMMCSThread;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long refCount; // @synthesize refCount=_refCount;
- (void)stopTrackingItemID:(unsigned long long)arg1;	// IMP=0x00000000001f366b
- (unsigned long long)nextAvailableItemID;	// IMP=0x00000000001f3514
- (void)performOnRunLoop:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f32e7
- (void)cancelRequestWithContext:(void *)arg1;	// IMP=0x00000000001f2b6c
- (void)_tearDownMMCSEngine;	// IMP=0x00000000001f1ed4
- (_Bool)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001f1d54
- (_Bool)_setupMMCSEngineWithError:(id *)arg1;	// IMP=0x00000000001f05b5
- (void)_MMCSThread;	// IMP=0x00000000001f03ca
- (void)_MMCSTreadAbort;	// IMP=0x00000000001f03c1
- (long long)decRefCount;	// IMP=0x00000000001f0385
- (long long)incRefCount;	// IMP=0x00000000001f0349
- (id)description;	// IMP=0x00000000001f0337
- (id)CKPropertiesDescription;	// IMP=0x00000000001f010f
- (void)dealloc;	// IMP=0x00000000001eff62
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;	// IMP=0x00000000001efca2

@end

