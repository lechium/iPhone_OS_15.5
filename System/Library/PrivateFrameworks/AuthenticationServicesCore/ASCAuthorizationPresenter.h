//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/ASCAuthorizationPresenterHostProtocol-Protocol.h>
#import <AuthenticationServicesCore/NSXPCListenerDelegate-Protocol.h>
#import <AuthenticationServicesCore/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSArray, NSString, NSXPCConnection, NSXPCListener, SBSRemoteAlertHandle;
@protocol ASCAuthorizationPresenterDelegate, ASCViewServiceProtocol, OS_dispatch_queue;

@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, ASCAuthorizationPresenterHostProtocol>
{
    NSXPCListener *_remoteListener;	// 8 = 0x8
    CDUnknownBlockType _credentialResultHandler;	// 16 = 0x10
    SBSRemoteAlertHandle *_remoteAlertHandle;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_invalidationQueue;	// 32 = 0x20
    NSXPCConnection *_viewServiceConnection;	// 40 = 0x28
    id <ASCViewServiceProtocol> _viewServiceProxy;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_interfaceUpdateQueue;	// 56 = 0x38
    NSArray *_loginChoicesForQueuedUpdate;	// 64 = 0x40
    _Bool _hasQueuedPINEntryInterfaceRequest;	// 72 = 0x48
    _Bool _hasQueuedCABLEClientWillConnectRequest;	// 73 = 0x49
    _Bool _hasQueuedCABLEClientWillAuthenticateRequest;	// 74 = 0x4a
    id <ASCAuthorizationPresenterDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000ff41
@property(nonatomic) __weak id <ASCAuthorizationPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startCABLEAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000febe
- (void)initializeClientToViewServiceConnection;	// IMP=0x000000000000feb8
- (void)validateUserEnteredPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fe3c
- (void)authorizationRequestFinishedWithCredential:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fdea
- (void)authorizationRequestInitiatedWithLoginChoice:(id)arg1 authenticatedContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fd4d
- (_Bool)_isErrorDueToNewAlertHandleRequest:(id)arg1;	// IMP=0x000000000000fcae
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000000fba3
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000000000fb1a
- (void)cableClientWillAuthenticate;	// IMP=0x000000000000faaa
- (void)cableClientWillConnect;	// IMP=0x000000000000fa3a
- (void)_invalidateWithError:(id)arg1;	// IMP=0x000000000000f96d
- (void)_performQueuedUpdatesIfNecessary;	// IMP=0x000000000000f875
- (_Bool)_isPresentationContextValid:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000f673
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000f486
- (void)dismissWithError:(id)arg1;	// IMP=0x000000000000f3dd
- (void)dismiss;	// IMP=0x000000000000f378
- (void)updateInterfaceForUserVisibleError:(id)arg1;	// IMP=0x000000000000f1a8
- (void)presentPINEntryInterface;	// IMP=0x000000000000f138
- (void)updateInterfaceWithLoginChoices:(id)arg1;	// IMP=0x000000000000f077
- (void)presentError:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ee40
- (void)presentAuthorizationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eadc
- (id)init;	// IMP=0x000000000000ea51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
