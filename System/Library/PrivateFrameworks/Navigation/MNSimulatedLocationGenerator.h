//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation;

__attribute__((visibility("hidden")))
@interface MNSimulatedLocationGenerator : NSObject
{
    MNActiveRouteInfo *_routeInfo;	// 8 = 0x8
    MNLocation *_lastLocation;	// 16 = 0x10
    CDStruct_3f2a7a20 _lastRouteCoordinate;	// 24 = 0x18
    double _currentTime;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    unsigned long long _currentLegIndex;	// 48 = 0x30
    double _startWaitingTime;	// 56 = 0x38
    _Bool _endAtFinalDestination;	// 64 = 0x40
    double _speedOverride;	// 72 = 0x48
    _Bool _isChinaShifted;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000818d1
@property(readonly, nonatomic) CDStruct_3f2a7a20 lastRouteCoordinate; // @synthesize lastRouteCoordinate=_lastRouteCoordinate;
@property(readonly, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool endAtFinalDestination; // @synthesize endAtFinalDestination=_endAtFinalDestination;
- (double)_courseFromCoordinate:(CDStruct_071ac149)arg1 toCoordinate:(CDStruct_071ac149)arg2;	// IMP=0x0000000000081842
- (_Bool)_isCoordinate:(CDStruct_3f2a7a20)arg1 atEndOfLeg:(id)arg2;	// IMP=0x000000000008181d
- (id)_locationWithCoordinate:(CDStruct_071ac149)arg1 course:(double)arg2 speed:(double)arg3;	// IMP=0x0000000000081712
- (CDStruct_3f2a7a20)_projectedCoordinateOnRouteFrom:(CDStruct_3f2a7a20)arg1 overTimeDelta:(double)arg2 outSpeed:(out double *)arg3;	// IMP=0x0000000000081531
- (CDStruct_071ac149)_projectedCoordinateOffRouteFrom:(CDStruct_071ac149)arg1 toCoordinate:(CDStruct_071ac149)arg2 overTimeDelta:(double)arg3 outCourse:(out double *)arg4 outSpeed:(out double *)arg5;	// IMP=0x0000000000081351
- (CDStruct_3f2a7a20)_simulationStartRouteCoordinate;	// IMP=0x0000000000081138
- (CDStruct_071ac149)_updateForWaitingAtWaypointOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;	// IMP=0x0000000000080eb3
- (CDStruct_071ac149)_updateForProceedingToWaypointOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;	// IMP=0x0000000000080a78
- (CDStruct_071ac149)_updateForFollowingRouteOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;	// IMP=0x000000000008089f
- (CDStruct_071ac149)_updateForProceedingToStartOfLegOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;	// IMP=0x00000000000803f0
- (id)stringForState:(long long)arg1;	// IMP=0x0000000000080390
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;	// IMP=0x0000000000080103
- (void)updateWithRouteInfo:(id)arg1;	// IMP=0x000000000007fd1e
- (id)initWithRouteInfo:(id)arg1;	// IMP=0x000000000007fbd8

@end

