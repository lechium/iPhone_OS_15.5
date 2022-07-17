//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardWallpaper/BSDescriptionProviding-Protocol.h>
#import <SpringBoardWallpaper/FBSceneDelegate-Protocol.h>
#import <SpringBoardWallpaper/FBSceneLayerManagerObserver-Protocol.h>
#import <SpringBoardWallpaper/SBFWallpaperConfigurationManagerDelegate-Protocol.h>
#import <SpringBoardWallpaper/SBFWallpaperViewDelegate-Protocol.h>
#import <SpringBoardWallpaper/SBWRemoteIrisWallpaperPlayerDelegate-Protocol.h>
#import <SpringBoardWallpaper/SBWWallpaperLegibilityProviding-Protocol.h>
#import <SpringBoardWallpaper/SBWWallpaperPresenting-Protocol.h>
#import <SpringBoardWallpaper/_SBWFakeBlurImageProviding-Protocol.h>
#import <SpringBoardWallpaper/_SBWFakeBlurViewRegistering-Protocol.h>

@class BSEventQueue, FBScene, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, SBFWallpaperConfigurationManager, SBWRemoteIrisWallpaperPlayer, SBWWallpaperStaticBackgroundView, UIView;
@protocol BSInvalidatable, SBFIrisWallpaperPlaying, SBWSessionReconnectPolicy, SBWWallpaperPresentingDelegate, SBWallpaperReachabilityCoordinating, UIScenePresentation, UIScenePresenter;

