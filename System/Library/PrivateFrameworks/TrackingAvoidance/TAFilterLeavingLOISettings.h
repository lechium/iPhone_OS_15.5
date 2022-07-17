//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, TAFilterVisitsSettings;

@interface TAFilterLeavingLOISettings : NSObject
{
    double _thresholdOfSignificantDuration;	// 8 = 0x8
    double _thresholdOfSignificantDistance;	// 16 = 0x10
    TAFilterVisitsSettings *_visitsSettings;	// 24 = 0x18
    NSSet *_enabledLoiTypes;	// 32 = 0x20
    unsigned long long _leavingHomeImmediacyType;	// 40 = 0x28
    unsigned long long _leavingWorkImmediacyType;	// 48 = 0x30
}

+ (id)defaultLeavingLOIEnabledLoiTypes;	// IMP=0x00000000000032b1
- (void).cxx_destruct;	// IMP=0x00000000000038fc
@property(readonly, nonatomic) unsigned long long leavingWorkImmediacyType; // @synthesize leavingWorkImmediacyType=_leavingWorkImmediacyType;
@property(readonly, nonatomic) unsigned long long leavingHomeImmediacyType; // @synthesize leavingHomeImmediacyType=_leavingHomeImmediacyType;
@property(readonly, nonatomic) NSSet *enabledLoiTypes; // @synthesize enabledLoiTypes=_enabledLoiTypes;
@property(readonly, nonatomic) TAFilterVisitsSettings *visitsSettings; // @synthesize visitsSettings=_visitsSettings;
@property(readonly, nonatomic) double thresholdOfSignificantDistance; // @synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance;
@property(readonly, nonatomic) double thresholdOfSignificantDuration; // @synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration;
- (id)enabledLoiTypesToString;	// IMP=0x0000000000003776
- (id)initWithDefaults;	// IMP=0x00000000000036d8
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4 leavingHomeImmediacyTypeOrDefault:(id)arg5 leavingWorkImmediacyTypeOrDefault:(id)arg6;	// IMP=0x0000000000003502
- (id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4 leavingHomeImmediacyType:(unsigned long long)arg5 leavingWorkImmediacyType:(unsigned long long)arg6;	// IMP=0x000000000000335a

@end
