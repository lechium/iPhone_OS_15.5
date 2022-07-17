//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/DMCRFInteractionClient-Protocol.h>
#import <ManagedConfigurationUI/MCInteractionDelegate-Protocol.h>

@class MCProfile, MCUIProfile, NSData, NSString, UIViewController;
@protocol MCProfileTitlePageViewModelDelegate, OS_dispatch_queue;

@interface MCProfileTitlePageViewModel : NSObject <DMCRFInteractionClient, MCInteractionDelegate>
{
    _Bool _isInstallingProfile;	// 8 = 0x8
    int _installState;	// 12 = 0xc
    UIViewController<MCProfileTitlePageViewModelDelegate> *_delegate;	// 16 = 0x10
    MCProfile *_profile;	// 24 = 0x18
    NSData *_profileData;	// 32 = 0x20
    NSString *_pin;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    MCUIProfile *_UIProfile;	// 56 = 0x38
    NSString *_managedAppleID;	// 64 = 0x40
    NSString *_personaID;	// 72 = 0x48
    CDUnknownBlockType _cleanupTask;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000ed2c
@property(copy, nonatomic) CDUnknownBlockType cleanupTask; // @synthesize cleanupTask=_cleanupTask;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(copy, nonatomic) NSString *managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) int installState; // @synthesize installState=_installState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(nonatomic) _Bool isInstallingProfile; // @synthesize isInstallingProfile=_isInstallingProfile;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak UIViewController<MCProfileTitlePageViewModelDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_unblockAppInstallsWithCaller:(id)arg1;	// IMP=0x000000000000eb3f
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;	// IMP=0x000000000000e9f6
- (void)doesUserWantToRestoreSnapshot:(id)arg1 withConflictingApps:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e8a5
- (void)profileConnection:(id)arg1 didRequestManagedRestoreWithManagedAppleID:(id)arg2 personaID:(id)arg3;	// IMP=0x000000000000e788
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;	// IMP=0x000000000000e657
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;	// IMP=0x000000000000e642
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x000000000000e62a
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;	// IMP=0x000000000000e60c
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;	// IMP=0x000000000000e595
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;	// IMP=0x000000000000e583
- (id)_createAuthenticationContext:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000000e44c
- (void)_signInMAID:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e1e8
- (void)_respondToMAIDAuthenticationRequestIfNeeded:(id)arg1 successful:(_Bool)arg2 error:(id)arg3 isCancelled:(_Bool)arg4;	// IMP=0x000000000000e07b
- (void)_handleMAIDSignInRequestWithAccountID:(id)arg1 personaID:(id)arg2 connection:(id)arg3;	// IMP=0x000000000000d9bc
- (void)_respondToUserInputRequest:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x000000000000d82d
- (void)_handleUserInputRequest:(id)arg1;	// IMP=0x000000000000d5d6
- (void)terminateProfileInstallationFlowAndDeleteProfile;	// IMP=0x000000000000d3d3
- (void)terminateProfileInstallationFlow;	// IMP=0x000000000000d2fc
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x000000000000d06e
- (void)_continueInstallAfterPresentingWarnings;	// IMP=0x000000000000cfe9
- (void)startProfileInstallationFlow;	// IMP=0x000000000000cb8d
@property(readonly, nonatomic) NSString *accountIdentifier;
- (void)dealloc;	// IMP=0x000000000000c935
- (void)_setup;	// IMP=0x000000000000c902
- (id)init;	// IMP=0x000000000000c8b6
- (id)initWithProfile:(id)arg1 profileData:(id)arg2;	// IMP=0x000000000000c82e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
