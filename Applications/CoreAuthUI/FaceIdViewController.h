//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FaceIdAlertViewController, FaceIdToastViewController, LAUIHorizontalArrowView, LAUIPearlGlyphView, LAUIPhysicalButtonView, ScreenDimmingView, UIColor;

@interface FaceIdViewController
{
    _Bool _dismissed;	// 8 = 0x8
    _Bool _fallbackVisible;	// 9 = 0x9
    _Bool _showFallback;	// 10 = 0xa
    _Bool _silentFallback;	// 11 = 0xb
    long long _hwIssueEvent;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    LAUIPhysicalButtonView *_physicalButtonView;	// 32 = 0x20
    long long _coachingFeedback;	// 40 = 0x28
    LAUIHorizontalArrowView *_horizontalArrowView;	// 48 = 0x30
    double _animationStart;	// 56 = 0x38
    long long _pearlUIState;	// 64 = 0x40
    FaceIdToastViewController *_toastController;	// 72 = 0x48
    LAUIPearlGlyphView *_glyphView;	// 80 = 0x50
    FaceIdAlertViewController *_alertController;	// 88 = 0x58
    ScreenDimmingView *_dimmingView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000065c8
@property(retain, nonatomic) ScreenDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) FaceIdAlertViewController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) LAUIPearlGlyphView *glyphView; // @synthesize glyphView=_glyphView;
@property(retain, nonatomic) FaceIdToastViewController *toastController; // @synthesize toastController=_toastController;
@property(nonatomic) long long pearlUIState; // @synthesize pearlUIState=_pearlUIState;
- (void)_updatePearlViews;	// IMP=0x0010000000006396
- (void)_setGlyphState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006218
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005f05
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005eb9
- (void)_destroyViewControllers;	// IMP=0x0010000000005d7b
- (id)_coachingTextForFeedback:(long long)arg1;	// IMP=0x0010000000005c73
- (void)_processCoachingFeedback:(long long)arg1;	// IMP=0x00100000000058a3
- (void)_dismissCoachingViews;	// IMP=0x001000000000583e
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000005634
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004f53
- (void)_shake;	// IMP=0x0010000000004ea0
- (void)_setActionButtons;	// IMP=0x0010000000003dae
- (void)_enterPassword;	// IMP=0x0010000000003d9c
- (void)_showFailAlert;	// IMP=0x00100000000035c4
- (void)_cancelIfPossible;	// IMP=0x00100000000034d1
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x001000000000342f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000003153
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000003112
- (void)loadView;	// IMP=0x00100000000028b8

@end
