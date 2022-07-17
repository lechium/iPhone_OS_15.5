//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSAtomicSignal, BSServiceConnectionListener, FBSDisplayConfiguration, FBSDisplayLayout, NSHashTable, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FBSDisplayLayoutPublisher : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable>
{
    BSAtomicSignal *_invalidatedSignal;	// 8 = 0x8
    BSServiceConnectionListener *_listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queuesByQOS[3];	// 24 = 0x18
    NSObject<OS_xpc_object> *_queues_xLayoutByQOS[3];	// 48 = 0x30
    NSMutableSet *_queues_connectionsByQOS[3];	// 72 = 0x48
    FBSDisplayLayout *_mutableLayout;	// 96 = 0x60
    NSMutableSet *_mutableElementKeys;	// 104 = 0x68
    NSHashTable *_observers;	// 112 = 0x70
    NSObject<OS_xpc_object> *_xLayout;	// 120 = 0x78
    FBSDisplayLayout *_currentLayout;	// 128 = 0x80
    NSMutableOrderedSet *_transitionReasons;	// 136 = 0x88
    unsigned long long _transitionsCount;	// 144 = 0x90
    _Bool _dirty;	// 152 = 0x98
}

+ (id)publisherWithConfiguration:(id)arg1;	// IMP=0x000000000005ce81
- (void).cxx_destruct;	// IMP=0x000000000005edce
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000005e7c9
- (id)_addElement:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005e0c9
- (void)flush;	// IMP=0x000000000005d9de
- (void)removeObserver:(id)arg1;	// IMP=0x000000000005d96b
- (void)addObserver:(id)arg1;	// IMP=0x000000000005d859
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
- (id)transitionAssertionWithReason:(id)arg1;	// IMP=0x000000000005d5ee
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)addElement:(id)arg1;	// IMP=0x000000000005d551
@property(nonatomic) long long backlightLevel;
@property(nonatomic) long long interfaceOrientation;
@property(copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
- (void)invalidate;	// IMP=0x000000000005d27f
- (void)activate;	// IMP=0x000000000005d269
- (id)_initWithConfiguration:(id)arg1;	// IMP=0x000000000005cab4
- (id)init;	// IMP=0x000000000005c986

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
