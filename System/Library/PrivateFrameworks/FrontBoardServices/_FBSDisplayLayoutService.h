//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSDisplayLayoutMonitorClientInterface-Protocol.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface>
{
    BSServiceConnectionEndpoint *_endpoint;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 16 = 0x10
    BSServiceConnection *_connection;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSMapTable *_lock_keyedObservers;	// 40 = 0x28
    FBSDisplayLayout *_lock_layout;	// 48 = 0x30
    unsigned long long _lock_layoutGeneration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002f5a3
- (oneway void)updateLayout:(id)arg1 withTransition:(id)arg2;	// IMP=0x000000000002f387
- (void)removeObserverForKey:(id)arg1;	// IMP=0x000000000002f2b6
- (void)addObserver:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000002efe7
- (id)currentLayout;	// IMP=0x000000000002efb0
- (id)endpoint;	// IMP=0x000000000002efa2
- (void)invalidate;	// IMP=0x000000000002ef5d
- (void)dealloc;	// IMP=0x000000000002ef1b
- (id)_initWithEndpoint:(id)arg1 qos:(BOOL)arg2;	// IMP=0x000000000002ea0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
