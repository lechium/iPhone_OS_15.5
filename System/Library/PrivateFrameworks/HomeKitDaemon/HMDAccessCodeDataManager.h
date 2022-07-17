//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessCodeManagerContext, HMFTimer, NSArray, NSSet, NSString;
@protocol HMDAccessCodeDataManagerDelegate;

@interface HMDAccessCodeDataManager : HMFObject <HMFLogging, HMFTimerDelegate>
{
    CDUnknownBlockType _dataCleanUpTimerFactory;	// 8 = 0x8
    id <HMDAccessCodeDataManagerDelegate> _delegate;	// 16 = 0x10
    HMDAccessCodeManagerContext *_context;	// 24 = 0x18
    HMFTimer *_dataCleanUpTimer;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000008ac52a
+ (id)_accessCodeInHome:(id)arg1 forRemovedUserAccessCodeModel:(id)arg2;	// IMP=0x00000000008ac418
+ (id)_accessCodeInHome:(id)arg1 forHomeAccessCodeModel:(id)arg2;	// IMP=0x00000000008ac306
+ (id)userWithAccessCode:(id)arg1 inHome:(id)arg2;	// IMP=0x00000000008ac239
+ (id)createUserAccessCodeModelFromAccessCode:(id)arg1 forUser:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x00000000008ac159
+ (id)createRemovedUserInfoModelsFromRemovedUserInfoByAccessCode:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000008ac064
+ (id)createHomeAccessCodeModelsFromLabelsByAccessCode:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000008abf6f
- (void).cxx_destruct;	// IMP=0x00000000008aa415
@property(retain) HMFTimer *dataCleanUpTimer; // @synthesize dataCleanUpTimer=_dataCleanUpTimer;
@property(readonly) HMDAccessCodeManagerContext *context; // @synthesize context=_context;
@property(readonly) __weak id <HMDAccessCodeDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType dataCleanUpTimerFactory; // @synthesize dataCleanUpTimerFactory=_dataCleanUpTimerFactory;
- (id)logIdentifier;	// IMP=0x00000000008aa31e
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008aa177
- (void)updateCacheWithRemovedAccessCodes:(id)arg1;	// IMP=0x00000000008a9cfe
- (void)updateCacheWithUpdatedAccessCodes:(id)arg1;	// IMP=0x00000000008a9874
- (void)updateCacheWithAddedAccessCodes:(id)arg1;	// IMP=0x00000000008a93ea
- (void)updateCacheWithFetchResponses:(id)arg1;	// IMP=0x00000000008a927a
- (id)cachedAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x00000000008a90a0
@property(readonly, copy) NSArray *cachedAccessCodes;
- (void)handleRemovedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008a8b46
- (void)handleUpdatedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008a82da
- (void)handleRemovedHomeAccessCodeModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008a7e3b
- (void)handleRemovedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;	// IMP=0x00000000008a7b8e
- (void)handleUpdatedHomeAccessCodeModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000008a72ff
- (void)handleUpdatedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;	// IMP=0x00000000008a6944
- (id)removeHMDRemovedUserAccessCodeModel:(id)arg1;	// IMP=0x00000000008a652d
- (id)addOrUpdateHMDRemovedUserAccessCodeModel:(id)arg1;	// IMP=0x00000000008a612b
- (id)removeHMDRemovedUserAccessCodeWithCode:(id)arg1 removedUserInfo:(id)arg2;	// IMP=0x00000000008a5e14
- (id)saveRemovedUserAccessCode:(id)arg1 withRemovedUserInfo:(id)arg2;	// IMP=0x00000000008a5afd
- (id)removeHomeAccessCodeModel:(id)arg1;	// IMP=0x00000000008a56e6
- (id)addOrUpdateHomeAccessCodeModel:(id)arg1;	// IMP=0x00000000008a52e4
- (id)removeUserAccessCodeModel:(id)arg1;	// IMP=0x00000000008a4ead
- (id)addOrUpdateUserAccessCodeModel:(id)arg1;	// IMP=0x00000000008a4aab
@property(readonly, copy) NSSet *accessCodeValuesWithRemovedUserInfo;
@property(readonly, copy) NSSet *accessCodeValuesWithUserLabel;
@property(readonly, copy) NSSet *accessCodeValuesWithSimpleLabel;
- (id)_removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;	// IMP=0x00000000008a415f
- (void)removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;	// IMP=0x00000000008a408f
- (void)_cleanUpOldRemovedUserData;	// IMP=0x00000000008a3e4d
- (id)_removeSimpleLabelAccessCodeValue:(id)arg1;	// IMP=0x00000000008a3b69
- (id)_setSimpleLabel:(id)arg1 forAccessCodeValue:(id)arg2;	// IMP=0x00000000008a3863
- (id)_removeUserAccessCodeValue:(id)arg1 removedByUserUUID:(id)arg2;	// IMP=0x00000000008a34bd
- (id)_setUserWithUUID:(id)arg1 forAccessCodeValue:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x00000000008a3009
- (void)_setUpAndStartTimer;	// IMP=0x00000000008a2e40
- (id)removeAllHomeAccessCodes;	// IMP=0x00000000008a2bc4
- (id)updateUserInformation:(id)arg1 forHomeAccessCodeWithOldValue:(id)arg2 newAccessCodeValue:(id)arg3;	// IMP=0x00000000008a29cc
- (id)removeHomeAccessCodeWithValue:(id)arg1 removedByUserUUID:(id)arg2;	// IMP=0x00000000008a263e
- (id)setUserInformation:(id)arg1 forHomeAccessCodeWithValue:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x00000000008a22f1
- (id)homeAccessCodeWithRemovedUserInfoWithUUID:(id)arg1;	// IMP=0x00000000008a2224
@property(readonly, copy) NSArray *homeAccessCodeValuesWithRemovedUserInfo;
@property(readonly, copy) NSArray *homeAccessCodeValuesWithUserLabels;
@property(readonly, copy) NSArray *homeAccessCodeValuesWithSimpleLabels;
@property(readonly, copy) NSArray *homeAccessCodeValues;
- (void)configure;	// IMP=0x00000000008a1bc0
- (id)initWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000008a1b02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
