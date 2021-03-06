//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserManagement/UMUserManagement-Protocol.h>
#import <UserManagement/UMUserPersonaAttributesList-Protocol.h>
#import <UserManagement/UMUserPersonaLoginSessionManagement-Protocol.h>
#import <UserManagement/UMUserPersonaManagement-Protocol.h>
#import <UserManagement/UMUserSessionProvisioning-Protocol.h>
#import <UserManagement/UMUserSwitchManagement-Protocol.h>

@class NSArray, NSString, UMUser, UMUserPersona;
@protocol UMUserListUpdateObserver, UMUserPersonaUpdateObserver;

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning>
{
    NSArray *_allUsers;	// 8 = 0x8
    _Bool _switchIsOccurring;	// 16 = 0x10
    id <UMUserListUpdateObserver> _userListUpdateObserver;	// 24 = 0x18
    id <UMUserPersonaUpdateObserver> _userPersonaUpdateObserver;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x00000000000021b0
- (void).cxx_destruct;	// IMP=0x0000000000005d3d
@property(nonatomic) __weak id <UMUserPersonaUpdateObserver> userPersonaUpdateObserver; // @synthesize userPersonaUpdateObserver=_userPersonaUpdateObserver;
@property(nonatomic) _Bool switchIsOccurring; // @synthesize switchIsOccurring=_switchIsOccurring;
@property(nonatomic) __weak id <UMUserListUpdateObserver> userListUpdateObserver; // @synthesize userListUpdateObserver=_userListUpdateObserver;
- (void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005c57
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005bd3
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005bbc
- (_Bool)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id *)arg3;	// IMP=0x0000000000005b5c
- (_Bool)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id *)arg3;	// IMP=0x0000000000005afc
- (_Bool)haveValidPersonaContextForPersonaUniqueString:(id)arg1;	// IMP=0x0000000000005af4
- (_Bool)haveValidPersonaContextForIDString:(id)arg1;	// IMP=0x0000000000005ae2
- (id)listAllPersonaWithAttributes;	// IMP=0x0000000000005a7f
- (unsigned long long)personaGenerationIdentifierWithError:(id *)arg1;	// IMP=0x00000000000057c5
- (id)listAllPersonaAttributesWithError:(id *)arg1;	// IMP=0x00000000000057ac
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005726
- (void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000056a0
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000561a
- (void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005594
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005510
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000548c
- (void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005408
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005384
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000052fe
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005278
- (void)fetchAllPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000051f2
- (void)fetchPersonaWithType:(int)arg1 CompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000516c
- (void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050e6
- (void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005060
- (void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fdc
- (void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004f58
- (void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004ed4
- (void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004e50
- (void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004dcc
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 passcodeDataType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004d46
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004d2e
@property(readonly, copy, nonatomic) UMUserPersona *currentPersona;
- (void)userInteractionIsEnabled;	// IMP=0x0000000000004ccc
- (void)resumeSync;	// IMP=0x0000000000004c25
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004b64
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;	// IMP=0x0000000000004ad2
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;	// IMP=0x00000000000049c2
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;	// IMP=0x00000000000048d9
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000047b9
- (void)registerUserSwitchStakeHolder:(id)arg1;	// IMP=0x00000000000047a5
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004392
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000431c
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003d8a
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003d68
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003b59
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000037fd
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000037e6
- (void)registerUserListUpdateObserver:(id)arg1;	// IMP=0x000000000000377d
- (void)resumeQuotas;	// IMP=0x0000000000003739
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000036c3
- (void)disableUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000033b0
- (void)deleteUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000030d6
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002da0
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002a13
- (void)currentUserSwitchContextHasBeenUsed;	// IMP=0x00000000000029fa
- (id)currentUserSwitchContext;	// IMP=0x00000000000029e1
- (_Bool)userExists:(id)arg1;	// IMP=0x0000000000002877
- (id)allUsersUnfiltered;	// IMP=0x00000000000026fd
- (id)allUsers;	// IMP=0x0000000000002544
- (void)userListDidUpdate;	// IMP=0x00000000000024c1
- (void)_allUsersDidChange;	// IMP=0x000000000000241e
@property(readonly, copy, nonatomic) UMUser *loginUser;
@property(readonly, copy, nonatomic) UMUser *currentUser;
- (_Bool)canAccessUserProperties;	// IMP=0x00000000000022ea
@property(readonly, nonatomic) unsigned long long userQuotaSize;
@property(readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property(readonly, nonatomic) _Bool isLoginSession;
@property(readonly, nonatomic) _Bool isSharedIPad;
@property(readonly, nonatomic) _Bool isMultiUser;
- (id)init;	// IMP=0x0000000000002235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

