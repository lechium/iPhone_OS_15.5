//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKSavedGameListener-Protocol.h>
#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKEventEmitter, GKInvite, NSError, NSInvocation, NSString, UIAlertView;
@protocol GKLocalPlayerListenerPrivate;

@interface GKLocalPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>
{
    _Bool _authenticated;	// 8 = 0x8
    _Bool _isShowingAuthenticationUI;	// 9 = 0x9
    _Bool _didAuthenticate;	// 10 = 0xa
    _Bool _validatingAccount;	// 11 = 0xb
    _Bool _enteringForeground;	// 12 = 0xc
    _Bool _newToGameCenter;	// 13 = 0xd
    _Bool _showingInGameUI;	// 14 = 0xe
    _Bool _shouldPreserveOnboardingUI;	// 15 = 0xf
    _Bool _isShowingFriendRequestUI;	// 16 = 0x10
    NSError *_authenticationError;	// 24 = 0x18
    GKInvite *_acceptedInvite;	// 32 = 0x20
    CDUnknownBlockType _validateAccountCompletionHandler;	// 40 = 0x28
    UIAlertView *_loginAlertView;	// 48 = 0x30
    UIAlertView *_currentAlert;	// 56 = 0x38
    NSInvocation *_currentFriendRequestInvocation;	// 64 = 0x40
    long long _environment;	// 72 = 0x48
    GKEventEmitter<GKLocalPlayerListenerPrivate> *_eventEmitter;	// 80 = 0x50
    double _authStartTimeStamp;	// 88 = 0x58
    unsigned long long _authenticationType;	// 96 = 0x60
    unsigned long long _authenticationState;	// 104 = 0x68
}

