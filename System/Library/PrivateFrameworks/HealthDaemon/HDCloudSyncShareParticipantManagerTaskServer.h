//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKCloudSyncShareParticipantManagerServerInterface-Protocol.h>

@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer <HKCloudSyncShareParticipantManagerServerInterface>
{
}

+ (_Bool)validateClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003d1f5f
+ (id)requiredEntitlements;	// IMP=0x00000000003d1f52
+ (id)taskIdentifier;	// IMP=0x00000000003d1f39
- (void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d2c01
- (void)remote_revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d2986
- (void)remote_fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d22b0
- (void)remote_fetchSharingParticipantStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d1fc3
- (void)connectionInvalidated;	// IMP=0x00000000003d1fbd
- (id)exportedInterface;	// IMP=0x00000000003d1fa4
- (id)remoteInterface;	// IMP=0x00000000003d1f8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

