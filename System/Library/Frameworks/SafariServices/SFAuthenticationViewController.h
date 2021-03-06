//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIWindow, _UIFallbackPresentationViewController;
@protocol SFAuthenticationViewControllerPresentationDelegate;

__attribute__((visibility("hidden")))
@interface SFAuthenticationViewController <UIViewControllerTransitioningDelegate>
{
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;	// 8 = 0x8
    NSString *_callbackURLScheme;	// 16 = 0x10
    UIWindow *_presentationContextWindow;	// 24 = 0x18
    id <SFAuthenticationViewControllerPresentationDelegate> _presentationDelegate;	// 32 = 0x20
    CDUnknownBlockType _dismissCompletionHandler;	// 40 = 0x28
}

+ (_Bool)_supportsPrewarming;	// IMP=0x00000000000727ab
- (void).cxx_destruct;	// IMP=0x0000000000072976
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(nonatomic) __weak id <SFAuthenticationViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(_Bool)arg3;	// IMP=0x000000000007282d
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;	// IMP=0x00000000000727b3
- (void)_restartServiceViewController;	// IMP=0x00000000000726cb
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000725c2
- (void)_presentViewController;	// IMP=0x000000000007241f
- (void)setDefersAddingRemoteViewController:(_Bool)arg1;	// IMP=0x000000000007235d
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 presentationContextWindow:(id)arg4;	// IMP=0x0000000000072184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

