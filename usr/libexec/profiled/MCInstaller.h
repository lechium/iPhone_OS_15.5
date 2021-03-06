//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCInstallerReader.h>

@class FLFollowUpController, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSTimer;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSMutableArray *_queuedProvisioningProfiles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 24 = 0x18
    NSDictionary *_currentlyInstallingRestrictions;	// 32 = 0x20
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 40 = 0x28
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 48 = 0x30
    FLFollowUpController *_followUpController;	// 56 = 0x38
    NSTimer *_purgatoryTimer;	// 64 = 0x40
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0020000000050ba9
+ (void)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x00100000000505ce
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x00100000000502fc
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x0010000000050292
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x001000000004be25
+ (id)notInstalledByMDMError;	// IMP=0x001000000004511a
+ (id)deviceIsSupervisedError;	// IMP=0x0010000000045073
+ (id)deviceNotSupervisedError;	// IMP=0x0010000000044fcc
+ (id)sharedInstaller;	// IMP=0x0010000000041574
- (void).cxx_destruct;	// IMP=0x002000000005245b
@property(retain, nonatomic) NSTimer *purgatoryTimer; // @synthesize purgatoryTimer=_purgatoryTimer;
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (_Bool)isCertificateReference:(id)arg1 aliasedInDependencyManager:(id)arg2;	// IMP=0x0010000000051f09
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x0010000000051e3b
- (void)_purgatoryWorkerQueue_resetProfilePurgatorySettingsAndPostProfileListChangedNotification:(_Bool)arg1;	// IMP=0x0010000000051cc7
- (void)purgeProfileWithIdentifier:(id)arg1 FromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x0010000000051a62
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x0010000000051805
- (_Bool)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0010000000050e41
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0010000000050409
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f7af
- (id)verifiedMDMProfileIdentifierWithCleanUp;	// IMP=0x001000000004f27a
- (void)removeManagedProfilesIfNecessary;	// IMP=0x001000000004f16e
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x001000000004f06c
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x001000000004ed84
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3;	// IMP=0x001000000004ed6c
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x001000000004e6ef
- (id)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5 source:(id)arg6;	// IMP=0x001000000004de58
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x001000000004de0f
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x001000000004dd41
- (void)_removeOrphanedResourcesIncludingAccounts:(_Bool)arg1;	// IMP=0x001000000004d418
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000004d212
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004c925
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000004c8fa
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x001000000004c848
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x001000000004c840
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x001000000004c238
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x001000000004bf3c
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x001000000004be8a
- (_Bool)_overrideProfileValidation;	// IMP=0x001000000004be39
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004997a
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x001000000004975a
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x0010000000049740
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000049680
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000049597
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000049515
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x00100000000494bd
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x00100000000493ea
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x0010000000049345
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x000000000004923e
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x001000000004907a
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004519b
- (id)_deviceLockedError;	// IMP=0x0010000000044f4b
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x0010000000044de8
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x00100000000442ab
- (_Bool)_promptUserForRestoreWithAccountID:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004413e
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000044054
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000436ea
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x0010000000043666
- (id)_invalidInputError;	// IMP=0x00100000000435e5
- (id)_installationHaltedTopLevelError;	// IMP=0x00100000000434dc
- (id)_uiProfileInstallationDisabledTopLevelError;	// IMP=0x001000000004345b
- (id)_targetDeviceMismatchError;	// IMP=0x00100000000433da
- (id)_targetDeviceInvalidError;	// IMP=0x0010000000043359
- (id)_targetDeviceArchivedError;	// IMP=0x00100000000432d8
- (id)_targetDeviceUnavailableError;	// IMP=0x0010000000043257
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x00100000000431b2
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000004310d
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x0010000000043077
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x0010000000042aac
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x0010000000042985
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041eb8
- (id)popProvisioningProfileDataAtHeadOfInstallationQueue;	// IMP=0x0010000000041e46
- (_Bool)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000041df7
- (id)_badProvisioningProfileError;	// IMP=0x0010000000041d76
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x0010000000041d04
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x001000000004190d
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x001000000004181f
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x001000000004170d
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x00100000000416a5
- (id)init;	// IMP=0x00100000000415c9

@end

