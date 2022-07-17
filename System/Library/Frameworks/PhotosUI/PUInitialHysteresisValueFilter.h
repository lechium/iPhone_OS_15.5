//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PUInitialHysteresisValueFilter
{
    _Bool _didReachThreshold;	// 16 = 0x10
    double _initialHysteresis;	// 24 = 0x18
    double _thresholdValue;	// 32 = 0x20
}

@property(nonatomic) double thresholdValue; // @synthesize thresholdValue=_thresholdValue;
@property(readonly, nonatomic) double outputValueDerivative;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;	// IMP=0x000000000047990e

@end
