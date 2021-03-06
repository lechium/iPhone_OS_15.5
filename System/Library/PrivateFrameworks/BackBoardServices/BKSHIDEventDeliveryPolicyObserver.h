//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSHIDEventDeferringObserving-Protocol.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventObserver, NSHashTable, NSSet, NSString;
@protocol BSInvalidatable;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving>
{
    BKSHIDEventObserver *_observer;	// 8 = 0x8
    id <BSInvalidatable> _observingAssertion;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    BKSHIDEventDisplay *_lock_display;	// 32 = 0x20
    BKSHIDEventDeferringEnvironment *_lock_environment;	// 40 = 0x28
    BKSHIDEventDeferringToken *_lock_token;	// 48 = 0x30
    NSSet *_lock_resolutions;	// 56 = 0x38
    _Bool _lock_canReceiveEvents;	// 64 = 0x40
    NSHashTable *_lock_observers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000011aba
- (void)deferringResolutionsChanged;	// IMP=0x0000000000011914
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)_lock_updateStateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000114eb
- (_Bool)_lock_canReceiveEvents;	// IMP=0x0000000000011252
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001109e
- (void)addObserver:(id)arg1;	// IMP=0x0000000000010eea
@property(readonly, nonatomic) _Bool canReceiveEvents;
@property(copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property(copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property(copy, nonatomic) BKSHIDEventDisplay *display;
- (void)dealloc;	// IMP=0x00000000000106c6
- (id)_initWithObserver:(id)arg1;	// IMP=0x000000000001041a
- (id)init;	// IMP=0x000000000001025d

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

