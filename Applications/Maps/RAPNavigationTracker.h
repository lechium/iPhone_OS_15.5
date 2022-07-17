//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSString, PlatformController, RAPAppState, RAPDisplayedRouteState;
@protocol RAPDisplayedDirectionsPlan;

__attribute__((visibility("hidden")))
@interface RAPNavigationTracker : NSObject
{
    PlatformController *_platformController;	// 8 = 0x8
    double _latestNavigationStartedDate;	// 16 = 0x10
    _Bool _latestNavigationIsDetour;	// 24 = 0x18
    GEOComposedRoute *_activeComposedRoute;	// 32 = 0x20
    RAPDisplayedRouteState *_currentDirections;	// 40 = 0x28
    id <RAPDisplayedDirectionsPlan> _displayedDirectionsPlan;	// 48 = 0x30
    _Bool _isShowingDirections;	// 56 = 0x38
    RAPAppState *_appState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000019a7b1
@property(readonly, nonatomic) _Bool isShowingDirections; // @synthesize isShowingDirections=_isShowingDirections;
- (id)displayedDirectionsPlan;	// IMP=0x001000000019a79e
@property(readonly, nonatomic) RAPDisplayedRouteState *currentDirections; // @synthesize currentDirections=_currentDirections;
@property(readonly, nonatomic) GEOComposedRoute *activeComposedRoute; // @synthesize activeComposedRoute=_activeComposedRoute;
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x001000000019a767
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x001000000019a687
- (id)rapAppStateForCurrentNavigation;	// IMP=0x001000000019a679
- (_Bool)canPresentRapFeedbackView;	// IMP=0x001000000019a2ea
- (void)_reset;	// IMP=0x001000000019a28f
- (void)_createRapAppState;	// IMP=0x00100000001993a4
- (void)_updateWithRunningNavigation:(_Bool)arg1;	// IMP=0x00100000001991c8
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000199080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
