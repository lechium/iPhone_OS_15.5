//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, NSString, PlatformController;

__attribute__((visibility("hidden")))
@interface AppStateManager : NSObject
{
    unsigned long long _defaultZoomLevel;	// 8 = 0x8
    AppCoordinator *_appCoordinator;	// 16 = 0x10
    PlatformController *_platformController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a20c12
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void)setPPTTestDirectionsPlan:(id)arg1;	// IMP=0x0010000000a20bb9
- (_Bool)tryMovingStepModeToStepAtIndex:(unsigned long long)arg1 forRouteWithHandle:(id)arg2;	// IMP=0x0010000000a20752
- (void)setDirectionsPlan:(id)arg1 source:(long long)arg2;	// IMP=0x0010000000a1f42a
- (void)setMapsActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x0010000000a1d853
- (void)resetNonActivityStateForMapView:(id)arg1;	// IMP=0x0010000000a1d83e
- (id)directionsPlanWithFidelity:(unsigned long long)arg1;	// IMP=0x0010000000a1d789
- (id)mapsActivityWithFidelity:(unsigned long long)arg1;	// IMP=0x0010000000a1c760
- (void)openCommuteEntry:(id)arg1;	// IMP=0x0010000000a1c64d
- (void)openTransitIncidents:(id)arg1;	// IMP=0x0010000000a1c534
- (void)openMapsSuggestion:(id)arg1;	// IMP=0x0010000000a1c41e
- (void)openSearchWithQuery:(id)arg1;	// IMP=0x0010000000a1c2e4
- (id)iosChrome;	// IMP=0x0010000000a1c2a1
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000a1c220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

