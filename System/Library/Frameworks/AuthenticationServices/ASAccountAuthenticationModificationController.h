//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/_ASAccountAuthenticationModificationRemoteViewControllerDelegate-Protocol.h>

@class ASAccountAuthenticationModificationRequest, NSExtension, NSString, _ASAccountAuthenticationModificationRemoteViewController;
@protocol ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding;

@interface ASAccountAuthenticationModificationController : NSObject <_ASAccountAuthenticationModificationRemoteViewControllerDelegate>
{
    _ASAccountAuthenticationModificationRemoteViewController *_accountAuthenticationModificationRemoteViewController;	// 8 = 0x8
    ASAccountAuthenticationModificationRequest *_request;	// 16 = 0x10
    ASAccountAuthenticationModificationController *_referenceToSelf;	// 24 = 0x18
    NSExtension *_helperExtension;	// 32 = 0x20
    id <ASAccountAuthenticationModificationControllerDelegate> _delegate;	// 40 = 0x28
    id <ASAccountAuthenticationModificationControllerPresentationContextProviding> _presentationContextProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000031c96
@property(nonatomic) __weak id <ASAccountAuthenticationModificationControllerPresentationContextProviding> presentationContextProvider; // @synthesize presentationContextProvider=_presentationContextProvider;
@property(nonatomic) __weak id <ASAccountAuthenticationModificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAccountModificationRemoteViewController:(id)arg1;	// IMP=0x0000000000031bab
- (void)accountModificationRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;	// IMP=0x0000000000031b2d
- (void)accountModificationRemoteViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031a42
- (void)presentAccountModificationRemoteViewController:(id)arg1;	// IMP=0x00000000000318a5
- (void)accountModificationRemoteViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000317ba
- (void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000316cf
- (id)_viewControllerToPresentFrom;	// IMP=0x0000000000031628
- (void)_failRequestWithError:(id)arg1;	// IMP=0x00000000000315aa
- (void)_invalidate;	// IMP=0x0000000000031553
- (void)_performUpgradePasswordToStrongPasswordRequest:(id)arg1;	// IMP=0x00000000000312d8
- (void)_showUpgradeToStrongPasswordPromptForRequest:(id)arg1;	// IMP=0x0000000000030d0c
- (void)_performReplacePasswordWithSignInWithAppleRequest:(id)arg1;	// IMP=0x0000000000030a91
- (void)_requestRemoteViewController:(CDUnknownBlockType)arg1;	// IMP=0x000000000003090d
- (void)performRequest:(id)arg1;	// IMP=0x0000000000030656
- (id)init;	// IMP=0x00000000000304d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

