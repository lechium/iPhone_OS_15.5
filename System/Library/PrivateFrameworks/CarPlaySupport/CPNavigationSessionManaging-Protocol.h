//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPManeuver, CPTravelEstimates, NSArray, NSString, UIColor;

@protocol CPNavigationSessionManaging <NSObject>
- (void)updateTripTravelEstimates:(CPTravelEstimates *)arg1;
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(NSString *)arg2 turnCardColor:(UIColor *)arg3;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(NSString *)arg2;
@end

