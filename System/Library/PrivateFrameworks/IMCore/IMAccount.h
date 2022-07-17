//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/IMSystemMonitorListener-Protocol.h>

@class IMHandle, IMPeople, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMapTable, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMAccount : NSObject <IMSystemMonitorListener>
{
    IMPeople *_buddyList;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
    NSMapTable *_imHandles;	// 24 = 0x18
    IMHandle *_loginIMHandle;	// 32 = 0x20
    NSArray *_cachedAllowList;	// 40 = 0x28
    NSArray *_cachedBlockList;	// 48 = 0x30
    NSString *_loginID;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_uniqueID;	// 72 = 0x48
    long long _accountType;	// 80 = 0x50
    NSString *_strippedLogin;	// 88 = 0x58
    NSDictionary *_data;	// 96 = 0x60
    NSMutableDictionary *_dataChanges;	// 104 = 0x68
    NSMutableDictionary *_localCache;	// 112 = 0x70
    NSDictionary *_profile;	// 120 = 0x78
    NSMutableDictionary *_profileChanges;	// 128 = 0x80
    NSString *_countryCode;	// 136 = 0x88
    long long _profileStatus;	// 144 = 0x90
    NSDictionary *_accountPreferences;	// 152 = 0x98
    NSMutableDictionary *_accountPreferencesChanges;	// 160 = 0xa0
    NSDictionary *_accountPersistentProperties;	// 168 = 0xa8
    NSMutableDictionary *_accountPersistentPropertiesChanges;	// 176 = 0xb0
    NSArray *_groups;	// 184 = 0xb8
    NSMutableDictionary *_sortOrders;	// 192 = 0xc0
    NSDictionary *_members;	// 200 = 0xc8
    NSMutableDictionary *_coalescedChanges;	// 208 = 0xd0
    NSArray *_targetGroupState;	// 216 = 0xd8
    NSArray *_lastReceivedGroupState;	// 224 = 0xe0
    NSDictionary *_subtypeInfo;	// 232 = 0xe8
    NSArray *_vettedAliases;	// 240 = 0xf0
    NSArray *_aliases;	// 248 = 0xf8
    unsigned long long _myStatus;	// 256 = 0x100
    NSMutableDictionary *_currentAccountStatus;	// 264 = 0x108
    NSString *_myStatusMessage;	// 272 = 0x110
    NSDictionary *_myNowPlaying;	// 280 = 0x118
    NSDate *_myIdleSince;	// 288 = 0x120
    NSData *_myPictureData;	// 296 = 0x128
    NSData *_accountImageData;	// 304 = 0x130
    unsigned long long _capabilities;	// 312 = 0x138
    unsigned long long _defaultHandleCapabilities;	// 320 = 0x140
    _Bool _hasCheckedDefaultHandleCapabilities;	// 328 = 0x148
    NSAttributedString *_myProfile;	// 336 = 0x150
    long long _registrationStatus;	// 344 = 0x158
    long long _registrationFailureReason;	// 352 = 0x160
    NSDictionary *_registrationAlertInfo;	// 360 = 0x168
    unsigned long long _loginStatus;	// 368 = 0x170
    _Bool _isActive;	// 376 = 0x178
    _Bool _hasPostedOfflineNotification;	// 377 = 0x179
    _Bool _justLoggedIn;	// 378 = 0x17a
    _Bool _useMeCardName;	// 379 = 0x17b
    unsigned int _cachedBlockingMode;	// 380 = 0x17c
    _Bool _blockIdleStatus;	// 384 = 0x180
    _Bool _syncedWithRemoteBuddyList;	// 385 = 0x181
    _Bool _hasReceivedSync;	// 386 = 0x182
    int _numHolding;	// 388 = 0x184
    int _coalesceCount;	// 392 = 0x188
    _Bool _needToCheckForWatchedIMHandles;	// 396 = 0x18c
    _Bool _iconChecked;	// 397 = 0x18d
    _Bool _hasBeenRemoved;	// 398 = 0x18e
    IMServiceImpl *_service;	// 400 = 0x190
    id _smallImage;	// 408 = 0x198
    id _accountImage;	// 416 = 0x1a0
    _Bool _asleep;	// 424 = 0x1a8
}

