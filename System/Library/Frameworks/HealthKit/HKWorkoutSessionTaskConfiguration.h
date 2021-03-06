//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration
{
    _Bool _requiresCoreLocationAssertion;	// 8 = 0x8
    _Bool _requiresRecovery;	// 9 = 0x9
    _Bool _supportsAppRelaunchForRecovery;	// 10 = 0xa
    _Bool _shouldStopPreviousSession;	// 11 = 0xb
    _Bool _supports3rdPartyAOT;	// 12 = 0xc
    HKWorkoutConfiguration *_workoutConfiguration;	// 16 = 0x10
    NSUUID *_sessionUUID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011bd06
- (void).cxx_destruct;	// IMP=0x000000000011c09c
@property(nonatomic) _Bool supports3rdPartyAOT; // @synthesize supports3rdPartyAOT=_supports3rdPartyAOT;
@property(nonatomic) _Bool shouldStopPreviousSession; // @synthesize shouldStopPreviousSession=_shouldStopPreviousSession;
@property(nonatomic) _Bool supportsAppRelaunchForRecovery; // @synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery;
@property(nonatomic) _Bool requiresRecovery; // @synthesize requiresRecovery=_requiresRecovery;
@property(nonatomic) _Bool requiresCoreLocationAssertion; // @synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011be86
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011bd0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011bc28

@end

