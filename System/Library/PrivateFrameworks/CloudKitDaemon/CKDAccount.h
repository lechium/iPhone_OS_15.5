//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKAccountOverrideInfo, CKDBackingAccount, NSPersonNameComponents, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject
{
    _Bool _isAnonymousAccount;	// 8 = 0x8
    _Bool _haveWarnedAboutServerPreferredPushEnvironment;	// 9 = 0x9
    CKAccountOverrideInfo *_fakeAccountInfo;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    CKDBackingAccount *_backingAccount;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;	// 40 = 0x28
    NSString *_lastFailedCloudKitAuthToken;	// 48 = 0x30
    NSString *_lastFailediCloudAuthToken;	// 56 = 0x38
}

+ (id)globalAuthTokenQueue;	// IMP=0x00000000000fab02
- (void).cxx_destruct;	// IMP=0x00000000000fd2ac
@property(copy, nonatomic) NSString *lastFailediCloudAuthToken; // @synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken;
@property(copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // @synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // @synthesize authTokenCallbackQueue=_authTokenCallbackQueue;
@property(nonatomic) _Bool haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) _Bool isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo; // @synthesize fakeAccountInfo=_fakeAccountInfo;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fd177
@property(readonly, nonatomic) NSString *sharingURLHostname;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 container:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fd004
@property(readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property(readonly, nonatomic) NSURL *privateCodeServiceURL;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
- (id)_lockediCloudAuthTokenWithContainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fcb31
- (void)iCloudAuthTokenWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fc8c5
- (id)iCloudAuthTokenWithContainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fc699
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 container:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fc31f
- (id)_lockedCloudKitAuthTokenWithContainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fbfdc
- (void)cloudKitAuthTokenWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fbd70
- (id)cloudKitAuthTokenWithContainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fbb44
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 container:(id)arg3 failedToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fb7ca
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 container:(id)arg3 tokenFetchBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fab9d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000faa2e
@property(readonly, nonatomic) NSString *dsid;
- (_Bool)isDataclassEnabledForCellular:(id)arg1;	// IMP=0x00000000000fa8d1
- (_Bool)isDataclassEnabled:(id)arg1;	// IMP=0x00000000000fa85a
@property(readonly, nonatomic) _Bool isPrimaryEmailVerified;
- (id)description;	// IMP=0x00000000000fa713
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property(readonly, nonatomic) NSString *displayedHostname;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) _Bool isFakeAccount;
- (_Bool)_userCloudDBURLisInCarryPartition;	// IMP=0x00000000000fa365
@property(readonly, nonatomic) _Bool isCarryAccount;
@property(readonly, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic) NSString *formattedUsername;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1;	// IMP=0x00000000000f9e6b
- (id)initWithAccountID:(id)arg1;	// IMP=0x00000000000f9c77
- (id)initAnonymousAccount;	// IMP=0x00000000000f9bdc
- (id)initPrimaryAccount;	// IMP=0x00000000000f9a0f
- (id)_init;	// IMP=0x00000000000f998d

@end
