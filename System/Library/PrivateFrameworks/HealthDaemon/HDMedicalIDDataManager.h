//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAnalyticsSubmissionCoordinatorDelegate-Protocol.h>
#import <HealthDaemon/HDProfileReadyObserver-Protocol.h>

@class HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011ee07
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011eb4e
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x000000000011eabc
- (_Bool)unitTest_persistMedicalIDData:(id)arg1;	// IMP=0x000000000011e9bb
- (id)unitTest_medicalIDData;	// IMP=0x000000000011e93d
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011e895
- (_Bool)obliterateMedicalIDDataWithReason:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011e5be
- (_Bool)deleteMedicalIDDataWithError:(id *)arg1;	// IMP=0x000000000011d726
- (_Bool)updateMedicalIDWithLocalData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011d547
- (_Bool)updateMedicalIDWithSyncedData:(id)arg1 provenance:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011c874
- (id)medicalIDClinicalContactsWithError:(id *)arg1;	// IMP=0x000000000011c824
- (id)medicalIDEmergencyContactsWithError:(id *)arg1;	// IMP=0x000000000011c7d4
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id *)arg1;	// IMP=0x000000000011c1c7
- (id)fetchMedicalIDIfSetUpWithError:(id *)arg1;	// IMP=0x000000000011c0ea
- (id)fetchMedicalIDWithError:(id *)arg1;	// IMP=0x000000000011bb74
- (void)dealloc;	// IMP=0x000000000011bac7
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000011ba2c
- (void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000023df9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

