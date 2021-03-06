//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

@interface SBSRemoteAlertHandle : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _lock_active;	// 12 = 0xc
    _Bool _lock_valid;	// 13 = 0xd
    NSHashTable *_lock_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;	// 24 = 0x18
    id <SBSRemoteAlertHandleClient> _handleClient;	// 32 = 0x20
    NSString *_handleID;	// 40 = 0x28
}

+ (id)handleWithConfiguration:(id)arg1;	// IMP=0x000000000002456e
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;	// IMP=0x000000000002455c
+ (void)setDefaultHandleClient:(id)arg1;	// IMP=0x000000000002418c
+ (id)defaultHandleClient;	// IMP=0x0000000000024122
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;	// IMP=0x00000000000239ee
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2 configurationContext:(id)arg3;	// IMP=0x000000000002389f
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;	// IMP=0x000000000002388a
+ (id)lookupHandlesForDefinition:(id)arg1;	// IMP=0x0000000000023876
- (void).cxx_destruct;	// IMP=0x00000000000245b8
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000002459c
- (void)addObserver:(id)arg1;	// IMP=0x000000000002458a
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(_Bool)arg2;	// IMP=0x00000000000241a0
- (void)_receivedInvalidationWithError:(id)arg1;	// IMP=0x000000000002410e
- (void)_didDeactivate;	// IMP=0x0000000000023ef5
- (void)_didActivate;	// IMP=0x0000000000023cda
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;	// IMP=0x0000000000023c99
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)activateWithContext:(id)arg1;	// IMP=0x0000000000023c15
- (void)activateWithOptions:(id)arg1;	// IMP=0x0000000000023c03
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000023b87
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000023af6
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;	// IMP=0x00000000000237ac

@end

