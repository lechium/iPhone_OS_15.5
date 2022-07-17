//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAlertControllerDelegate-Protocol.h>
#import <ChatKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CKPresentationControllerWindow, NSString, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>
{
    UIViewController *_presentedViewController;	// 8 = 0x8
    UIPopoverPresentationController *_currentPresentationController;	// 16 = 0x10
    CKPresentationControllerWindow *_presentationWindow;	// 24 = 0x18
    CDUnknownBlockType _presentationHandler;	// 32 = 0x20
    CDUnknownBlockType _dismissalHandler;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000024790b
- (void).cxx_destruct;	// IMP=0x0000000000248434
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(copy, nonatomic) CDUnknownBlockType presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) CKPresentationControllerWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIPopoverPresentationController *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void)_cleanup;	// IMP=0x0000000000248316
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000248147
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(CDUnknownBlockType)arg3 barButtonItemPresentationHandler:(CDUnknownBlockType)arg4 dismissalHandler:(CDUnknownBlockType)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000247aca
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(CDUnknownBlockType)arg3 dismissalHandler:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000247a9b
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 barButtonItemPresentationHandler:(CDUnknownBlockType)arg3 dismissalHandler:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000247a69
- (void)alertControllerViewDidDisappear:(id)arg1;	// IMP=0x0000000000247a57
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000002479e3
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x00000000002479c7
- (void)dealloc;	// IMP=0x0000000000247960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
