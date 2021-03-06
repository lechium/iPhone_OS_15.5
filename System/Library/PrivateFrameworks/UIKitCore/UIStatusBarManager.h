//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, UIScene, UIWindowScene;

@interface UIStatusBarManager : NSObject <_UISceneComponentProviding>
{
    _Bool _overriddingStatusBarHidden;	// 8 = 0x8
    _Bool _statusBarHidden;	// 9 = 0x9
    _Bool _inStatusBarFadeAnimation;	// 10 = 0xa
    long long _statusBarStyle;	// 16 = 0x10
    UIWindowScene *_windowScene;	// 24 = 0x18
    NSMutableSet *_localStatusBars;	// 32 = 0x20
    NSDictionary *_statusBarPartStyles;	// 40 = 0x28
    double _statusBarAlpha;	// 48 = 0x30
    CDUnknownBlockType _debugMenuHandler;	// 56 = 0x38
}

+ (id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1;	// IMP=0x000000000025e9c8
- (void).cxx_destruct;	// IMP=0x000000000025f829
@property(copy, nonatomic) CDUnknownBlockType debugMenuHandler; // @synthesize debugMenuHandler=_debugMenuHandler;
@property(readonly, nonatomic) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(readonly, nonatomic, getter=isInStatusBarFadeAnimation) _Bool inStatusBarFadeAnimation; // @synthesize inStatusBarFadeAnimation=_inStatusBarFadeAnimation;
@property(readonly, nonatomic) NSDictionary *statusBarPartStyles; // @synthesize statusBarPartStyles=_statusBarPartStyles;
@property(retain, nonatomic) NSMutableSet *localStatusBars; // @synthesize localStatusBars=_localStatusBars;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic, getter=_isOverridingStatusBarHidden, setter=_setOverridingStatusBarHidden:) _Bool _overriddingStatusBarHidden; // @synthesize _overriddingStatusBarHidden;
- (_Bool)statusBarHidden;	// IMP=0x000000000025f78e
- (void)_handleScrollToTopAtXPosition:(double)arg1;	// IMP=0x000000000025f654
- (struct CGPoint)_adjustedLocationForXPosition:(double)arg1;	// IMP=0x000000000025f498
- (void)handleTapAction:(id)arg1;	// IMP=0x000000000025f422
- (void)updateLocalStatusBars;	// IMP=0x000000000025f2f4
- (void)_updateLocalStatusBar:(id)arg1;	// IMP=0x000000000025f17d
- (id)createLocalStatusBar;	// IMP=0x000000000025f116
- (void)deactivateLocalStatusBar:(id)arg1;	// IMP=0x000000000025f0b5
- (void)activateLocalStatusBar:(id)arg1;	// IMP=0x000000000025eff7
- (void)setupForSingleLocalStatusBar;	// IMP=0x000000000025ee2c
- (_Bool)_updateAlpha;	// IMP=0x000000000025edb4
- (_Bool)_updateStyleForWindow:(id)arg1 animationParameters:(id *)arg2;	// IMP=0x000000000025ebca
- (_Bool)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id *)arg3;	// IMP=0x000000000025eaa1
- (void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3;	// IMP=0x000000000025e450
- (CDUnknownBlockType)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3;	// IMP=0x000000000025da04
- (CDUnknownBlockType)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2;	// IMP=0x000000000025d91e
- (void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1;	// IMP=0x000000000025d8fc
- (void)updateStatusBarAppearance;	// IMP=0x000000000025d8e8
- (double)defaultStatusBarHeightInOrientation:(long long)arg1;	// IMP=0x000000000025d817
@property(readonly, nonatomic) double defaultStatusBarHeight;
@property(readonly, nonatomic) double statusBarHeight;
@property(readonly, nonatomic) struct CGRect _statusBarFrameIgnoringVisibility;
@property(readonly, nonatomic) struct CGRect statusBarFrame;
- (struct CGRect)statusBarFrameForStatusBarHeight:(double)arg1;	// IMP=0x000000000025d627
- (struct CGRect)statusBarFrameForStatusBarHeight:(double)arg1 inOrientation:(long long)arg2;	// IMP=0x000000000025d5d6
- (id)_settingsDiffActionsForScene:(id)arg1;	// IMP=0x000000000025d555
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (void)_setOverridingStatusBarHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x000000000025d463
- (id)initWithScene:(id)arg1;	// IMP=0x000000000025d32a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

