//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/_UIClickPresentationInteractionDelegate-Protocol.h>

@class CCUIContentModuleDetailTransitioningDelegate, NSString, UIPresentationController, UIView, UIViewController, _UIClickPresentationInteraction;
@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate>
{
    _UIClickPresentationInteraction *_clickPresentationInteraction;	// 8 = 0x8
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;	// 16 = 0x10
    UIPresentationController *_presentationController;	// 24 = 0x18
    _Bool _authenticated;	// 32 = 0x20
    struct {
        unsigned int delegateProvidesPresentedViewController:1;
        unsigned int delegateImplementsInteractionShouldBegin:1;
        unsigned int delegateRequiresAuthentication:1;
        unsigned int delegateImplementsInteractionEnded:1;
    } _delegateFlags;	// 36 = 0x24
    UIViewController *_presentingViewController;	// 40 = 0x28
    id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> _delegate;	// 48 = 0x30
    UIView *_viewForInteraction;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002136a
@property(retain, nonatomic) UIView *viewForInteraction; // @synthesize viewForInteraction=_viewForInteraction;
@property(readonly, nonatomic) __weak id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;	// IMP=0x0000000000021335
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000000212fe
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x0000000000021286
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;	// IMP=0x0000000000020ef3
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;	// IMP=0x0000000000020d85
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;	// IMP=0x0000000000020d40
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000020bf3
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000020b25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