+ (id)allBuddyListIMHandles;	// IMP=0x000000000002ff1c
+ (id)arrayOfAllIMHandles;	// IMP=0x000000000002fd31
+ (id)nameOfLoginStatus:(unsigned long long)arg1;	// IMP=0x000000000002c79c
+ (id)_groupSummaryFromGroupList:(id)arg1;	// IMP=0x0000000000026eca
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000023c4b
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;	// IMP=0x00000000000238bf
+ (id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3;	// IMP=0x00000000000234d2
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000023104
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;	// IMP=0x0000000000022bee
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000022b5f
- (void).cxx_destruct;	// IMP=0x00000000000362d7
@property(readonly, nonatomic) _Bool justLoggedIn; // @synthesize justLoggedIn=_justLoggedIn;
@property(readonly, nonatomic) IMPeople *buddyList; // @synthesize buddyList=_buddyList;
@property(readonly, nonatomic) id loginIMHandle; // @synthesize loginIMHandle=_loginIMHandle;
@property(readonly, nonatomic) NSDictionary *accountSubtypeInfo; // @synthesize accountSubtypeInfo=_subtypeInfo;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned int blockingMode; // @synthesize blockingMode=_cachedBlockingMode;
@property(nonatomic) _Bool blockIdleStatus; // @synthesize blockIdleStatus=_blockIdleStatus;
@property(readonly, nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;
@property(readonly, nonatomic) NSData *myPictureData; // @synthesize myPictureData=_myPictureData;
@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(readonly, nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;
@property(readonly, nonatomic) NSAttributedString *myProfile; // @synthesize myProfile=_myProfile;
@property(readonly, nonatomic) NSDictionary *myStatusDictionary; // @synthesize myStatusDictionary=_currentAccountStatus;
@property(readonly, nonatomic) __weak IMServiceImpl *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *strippedLogin; // @synthesize strippedLogin=_strippedLogin;
@property(retain, nonatomic) NSString *login; // @synthesize login=_loginID;
- (_Bool)_updateDisplayName:(id)arg1;	// IMP=0x0000000000035ec8
@property(copy, nonatomic) NSString *displayName;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035a8c
- (int)integerForPreferenceKey:(id)arg1;	// IMP=0x0000000000035a2e
- (void)setBool:(_Bool)arg1 forPreferenceKey:(id)arg2;	// IMP=0x00000000000359ad
- (_Bool)boolForPreferenceKey:(id)arg1;	// IMP=0x000000000003594a
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035938
- (id)stringForPreferenceKey:(id)arg1;	// IMP=0x00000000000358d8
- (id)dictionaryDataForPreferenceKey:(id)arg1;	// IMP=0x00000000000358c6
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x00000000000358b4
- (void)removeObjectForPreferenceKey:(id)arg1;	// IMP=0x000000000003589d
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035800
- (id)objectForPreferenceKey:(id)arg1;	// IMP=0x0000000000035769
@property(readonly, nonatomic) NSDictionary *accountPreferences;
- (void)_removePersistentPropertyForKey:(id)arg1;	// IMP=0x00000000000356c5
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003561d
- (id)_persistentPropertyForKey:(id)arg1;	// IMP=0x0000000000035586
@property(readonly, nonatomic) NSDictionary *_persistentProperties;
@property(readonly, nonatomic) _Bool isAsleep;
- (void)systemWillSleep;	// IMP=0x0000000000035531
- (void)systemDidWake;	// IMP=0x0000000000035524
- (void)_setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000354a3
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000035422
- (long long)integerForKey:(id)arg1;	// IMP=0x00000000000353bf
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000003533e
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000352bd
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000003525a
- (void)_setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000035248
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000035236
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000351d2
- (id)dictionaryDataForKey:(id)arg1;	// IMP=0x00000000000351c0
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000351ae
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003519c
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x0000000000035185
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000003516e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034f96
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034ef5
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034e54
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000034d66
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034d54
- (long long)validationErrorReasonForAlias:(id)arg1;	// IMP=0x0000000000034cc9
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034cb7
- (long long)validationStatusForAlias:(id)arg1;	// IMP=0x0000000000034bad
- (_Bool)validateAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034b9b
- (_Bool)validateAliases:(id)arg1;	// IMP=0x0000000000034934
- (_Bool)validateAlias:(id)arg1;	// IMP=0x00000000000347a1
- (_Bool)unvalidateAliases:(id)arg1;	// IMP=0x00000000000345a3
- (_Bool)unvalidateAlias:(id)arg1;	// IMP=0x0000000000034557
- (long long)typeForAlias:(id)arg1;	// IMP=0x0000000000034489
- (_Bool)removeAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034477
- (_Bool)removeAliases:(id)arg1;	// IMP=0x0000000000033f9d
- (_Bool)removeAlias:(id)arg1;	// IMP=0x0000000000033e0a
- (_Bool)addAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000033c9f
- (_Bool)addAliases:(id)arg1;	// IMP=0x00000000000335cd
- (_Bool)addAlias:(id)arg1;	// IMP=0x000000000003343a
- (id)aliasesForType:(long long)arg1;	// IMP=0x0000000000033340
- (_Bool)hasAlias:(id)arg1 type:(long long)arg2;	// IMP=0x000000000003332e
- (_Bool)hasAlias:(id)arg1;	// IMP=0x0000000000033280
- (void)_invalidateCachedAliases;	// IMP=0x0000000000033260
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic, getter=isMakoAccount) _Bool makoAccount;
- (id)_statuses;	// IMP=0x0000000000032b86
- (id)_aliasInfoForAlias:(id)arg1;	// IMP=0x0000000000032914
- (_Bool)_aliasIsVisible:(id)arg1;	// IMP=0x0000000000032881
- (id)_aliases;	// IMP=0x0000000000032865
@property(readonly, nonatomic) NSArray *aliasesToRegister;
@property(readonly, nonatomic) NSArray *vettedAliases;
- (void)_updateProfileInfo:(id)arg1;	// IMP=0x0000000000031ff3
- (long long)profileValidationErrorReason;	// IMP=0x0000000000031fa5
- (long long)profileValidationStatus;	// IMP=0x0000000000031f73
- (_Bool)validateProfile;	// IMP=0x0000000000031de3
- (_Bool)setProfileString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000031d23
- (_Bool)setProfileValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000031aee
- (_Bool)removeProfileValueForKey:(id)arg1;	// IMP=0x0000000000031a78
- (id)profileStringForKey:(id)arg1;	// IMP=0x0000000000031a18
- (id)profileValueForKey:(id)arg1;	// IMP=0x000000000003198b
@property(readonly, nonatomic) NSDictionary *profileInfo;
@property(readonly, nonatomic) NSString *countryCode;
- (_Bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;	// IMP=0x00000000000312ee
- (void)enrollSelfDeviceInSMSRelay;	// IMP=0x0000000000031278
- (void)unEnrollDeviceInSMSRelay:(id)arg1;	// IMP=0x00000000000311dd
- (void)enrollDeviceInSMSRelay:(id)arg1;	// IMP=0x0000000000031142
- (_Bool)authenticateAccount;	// IMP=0x0000000000030f84
- (_Bool)requestNewAuthorizationCredentials;	// IMP=0x0000000000030f72
@property(readonly, nonatomic) NSString *authorizationToken;
@property(readonly, nonatomic) NSString *authorizationID;
@property(readonly, nonatomic) _Bool supportsAuthorization;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;	// IMP=0x00000000000308da
- (id)defaultChatSuffix;	// IMP=0x0000000000030882
- (id)chatIDForRoomName:(id)arg1;	// IMP=0x0000000000030664
- (void)nowLoggedOut;	// IMP=0x0000000000030636
- (void)nowLoggedIn;	// IMP=0x0000000000030630
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000030536
- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;	// IMP=0x00000000000303fb
- (void)disconnectAllIMHandles;	// IMP=0x0000000000030127
- (void)unregisterIMHandleWithID:(id)arg1;	// IMP=0x000000000002fcc1
- (void)registerIMHandle:(id)arg1;	// IMP=0x000000000002fc06
- (void)_refreshLoginIMHandle;	// IMP=0x000000000002f974
- (void)forgetAllWatches;	// IMP=0x000000000002f7ee
- (void)stopWatchingIMHandle:(id)arg1;	// IMP=0x000000000002f72f
- (void)startWatchingIMHandle:(id)arg1;	// IMP=0x000000000002f64b
- (void)watchBuddiesIfNecessary;	// IMP=0x000000000002f5e9
- (void)_watchBuddiesIfNecessary;	// IMP=0x000000000002f43e
- (id)handlesForCNContact:(id)arg1;	// IMP=0x000000000002f37b
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;	// IMP=0x000000000002f2db
- (void)setBuddyListAuthorization:(_Bool)arg1 forIMHandle:(id)arg2;	// IMP=0x000000000002f232
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000000002f1b1
- (id)imHandleWithID:(id)arg1;	// IMP=0x000000000002f19d
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000002ef72
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000002ecf9
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2 originalID:(id)arg3 countryCode:(id)arg4;	// IMP=0x000000000002ea5d
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002ea45
- (unsigned long long)defaultHandleCapabilities;	// IMP=0x000000000002e8cd
- (id)existingIMHandleWithID:(id)arg1;	// IMP=0x000000000002e8b9
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e6f9
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e650
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e5a7
- (id)existingIMHandleWithInfo:(id)arg1;	// IMP=0x000000000002e505
- (id)imHandleWithInfo:(id)arg1;	// IMP=0x000000000002e463
- (Class)imHandleClass;	// IMP=0x000000000002e452
@property(readonly, nonatomic) NSArray *arrayOfAllIMHandles;
- (void)recalculateSubtypeInfo;	// IMP=0x000000000002e21d
- (void)_clearImageCache;	// IMP=0x000000000002e1c7
- (id)recalculatedSubtypeInfo;	// IMP=0x000000000002e1bf
- (long long)compareNames:(id)arg1;	// IMP=0x000000000002e12e
- (void)groupsChanged:(id)arg1 error:(id)arg2;	// IMP=0x000000000002d24e
- (void)_syncWithRemoteBuddies;	// IMP=0x000000000002d1bb
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;	// IMP=0x000000000002cbc1
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;	// IMP=0x000000000002cbaa
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;	// IMP=0x000000000002cb96
- (void)setIsActive:(_Bool)arg1;	// IMP=0x000000000002ca18
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) NSString *loginStatusMessage;
- (void)_notJustLoggedIn;	// IMP=0x000000000002c83e
- (_Bool)unregisterAccount;	// IMP=0x000000000002c710
- (_Bool)registerAccount;	// IMP=0x000000000002c684
@property(readonly, nonatomic) long long registrationFailureReason;
@property(readonly, nonatomic) long long registrationStatus;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;	// IMP=0x000000000002c310
@property(readonly, nonatomic) _Bool supportsRegistration;
@property(readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property(readonly, nonatomic) _Bool canSendMessages;
@property(readonly, nonatomic) _Bool isOperational;
@property(readonly, nonatomic) _Bool isRegistered;
@property(readonly, nonatomic) _Bool _isUsableForSending;
- (void)accountDidDeactivate;	// IMP=0x000000000002bc49
- (void)accountDidBecomeActive;	// IMP=0x000000000002bc37
- (void)accountWillBeRemoved;	// IMP=0x000000000002bbb2
- (void)_serviceDidDisconnect:(id)arg1;	// IMP=0x000000000002bb99
- (void)_serviceDidReconnect:(id)arg1;	// IMP=0x000000000002bb87
- (void)_serviceDidConnect:(id)arg1;	// IMP=0x000000000002bb75
- (void)_registrationStatusChanged:(id)arg1;	// IMP=0x000000000002bb55
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;	// IMP=0x000000000002b4f5
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;	// IMP=0x000000000002b447
- (void)buddyPropertiesChanged:(id)arg1;	// IMP=0x000000000002b308
- (void)resumeBuddyUpdates;	// IMP=0x000000000002b2e4
- (void)_resumeBuddyUpdatesNow;	// IMP=0x000000000002b1c3
- (void)holdBuddyUpdates;	// IMP=0x000000000002b129
@property(readonly, nonatomic) _Bool makingChanges;
- (void)endChanges;	// IMP=0x000000000002afdd
- (id)memberGroups:(id)arg1;	// IMP=0x000000000002afc4
@property(readonly, nonatomic) NSArray *groupList;
- (id)groupMembers:(id)arg1;	// IMP=0x000000000002ae45
- (id)propertiesForGroup:(id)arg1;	// IMP=0x000000000002ad1b
- (void)reorderGroups:(id)arg1;	// IMP=0x000000000002abf4
- (void)reorderGroup:(id)arg1 order:(id)arg2;	// IMP=0x000000000002aa37
- (void)renameGroup:(id)arg1 to:(id)arg2;	// IMP=0x000000000002a80e
- (void)changeBuddyList:(id)arg1 add:(_Bool)arg2 groups:(id)arg3 atLocation:(long long)arg4;	// IMP=0x0000000000029793
- (void)addBuddyToBuddyList:(id)arg1;	// IMP=0x0000000000029639
- (_Bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;	// IMP=0x00000000000295a0
- (_Bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;	// IMP=0x0000000000029529
- (_Bool)removePeople:(id)arg1 fromGroups:(id)arg2;	// IMP=0x00000000000294a4
- (_Bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;	// IMP=0x000000000002917c
- (void)_ensureGroupsExists:(id)arg1;	// IMP=0x0000000000028f7e
- (void)syncWithRemoteBuddies;	// IMP=0x0000000000028e8f
- (void)_markHasSyncedWithRemoteBuddies;	// IMP=0x0000000000028e82
@property(readonly, nonatomic) _Bool hasSyncedWithRemoteBuddies;
- (void)requestGroups;	// IMP=0x0000000000028dda
- (void)hookupToDaemon;	// IMP=0x0000000000028d98
- (void)beginChanges;	// IMP=0x0000000000028d51
- (void)_applyChangesToTemporaryCache:(id)arg1;	// IMP=0x0000000000027378
- (void)setTargetGroupsState:(id)arg1;	// IMP=0x00000000000272d3
- (void)updateWithTargetGroups;	// IMP=0x00000000000272b8
- (void)setWaitForTargetState;	// IMP=0x000000000002725d
- (void)targetGroupStateTimeout;	// IMP=0x00000000000271fc
@property(readonly, nonatomic) _Bool hasTargetGroupStateBeenMet;
@property(readonly, nonatomic) _Bool isAwaitingTargetGroupState;
- (void)clearTargetState;	// IMP=0x0000000000026e71
@property(nonatomic) _Bool blockOtherAddresses;
@property(retain, nonatomic) NSArray *allowList;
@property(retain, nonatomic) NSArray *blockList;
- (void)blockMessages:(_Bool)arg1 fromID:(id)arg2;	// IMP=0x00000000000267f2
- (void)setCachedBlockIdleStatus:(_Bool)arg1;	// IMP=0x000000000002668e
- (void)setCachedBlockingMode:(unsigned int)arg1;	// IMP=0x000000000002652a
- (void)setCachedBlockList:(id)arg1;	// IMP=0x00000000000261e5
- (void)setCachedAllowList:(id)arg1;	// IMP=0x0000000000025ea0
@property(readonly, nonatomic) NSArray *emailDomains;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (void)loadFromDictionary:(id)arg1;	// IMP=0x0000000000025d39
- (void)_loadFromDictionary:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000024b90
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;	// IMP=0x0000000000024ae0
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;	// IMP=0x0000000000024a4d
@property(readonly, nonatomic) long long invalidSettings;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool validServer;
@property(readonly, nonatomic) _Bool validPort;
@property(readonly, nonatomic) _Bool validLogin;
@property(readonly, nonatomic) _Bool canActivate;
@property(readonly, nonatomic) _Bool isSMSRelayCapable;
@property(readonly, nonatomic) _Bool allowsMMSRelay;
@property(readonly, nonatomic) _Bool allowsSMSRelay;
@property(nonatomic) _Bool allowsVCRelay;
@property(nonatomic) _Bool goIdle;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *server;
- (id)_serverWithSSL:(_Bool)arg1;	// IMP=0x0000000000024288
- (id)description;	// IMP=0x000000000002416b
@property(readonly, nonatomic) _Bool useSSL;
@property(nonatomic) _Bool autoLogin;
@property(readonly, nonatomic) _Bool hasCustomDescription;
@property(retain, nonatomic) NSString *accountDescription;
@property(nonatomic, getter=isInvisible) _Bool invisible;
- (void)removeTemporaryPassword;	// IMP=0x0000000000023ba4
- (void)setTemporaryPassword:(id)arg1;	// IMP=0x0000000000023244
@property(readonly, nonatomic) NSString *temporaryPassword;
- (void)removePassword;	// IMP=0x0000000000022f44
- (void)setPassword:(id)arg1;	// IMP=0x00000000000228d1
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) _Bool handlesChatInvites;
- (void)updateCapabilities:(unsigned long long)arg1;	// IMP=0x00000000000225d2
- (_Bool)hasCapability:(unsigned long long)arg1;	// IMP=0x00000000000225ac
- (long long)compareServices:(id)arg1;	// IMP=0x00000000000224dd
- (long long)compareIDs:(id)arg1;	// IMP=0x0000000000022438
- (long long)compareStatus:(id)arg1;	// IMP=0x00000000000223b4
- (long long)compareAccountNames:(id)arg1;	// IMP=0x0000000000022303
- (long long)compareLoginStatus:(id)arg1;	// IMP=0x000000000002227e
- (_Bool)emailAddressIsID:(id)arg1;	// IMP=0x00000000000221fd
- (void)resetToDefaults;	// IMP=0x0000000000022112
- (void)writeSettings;	// IMP=0x0000000000021e6d
- (_Bool)equalID:(id)arg1 andID:(id)arg2;	// IMP=0x0000000000021dea
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;	// IMP=0x0000000000021c90
- (id)canonicalFormOfID:(id)arg1;	// IMP=0x0000000000021c7c
@property(readonly, nonatomic) NSData *accountImageData;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSString *shortName;
- (void)setUniqueID:(id)arg1;	// IMP=0x0000000000021a47
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSString *myNowPlayingString;
- (void)setCurrentAccountStatus:(id)arg1;	// IMP=0x0000000000021487
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x000000000002122d
@property(readonly, nonatomic) long long accountType;
- (void)_updateLogin:(id)arg1;	// IMP=0x0000000000021008
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;	// IMP=0x0000000000020fc0
- (void)logoutAccount;	// IMP=0x0000000000020ca7
- (void)loginAccount;	// IMP=0x0000000000020c93
- (void)autoLoginAccount;	// IMP=0x0000000000020c7c
- (void)_loginWithAutoLogin:(_Bool)arg1;	// IMP=0x0000000000020b6d
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;	// IMP=0x000000000002052d
- (id)initWithService:(id)arg1;	// IMP=0x0000000000020516
- (void)clearServiceCaches;	// IMP=0x0000000000020438
- (void)dealloc;	// IMP=0x000000000002031a

@end
