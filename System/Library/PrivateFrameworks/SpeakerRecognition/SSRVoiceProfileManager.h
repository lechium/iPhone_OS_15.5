//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, SSRRemoteControlClient;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileManager : NSObject
{
    unsigned long long _currentDeviceCategory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_endpointUUID;	// 24 = 0x18
    SSRRemoteControlClient *_remoteControlClient;	// 32 = 0x20
}

+ (id)sharedInstanceWithEndpointId:(id)arg1;	// IMP=0x000000000002bba7
+ (id)sharedInstance;	// IMP=0x000000000002bb8c
- (void).cxx_destruct;	// IMP=0x000000000003d306
@property(retain, nonatomic) SSRRemoteControlClient *remoteControlClient; // @synthesize remoteControlClient=_remoteControlClient;
@property(retain, nonatomic) NSUUID *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long currentDeviceCategory; // @synthesize currentDeviceCategory=_currentDeviceCategory;
- (_Bool)_isLegacyEnrollmentMarkedWith:(id)arg1 forLanguageCode:(id)arg2;	// IMP=0x000000000003cf36
- (id)_CSSATUploadPathForSiriProfileId:(id)arg1;	// IMP=0x000000000003ce54
- (id)_CSSATCachePathForAppDomain:(id)arg1;	// IMP=0x000000000003cd72
- (id)_CSSATDownloadPath;	// IMP=0x000000000003cd1b
- (id)_CSSATCachePath;	// IMP=0x000000000003cd00
- (void)deleteAllVoiceProfilesForAppDomain:(id)arg1;	// IMP=0x000000000003c8e9
- (id)deleteUserVoiceProfile:(id)arg1;	// IMP=0x000000000003c71f
- (_Bool)_isRemoteVoiceTriggerAvailable;	// IMP=0x000000000003c717
- (_Bool)isSATEnrollmentMigratedForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;	// IMP=0x000000000003c6c3
- (_Bool)isSATEnrolledForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2;	// IMP=0x000000000003c53b
- (id)markSATEnrollmentSuccessForVoiceProfile:(id)arg1;	// IMP=0x000000000003c055
- (void)triggerRetrainingVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bd10
- (void)triggerVoiceProfileDownload;	// IMP=0x000000000003bcc3
- (void)pruneImplicitUtterancesOfProfile:(id)arg1 withAsset:(id)arg2;	// IMP=0x000000000003bc44
- (void)cleanupVoiceProfileModelFilesForLocale:(id)arg1;	// IMP=0x000000000003bbce
- (void)triggerVoiceProfileCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bb58
- (_Bool)triggerVoiceProfileDuplicatesCleanup;	// IMP=0x000000000003bb0d
- (void)triggerVoiceProfileMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ba97
- (id)getVoiceProfileAnalyticsForAppDomain:(id)arg1 withLocale:(id)arg2;	// IMP=0x000000000003b5e0
- (id)voiceProfileForId:(id)arg1;	// IMP=0x000000000003b559
- (id)provisionedVoiceProfilesForLocale:(id)arg1;	// IMP=0x000000000003b0d0
- (id)provisionedVoiceProfilesForAppDomain:(id)arg1 withLocale:(id)arg2;	// IMP=0x000000000003ae53
- (id)_CSSATLegacyUploadPath;	// IMP=0x000000000003adfc
- (_Bool)_isDirectory:(id)arg1;	// IMP=0x000000000003ad79
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1;	// IMP=0x000000000003a90c
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1;	// IMP=0x000000000003a836
- (_Bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1;	// IMP=0x000000000003a226
- (void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039438
- (_Bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 withBackupMetaBlob:(id)arg2;	// IMP=0x0000000000038bdd
- (id)getCachedVoiceProfileAvailabilityMetaBlob;	// IMP=0x00000000000383a1
- (_Bool)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)arg1;	// IMP=0x0000000000038262
- (void)_markVoiceProfileTrainingSyncForLanguage:(id)arg1;	// IMP=0x000000000003818c
- (id)_prepareVoiceProfileWithSiriProfileId:(id)arg1 withUploadBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003754d
- (id)_copyVoiceProfileAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000003685f
- (void)_copyExplicitEnrollmentFilesFromPath:(id)arg1 toPath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035f6e
- (id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)arg1;	// IMP=0x0000000000035952
- (void)notifyUserVoiceProfileUploadComplete;	// IMP=0x0000000000035821
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;	// IMP=0x0000000000034c83
- (void)uploadUserVoiceProfileForSiriProfileId:(id)arg1 withUploadTrigger:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003484f
- (void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000345b1
- (id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)arg1;	// IMP=0x000000000003436b
- (id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 forVoiceProfileVersion:(unsigned long long)arg3;	// IMP=0x0000000000034170
- (id)_enableVoiceTriggerIfLanguageMatches:(id)arg1;	// IMP=0x0000000000033f01
- (id)_enrollVoiceProfileForSiriProfileId:(id)arg1 fromCacheDirectoryPath:(id)arg2 withCategoryType:(unsigned long long)arg3;	// IMP=0x000000000003241f
- (void)_downloadVoiceProfileForProfileId:(id)arg1 forDeviceCategory:(unsigned long long)arg2 withDownloadTriggerBlock:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031f73
- (id)_downloadAndEnrollVoiceProfileForProfileId:(id)arg1 withDownloadTriggerBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031767
- (_Bool)_checkIfDownloadRequiredForProfileId:(id)arg1;	// IMP=0x0000000000031576
- (void)notifyUserVoiceProfileUpdateReady;	// IMP=0x000000000002fd90
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)arg1 getData:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f80e
- (id)getCacheDirectoryForAppDomain:(id)arg1;	// IMP=0x000000000002f7af
- (id)getUserVoiceProfileUpdateDirectory;	// IMP=0x000000000002f750
- (void)notifyImplicitTrainingUtteranceAvailable:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x000000000002d4ac
- (void)isImplicitTrainingRequiredForVoiceProfileId:(id)arg1 locale:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d056
- (void)addUtterances:(id)arg1 toProfile:(id)arg2 withContext:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002c779
- (id)updateVoiceProfile:(id)arg1 withUserName:(id)arg2;	// IMP=0x000000000002c6de
- (id)newVoiceProfileWithLocale:(id)arg1 withAppDomain:(id)arg2;	// IMP=0x000000000002c672
- (id)_getVoiceProfilesForSiriProfileId:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x000000000002c353
- (id)discardSiriEnrollmentForProfileId:(id)arg1 forLanguageCode:(id)arg2;	// IMP=0x000000000002c0a9
- (void)discardSiriEnrollmentForLanguageCode:(id)arg1;	// IMP=0x000000000002c089
- (id)modelDirectoryPathForProfile:(id)arg1;	// IMP=0x000000000002c06a
- (id)SSRBasePathForAppDomain:(id)arg1;	// IMP=0x000000000002bfc3
- (id)SSRSpeakerProfilesBasePath;	// IMP=0x000000000002bf6c
- (id)baseDir;	// IMP=0x000000000002bede
- (_Bool)isSpeakerRecognitionAvailable;	// IMP=0x000000000002bed6
- (id)getSATEnrollmentPath;	// IMP=0x000000000002bdf7
- (id)initWithEndpointId:(id)arg1;	// IMP=0x000000000002bd1a
- (id)init;	// IMP=0x000000000002bd06

@end