@interface SBWWallpaperRemoteViewController : UIViewController <BSDescriptionProviding, FBSceneDelegate, FBSceneLayerManagerObserver, SBFWallpaperConfigurationManagerDelegate, SBFWallpaperViewDelegate, _SBWFakeBlurImageProviding, _SBWFakeBlurViewRegistering, SBWRemoteIrisWallpaperPlayerDelegate, SBWWallpaperPresenting, SBWWallpaperLegibilityProviding>
{
    FBScene *_scene;	// 8 = 0x8
    id <UIScenePresenter> _scenePresenter;	// 16 = 0x10
    id <SBWSessionReconnectPolicy> _reconnectPolicy;	// 24 = 0x18
    NSHashTable *_lockscreenObservers;	// 32 = 0x20
    NSHashTable *_homescreenObservers;	// 40 = 0x28
    NSHashTable *_lockscreenBlurViews;	// 48 = 0x30
    NSHashTable *_homescreenBlurViews;	// 56 = 0x38
    NSMutableDictionary *_fakeBlurCache;	// 64 = 0x40
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;	// 72 = 0x48
    NSMutableSet *_disallowRasterizationReasonsLockVariant;	// 80 = 0x50
    NSMutableSet *_hideWallpaperReasonsHomeVariant;	// 88 = 0x58
    NSMutableSet *_hideWallpaperReasonsLockVariant;	// 96 = 0x60
    NSMutableSet *_colorSamplingSuspendedReasons;	// 104 = 0x68
    NSMutableSet *_wallpaperAnimationSuspendedReasons;	// 112 = 0x70
    NSMutableSet *_wallpaperRequiredReasons;	// 120 = 0x78
    NSMutableSet *_homescreenChangesDelayedReasons;	// 128 = 0x80
    NSHashTable *_homescreenScaleAssertions;	// 136 = 0x88
    NSHashTable *_liveModeAssertions;	// 144 = 0x90
    NSHashTable *_sceneModeAssertions;	// 152 = 0x98
    NSMutableSet *_externalSceneModeAssertionActions;	// 160 = 0xa0
    id <BSInvalidatable> _sceneModeAssertionForViewMode;	// 168 = 0xa8
    NSTimer *_sceneDeactivationTimer;	// 176 = 0xb0
    UIView<UIScenePresentation> *_scenePresentationView;	// 184 = 0xb8
    SBWWallpaperStaticBackgroundView *_staticBackgroundView;	// 192 = 0xc0
    _Bool _missingEffectViewImages;	// 200 = 0xc8
    NSMutableSet *_pendingEffectViewImageSlots;	// 208 = 0xd0
    BSEventQueue *_eventQueue;	// 216 = 0xd8
    SBWRemoteIrisWallpaperPlayer *_remoteIrisWallpaperPlayer;	// 224 = 0xe0
    NSMutableSet *_stateCaptureHandles;	// 232 = 0xe8
    NSString *_cachingIdentifier;	// 240 = 0xf0
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;	// 248 = 0xf8
    id <SBWallpaperReachabilityCoordinating> _reachabilityCoordinator;	// 256 = 0x100
    id <SBWWallpaperPresentingDelegate> _wallpaperPresentingDelegate;	// 264 = 0x108
    long long _variant;	// 272 = 0x110
    long long _viewMode;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000000001ea7e
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(nonatomic) __weak id <SBWWallpaperPresentingDelegate> wallpaperPresentingDelegate; // @synthesize wallpaperPresentingDelegate=_wallpaperPresentingDelegate;
@property(retain, nonatomic) id <SBWallpaperReachabilityCoordinating> reachabilityCoordinator; // @synthesize reachabilityCoordinator=_reachabilityCoordinator;
@property(retain, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // @synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager;
@property(copy, nonatomic) NSString *cachingIdentifier; // @synthesize cachingIdentifier=_cachingIdentifier;
- (void)_addStateCaptureHandlers;	// IMP=0x000000000001e21a
- (void)_setSceneModeAssertionForViewMode:(id)arg1;	// IMP=0x000000000001dae6
- (id)_acquireLiveModeAssertionForReason:(id)arg1;	// IMP=0x000000000001d927
- (void)_updateViewMode;	// IMP=0x000000000001d63f
- (id)_acquireSceneModeAssertionForReason:(id)arg1 sceneMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d458
- (id)_acquireSceneModeAssertionForReason:(id)arg1 sceneMode:(long long)arg2;	// IMP=0x000000000001d443
- (void)_updateSceneModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d1a3
- (void)_updateSceneMode;	// IMP=0x000000000001d18f
- (void)_cancelSceneDeactivation;	// IMP=0x000000000001d157
- (void)_scheduleSceneDeactivation;	// IMP=0x000000000001cfb8
- (void)_modifySceneSettings:(id)arg1 forSceneMode:(long long)arg2;	// IMP=0x000000000001ce77
- (long long)_effectiveSceneMode;	// IMP=0x000000000001cd38
- (id)_blurImageFromURL:(id)arg1;	// IMP=0x000000000001cb67
- (void)_invalidateBlurCacheForVariant:(long long)arg1;	// IMP=0x000000000001ca14
- (id)_cachedBlurAssetForVariant:(long long)arg1 requestedStyle:(long long)arg2 traitCollection:(id)arg3;	// IMP=0x000000000001c8fa
- (void)_cacheBlurImageForVariant:(long long)arg1 requestedStyle:(long long)arg2 actualStyle:(long long)arg3 traitCollection:(id)arg4 image:(id)arg5 imageURL:(id)arg6;	// IMP=0x000000000001c60c
- (void)_updateBlurViewsForVariant:(long long)arg1;	// IMP=0x000000000001c4c2
- (void)_reconfigureBlurViewsForVariant:(long long)arg1;	// IMP=0x000000000001c395
- (id)_blurViewsForVariant:(long long)arg1;	// IMP=0x000000000001c359
- (void)_updateHomescreenWallpaperScaleWithAnimationSettings:(id)arg1;	// IMP=0x000000000001c093
- (double)_computeHomescreenWallpaperScale;	// IMP=0x000000000001beb9
- (id)_simpleAssertionWithReasonsSet:(id)arg1 identifier:(id)arg2 reason:(id)arg3 updater:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bac6
- (id)_hideWallpaperReasonsForVariant:(long long)arg1;	// IMP=0x000000000001ba8a
- (id)_disallowRasterizationReasonsForVariant:(long long)arg1;	// IMP=0x000000000001ba4e
- (id)_observersForVariant:(long long)arg1;	// IMP=0x000000000001ba12
- (void)_notifyAllObserversOfNewWallpaperScene;	// IMP=0x000000000001b611
- (void)_updateFallbackView;	// IMP=0x000000000001b55d
- (id)_sceneClientSettings;	// IMP=0x000000000001b4fc
- (id)_sceneSettings;	// IMP=0x000000000001b49b
- (void)_setupSceneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7f1
- (void)_setupScene;	// IMP=0x000000000001a7dd
- (void)_updateWallpaperSceneSettingsWithBlock:(CDUnknownBlockType)arg1 postUpdateBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a594
- (void)_updateWallpaperSceneSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a580
- (void)_performWithLiveScene:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a3d2
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001a3b6
- (id)succinctDescription;	// IMP=0x000000000001a366
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000019952
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000019902
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000018dbb
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000018a4e
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x000000000001813b
- (void)remoteIrisWallpaperPlayer:(id)arg1 touchActiveChanged:(_Bool)arg2;	// IMP=0x0000000000018045
- (double)contrastInRect:(struct CGRect)arg1 forVariant:(long long)arg2;	// IMP=0x0000000000018033
- (double)contrastForVariant:(long long)arg1;	// IMP=0x0000000000017fc7
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;	// IMP=0x0000000000017fb5
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2;	// IMP=0x0000000000017fa3
- (id)averageColorForVariant:(long long)arg1;	// IMP=0x0000000000017f16
- (id)legibilitySettingsForVariant:(long long)arg1;	// IMP=0x0000000000017e8a
- (void)noteDidRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000017e84
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000017a85
- (void)updateWallpaperForLocations:(long long)arg1 wallpaperMode:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017631
- (void)updateWallpaperForLocations:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001761a
- (id)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;	// IMP=0x00000000000174a0
- (void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;	// IMP=0x0000000000017185
- (void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;	// IMP=0x000000000001708d
- (void)preheatWallpaperForVariant:(long long)arg1;	// IMP=0x0000000000016f47
- (id)beginRequiringWithReason:(id)arg1;	// IMP=0x0000000000016c8c
- (_Bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;	// IMP=0x00000000000167e2
- (_Bool)setWallpaperStyleTransitionState:(CDStruct_059c2b36)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;	// IMP=0x00000000000162d2
- (_Bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;	// IMP=0x000000000001624c
@property(readonly, nonatomic) CDStruct_059c2b36 currentHomescreenStyleTransitionState;
- (void)cancelInProcessAnimations;	// IMP=0x0000000000016150
- (_Bool)updateIrisWallpaperForStaticMode;	// IMP=0x0000000000015f67
- (void)updateIrisWallpaperForInteractiveMode;	// IMP=0x0000000000015dc4
@property(readonly, nonatomic) id <SBFIrisWallpaperPlaying> irisWallpaperPlayer;
- (id)suspendWallpaperAnimationForReason:(id)arg1;	// IMP=0x0000000000015a5a
- (id)suspendColorSamplingForReason:(id)arg1;	// IMP=0x000000000001579f
- (void)setWallpaperHidden:(_Bool)arg1 variant:(long long)arg2 reason:(id)arg3;	// IMP=0x0000000000015542
- (void)setDisallowsRasterization:(_Bool)arg1 forVariant:(long long)arg2 withReason:(id)arg3;	// IMP=0x00000000000152e5
@property(readonly, nonatomic) double minimumLockscreenWallpaperScale;
- (void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;	// IMP=0x0000000000014fd3
@property(nonatomic) double lockscreenWallpaperScale;
@property(readonly, nonatomic) double minimumHomescreenWallpaperScale;
- (id)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;	// IMP=0x0000000000014bac
@property(readonly, nonatomic) double homescreenWallpaperScale;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;	// IMP=0x0000000000014a5e
- (void)setLockscreenWallpaperContentsRect:(struct CGRect)arg1;	// IMP=0x000000000001490f
- (void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2;	// IMP=0x00000000000147a5
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;	// IMP=0x000000000001472d
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;	// IMP=0x00000000000146b5
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014336
- (id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2;	// IMP=0x00000000000142b8
- (double)zoomFactorForVariant:(long long)arg1;	// IMP=0x0000000000014235
- (_Bool)parallaxEnabledForVariant:(long long)arg1;	// IMP=0x000000000001417f
- (double)parallaxFactorForVariant:(long long)arg1;	// IMP=0x00000000000140fc
- (id)imageForWallpaperStyle:(inout long long *)arg1 variant:(long long)arg2 traitCollection:(id)arg3;	// IMP=0x0000000000012d61
- (_Bool)updateImageProviderView:(id)arg1 withImage:(id)arg2;	// IMP=0x0000000000012c75
- (id)newImageProviderView;	// IMP=0x0000000000012c64
- (void)_unregisterFakeBlurView:(id)arg1;	// IMP=0x0000000000012bf7
- (void)_registerFakeBlurView:(id)arg1;	// IMP=0x0000000000012b92
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;	// IMP=0x00000000000126a5
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000001269a
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000012692
- (_Bool)shouldAutorotate;	// IMP=0x000000000001268a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000122ab
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000121d8
- (void)viewDidLoad;	// IMP=0x0000000000012175
- (void)acquireActiveWallpaperSceneAssertionWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011d2f
- (void)dealloc;	// IMP=0x0000000000011a6c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000116f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
