//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthenticationServices/_ASExtensionHostContextDelegate-Protocol.h>

@class NSExtension, NSExtensionContext, NSString, NSTimer;
@protocol _ASExtensionHostContext;

@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate>
{
    UIViewController *_remoteViewController;	// 8 = 0x8
    NSExtensionContext<_ASExtensionHostContext> *_nonUIHostContext;	// 16 = 0x10
    NSTimer *_nonUIRequestTimer;	// 24 = 0x18
    _Bool _allowRequestingUIFromNonUIRequest;	// 32 = 0x20
    _Bool _dismissOnBackground;	// 33 = 0x21
    NSExtension *_extension;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002a838
@property(readonly, nonatomic) NSExtensionContext *nonUIHostContext; // @synthesize nonUIHostContext=_nonUIHostContext;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) _Bool dismissOnBackground; // @synthesize dismissOnBackground=_dismissOnBackground;
- (id)childViewControllerForWhitePointAdaptivityStyle;	// IMP=0x000000000002a7f1
- (id)childViewControllerForStatusBarStyle;	// IMP=0x000000000002a7dc
- (id)childViewControllerForStatusBarHidden;	// IMP=0x000000000002a7c7
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;	// IMP=0x000000000002a7b2
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x000000000002a79d
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a578
- (void)_nonUIRequestTimedOut;	// IMP=0x000000000002a49c
- (void)_invalidateNonUIRequestTimerIfNeeded;	// IMP=0x000000000002a459
- (void)_nonUIRequestDidRequireUserInteraction;	// IMP=0x000000000002a453
- (_Bool)_shouldUseNonUIRequestTimer;	// IMP=0x000000000002a44b
- (void)_beginNonUIRequest:(_Bool)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a09a
- (void)_beginRequestWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029ce0
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029cda
- (void)_setRemoteViewController:(id)arg1;	// IMP=0x0000000000029874
- (void)_extensionRequestDidFinish:(_Bool)arg1;	// IMP=0x000000000002974c
- (id)initWithExtension:(id)arg1;	// IMP=0x00000000000296b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

