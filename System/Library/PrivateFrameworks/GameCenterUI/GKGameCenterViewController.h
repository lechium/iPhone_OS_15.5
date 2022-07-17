//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <GameCenterUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class GKDashboardHostViewController, GKGame, GKLeaderboard, NSString, UIAlertController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isArcade;	// 8 = 0x8
    _Bool _presenting;	// 9 = 0x9
    int _actualHostPID;	// 12 = 0xc
    id <GKGameCenterControllerDelegate> _gameCenterDelegate;	// 16 = 0x10
    long long _viewState;	// 24 = 0x18
    NSString *_leaderboardIdentifier;	// 32 = 0x20
    long long _leaderboardTimeScope;	// 40 = 0x28
    long long _leaderboardPlayerScope;	// 48 = 0x30
    GKDashboardHostViewController *_remoteViewController;	// 56 = 0x38
    GKLeaderboard *_leaderboard;	// 64 = 0x40
    NSString *_achievementIdentifier;	// 72 = 0x48
    NSString *_playerIdentifier;	// 80 = 0x50
    UIAlertController *_alertController;	// 88 = 0x58
    GKGame *_actualGame;	// 96 = 0x60
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000008cc69
+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x000000000008cc61
- (void).cxx_destruct;	// IMP=0x000000000008f48b
@property(nonatomic) int actualHostPID; // @synthesize actualHostPID=_actualHostPID;
@property(retain, nonatomic) GKGame *actualGame; // @synthesize actualGame=_actualGame;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) _Bool isArcade; // @synthesize isArcade=_isArcade;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSString *playerIdentifier; // @synthesize playerIdentifier=_playerIdentifier;
@property(retain, nonatomic) NSString *achievementIdentifier; // @synthesize achievementIdentifier=_achievementIdentifier;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKDashboardHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <GKGameCenterControllerDelegate> gameCenterDelegate; // @synthesize gameCenterDelegate=_gameCenterDelegate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000000008f32c
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x000000000008f324
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;	// IMP=0x000000000008f31c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000008f311
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000008f309
@property(retain, nonatomic) NSString *leaderboardCategory; // @dynamic leaderboardCategory;
@property(nonatomic) long long leaderboardPlayerScope; // @synthesize leaderboardPlayerScope=_leaderboardPlayerScope;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (_Bool)shouldShowQuitForTurnBasedMatch;	// IMP=0x000000000008eb80
- (_Bool)shouldShowPlayForTurnBasedMatch;	// IMP=0x000000000008eb04
- (_Bool)shouldShowPlayForChallenge;	// IMP=0x000000000008ea25
- (void)extensionDidFinishWithError:(id)arg1;	// IMP=0x000000000008e98b
- (void)checkArcadeStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e698
- (void)_setupRemoteViewController;	// IMP=0x000000000008da36
- (void)_setupChildViewController;	// IMP=0x000000000008d7fb
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000008d5c9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008d4d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000008d2ad
- (void)loadView;	// IMP=0x000000000008d1d3
- (void)animateTransition:(id)arg1;	// IMP=0x000000000008ccd5
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000008cccc
- (void)animationEnded:(_Bool)arg1;	// IMP=0x000000000008ccb8
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000008cc96
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000008cc71
- (void)dealloc;	// IMP=0x000000000008cac3
- (id)initWithPlayerID:(id)arg1 withFriendsList:(_Bool)arg2;	// IMP=0x000000000008ca38
- (id)initWithAchievementID:(id)arg1;	// IMP=0x000000000008c9ab
- (id)initWithLeaderboard:(id)arg1 playerScope:(long long)arg2;	// IMP=0x000000000008c8fd
- (id)initWithLeaderboardID:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3;	// IMP=0x000000000008c84c
- (id)initWithState:(long long)arg1;	// IMP=0x000000000008c7d0
- (id)init;	// IMP=0x000000000008c757
- (void)notifyDelegateOnWillFinish;	// IMP=0x000000000008f861
- (void)setLeaderboardPlayerScopeFromExtension:(long long)arg1;	// IMP=0x000000000008f850
- (void)setLeaderboardTimeScopeFromExtension:(long long)arg1;	// IMP=0x000000000008f83f
- (void)setLeaderboardIdentifierFromExtension:(id)arg1;	// IMP=0x000000000008f82b
- (void)setViewStateFromExtension:(long long)arg1;	// IMP=0x000000000008f81a
- (id)initWithGame:(id)arg1 hostPID:(int)arg2;	// IMP=0x000000000008f520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
