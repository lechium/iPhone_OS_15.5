//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/VSAppDocumentControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSApplicationDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSStateMachineDelegate-Protocol.h>

@class JSValue, NSError, NSOperationQueue, NSString, NSURL, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSAuditToken, VSIdentityProvider, VSPreferences, VSStateMachine;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate>
{
    _Bool _applicationMustSelfValidate;	// 8 = 0x8
    _Bool _allowUI;	// 9 = 0x9
    id <VSApplicationControllerDelegate> _delegate;	// 16 = 0x10
    VSIdentityProvider *_identityProvider;	// 24 = 0x18
    NSString *_accountProviderAuthenticationToken;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    VSStateMachine *_stateMachine;	// 48 = 0x30
    NSError *_delegateError;	// 56 = 0x38
    NSError *_onLaunchError;	// 64 = 0x40
    NSURL *_fetchedURL;	// 72 = 0x48
    NSOperationQueue *_privateQueue;	// 80 = 0x50
    VSApplication *_application;	// 88 = 0x58
    VSApplicationControllerResponseHandler *_responseHandler;	// 96 = 0x60
    VSAppDocumentController *_appDocumentController;	// 104 = 0x68
    JSValue *_applicationReadyCallback;	// 112 = 0x70
    VSPreferences *_preferences;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000029292
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(nonatomic) _Bool applicationMustSelfValidate; // @synthesize applicationMustSelfValidate=_applicationMustSelfValidate;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSURL *fetchedURL; // @synthesize fetchedURL=_fetchedURL;
@property(retain) NSError *onLaunchError; // @synthesize onLaunchError=_onLaunchError;
@property(retain) NSError *delegateError; // @synthesize delegateError=_delegateError;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *accountProviderAuthenticationToken; // @synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_makeJavaScriptRequest;	// IMP=0x0000000000029048
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;	// IMP=0x0000000000028bc0
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;	// IMP=0x0000000000028923
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285fd
- (id)_applicationControllerAlertForJavascriptAlert:(id)arg1;	// IMP=0x00000000000280a0
- (id)_applicationLaunchParams;	// IMP=0x0000000000027d4d
- (id)_bootURL;	// IMP=0x0000000000027ca8
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027bf6
- (void)_notifyStartDidFailWithError:(id)arg1;	// IMP=0x0000000000027b03
- (void)_notifyDidStart;	// IMP=0x0000000000027a59
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000002793d
- (void)_notifyDidReceiveViewModelError:(id)arg1;	// IMP=0x000000000002784a
- (void)_notifyDidReceiveViewModel:(id)arg1;	// IMP=0x0000000000027757
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;	// IMP=0x000000000002763b
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;	// IMP=0x00000000000272b6
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;	// IMP=0x0000000000026fbf
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;	// IMP=0x0000000000026c7e
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;	// IMP=0x00000000000264db
- (void)_cancelValidation;	// IMP=0x00000000000263fb
- (void)_beginAuthentication;	// IMP=0x000000000002628a
- (void)_presentAlert:(id)arg1;	// IMP=0x00000000000260ee
- (void)_presentDocument:(id)arg1;	// IMP=0x0000000000025b58
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;	// IMP=0x0000000000025ae1
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;	// IMP=0x0000000000025a22
- (id)activeAppDocumentForApplication:(id)arg1;	// IMP=0x00000000000259d2
- (id)launchParamsForApplication:(id)arg1;	// IMP=0x00000000000259c0
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;	// IMP=0x0000000000025939
- (void)applicationDidStart:(id)arg1;	// IMP=0x00000000000258f5
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;	// IMP=0x0000000000024c7c
- (void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1;	// IMP=0x00000000000248b6
- (void)submitRequest:(id)arg1;	// IMP=0x0000000000024700
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;	// IMP=0x0000000000024116
- (void)sendErrorMessage:(id)arg1;	// IMP=0x00000000000240a4
- (void)stop;	// IMP=0x0000000000023fca
- (void)start;	// IMP=0x0000000000023f86
- (void)transitionToInvalidState;	// IMP=0x0000000000023e8d
- (void)transitionToNotifyingOfLaunchFailureState;	// IMP=0x0000000000023c00
- (void)transitionToReadyState;	// IMP=0x0000000000023ba3
- (void)transitionToWaitingForBothLaunchCallbacksState;	// IMP=0x0000000000023477
- (void)transitionToWaitingForBootUrlState;	// IMP=0x0000000000022f98
- (void)dealloc;	// IMP=0x0000000000022ee7
- (id)initWithIdentityProvider:(id)arg1;	// IMP=0x0000000000022a8b
- (id)init;	// IMP=0x0000000000022a1c
- (oneway void)release;	// IMP=0x000000000000c8fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
