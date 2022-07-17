//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/ENAuthenticatorDelegate-Protocol.h>
#import <ActionKit/ENBusinessNoteStoreClientDelegate-Protocol.h>
#import <ActionKit/ENLinkedNoteStoreClientDelegate-Protocol.h>

@class EDAMUser, ENAuthCache, ENBusinessNoteStoreClient, ENNoteStoreClient, ENPreferencesStore, ENUserStoreClient, NSArray, NSDate, NSString;
@protocol ENAuthenticator, ENSDKLogging, OS_dispatch_queue;

@interface ENSession : NSObject <ENLinkedNoteStoreClientDelegate, ENBusinessNoteStoreClientDelegate, ENAuthenticatorDelegate>
{
    _Bool _isAuthenticated;	// 8 = 0x8
    _Bool _supportsLinkedAppNotebook;	// 9 = 0x9
    id <ENSDKLogging> _logger;	// 16 = 0x10
    NSString *_sourceApplication;	// 24 = 0x18
    long long _personalUploadUsage;	// 32 = 0x20
    long long _personalUploadLimit;	// 40 = 0x28
    long long _businessUploadUsage;	// 48 = 0x30
    long long _businessUploadLimit;	// 56 = 0x38
    id <ENAuthenticator> _authenticator;	// 64 = 0x40
    CDUnknownBlockType _authorizationBlock;	// 72 = 0x48
    CDUnknownBlockType _authenticationCompletion;	// 80 = 0x50
    NSString *_sessionHost;	// 88 = 0x58
    EDAMUser *_user;	// 96 = 0x60
    NSString *_primaryAuthenticationToken;	// 104 = 0x68
    EDAMUser *_businessUser;	// 112 = 0x70
    ENPreferencesStore *_preferences;	// 120 = 0x78
    ENUserStoreClient *_userStore;	// 128 = 0x80
    ENNoteStoreClient *_primaryNoteStore;	// 136 = 0x88
    ENBusinessNoteStoreClient *_businessNoteStore;	// 144 = 0x90
    ENAuthCache *_authCache;	// 152 = 0x98
    NSArray *_notebooksCache;	// 160 = 0xa0
    NSDate *_notebooksCacheDate;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_thumbnailQueue;	// 176 = 0xb0
    ENUserStoreClient *_userStorePendingRevocation;	// 184 = 0xb8
}

