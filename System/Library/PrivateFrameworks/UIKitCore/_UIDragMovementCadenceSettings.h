//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDragMovementCadenceSettings : NSObject
{
    double _velocityMagnitudeThreshold;	// 8 = 0x8
    double _dwellTimeThreshold;	// 16 = 0x10
}

+ (id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2;	// IMP=0x00000000003c6f7c
@property(nonatomic) double dwellTimeThreshold; // @synthesize dwellTimeThreshold=_dwellTimeThreshold;
@property(nonatomic) double velocityMagnitudeThreshold; // @synthesize velocityMagnitudeThreshold=_velocityMagnitudeThreshold;
- (void)_applyImmediateSettings;	// IMP=0x00000000003c728a
- (void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1;	// IMP=0x00000000003c71de
- (void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1;	// IMP=0x00000000003c7146
- (void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1;	// IMP=0x00000000003c709a
- (void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1;	// IMP=0x00000000003c7002
- (id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2;	// IMP=0x00000000003c6fb0
- (id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2;	// IMP=0x00000000003c6ea5

@end

