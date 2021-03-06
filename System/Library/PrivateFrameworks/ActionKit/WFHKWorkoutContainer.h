//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>

@class HKUnit, HKWorkout, NSString;

@interface WFHKWorkoutContainer : NSObject <WFNaming, NSSecureCoding>
{
    HKWorkout *_workout;	// 8 = 0x8
    HKUnit *_distanceUnit;	// 16 = 0x10
    HKUnit *_caloriesUnit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000386c03
- (void).cxx_destruct;	// IMP=0x0000000000386bd0
@property(retain, nonatomic) HKUnit *caloriesUnit; // @synthesize caloriesUnit=_caloriesUnit;
@property(retain, nonatomic) HKUnit *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000386a9c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003869a4
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) double distanceValue;
@property(readonly, nonatomic) double caloriesValue;
- (id)initWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;	// IMP=0x0000000000385fe3
- (id)initWithWorkout:(id)arg1;	// IMP=0x0000000000385fcc

@end

