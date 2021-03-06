//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSAuthenticateTask.h>

#import <AppleMediaServicesUI/AMSAuthenticateTaskDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>
{
    UIViewController *_presentingViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a947
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)_createAuthKitUpdateTaskForAccount:(id)arg1;	// IMP=0x000000000000a7e8
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a5d8
- (id)performAuthentication;	// IMP=0x000000000000a305
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000000a1fb
- (id)initWithAuthenticationResults:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;	// IMP=0x000000000000a158
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;	// IMP=0x000000000000a058

// Remaining properties
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

