//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEONavigationBicycleMapMatcher
{
    unsigned long long _numProgressionsOffRoute;	// 8 = 0x8
    _Bool _useMatchedCoordinateForMatching;	// 16 = 0x10
}

@property(nonatomic) _Bool useMatchedCoordinateForMatching; // @synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching;
- (id)_routeMatcherForRoute:(id)arg1;	// IMP=0x0000000000cee0ce
- (double)_courseFromLocation:(id)arg1;	// IMP=0x0000000000cee055
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;	// IMP=0x0000000000cedf7a
- (double)_approximateMaxSpeedForRoad:(id)arg1;	// IMP=0x0000000000cedefe
- (_Bool)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x0000000000cedd44
- (_Bool)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;	// IMP=0x0000000000cedcdd
- (int)transportType;	// IMP=0x0000000000cedc32
- (id)matchLocation:(id)arg1 transportType:(int)arg2;	// IMP=0x0000000000ceb96a

@end

