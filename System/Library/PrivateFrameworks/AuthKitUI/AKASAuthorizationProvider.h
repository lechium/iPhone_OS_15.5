//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKitUI/AKAlertHandlerUIProvider-Protocol.h>
#import <AuthKitUI/AKAuthorizationPasswordAuthenticationDelegate-Protocol.h>
#import <AuthKitUI/_ASAuthenticationProvider-Protocol.h>

@class AKCredentialRequestContext, NSString;
@protocol OS_dispatch_queue, _ASAuthenticationPresentationProvider, _ASAuthenticationProviderLoginRowData;

@interface AKASAuthorizationProvider : NSObject <AKAuthorizationPasswordAuthenticationDelegate, AKAlertHandlerUIProvider, _ASAuthenticationProvider>
{
    AKCredentialRequestContext *_requestContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestQueue;	// 16 = 0x10
    CDUnknownBlockType _completionHandlerForCurrentRequest;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
    _Bool _didFailWithErrorRequiringPasswordAuth;	// 40 = 0x28
    id <_ASAuthenticationPresentationProvider> _presentationProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000028b25
@property __weak id <_ASAuthenticationPresentationProvider> presentationProvider; // @synthesize presentationProvider=_presentationProvider;
- (_Bool)alertHandlerShowAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 altAction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028a68
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;	// IMP=0x0000000000028883
@property(readonly, nonatomic) id <_ASAuthenticationProviderLoginRowData> loginRowData;
- (_Bool)_shouldContinueWithPasswordForError:(id)arg1;	// IMP=0x000000000002855a
- (void)_handleAuthorizationError:(id)arg1;	// IMP=0x000000000002832e
- (void)_performAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028270
- (void)_showPasswordAuthenticationViewController;	// IMP=0x0000000000028145
- (void)performAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027eb3
- (id)initWithAppName:(id)arg1 teamIdentifier:(id)arg2 bundleIdentifier:(id)arg3 authorizationRequest:(id)arg4;	// IMP=0x0000000000027ca6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
