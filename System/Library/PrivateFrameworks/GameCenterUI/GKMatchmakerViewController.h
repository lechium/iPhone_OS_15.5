//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/GKMatchDelegate-Protocol.h>
#import <GameCenterUI/GKMatchDelegatePrivate-Protocol.h>

@class GKInvite, GKMatch, GKMatchRequest, GKMatchmakerHostViewController, NSMutableArray, NSObject, NSString, UIAlertController;
@protocol GKMatchmakerViewControllerDelegate, OS_dispatch_queue;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate, GKMatchDelegatePrivate, GKExtensionParentViewControllerProtocol>
{
    _Bool _userCancelledMatching;	// 8 = 0x8
    _Bool _hosted;	// 9 = 0x9
    _Bool _canStartWithMinimumPlayers;	// 10 = 0xa
    _Bool _inviterCancelNotificaitonReceived;	// 11 = 0xb
    id <GKMatchmakerViewControllerDelegate> matchmakerDelegate;	// 16 = 0x10
    GKMatchRequest *_matchRequest;	// 24 = 0x18
    long long _matchmakingMode;	// 32 = 0x20
    GKMatchmakerHostViewController *_remoteViewController;	// 40 = 0x28
    GKInvite *_acceptedInvite;	// 48 = 0x30
    GKMatch *_match;	// 56 = 0x38
    NSMutableArray *_hostedPlayers;	// 64 = 0x40
    UIAlertController *_alertController;	// 72 = 0x48
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x00000000000f948e
- (void).cxx_destruct;	// IMP=0x00000000000ff1bc
@property(nonatomic) _Bool inviterCancelNotificaitonReceived; // @synthesize inviterCancelNotificaitonReceived=_inviterCancelNotificaitonReceived;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSMutableArray *hostedPlayers; // @synthesize hostedPlayers=_hostedPlayers;
@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(retain, nonatomic) GKMatchmakerHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) _Bool canStartWithMinimumPlayers; // @synthesize canStartWithMinimumPlayers=_canStartWithMinimumPlayers;
@property(nonatomic) long long matchmakingMode; // @synthesize matchmakingMode=_matchmakingMode;
@property(nonatomic, getter=isHosted) _Bool hosted; // @synthesize hosted=_hosted;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(nonatomic) __weak id <GKMatchmakerViewControllerDelegate> matchmakerDelegate; // @synthesize matchmakerDelegate;
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000000ff057
- (void)authenticationChanged:(id)arg1;	// IMP=0x00000000000fedd1
- (void)playersToInvite:(id)arg1;	// IMP=0x00000000000fed78
- (void)localPlayerAcceptedGameInvite:(id)arg1;	// IMP=0x00000000000fecab
- (void)inviterCancelledNotification:(id)arg1;	// IMP=0x00000000000fe6e0
- (void)setConnectingStateForPlayer:(id)arg1;	// IMP=0x00000000000fe689
- (void)setBrowsingForNearbyPlayers:(_Bool)arg1;	// IMP=0x00000000000fe4c6
- (void)sendData:(id)arg1;	// IMP=0x00000000000fe495
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x00000000000fe433
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;	// IMP=0x00000000000fe3b3
- (void)match:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000fe39e
- (void)invitedPlayer:(id)arg1 responded:(long long)arg2;	// IMP=0x00000000000fdd45
- (void)cancelPendingInviteToPlayer:(id)arg1;	// IMP=0x00000000000fdc35
- (void)startMatchingWithRequest:(id)arg1;	// IMP=0x00000000000fcaee
- (void)setShareInvitees:(id)arg1;	// IMP=0x00000000000fca73
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fc7f8
- (void)createMatchForAcceptedInvite;	// IMP=0x00000000000fc62c
- (void)finishWithPlayers;	// IMP=0x00000000000fc335
- (void)finishWithMatch;	// IMP=0x00000000000fbf35
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000fbccc
- (void)cancelMatching;	// IMP=0x00000000000fb9cf
@property(nonatomic) _Bool userCancelledMatching; // @synthesize userCancelledMatching=_userCancelledMatching;
@property(readonly) NSObject<OS_dispatch_queue> *cancellingQueue;
- (void)cancel;	// IMP=0x00000000000fb5ed
- (void)setHostedPlayerReady:(id)arg1;	// IMP=0x00000000000fb567
@property(copy, nonatomic) NSString *defaultInvitationMessage;
- (void)addPlayersToMatch:(id)arg1;	// IMP=0x00000000000fb3a6
- (void)setHostedPlayer:(id)arg1 connected:(_Bool)arg2;	// IMP=0x00000000000fb247
- (void)setHostedPlayer:(id)arg1 didConnect:(_Bool)arg2;	// IMP=0x00000000000fb1eb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000fb0b1
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000000fb0a9
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000faebe
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fae0f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fab90
- (void)viewDidLoad;	// IMP=0x00000000000fa92b
- (void)extensionDidFinishWithError:(id)arg1;	// IMP=0x00000000000fa520
- (void)_setupRemoteViewController;	// IMP=0x00000000000f9b31
- (void)_setupChildViewController;	// IMP=0x00000000000f9a04
- (void)setupNotifications;	// IMP=0x00000000000f98ae
- (void)dealloc;	// IMP=0x00000000000f96a4
- (id)init;	// IMP=0x00000000000f965f
- (id)initWithInvite:(id)arg1;	// IMP=0x00000000000f95b6
- (id)initWithMatchRequest:(id)arg1;	// IMP=0x00000000000f9496

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
