//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContainer-Protocol.h>
#import <ControlCenterUI/CCUISafeAppearancePropagationProvider-Protocol.h>
#import <ControlCenterUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ControlCenterUI/UIPointerInteractionDelegate-Protocol.h>
#import <ControlCenterUI/_UIClickPresentationInteractionDelegate-Protocol.h>

@class CCUIContentModuleBackgroundView, CCUIContentModuleContainerPresentationController, CCUIContentModuleContentContainerView, NSArray, NSString, UITapGestureRecognizer, UIView, _UIClickPresentationInteraction;
@protocol CCUIContentModule, CCUIContentModuleBackgroundViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModuleContentViewController;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate>
{
    _Bool _expanded;	// 8 = 0x8
    _Bool _contentModuleProvidesOwnPlatter;	// 9 = 0x9
    _Bool _transitioning;	// 10 = 0xa
    NSString *_moduleIdentifier;	// 16 = 0x10
    UIViewController<CCUIContentModuleContentViewController> *_contentViewController;	// 24 = 0x18
    id <CCUIContentModuleContainerViewControllerDelegate> _delegate;	// 32 = 0x20
    NSString *_materialGroupName;	// 40 = 0x28
    NSArray *_topLevelBlockingGestureRecognizers;	// 48 = 0x30
    id <CCUIContentModule> _contentModule;	// 56 = 0x38
    UIViewController<CCUIContentModuleBackgroundViewController> *_backgroundViewController;	// 64 = 0x40
    CCUIContentModuleContainerPresentationController *_presentationController;	// 72 = 0x48
    UIView *_highlightWrapperView;	// 80 = 0x50
    CCUIContentModuleBackgroundView *_backgroundView;	// 88 = 0x58
    CCUIContentModuleContentContainerView *_contentContainerView;	// 96 = 0x60
    UIView *_contentView;	// 104 = 0x68
    UIView *_maskView;	// 112 = 0x70
    UITapGestureRecognizer *_tapRecognizer;	// 120 = 0x78
    _UIClickPresentationInteraction *_clickPresentationInteraction;	// 128 = 0x80
    UITapGestureRecognizer *_expandModuleOnTouchTapRecognizer;	// 136 = 0x88
    struct UIEdgeInsets _expandedContentEdgeInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000306dc
@property(retain, nonatomic) UITapGestureRecognizer *expandModuleOnTouchTapRecognizer; // @synthesize expandModuleOnTouchTapRecognizer=_expandModuleOnTouchTapRecognizer;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction; // @synthesize clickPresentationInteraction=_clickPresentationInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *highlightWrapperView; // @synthesize highlightWrapperView=_highlightWrapperView;
@property(nonatomic) _Bool contentModuleProvidesOwnPlatter; // @synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter;
@property(retain, nonatomic) CCUIContentModuleContainerPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController; // @synthesize backgroundViewController=_backgroundViewController;
@property(retain, nonatomic) id <CCUIContentModule> contentModule; // @synthesize contentModule=_contentModule;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers; // @synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *materialGroupName; // @synthesize materialGroupName=_materialGroupName;
@property(nonatomic) __weak id <CCUIContentModuleContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) struct UIEdgeInsets expandedContentEdgeInsets; // @synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets;
@property(copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(_Bool)arg2;	// IMP=0x00000000000303b0
- (void)_configureForContentModuleGroupRenderingIfNecessary;	// IMP=0x000000000003034f
- (void)_configureMaskViewIfNecessary;	// IMP=0x0000000000030277
- (struct CGRect)_contentBoundsForTransitionProgress:(double)arg1;	// IMP=0x00000000000301e3
- (struct CGRect)_presentationFrameForExpandedState;	// IMP=0x000000000002fd09
- (struct CGRect)_containerFrameForExpandedState;	// IMP=0x000000000002fc00
- (struct CGRect)_backgroundFrameForExpandedState;	// IMP=0x000000000002fb76
- (struct CGRect)_backgroundFrameForRestState;	// IMP=0x000000000002fb57
- (struct CGRect)_contentFrameForExpandedState;	// IMP=0x000000000002fad4
- (double)_continuousCornerRadiusForExpandedState;	// IMP=0x000000000002fa83
- (double)_continuousCornerRadiusForCompactState;	// IMP=0x000000000002fa79
- (struct CGRect)_contentBoundsForExpandedState;	// IMP=0x000000000002f8ef
- (struct CGRect)_contentFrameForRestState;	// IMP=0x000000000002f88e
- (void)_setDidExpandModulePreference;	// IMP=0x000000000002f81e
- (void)_handleExpandModuleForTapGestureRecognizer:(id)arg1;	// IMP=0x000000000002f7c1
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x000000000002f701
- (_Bool)_isForceTouchAvailable;	// IMP=0x000000000002f687
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000002f5f3
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000002f4a2
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000002f3af
- (void)willDismissViewController:(id)arg1;	// IMP=0x000000000002f33a
- (void)willPresentViewController:(id)arg1;	// IMP=0x000000000002f2c5
- (_Bool)definesContentModuleContainer;	// IMP=0x000000000002f2bd
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;	// IMP=0x000000000002f2b2
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;	// IMP=0x000000000002ef14
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000002eeab
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x000000000002ee3f
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;	// IMP=0x000000000002ecbb
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;	// IMP=0x000000000002ebdf
- (_Bool)ccui_shouldPropagateAppearanceCalls;	// IMP=0x000000000002ebd7
- (void)viewWillLayoutSubviews;	// IMP=0x000000000002e9ba
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2;	// IMP=0x000000000002e7ed
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;	// IMP=0x000000000002e762
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000002e75a
- (void)loadView;	// IMP=0x000000000002e25a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002e184
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002e155
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002e114
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000000002e10c
- (void)willResignActive;	// IMP=0x000000000002e0a8
- (void)willBecomeActive;	// IMP=0x000000000002e044
- (void)displayWillTurnOff;	// IMP=0x000000000002dfe5
@property(readonly, nonatomic) CCUIContentModuleContentContainerView *moduleContentView;
- (void)_closeExpandedModule:(_Bool)arg1;	// IMP=0x000000000002df3d
- (void)dismissModulePresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002de32
- (void)dismissPresentedContentAnimated:(_Bool)arg1;	// IMP=0x000000000002ddc0
- (void)dismissExpandedModuleAnimated:(_Bool)arg1;	// IMP=0x000000000002dd54
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000002dc5d
- (void)expandModule;	// IMP=0x000000000002db95
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002db6a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002db3f
- (id)init;	// IMP=0x000000000002db14
- (void)transitionToExpandedMode:(_Bool)arg1;	// IMP=0x000000000002d7db
- (void)_loadBackgroundViewController:(id)arg1;	// IMP=0x000000000002d712
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d6b7
- (void)_loadContentViewController:(id)arg1;	// IMP=0x000000000002d57a
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3;	// IMP=0x000000000002d423

// Remaining properties
@property(readonly, nonatomic) NSArray *childViewControllersForAppearancePropagation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
