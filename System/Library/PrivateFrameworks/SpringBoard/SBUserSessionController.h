//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLogoutProgressDataSource-Protocol.h>
#import <SpringBoard/SBLogoutProgressDelegate-Protocol.h>
#import <SpringBoard/UMCriticalUserSwitchStakeholder-Protocol.h>

@class LKLogoutSupport, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSString, SBLogoutProgressTransientOverlayViewController, SBMainDisplayPolicyAggregator, UMUser, UMUserManager, UMUserSwitchBlockingTask;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder>
{
    UMUserManager *_userManager;	// 8 = 0x8
    UMUser *_lazy_user;	// 16 = 0x10
    SBMainDisplayPolicyAggregator *_lazy_policyAggregator;	// 24 = 0x18
    SBLogoutProgressTransientOverlayViewController *_progressTransientOverlayViewController;	// 32 = 0x20
    NSMutableArray *_displayApplications;	// 40 = 0x28
    NSMutableSet *_terminatingApplications;	// 48 = 0x30
    UMUserSwitchBlockingTask *_terminateApplicationsTask;	// 56 = 0x38
    NSDate *_terminateApplicationsStartDate;	// 64 = 0x40
    NSDictionary *_debugBlockingTasks;	// 72 = 0x48
    LKLogoutSupport *_logoutSupport;	// 80 = 0x50
    _Bool _loginSession;	// 88 = 0x58
    _Bool _loggingOut;	// 89 = 0x59
}

- (void).cxx_destruct;	// IMP=0x000000000029dfec
@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_lazy_policyAggregator;
@property(nonatomic, getter=isLoggingOut) _Bool loggingOut; // @synthesize loggingOut=_loggingOut;
- (struct CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1;	// IMP=0x000000000029def6
- (id)_massageApplicationListForDisplay:(id)arg1;	// IMP=0x000000000029d8fd
- (void)_displayProgressTransientOverlayIfNeeded;	// IMP=0x000000000029d67a
- (void)_evaluateRunningApplications;	// IMP=0x000000000029d519
- (void)_noteApplicationDidExit:(id)arg1;	// IMP=0x000000000029d3f8
- (void)_noteApplicationDidExitFromNotification:(id)arg1;	// IMP=0x000000000029d3a9
- (id)policyAggregator;	// IMP=0x000000000008a024
- (void)userSwitchBlockingTasksDidUpdate:(id)arg1;	// IMP=0x000000000029d29c
- (void)_readyToSwitchToUser:(id)arg1;	// IMP=0x000000000029cf26
- (void)readyToSwitchToLoginSession:(id)arg1;	// IMP=0x000000000029cce6
- (void)readyToSwitchToUser:(id)arg1;	// IMP=0x000000000029caa3
- (void)willSwitchToUser:(id)arg1;	// IMP=0x000000000029c526
- (void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg1;	// IMP=0x000000000029c500
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;	// IMP=0x000000000029c4f2
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;	// IMP=0x000000000029c4e4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000029c36d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000029c31d
- (id)succinctDescriptionBuilder;	// IMP=0x000000000029c301
- (id)succinctDescription;	// IMP=0x000000000029c2b1
@property(readonly, copy) NSString *description;
- (void)disableCurrentUser;	// IMP=0x000000000029c1ac
- (void)logoutWithLogoutSupport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000029bdbd
- (void)logout;	// IMP=0x000000000029bd75
@property(readonly, nonatomic) long long sessionType;
@property(readonly, nonatomic) _Bool canLogout;
@property(readonly, nonatomic, getter=isLoginSession) _Bool loginSession; // @synthesize loginSession=_loginSession;
@property(readonly, nonatomic) _Bool isMultiUserSupported;
@property(readonly, retain, nonatomic) UMUser *user;
- (void)dealloc;	// IMP=0x000000000029bc67
- (id)_initWithUserManager:(id)arg1;	// IMP=0x000000000029bba7
- (id)init;	// IMP=0x000000000029bb4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
