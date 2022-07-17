//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class CADisplay, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplaySource, NSEnumerator, NSHashTable, NSMapTable, NSSet, NSString;
@protocol FBSDisplayObserving, OS_dispatch_queue;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable>
{
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 8 = 0x8
    CADisplay *_mainDisplay;	// 16 = 0x10
    FBSDisplaySource *_mainDisplaySource;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    id <FBSDisplayObserving> _lock_bookendObserver;	// 40 = 0x28
    NSHashTable *_lock_observers;	// 48 = 0x30
    NSMapTable *_lock_sourcesByDisplay;	// 56 = 0x38
    _Bool _lock_allowsUnknownDisplays;	// 64 = 0x40
    _Bool _lock_canPostToBookendObserver;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0000000000065cf1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
- (void)_lock_enumerateConnectedWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065c18
- (void)_lock_enumerateSourcesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065ad0
- (id)_sortedSources;	// IMP=0x00000000000658f6
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSEnumerator *observersEnumerator;
@property(readonly, nonatomic) __weak id <FBSDisplayObserving> bookendObserver;
@property(readonly, nonatomic) _Bool canPostToBookendObserver;
- (void)_postInitialBookendObserverConnections;	// IMP=0x0000000000064f5d
- (void)setAllowsUnknownDisplays:(_Bool)arg1;	// IMP=0x0000000000064d53
- (_Bool)allowsUnknownDisplays;	// IMP=0x0000000000064d2b
- (void)invalidate;	// IMP=0x0000000000064cc0
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000064c54
- (void)addObserver:(id)arg1;	// IMP=0x0000000000064be8
- (id)configurationForIdentity:(id)arg1;	// IMP=0x000000000006489d
@property(readonly, copy, nonatomic) NSSet *connectedIdentities;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
- (void)dealloc;	// IMP=0x00000000000646ed
- (id)initWithInitializationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064531
- (id)_initWithBookendObserver:(id)arg1;	// IMP=0x0000000000063d9c
- (id)init;	// IMP=0x0000000000063d88

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
