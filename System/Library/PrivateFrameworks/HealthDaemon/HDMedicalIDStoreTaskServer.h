//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKMedicalIDStoreServerInterface-Protocol.h>

@class NSString;

@interface HDMedicalIDStoreTaskServer <HKMedicalIDStoreServerInterface>
{
}

+ (id)requiredEntitlements;	// IMP=0x0000000000311afe
+ (id)taskIdentifier;	// IMP=0x0000000000311ae5
+ (_Bool)validateClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003112e8
- (id)remoteInterface;	// IMP=0x0000000000311b24
- (id)exportedInterface;	// IMP=0x0000000000311b0b
- (void)remote_medicalIDClinicalContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000311a0e
- (void)remote_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000311948
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003117d9
- (void)remote_updateMedicalIDData:(id)arg1 lastFetchedMedicalIDData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000311655
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000031158f
- (void)remote_fetchMedicalIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003114c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
