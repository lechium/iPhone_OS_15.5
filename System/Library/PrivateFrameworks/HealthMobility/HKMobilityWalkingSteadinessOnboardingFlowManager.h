//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKMobileCountryCodeManager, HKMobilityWalkingSteadinessFeatureStatusManager, NSString;
@protocol HKFeatureAvailabilityProviding, HKFeatureStatusProviding, OS_dispatch_queue;

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    id <HKFeatureStatusProviding> _classificationsFeatureStatusProvider;	// 32 = 0x20
    id <HKFeatureAvailabilityProviding> _notificationsFeatureAvailabilityStore;	// 40 = 0x28
    HKMobilityWalkingSteadinessFeatureStatusManager *_featureStatusManager;	// 48 = 0x30
    HKMobileCountryCodeManager *_mobileCountryCodeManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003d01
@property(retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // @synthesize mobileCountryCodeManager=_mobileCountryCodeManager;
@property(retain, nonatomic) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager; // @synthesize featureStatusManager=_featureStatusManager;
@property(retain, nonatomic) id <HKFeatureAvailabilityProviding> notificationsFeatureAvailabilityStore; // @synthesize notificationsFeatureAvailabilityStore=_notificationsFeatureAvailabilityStore;
@property(retain, nonatomic) id <HKFeatureStatusProviding> classificationsFeatureStatusProvider; // @synthesize classificationsFeatureStatusProvider=_classificationsFeatureStatusProvider;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)markOnboardingCompleteShouldTurnOnNotifications:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000035bf
- (_Bool)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg1;	// IMP=0x0000000000003533
- (void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d89
- (id)initWithHealthStore:(id)arg1 classificationsFeatureStatusProvider:(id)arg2 notificationsFeatureAvailabilityStore:(id)arg3 featureStatusManager:(id)arg4;	// IMP=0x0000000000002c77
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000002b75

@end

