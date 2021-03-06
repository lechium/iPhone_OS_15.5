//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDProfileManagerObserver-Protocol.h>
#import <HealthDaemon/HKProfileStoreServer-Protocol.h>

@class NSString;

@interface HDProfileStoreServer <HKProfileStoreServer, HDProfileManagerObserver>
{
}

+ (id)requiredEntitlements;	// IMP=0x0000000000374cb0
+ (id)taskIdentifier;	// IMP=0x0000000000374c97
- (id)remoteInterface;	// IMP=0x0000000000374c8d
- (id)exportedInterface;	// IMP=0x0000000000374c83
- (void)profileListDidChange;	// IMP=0x0000000000374b58
- (void)remote_fetchSharingInformationForProfileIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000374951
- (void)remote_startObservingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003748ec
- (void)remote_setDisplayImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000374835
- (void)remote_fetchDisplayImageData:(CDUnknownBlockType)arg1;	// IMP=0x0000000000374789
- (void)remote_fetchDisplayNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003746a5
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003737d9
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003736d1
- (void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000373567
- (void)remote_getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003734ea
- (void)remote_deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003732b1
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037316b
- (void)dealloc;	// IMP=0x0000000000373086

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

