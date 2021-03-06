//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartHealth/HKHeartbeatSeriesFeatureStatusManagerClient-Protocol.h>
#import <HeartHealth/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSString, NSUserDefaults;

@interface HKHeartbeatSeriesFeatureStatusManager : NSObject <HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKObserverSet *_observers;	// 16 = 0x10
    HKTaskServerProxyProvider *_proxyProvider;	// 24 = 0x18
    NSUserDefaults *_heartNotificationsUserDefaults;	// 32 = 0x20
}

+ (id)taskIdentifier;	// IMP=0x000000000000a35c
- (void).cxx_destruct;	// IMP=0x000000000000b783
- (id)remoteInterface;	// IMP=0x000000000000b779
- (id)exportedInterface;	// IMP=0x000000000000b76f
- (void)connectionInvalidated;	// IMP=0x000000000000b769
- (void)_notifyObserversForFailureToUpdateWithError:(id)arg1;	// IMP=0x000000000000b6b3
- (void)_notifyObserversForPredominantFeatureUpdate:(long long)arg1;	// IMP=0x000000000000b639
- (void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(id)arg1;	// IMP=0x000000000000b539
- (void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(long long)arg1;	// IMP=0x000000000000b40a
- (void)_updateAndNotifyAllObservers;	// IMP=0x000000000000b271
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000b167
- (void)_startObservingHeartNotificationsUserDefaults;	// IMP=0x000000000000b13a
- (void)_handleAutomaticProxyReconnection;	// IMP=0x000000000000aef3
- (id)_synchronouslyStartObservingWithError:(id *)arg1;	// IMP=0x000000000000abfe
- (void)_startObservingWithActivationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aa9c
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000000a87b
- (void)registerObserver:(id)arg1 queue:(id)arg2 activationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a383
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000a36e
- (void)dealloc;	// IMP=0x000000000000a306
- (id)initWithHealthStore:(id)arg1 heartNotificationsUserDefaults:(id)arg2;	// IMP=0x000000000000a138
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000000a0b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

