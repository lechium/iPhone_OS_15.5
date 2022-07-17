//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REEngineLocationManagerProperties-Protocol.h>

@class CLLocation, RELocationManager, REObserverStore;

@interface REEngineLocationManager <REEngineLocationManagerProperties>
{
    RELocationManager *_locationManager;	// 8 = 0x8
    RELocationManager *_simulatedLocationManager;	// 16 = 0x10
    REObserverStore *_observers;	// 24 = 0x18
    _Bool _monitoringLocation;	// 32 = 0x20
    CLLocation *_currentLocation;	// 40 = 0x28
    CLLocation *_location;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009ea79
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) RELocationManager *locationManager;
@property(readonly, nonatomic) _Bool monitoringLocation;
- (void)_stopMonitoringLocationForManager:(id)arg1;	// IMP=0x000000000009e97e
- (void)_beginMonitoringLocationForManager:(id)arg1;	// IMP=0x000000000009e74d
- (id)_currentLocationManager;	// IMP=0x000000000009e719
- (void)_endTraining;	// IMP=0x000000000009e64d
- (void)_beginTraining;	// IMP=0x000000000009e581
- (void)_handleLocationUpdate:(id)arg1;	// IMP=0x000000000009e396
- (_Bool)_wantsLocation;	// IMP=0x000000000009e353
- (void)_updateLocationStatus;	// IMP=0x000000000009e24c
- (void)resume;	// IMP=0x000000000009e1f2
- (void)pause;	// IMP=0x000000000009e1e0
- (void)removeObserver:(id)arg1;	// IMP=0x000000000009e1a7
- (void)addObserver:(id)arg1;	// IMP=0x000000000009e16e
- (void)dealloc;	// IMP=0x000000000009e059
- (id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2;	// IMP=0x000000000009de5c

@end
