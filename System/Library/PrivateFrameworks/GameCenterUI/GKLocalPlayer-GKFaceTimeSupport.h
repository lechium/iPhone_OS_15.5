//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKLocalPlayer.h>

#import <GameCenterUI/GKLocalPlayerAuthenticationUIPersonality-Protocol.h>

@class NSString;

@interface GKLocalPlayer (GKFaceTimeSupport) <GKLocalPlayerAuthenticationUIPersonality>
+ (id)accountName;	// IMP=0x0000000000022998
+ (_Bool)hasAuthenticatedAccount;	// IMP=0x000000000005c21f
- (id)deleteAvatarAlertControllerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003eeb6
- (void)deleteMonogramsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e94f
- (void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e4c2
- (void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003de57
- (void)deletePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003dd80
- (void)deletePhoto;	// IMP=0x000000000003dd61
- (void)registerGameControllers;	// IMP=0x0000000000139502
- (void)reloadAccessPoint;	// IMP=0x00000000001394be
- (void)hideAccessPoint;	// IMP=0x000000000013947a
- (void)showAccessPoint;	// IMP=0x0000000000139436
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x0000000000139145
- (void)showAlertForTag:(unsigned long long)arg1;	// IMP=0x0000000000139048
- (void)showLoginFailedAlert;	// IMP=0x0000000000138df7
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(CDUnknownBlockType)arg2;	// IMP=0x0000000000138300
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001377f6
- (void)showOnboardingUIFromViewController:(id)arg1;	// IMP=0x0000000000136c5b
- (_Bool)shouldShowOnBoardingUI;	// IMP=0x0000000000136b74
- (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000136ae4
- (_Bool)presentFriendRequestCreatorFromViewController:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016158e
- (_Bool)isPresentingFriendRequestViewController;	// IMP=0x000000000016157c
- (void)sendFriendInviteTo:(id)arg1 groupId:(id)arg2;	// IMP=0x0000000000160dad
- (_Bool)canSendFriendRequest;	// IMP=0x0000000000160da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

