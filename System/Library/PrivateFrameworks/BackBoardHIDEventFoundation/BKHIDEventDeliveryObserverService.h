//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventDeliveryResolutionObserver-Protocol.h>
#import <BackBoardHIDEventFoundation/BKSHIDEventObserverServerInterface-Protocol.h>

@class BKHIDEventDeliveryObserverServiceListener, BSMutableIntegerMap, NSMutableIndexSet, NSString;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver>
{
    BSMutableIntegerMap *_connectionsByPID;	// 8 = 0x8
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;	// 16 = 0x10
    NSMutableIndexSet *_observerPIDs;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    BSMutableIntegerMap *_resolutionsByPID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000fd53
- (id)setObservesDeferringResolutions:(id)arg1;	// IMP=0x000000000000fc01
- (void)resolutionsDidChange:(id)arg1 forPID:(int)arg2;	// IMP=0x000000000000fae6
- (void)removeConnectionForPID:(int)arg1;	// IMP=0x000000000000fa9c
- (void)addConnection:(id)arg1 forPID:(int)arg2;	// IMP=0x000000000000fa18
- (id)init;	// IMP=0x000000000000f9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
