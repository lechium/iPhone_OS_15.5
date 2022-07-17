//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HUHomeFeatureOnboardingUtilities : NSObject
{
}

+ (_Bool)isVoiceProfileAvailableOnThisDeviceForLanguage:(id)arg1;	// IMP=0x00000000000ee43f
+ (id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1;	// IMP=0x00000000000ee3b0
+ (id)processLanguageAndMediaProfileInfo:(id)arg1;	// IMP=0x00000000000ee0d3
+ (id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1;	// IMP=0x00000000000eded1
+ (id)home:(id)arg1 createMultiUserLanguageToHomePodsMapping:(id)arg2;	// IMP=0x00000000000ed6ce
+ (id)analyzeHomeAssistantDevicesForSupportedVoiceRecognitionLanguages:(id)arg1 home:(id)arg2;	// IMP=0x00000000000ecedd
+ (id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1;	// IMP=0x00000000000ecc56
+ (unsigned long long)home:(id)arg1 checkForMultiUserDeviceUpgradeRequirements:(id)arg2;	// IMP=0x00000000000ec68e
+ (unsigned long long)home:(id)arg1 checkForOwnerUpgradeRequirementsFromResults:(id)arg2;	// IMP=0x00000000000ec42f
+ (_Bool)hasUserSaidYesToVoiceIdentificationInResults:(id)arg1;	// IMP=0x00000000000ebe19
+ (_Bool)isDeviceUsingASupportedVoiceRecognitionSiriLanguage:(id)arg1 shouldFallbackToBestSupportedLanguage:(_Bool)arg2;	// IMP=0x00000000000ebab0
+ (_Bool)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1;	// IMP=0x00000000000eb88c
+ (id)_checkIdentifyVoicePrerequisitesForHome:(id)arg1;	// IMP=0x00000000000eb832
+ (_Bool)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg1;	// IMP=0x00000000000eb1c0
+ (id)home:(id)arg1 processHomeFeatureOnboarderResults:(id)arg2;	// IMP=0x00000000000e9c4e
+ (_Bool)home:(id)arg1 voiceRecognitionIsSupportedForCurrentUserOnMediaAccessory:(id)arg2 languageOption:(id)arg3;	// IMP=0x00000000000e98e4
+ (void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1;	// IMP=0x00000000000e95ea
+ (void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1;	// IMP=0x00000000000e92b5
+ (void)fetchSupportedVoiceRecognitionLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e925b
+ (id)fetchSupportedVoiceRecognitionLanguages;	// IMP=0x00000000000e91fc
+ (_Bool)home:(id)arg1 hasSomeHomePodsOnSupportedVoiceRecognitionLanguages:(id)arg2;	// IMP=0x00000000000e9031
+ (_Bool)atLeastOneHomePodHasLanguageSettingsForHome:(id)arg1;	// IMP=0x00000000000e8b47
+ (id)home:(id)arg1 onboardFeaturesForKeyPaths:(id)arg2 presentingViewController:(id)arg3 usageOptions:(id)arg4;	// IMP=0x00000000000e83ba
+ (id)home:(id)arg1 onboardAllFeaturesFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;	// IMP=0x00000000000e7af5
+ (id)home:(id)arg1 onboardIdentifyVoiceFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;	// IMP=0x00000000000e7437
+ (id)home:(id)arg1 onboardPersonalRequestsFromPresentingViewController:(id)arg2;	// IMP=0x00000000000e6eab
+ (id)_fetchSupportedMultiUserLanguagesSynchronously;	// IMP=0x00000000000e6c1d
+ (void)initialize;	// IMP=0x00000000000e6b8c

@end
