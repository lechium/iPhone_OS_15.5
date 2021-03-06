//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKAuthorizationStore, HKHealthRecordsStore, HKHealthStore, HKSource, NSArray, NSDate, NSError, NSMutableSet, NSSet;

@interface HKClinicalSourceAuthorizationController : NSObject
{
    _Bool _anyDeterminedTypeAllowsReading;	// 8 = 0x8
    HKSource *_source;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    NSArray *_orderedTypesForReading;	// 32 = 0x20
    NSError *_fetchError;	// 40 = 0x28
    long long _authorizationModeForSource;	// 48 = 0x30
    NSDate *_displayReadAuthorizationAnchorDate;	// 56 = 0x38
    HKHealthRecordsStore *_healthRecordsStore;	// 64 = 0x40
    HKAuthorizationStore *_authorizationStore;	// 72 = 0x48
    NSSet *_typesForReading;	// 80 = 0x50
    NSSet *_typesRequestedForReading;	// 88 = 0x58
    NSMutableSet *_typesEnabledForReading;	// 96 = 0x60
    CDUnknownBlockType __unitTesting_reminderRegistryCompletion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000111e3b
@property(copy, nonatomic, setter=_unitTesting_setReminderRegistryCompletion:) CDUnknownBlockType _unitTesting_reminderRegistryCompletion; // @synthesize _unitTesting_reminderRegistryCompletion=__unitTesting_reminderRegistryCompletion;
@property(readonly, nonatomic) NSMutableSet *typesEnabledForReading; // @synthesize typesEnabledForReading=_typesEnabledForReading;
@property(readonly, copy, nonatomic) NSSet *typesRequestedForReading; // @synthesize typesRequestedForReading=_typesRequestedForReading;
@property(copy, nonatomic) NSSet *typesForReading; // @synthesize typesForReading=_typesForReading;
@property(readonly, nonatomic) HKAuthorizationStore *authorizationStore; // @synthesize authorizationStore=_authorizationStore;
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(copy, nonatomic) NSDate *displayReadAuthorizationAnchorDate; // @synthesize displayReadAuthorizationAnchorDate=_displayReadAuthorizationAnchorDate;
@property(nonatomic) _Bool anyDeterminedTypeAllowsReading; // @synthesize anyDeterminedTypeAllowsReading=_anyDeterminedTypeAllowsReading;
@property(nonatomic) long long authorizationModeForSource; // @synthesize authorizationModeForSource=_authorizationModeForSource;
@property(copy, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(readonly, copy, nonatomic) NSArray *orderedTypesForReading; // @synthesize orderedTypesForReading=_orderedTypesForReading;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
- (void)_setAuthorizationStatuses:(id)arg1 modes:(id)arg2 shouldUpdateAnchor:(_Bool)arg3;	// IMP=0x0000000000111736
- (id)_authorizationStatusesWithTypes:(id)arg1;	// IMP=0x000000000011150f
- (id)_authorizationModesWithMode:(long long)arg1 types:(id)arg2;	// IMP=0x0000000000111314
- (long long)_authorizationStatusWithType:(id)arg1;	// IMP=0x00000000001112f4
@property(readonly, nonatomic) _Bool anyTypeRequested;
- (_Bool)anyTypeEnabled;	// IMP=0x0000000000111264
- (_Bool)allTypesEnabled;	// IMP=0x00000000001111f0
- (void)_commitModeConfirmationAlertRegistrationShouldDisplay:(_Bool)arg1;	// IMP=0x000000000011108b
- (void)_updateReminderRegistrationIfNeededForCommittingModes:(id)arg1 anyTypeEnabled:(_Bool)arg2;	// IMP=0x0000000000110e9b
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg1;	// IMP=0x0000000000110c39
- (_Bool)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)arg1;	// IMP=0x0000000000110c2d
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)arg1;	// IMP=0x0000000000110b44
- (void)setEnabledForAllTypes:(_Bool)arg1;	// IMP=0x00000000001109fa
- (void)setEnabled:(_Bool)arg1 forType:(id)arg2 commit:(_Bool)arg3;	// IMP=0x00000000001108d1
- (_Bool)isTypeEnabled:(id)arg1;	// IMP=0x00000000001107bd
- (id)_orderTypes:(id)arg1;	// IMP=0x00000000001105cb
- (void)reload;	// IMP=0x000000000011025e
- (id)_fetchAllClinicalAuthorizationRecordsWithError:(id *)arg1;	// IMP=0x000000000010feff
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2 source:(id)arg3 typesRequestedForReading:(id)arg4;	// IMP=0x000000000010fd95

@end

