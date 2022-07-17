//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHealthStoreClient, HKWorkoutConfiguration, NSString, NSUUID;

@interface HDWorkoutSessionConfiguration : NSObject
{
    _Bool _requiresCoreLocationAssertion;	// 8 = 0x8
    _Bool _supportsAppRelaunchForRecovery;	// 9 = 0x9
    _Bool _supports3rdPartyAOT;	// 10 = 0xa
    NSUUID *_sessionIdentifier;	// 16 = 0x10
    HKWorkoutConfiguration *_workoutConfiguration;	// 24 = 0x18
    HDHealthStoreClient *_client;	// 32 = 0x20
    NSString *_clientProcessBundleIdentifier;	// 40 = 0x28
    NSString *_clientApplicationIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004b1dd6
@property(readonly, nonatomic) _Bool supports3rdPartyAOT; // @synthesize supports3rdPartyAOT=_supports3rdPartyAOT;
@property(readonly, nonatomic) _Bool supportsAppRelaunchForRecovery; // @synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery;
@property(readonly, nonatomic) _Bool requiresCoreLocationAssertion; // @synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion;
@property(readonly, copy, nonatomic) NSString *clientApplicationIdentifier; // @synthesize clientApplicationIdentifier=_clientApplicationIdentifier;
@property(readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // @synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier;
@property(readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3 processBundleIdentifier:(id)arg4 applicationIdentifier:(id)arg5 requiresCoreLocationAssertion:(_Bool)arg6 supportsAppRelaunchForRecovery:(_Bool)arg7 supports3rdPartyAOT:(_Bool)arg8;	// IMP=0x00000000004b1c32

@end
