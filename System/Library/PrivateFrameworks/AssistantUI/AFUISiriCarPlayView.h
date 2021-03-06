//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AssistantUI/AFUISiriCarPlayBackgroundViewDelegate-Protocol.h>
#import <AssistantUI/AFUISiriContent-Protocol.h>
#import <AssistantUI/SUICOrbViewControlling-Protocol.h>

@class AFUISiriCarPlayBackgroundView, CRSUIStatusBarStyleAssertion, NSString, SUICOrbView;
@protocol AFUISiriContentDelegate;

@interface AFUISiriCarPlayView : UIView <AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling>
{
    long long _siriSessionState;	// 8 = 0x8
    id <AFUISiriContentDelegate> _siriContentDelegate;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    AFUISiriCarPlayBackgroundView *_backgroundView;	// 32 = 0x20
    UIView *_remoteContentView;	// 40 = 0x28
    SUICOrbView *_orbView;	// 48 = 0x30
    UIView *_orbContainerView;	// 56 = 0x38
    CRSUIStatusBarStyleAssertion *_statusBarStyleAssertion;	// 64 = 0x40
    UIView *_siriXIndicatorView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004acaa
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property(retain, nonatomic) UIView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
- (void)setContentViewsAlpha:(double)arg1;	// IMP=0x000000000004ac49
- (void)animateOrbViewToOffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ac2c
- (void)setOutputPowerLevel:(float)arg1;	// IMP=0x000000000004abcf
- (void)setInputPowerLevel:(float)arg1;	// IMP=0x000000000004ab72
- (void)_setupContentViews;	// IMP=0x0000000000049e7b
- (void)backgroundView:(id)arg1 requestsCarPlayStatusBarOverride:(_Bool)arg2 animationSettings:(id)arg3;	// IMP=0x0000000000049cfe
- (void)_orbHeldWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000049ba7
- (void)_orbTappedWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000049a44
- (void)setRequestHandlingStatus:(unsigned long long)arg1;	// IMP=0x00000000000499ff
- (void)setSiriContentDelegate:(id)arg1;	// IMP=0x00000000000499a8
- (void)setAuxiliaryViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000497e3
- (void)updateOrbViewState;	// IMP=0x00000000000497a8
- (void)resetOrbViewToSiriSessionState;	// IMP=0x0000000000049757
- (id)siriXIndicatorView;	// IMP=0x00000000000493c9
- (struct CGRect)orbViewRectInCarplayView;	// IMP=0x0000000000049337
- (void)updateBackgroundVisibility:(_Bool)arg1;	// IMP=0x000000000004931a
- (void)updateBackgroundViewMode:(long long)arg1;	// IMP=0x00000000000492fd
- (void)dealloc;	// IMP=0x0000000000049294
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000491ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