+ (void)authenticateWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f533
+ (void)authenticatedLocalPlayersDidChange:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e80a
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg1 loggedOutPlayerInternals:(id)arg2 oldPrimary:(id)arg3 newPrimary:(id)arg4;	// IMP=0x000000000004e327
+ (id)_localPlayersFromInternals:(id)arg1 authenticated:(_Bool)arg2;	// IMP=0x000000000004e24c
+ (id)localPlayerForCredential:(id)arg1;	// IMP=0x000000000004dfff
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;	// IMP=0x000000000004da02
+ (id)authenticatedLocalPlayersFiltered:(long long)arg1;	// IMP=0x000000000004d9d4
+ (id)authenticatedLocalPlayers;	// IMP=0x000000000004d9bd
+ (id)localPlayers;	// IMP=0x000000000004aa63
+ (id)localPlayer;	// IMP=0x000000000004a9d2
+ (id)local;	// IMP=0x000000000004a719
+ (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a6b9
+ (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a659
+ (id)localPlayerAccessQueue;	// IMP=0x000000000004a5d8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000556be
+ (void)loadHighlightsDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057b35
- (void).cxx_destruct;	// IMP=0x0000000000055563
@property(nonatomic) unsigned long long authenticationState; // @synthesize authenticationState=_authenticationState;
@property(nonatomic) _Bool isShowingFriendRequestUI; // @synthesize isShowingFriendRequestUI=_isShowingFriendRequestUI;
@property(nonatomic) unsigned long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(nonatomic) double authStartTimeStamp; // @synthesize authStartTimeStamp=_authStartTimeStamp;
@property(retain, nonatomic) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter; // @synthesize eventEmitter=_eventEmitter;
@property(nonatomic, getter=isNewToGameCenter) _Bool newToGameCenter; // @synthesize newToGameCenter=_newToGameCenter;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(nonatomic) _Bool validatingAccount; // @synthesize validatingAccount=_validatingAccount;
@property(nonatomic) _Bool didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property(retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // @synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation;
@property(nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) UIAlertView *loginAlertView; // @synthesize loginAlertView=_loginAlertView;
@property(copy, nonatomic) CDUnknownBlockType validateAccountCompletionHandler; // @synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property(nonatomic) _Bool isShowingAuthenticationUI; // @synthesize isShowingAuthenticationUI=_isShowingAuthenticationUI;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void)reportAuthenticationLoginCanceled;	// IMP=0x000000000005516b
- (void)reportAuthenticatingWithAuthKitInvocation;	// IMP=0x0000000000054fb7
- (void)reportAuthenticatingWithGreenBuddyInvocation;	// IMP=0x0000000000054ddd
- (void)reportAuthenticationErrorNoInternetConnection;	// IMP=0x0000000000054c38
- (void)reportAuthenticationPlayerAuthenticated;	// IMP=0x0000000000054a93
- (void)reportAuthenticationStartForPlayer;	// IMP=0x00000000000548ee
- (_Bool)isWelcomeBannerTooLate;	// IMP=0x000000000005451b
- (_Bool)shouldDisplayWelcomeBannerForPlayer:(id)arg1 lastAuthDate:(id)arg2 remoteUI:(_Bool)arg3 timeBetweenBanners:(double)arg4;	// IMP=0x0000000000054366
- (oneway void)rejectFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054088
- (void)acceptFriendRequestWithIdentifier:(id)arg1 sendPush:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053da1
- (void)cancelFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053ac3
- (void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005358d
- (void)getPlayerIDFromFriendCode:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052fed
- (void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052d6e
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052aef
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052add
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052a17
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052a05
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052502
- (_Bool)hasEmailAddress:(id)arg1;	// IMP=0x000000000005234d
- (void)cancelInviteWithNotification:(id)arg1;	// IMP=0x000000000005218e
- (void)inviteeDeclinedGameInviteWithNotification:(id)arg1;	// IMP=0x0000000000052108
- (void)inviteeAcceptedGameInviteWithNotification:(id)arg1;	// IMP=0x0000000000052082
- (void)cancelGameInvite:(id)arg1;	// IMP=0x0000000000051c53
- (void)fetchCustomTournamentInvite;	// IMP=0x0000000000051c3a
- (void)fetchTurnBasedEvent;	// IMP=0x0000000000051aa2
- (void)fetchMultiplayerGameInvite;	// IMP=0x000000000005190a
- (void)_startAuthenticationForExistingPrimaryPlayer;	// IMP=0x0000000000050607
- (void)removeAllFriendsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050486
- (void)removeFriend:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000502a5
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050293
@property(copy, nonatomic) CDUnknownBlockType authenticateHandler;
- (void)callAuthHandlerWithError:(id)arg1;	// IMP=0x000000000004fb02
@property(nonatomic) _Bool insideAuthenticatorInvocation;
- (void)updateLoginStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004da68
- (void)signOutWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cee0
- (void)showSettings;	// IMP=0x000000000004ce9c
@property(readonly, nonatomic, getter=isAvatarEditingRestricted) _Bool avatarEditingRestricted;
- (void)loadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cc43
- (void)loadRecentPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c8f8
- (void)loadChallengableFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c3df
- (void)loadFriendPlayersWithFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c08c
- (void)loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c07a
- (void)_loadFriendPlayersWithFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004be7a
- (void)_loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bc96
- (id)friends;	// IMP=0x000000000004bbb2
- (void)updateFromLocalPlayer:(id)arg1;	// IMP=0x000000000004bada
- (void)promotePlayerInternalToLocalPlayerInternal:(id)arg1;	// IMP=0x000000000004b3c2
@property(readonly, nonatomic, getter=isPersonalizedCommunicationRestricted) _Bool personalizedCommunicationRestricted;
@property(readonly, nonatomic, getter=isMultiplayerGamingRestricted) _Bool multiplayerGamingRestricted;
- (id)displayNameWithOptions:(unsigned char)arg1;	// IMP=0x000000000004b299
@property(nonatomic) _Bool shouldPreserveOnboardingUI; // @synthesize shouldPreserveOnboardingUI=_shouldPreserveOnboardingUI;
- (void)setStatus:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004af79
- (void)setStatus:(id)arg1;	// IMP=0x000000000004af65
@property(nonatomic, getter=isShowingInGameUI) _Bool showingInGameUI; // @synthesize showingInGameUI=_showingInGameUI;
@property(nonatomic) _Bool appIsInBackground;
- (void)dealloc;	// IMP=0x000000000004ae0c
- (_Bool)scopedIDsArePersistent;	// IMP=0x000000000004a9e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055640
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000555c7
- (void)unregisterAllListeners;	// IMP=0x000000000005578b
- (void)unregisterListener:(id)arg1;	// IMP=0x0000000000055732
- (void)registerListener:(id)arg1;	// IMP=0x00000000000556c6
- (void)resetTCCAuthorization;	// IMP=0x000000000005594c
- (void)setFriendListAuthorizationStatus:(long long)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000557e4
- (id)_friendsAPIDescriptionMissingError;	// IMP=0x00000000000578f6
- (id)_friendsAPICommunicationsError;	// IMP=0x00000000000578d6
- (id)_friendsAPIDeniedError;	// IMP=0x00000000000578b6
- (id)_friendsAPIRestrictedError;	// IMP=0x0000000000057896
- (id)_gkFriendListUsageDescription;	// IMP=0x000000000005780b
- (void)_updatePerGameSettings:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005757a
- (void)_loadFriendsListPerGameAuthorizedFlow:(CDUnknownBlockType)arg1;	// IMP=0x00000000000571f7
- (void)_loadFriendsListPerGameNotDeterminedFlow:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056fac
- (void)_loadFriendsListGlobalAccessOptInFlow:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056dc2
- (void)loadFriendsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000568ce
- (void)loadFriends:(CDUnknownBlockType)arg1;	// IMP=0x00000000000565b0
- (void)loadFriendsAuthorizationStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000000559f1
- (void)setLastProfilePrivacyVersion:(id)arg1;	// IMP=0x0000000000057a79
- (void)setLastPersonalizationVersion:(id)arg1;	// IMP=0x00000000000579bd
- (void)setLastPrivacyNoticeVersion:(unsigned long long)arg1;	// IMP=0x0000000000057916
- (void)setupForCloudSavedGames;	// IMP=0x00000000000d6d5c
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d711b
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d7005
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6e64
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6d7e

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(readonly, nonatomic) _Bool allowNearbyMultiplayer; // @dynamic allowNearbyMultiplayer;
@property(readonly, nonatomic, getter=isAuthenticating) _Bool authenticating; // @dynamic authenticating;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic, getter=isDefaultNickname) _Bool defaultNickname; // @dynamic defaultNickname;
@property(nonatomic, getter=isDefaultPrivacyVisibility) _Bool defaultPrivacyVisibility; // @dynamic defaultPrivacyVisibility;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(readonly, nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;

@end

