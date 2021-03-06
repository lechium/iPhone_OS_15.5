//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSArray, NSString;
@protocol FeatureDiscoverySourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EVRoutingFeatureDiscoverySource : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _dismissed;	// 24 = 0x18
    _Bool _available;	// 25 = 0x19
    id <FeatureDiscoverySourceDelegate> _delegate;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
    NSArray *_unpairedVehicles;	// 48 = 0x30
    long long _transportType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a6db94
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSArray *unpairedVehicles; // @synthesize unpairedVehicles=_unpairedVehicles;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <FeatureDiscoverySourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x0010000000a6db3f
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;	// IMP=0x0010000000a6da44
- (void)_loadUpairedVehicles;	// IMP=0x0010000000a6d7c9
- (void)_reloadAvailability;	// IMP=0x0010000000a6d458
- (void)_markCurrentVehicleCombinationAsViewed;	// IMP=0x0010000000a6d389
- (_Bool)_shouldShowVehicleCombination:(id)arg1;	// IMP=0x0010000000a6d2b6
- (void)_didSelectModel;	// IMP=0x0010000000a6d0b4
- (void)_didViewModel;	// IMP=0x0010000000a6ceea
- (void)_dismiss;	// IMP=0x0010000000a6cdd0
@property(readonly, nonatomic) FeatureDiscoveryModel *model;
- (void)setTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x0010000000a6c324
@property(nonatomic, getter=isAvailable) _Bool available;
- (id)initWithPriority:(long long)arg1 delegate:(id)arg2;	// IMP=0x0010000000a6be5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

