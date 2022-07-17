//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/PPLPeopleEntityViewControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBHModalInteraction-Protocol.h>
#import <SpringBoardHome/SBHPeopleWidgetPersonDetailAnimationContext-Protocol.h>
#import <SpringBoardHome/SBHViewControllerTransitionDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>

@class MTMaterialView, NSString, PPLPeopleEntityViewController, SBHPeopleWidgetPersonDetailInteractionContext, SBHPeopleWidgetPersonDetailInteractionSettings, SBHViewControllerTransition, SBIconView, UIView;
@protocol SBHModalInteractionDelegate;

@interface SBHPeopleWidgetPersonDetailInteraction : NSObject <SBHViewControllerTransitionDelegate, SBHPeopleWidgetPersonDetailAnimationContext, SBIconViewObserver, PPLPeopleEntityViewControllerDelegate, SBHModalInteraction>
{
    id <SBHModalInteractionDelegate> modalInteractionDelegate;	// 8 = 0x8
    SBHPeopleWidgetPersonDetailInteractionContext *_interactionContext;	// 16 = 0x10
    SBHPeopleWidgetPersonDetailInteractionSettings *_settings;	// 24 = 0x18
    PPLPeopleEntityViewController *_personViewController;	// 32 = 0x20
    UIView *_targetView;	// 40 = 0x28
    double _sourceContentCornerRadius;	// 48 = 0x30
    UIView *_platterView;	// 56 = 0x38
    MTMaterialView *_backgroundView;	// 64 = 0x40
    UIView *_backgroundTintView;	// 72 = 0x48
    UIView *_touchBlockingView;	// 80 = 0x50
    SBHViewControllerTransition *_transition;	// 88 = 0x58
    struct CGRect _sourceContentFrame;	// 96 = 0x60
    struct CGRect _targetContentFrame;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000225720
@property(retain, nonatomic) SBHViewControllerTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIView *touchBlockingView; // @synthesize touchBlockingView=_touchBlockingView;
@property(retain, nonatomic) UIView *backgroundTintView; // @synthesize backgroundTintView=_backgroundTintView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) struct CGRect targetContentFrame; // @synthesize targetContentFrame=_targetContentFrame;
@property(nonatomic) double sourceContentCornerRadius; // @synthesize sourceContentCornerRadius=_sourceContentCornerRadius;
@property(nonatomic) struct CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) PPLPeopleEntityViewController *personViewController; // @synthesize personViewController=_personViewController;
@property(readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings; // @synthesize settings=_settings;
@property(readonly, copy, nonatomic) SBHPeopleWidgetPersonDetailInteractionContext *interactionContext; // @synthesize interactionContext=_interactionContext;
@property(nonatomic) __weak id <SBHModalInteractionDelegate> modalInteractionDelegate; // @synthesize modalInteractionDelegate;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)arg1;	// IMP=0x00000000002254e8
- (struct CGRect)_targetContentFrame;	// IMP=0x00000000002250fe
- (struct CGRect)_sourceContentFrame;	// IMP=0x0000000000225032
- (void)_handleTapToDismiss:(id)arg1;	// IMP=0x0000000000224f8f
- (void)peopleEntityViewControllerDidRequestDismissal:(id)arg1;	// IMP=0x0000000000224ea2
- (void)iconViewWasDiscarded:(id)arg1;	// IMP=0x0000000000224e8e
- (void)iconViewDidBecomeWindowless:(id)arg1;	// IMP=0x0000000000224e7a
- (void)iconViewWasRecycled:(id)arg1;	// IMP=0x0000000000224e66
- (void)transitionDidReturnToBeginningState:(id)arg1;	// IMP=0x0000000000224b3d
- (void)transitionWillReturnToBeginningState:(id)arg1;	// IMP=0x0000000000224a26
- (void)transitionDidProgressToEndState:(id)arg1;	// IMP=0x000000000022494b
- (void)transitionWillProgressToEndState:(id)arg1;	// IMP=0x0000000000224837
- (id)animatorForTransition:(id)arg1;	// IMP=0x0000000000224809
- (void)prepareTransition:(id)arg1;	// IMP=0x0000000000223f52
- (void)endInteractionAnimated:(_Bool)arg1;	// IMP=0x0000000000223f06
- (void)beginInteractionAnimated:(_Bool)arg1;	// IMP=0x0000000000223eba
@property(readonly, nonatomic) struct CGRect homeScreenContentFrame;
@property(readonly, nonatomic) UIView *homeScreenContentView;
@property(readonly, nonatomic) double targetContentCornerRadius;
@property(readonly, nonatomic) SBIconView *referenceView;
@property(readonly, nonatomic) SBIconView *sourceView;
@property(readonly, nonatomic) UIView *containerView;
- (id)initWithInteractionContext:(id)arg1;	// IMP=0x0000000000223b5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
