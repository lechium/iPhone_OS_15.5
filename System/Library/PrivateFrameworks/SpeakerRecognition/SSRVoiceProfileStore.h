//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SSRVoiceProfileStorePrefs;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileStore : NSObject
{
    NSMutableArray *_voiceProfileArray;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SSRVoiceProfileStorePrefs *_storePrefs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000042b52
- (void).cxx_destruct;	// IMP=0x000000000004ebfd
@property(retain, nonatomic) SSRVoiceProfileStorePrefs *storePrefs; // @synthesize storePrefs=_storePrefs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableArray *voiceProfileArray; // @synthesize voiceProfileArray=_voiceProfileArray;
- (id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3;	// IMP=0x000000000004e4b3
- (id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withUtterances:(id)arg3;	// IMP=0x000000000004d2c0
- (id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000004c3b3
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b9fa
- (id)updateVoiceProfile:(id)arg1 withUserName:(id)arg2;	// IMP=0x000000000004b74e
- (void)_saveTrainedUsers:(id)arg1;	// IMP=0x000000000004b53c
- (void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2;	// IMP=0x000000000004b0bf
- (id)_enrolledVoiceProfiles;	// IMP=0x000000000004af00
- (void)_loadVoiceProfiles;	// IMP=0x000000000004aece
- (void)retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a976
- (_Bool)_checkIfRetrainingRequiredForProfile:(id)arg1;	// IMP=0x000000000004a3b3
- (_Bool)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3;	// IMP=0x000000000004a013
- (id)_deleteUserVoiceProfile:(id)arg1;	// IMP=0x0000000000049b5d
- (id)deleteUserVoiceProfile:(id)arg1;	// IMP=0x0000000000049a20
- (void)addUserVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000493f5
- (id)_getTopScoringProfileIdFromScores:(id)arg1;	// IMP=0x0000000000049213
- (_Bool)evaluateImplicitAdditionPolicyWithScores:(id)arg1 forProfile:(id)arg2 withImplicitThreshold:(float)arg3 withDeltaThreshold:(float)arg4;	// IMP=0x0000000000048c9a
- (void)_logVoiceProfileConfusionWithCleanup:(_Bool)arg1;	// IMP=0x000000000004846a
- (void)logVoiceProfileConfusionWithCleanup:(_Bool)arg1;	// IMP=0x00000000000483ff
- (void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withAsset:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000046b32
- (void)isImplicitTrainingRequiredToVoiceProfile:(id)arg1 withAsset:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046527
- (void)_synchronizeSiriVoiceProfilesWithAssistant;	// IMP=0x000000000004600e
- (void)cleanupVoiceProfileModelFilesForLocale:(id)arg1;	// IMP=0x0000000000045cd6
- (void)cleanupVoiceProfileStore:(CDUnknownBlockType)arg1;	// IMP=0x00000000000457d8
- (_Bool)cleanupDuplicatedProfiles;	// IMP=0x00000000000454ac
- (void)migrateVoiceProfilesIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043664
- (id)userVoiceProfileForVoiceProfileID:(id)arg1;	// IMP=0x0000000000043469
- (id)userVoiceProfilesForLocale:(id)arg1;	// IMP=0x00000000000431d9
- (id)userVoiceProfilesForAppDomain:(id)arg1 forLocale:(id)arg2;	// IMP=0x0000000000042f00
- (id)userVoiceProfilesForAppDomain:(id)arg1;	// IMP=0x0000000000042c70
- (id)initStore;	// IMP=0x0000000000042bd4

@end
