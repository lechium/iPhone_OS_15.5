//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, SBWWallpaperViewController, UILabel, UIWindow, WPWallpaperSettings;
@protocol BSInvalidatable, SBFIrisWallpaperPlaying, SBWWallpaperScaleInvalidating;

@interface WPWallpaperSceneDelegate : UIResponder
{
    SBWWallpaperViewController *_wallpaperViewController;	// 8 = 0x8
    WPWallpaperSettings *_wallpaperSettings;	// 16 = 0x10
    UILabel *_orientationDebugLabel;	// 24 = 0x18
    id <BSInvalidatable> _colorSamplingSuspensionAssertion;	// 32 = 0x20
    id <BSInvalidatable> _wallpaperAnimationSuspensionAssertion;	// 40 = 0x28
    id <BSInvalidatable> _wallpaperRequiredAssertion;	// 48 = 0x30
    id <SBWWallpaperScaleInvalidating> _homescreenWallpaperScaleAssertion;	// 56 = 0x38
    id <SBFIrisWallpaperPlaying> _irisWallpaperPlayer;	// 64 = 0x40
    UIWindow *_window;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000004c73
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) id <SBFIrisWallpaperPlaying> irisWallpaperPlayer; // @synthesize irisWallpaperPlayer=_irisWallpaperPlayer;
- (void)_updateDebugColor;	// IMP=0x0010000000004b8a
- (id)_debugColorForWindowScene:(id)arg1;	// IMP=0x0010000000004b36
- (void)_prototypeSettingsChanged;	// IMP=0x0010000000004844
- (void)_wallpaperWindowScene:(id)arg1 didUpdateStyleTransitionStateForVariant:(long long)arg2 to:(id)arg3 from:(id)arg4;	// IMP=0x001000000000465b
- (void)_applySceneClientSettings;	// IMP=0x00100000000042c4
- (void)_applySceneSettings;	// IMP=0x0010000000003fa4
- (void)irisWallpaperPlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x0010000000003eec
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0010000000003eab
- (void)wallpaperPresenterDidCompleteWallpaperChange:(id)arg1;	// IMP=0x0010000000003e11
- (long long)wallpaperPresenter:(id)arg1 requestsOrientationWithRefresh:(_Bool)arg2;	// IMP=0x0010000000003e09
- (void)wallpaperPresenter:(id)arg1 didChangeWallpaperForLocations:(long long)arg2 withConfiguration:(id)arg3;	// IMP=0x0010000000003e03
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;	// IMP=0x0010000000003d25
- (void)wallpaperDidChangeForVariant:(long long)arg1;	// IMP=0x00100000000038fb
- (void)wallpaperWillChangeForVariant:(long long)arg1;	// IMP=0x0010000000003859
- (void)wallpaperWindowScene:(id)arg1 didReceiveUpdateRequestForLocations:(long long)arg2 wallpaperMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000037cd
- (void)wallpaperWindowSceneDidReceiveUpdateAndPrewarmRequest:(id)arg1;	// IMP=0x00100000000037b0
- (void)wallpaperWindowScene:(id)arg1 didReceivePreheatRequestForVariant:(long long)arg2;	// IMP=0x0010000000003790
- (void)wallpaperWindowScene:(id)arg1 requestsWallpaperEffectImageForVariant:(long long)arg2 style:(long long)arg3 traitCollection:(id)arg4 result:(CDUnknownBlockType)arg5;	// IMP=0x00100000000036b9
- (void)wallpaperWindowScene:(id)arg1 didUpdateLiveWallpaperInteractive:(_Bool)arg2;	// IMP=0x001000000000368a
- (void)wallpaperWindowScene:(id)arg1 didUpdateLiveWallpaperTouchActive:(_Bool)arg2;	// IMP=0x0010000000003656
- (void)wallpaperWindowScene:(id)arg1 didUpdateLockscreenStyleTransitionStateTo:(id)arg2 from:(id)arg3;	// IMP=0x001000000000363c
- (void)wallpaperWindowScene:(id)arg1 didUpdateHomescreenStyleTransitionStateTo:(id)arg2 from:(id)arg3;	// IMP=0x001000000000361f
- (void)wallpaperWindowScene:(id)arg1 didUpdateHomescreenStyleChangesDelayed:(_Bool)arg2;	// IMP=0x00100000000035e0
- (void)wallpaperWindowScene:(id)arg1 didUpdateWallpaperRequired:(_Bool)arg2;	// IMP=0x0010000000003559
- (void)wallpaperWindowScene:(id)arg1 didUpdateWallpaperAnimationSuspended:(_Bool)arg2;	// IMP=0x00100000000034d2
- (void)wallpaperWindowScene:(id)arg1 didUpdateColorSamplingSuspended:(_Bool)arg2;	// IMP=0x001000000000344b
- (void)wallpaperWindowScene:(id)arg1 didUpdateLockscreenWallpaperScale:(double)arg2;	// IMP=0x001000000000342e
- (void)wallpaperWindowScene:(id)arg1 didUpdateHomescreenWallpaperScale:(double)arg2;	// IMP=0x00100000000033cc
- (void)wallpaperWindowScene:(id)arg1 didUpdateHomescreenWallpaperHidden:(_Bool)arg2 lockscreenWallpaperHidden:(_Bool)arg3;	// IMP=0x0010000000003365
- (void)wallpaperWindowScene:(id)arg1 didUpdateRasterizationDisallowedForHomescreen:(_Bool)arg2 lockscreen:(_Bool)arg3;	// IMP=0x00100000000032fe
- (void)wallpaperWindowScene:(id)arg1 didUpdateLockscreenOnlyWallpaperAlpha:(double)arg2;	// IMP=0x00100000000032e1
- (void)wallpaperWindowScene:(id)arg1 didUpdateHomescreenWallpaperAlpha:(double)arg2;	// IMP=0x00100000000032bf
- (void)wallpaperWindowScene:(id)arg1 didUpdateLockscreenWallpaperAlpha:(double)arg2;	// IMP=0x00100000000032a0
- (void)wallpaperWindowScene:(id)arg1 didUpdateLockscreenWallpaperContentsRect:(struct CGRect)arg2;	// IMP=0x0010000000003283
- (void)wallpaperWindowScene:(id)arg1 didUpdateVariant:(long long)arg2 inAnimationSettings:(id)arg3 outAnimationSettings:(id)arg4;	// IMP=0x00100000000031b5
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000000031af
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000000031a9
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x00100000000031a3
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000000319d
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000003197
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002f61
- (void)dealloc;	// IMP=0x0010000000002ed6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