+ (id)bundleSeedID;	// IMP=0x00000000002f2a99
+ (_Bool)checkSharedSessionSettings;	// IMP=0x00000000002f29de
+ (id)developerToken;	// IMP=0x00000000002f29cd
+ (id)consumerSecret;	// IMP=0x00000000002f29bc
+ (id)consumerKey;	// IMP=0x00000000002f29ab
+ (id)sessionHostOverride;	// IMP=0x00000000002f299a
+ (id)keychainAccessGroup;	// IMP=0x00000000002f2989
+ (void)setKeychainGroup:(id)arg1;	// IMP=0x00000000002f28c8
+ (void)setSecurityApplicationGroupIdentifier:(id)arg1;	// IMP=0x00000000002f28b4
+ (void)setDisableRefreshingNotebooksCacheOnLaunch:(_Bool)arg1;	// IMP=0x00000000002f28a8
+ (id)sharedSession;	// IMP=0x00000000002f2878
+ (void)setSharedSessionDeveloperToken:(id)arg1 noteStoreUrl:(id)arg2;	// IMP=0x00000000002f27cb
+ (void)setSharedSessionConsumerKey:(id)arg1 consumerSecret:(id)arg2 optionalHost:(id)arg3;	// IMP=0x00000000002f26e9
- (void).cxx_destruct;	// IMP=0x00000000002eebef
@property(retain, nonatomic) ENUserStoreClient *userStorePendingRevocation; // @synthesize userStorePendingRevocation=_userStorePendingRevocation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) NSDate *notebooksCacheDate; // @synthesize notebooksCacheDate=_notebooksCacheDate;
@property(retain, nonatomic) NSArray *notebooksCache; // @synthesize notebooksCache=_notebooksCache;
@property(retain, nonatomic) ENAuthCache *authCache; // @synthesize authCache=_authCache;
@property(retain, nonatomic) ENBusinessNoteStoreClient *businessNoteStore; // @synthesize businessNoteStore=_businessNoteStore;
@property(retain, nonatomic) ENNoteStoreClient *primaryNoteStore; // @synthesize primaryNoteStore=_primaryNoteStore;
@property(retain, nonatomic) ENUserStoreClient *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) ENPreferencesStore *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) EDAMUser *businessUser; // @synthesize businessUser=_businessUser;
@property(nonatomic) _Bool supportsLinkedAppNotebook; // @synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook;
@property(copy, nonatomic) NSString *primaryAuthenticationToken; // @synthesize primaryAuthenticationToken=_primaryAuthenticationToken;
@property(retain, nonatomic) EDAMUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *sessionHost; // @synthesize sessionHost=_sessionHost;
@property(copy, nonatomic) CDUnknownBlockType authenticationCompletion; // @synthesize authenticationCompletion=_authenticationCompletion;
@property(copy, nonatomic) CDUnknownBlockType authorizationBlock; // @synthesize authorizationBlock=_authorizationBlock;
@property(retain, nonatomic) id <ENAuthenticator> authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) long long businessUploadLimit; // @synthesize businessUploadLimit=_businessUploadLimit;
@property(nonatomic) long long businessUploadUsage; // @synthesize businessUploadUsage=_businessUploadUsage;
@property(nonatomic) long long personalUploadLimit; // @synthesize personalUploadLimit=_personalUploadLimit;
@property(nonatomic) long long personalUploadUsage; // @synthesize personalUploadUsage=_personalUploadUsage;
@property(nonatomic) _Bool isAuthenticated; // @synthesize isAuthenticated=_isAuthenticated;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) id <ENSDKLogging> logger; // @synthesize logger=_logger;
- (void)storeClientFailedAuthentication:(id)arg1;	// IMP=0x00000000002ee892
- (void)authenticatorDidFailWithError:(id)arg1;	// IMP=0x00000000002ee880
- (void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2;	// IMP=0x00000000002ee6f2
- (void)authenticatorShouldShowAuthorizationUIWithURL:(id)arg1 callbackPrefix:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ee633
- (id)userStoreClientForBootstrapping;	// IMP=0x00000000002ee5ce
- (id)authenticationTokenForLinkedNotebookRef:(id)arg1;	// IMP=0x00000000002ee33e
- (id)noteStoreUrlForBusinessStoreClient:(id)arg1;	// IMP=0x00000000002ee2ee
- (id)authenticationTokenForBusinessStoreClient:(id)arg1;	// IMP=0x00000000002ee29e
- (id)userStoreUrl;	// IMP=0x00000000002ee159
- (void)setCurrentProfileNameFromHost:(id)arg1;	// IMP=0x00000000002ee099
- (id)currentProfileName;	// IMP=0x00000000002ee042
- (id)authenticationTokenForNoteRef:(id)arg1;	// IMP=0x00000000002eddd1
- (id)shardIdForNoteRef:(id)arg1;	// IMP=0x00000000002edcde
- (id)noteStoreForNotebook:(id)arg1;	// IMP=0x00000000002edc1c
- (id)noteStoreForNoteRef:(id)arg1;	// IMP=0x00000000002edb1a
- (id)noteStoreForLinkedNotebook:(id)arg1;	// IMP=0x00000000002edaa1
- (void)notifyAuthenticationChanged;	// IMP=0x00000000002ed79d
- (id)validBusinessAuthenticationResult;	// IMP=0x00000000002ed578
- (id)primaryCredentials;	// IMP=0x00000000002ed519
- (void)saveCredentialStore:(id)arg1;	// IMP=0x00000000002ed4a0
- (void)addCredentials:(id)arg1;	// IMP=0x00000000002ed41e
- (id)credentialsForHost:(id)arg1;	// IMP=0x00000000002ed39b
- (id)credentialStore;	// IMP=0x00000000002ed2bf
- (_Bool)isErrorDueToRestrictedAuth:(id)arg1;	// IMP=0x00000000002ed1bf
- (void)downloadThumbnailForNote:(id)arg1 maxDimension:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ecf43
- (void)downloadNote:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ecc65
- (void)findNotes_completeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00000000002ecba5
- (void)findNotes_processResultsWithContext:(id)arg1;	// IMP=0x00000000002ec0a7
- (void)findNotes_nextFindInLinkedScopeWithContext:(id)arg1;	// IMP=0x00000000002ebdac
- (void)findNotes_findInLinkedScopeWithContext:(id)arg1;	// IMP=0x00000000002eba1b
- (void)findNotes_findInBusinessScopeWithContext:(id)arg1;	// IMP=0x00000000002eb792
- (void)findNotes_findInPersonalScopeWithContext:(id)arg1;	// IMP=0x00000000002eb57e
- (void)findNotes_listNotebooksWithContext:(id)arg1;	// IMP=0x00000000002eb4ec
- (void)findNotesWithSearch:(id)arg1 inNotebook:(id)arg2 orScope:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 maxResults:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002eaea8
- (void)deleteNote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ead4a
- (void)shareNote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002eabd6
- (void)uploadNote_completeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00000000002eaac2
- (void)uploadNote_createWithContext:(id)arg1;	// IMP=0x00000000002ea861
- (void)uploadNote_findSharedAppNotebookWithContext:(id)arg1;	// IMP=0x00000000002ea753
- (void)uploadNote_findLinkedAppNotebookWithContext:(id)arg1;	// IMP=0x00000000002ea694
- (void)uploadNote_updateWithContext:(id)arg1;	// IMP=0x00000000002ea432
- (void)uploadNote_determineDestinationWithContext:(id)arg1;	// IMP=0x00000000002e9dae
- (void)uploadNote:(id)arg1 policy:(long long)arg2 toNotebook:(id)arg3 orReplaceNote:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e976b
- (void)uploadNote:(id)arg1 notebook:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e9746
- (void)listNotebooks_cleanCache;	// IMP=0x00000000002e9714
- (void)listNotebooks_completeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00000000002e9600
- (void)listNotebooks_prepareResultsWithContext:(id)arg1;	// IMP=0x00000000002e94dd
- (void)listNotebooks_processSharedNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e91ca
- (void)listNotebooks_completePendingSharedNotebookWithContext:(id)arg1;	// IMP=0x00000000002e915f
- (void)listNotebooks_fetchSharedNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e8d24
- (void)listNotebooks_processBusinessNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e8929
- (void)listNotebooks_fetchBusinessNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e886a
- (void)listNotebooks_fetchSharedBusinessNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e87ab
- (void)listNotebooks_listLinkedNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e86ec
- (void)listNotebooks_listSharedNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e862d
- (void)listNotebooks_listNotebooksWithContext:(id)arg1;	// IMP=0x00000000002e856e
- (void)listWritableNotebooksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e84e0
- (void)listNotebooksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e82fe
- (_Bool)handleOpenURL:(id)arg1;	// IMP=0x00000000002e825e
- (void)unauthenticateAndRevokeAccessToken:(_Bool)arg1;	// IMP=0x00000000002e7fbe
- (void)unauthenticateWithoutRevokingAccessToken;	// IMP=0x00000000002e7faa
- (void)unauthenticate;	// IMP=0x00000000002e7f93
- (_Bool)appNotebookIsLinked;	// IMP=0x00000000002e7f1e
- (int)userID;	// IMP=0x00000000002e7eb0
@property(readonly, nonatomic) NSString *businessDisplayName;
@property(readonly, nonatomic) NSString *userDisplayName;
@property(readonly, nonatomic) _Bool isBusinessUser;
@property(readonly, nonatomic) _Bool isPremiumUser;
@property(readonly, nonatomic) _Bool isAuthenticationInProgress;
- (void)completeAuthenticationWithError:(id)arg1;	// IMP=0x00000000002e7b0d
- (void)refreshUploadUsage;	// IMP=0x00000000002e7a1f
- (void)performPostAuthentication;	// IMP=0x00000000002e7963
- (void)selectInitialSessionHost;	// IMP=0x00000000002e76f7
- (void)startup;	// IMP=0x00000000002e73d2
- (void)dealloc;	// IMP=0x00000000002e735d
- (id)init;	// IMP=0x00000000002e72c1
- (void)authenticateWithAuthorizationBlock:(CDUnknownBlockType)arg1 preferRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001eb4ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
