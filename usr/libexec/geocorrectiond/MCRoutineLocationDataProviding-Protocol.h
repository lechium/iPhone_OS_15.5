//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

@protocol MCRoutineLocationDataProviding
- (_Bool)isMapsAuthorizedForLocation;
- (void)getNumberOfLocationsOfInterestWithinDistance:(double)arg1 fromLocation:(CLLocation *)arg2 handler:(void (^)(unsigned long long, NSError *))arg3;
@end

