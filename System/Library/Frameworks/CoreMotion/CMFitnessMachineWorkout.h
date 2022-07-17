//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CMFitnessMachineWorkout
{
    NSString *fManufacturerName;	// 56 = 0x38
    NSString *fModel;	// 64 = 0x40
}

+ (id)fitnessMachineWorkoutInstance:(id)arg1;	// IMP=0x00000000000d0f3f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d0c86
+ (_Bool)isAvailable;	// IMP=0x00000000000d0b06
- (id)description;	// IMP=0x00000000000d0e7e
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *manufacturerName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d0dd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d0d58
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d0c8e
- (void)dealloc;	// IMP=0x00000000000d0c2e
- (id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4;	// IMP=0x00000000000d0b2c

@end
