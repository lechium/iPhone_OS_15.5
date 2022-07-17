//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepository-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>
{
    NSURL *_storeURL;	// 8 = 0x8
    NSMutableDictionary *_state;	// 16 = 0x10
    _Bool _dirty;	// 24 = 0x18
    unsigned long long _batchCount;	// 32 = 0x20
    int _autoFlushDuration;	// 40 = 0x28
    id <FBApplicationDataStoreRepositoryDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_stateQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_writeQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000021163
@property(nonatomic) __weak id <FBApplicationDataStoreRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;	// IMP=0x000000000002102d
- (void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;	// IMP=0x0000000000020f00
- (void)_writeQueue_flushSynchronously;	// IMP=0x0000000000020ac4
- (void)_stateQueue_markDirty;	// IMP=0x0000000000020a21
- (void)_stateQueue_removeStoreForIdentifier:(id)arg1;	// IMP=0x000000000002098d
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1;	// IMP=0x00000000000208f7
- (id)_stateQueue_storeForIdentifier:(id)arg1;	// IMP=0x0000000000020886
- (id)_stateQueue_objectsForKeys:(id)arg1;	// IMP=0x000000000002057d
- (id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000000204d0
- (void)_load;	// IMP=0x000000000002039c
- (_Bool)_isEligibleForSaving:(id)arg1;	// IMP=0x000000000002016f
- (void)close;	// IMP=0x000000000002015d
- (void)endBatchedUpdate;	// IMP=0x000000000002008f
- (void)beginBatchedUpdate;	// IMP=0x0000000000020036
- (void)flushSynchronously;	// IMP=0x000000000001ffd5
- (void)removeAllObjectsForApplication:(id)arg1;	// IMP=0x000000000001ff28
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001fcdf
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001fc51
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;	// IMP=0x000000000001f8ad
- (id)allObjectsForKeys:(id)arg1;	// IMP=0x000000000001f752
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001f539
- (_Bool)containsKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001f506
- (id)keysForApplication:(id)arg1;	// IMP=0x000000000001f31c
- (id)applicationIdentifiersWithState;	// IMP=0x000000000001f1ed
- (_Bool)isDirty;	// IMP=0x000000000001f147
- (id)location;	// IMP=0x000000000001f139
- (void)dealloc;	// IMP=0x000000000001f012
- (id)initWithStorePath:(id)arg1;	// IMP=0x000000000001eee8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
