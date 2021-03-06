//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *fSessionId;	// 8 = 0x8
    long long fType;	// 16 = 0x10
    long long fLocationType;	// 24 = 0x18
    NSDate *fStartDate;	// 32 = 0x20
    NSDate *fEndDate;	// 40 = 0x28
    _Bool fIsUserInitiated;	// 48 = 0x30
    _Bool _isUserInitiated;	// 49 = 0x31
}

+ (long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1;	// IMP=0x00000000000d00e8
+ (id)workoutLocationName:(long long)arg1;	// IMP=0x00000000000d0094
+ (id)workoutName:(long long)arg1;	// IMP=0x00000000000cfede
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cfbdd
+ (_Bool)isAvailable;	// IMP=0x00000000000cf832
+ (_Bool)workoutIsTypeRunning:(long long)arg1;	// IMP=0x00000000000cf815
+ (_Bool)workoutIsTypeWalking:(long long)arg1;	// IMP=0x00000000000cf7f8
+ (_Bool)workoutIsTypePedestrian:(long long)arg1;	// IMP=0x00000000000cf7bc
+ (long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1;	// IMP=0x00000000000cf73a
+ (long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1;	// IMP=0x00000000000cf6b8
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1;	// IMP=0x00000000000cf4dd
+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1;	// IMP=0x00000000000cf4c0
@property(readonly, nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
- (id)description;	// IMP=0x00000000000d0107
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) long long locationType;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSUUID *sessionId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cfe0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cfd5c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cfbe5
- (void)dealloc;	// IMP=0x00000000000cfb8c
- (void)setWorkoutType:(long long)arg1;	// IMP=0x00000000000cfb82
- (void)setIsUserInitiated:(_Bool)arg1;	// IMP=0x00000000000cfb79
- (void)setLocationType:(long long)arg1;	// IMP=0x00000000000cfb6f
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x00000000000cfa27
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3;	// IMP=0x00000000000cf982
- (id)initWithSessionId:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000cf848

@end

