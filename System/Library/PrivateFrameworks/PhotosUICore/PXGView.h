//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXDebugHierarchyProvider-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGEngineDelegate-Protocol.h>
#import <PhotosUICore/PXGHitTestEnvironment-Protocol.h>
#import <PhotosUICore/PXGLayoutScrollDelegate-Protocol.h>
#import <PhotosUICore/PXGLayoutViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class MTKView, NSArray, NSDictionary, NSObject, NSString, PXGAXCoalescingResponder, PXGAnchor, PXGDebugHUDLayer, PXGEngine, PXGLayout, PXGMetalRenderer, PXGRectDiagnosticsLayer, PXGViewRenderer, PXScrollViewController, PXScrollViewSpeedometer, PXUpdater, UIColor;
@protocol PXAnonymousScrollView, PXGAXResponder, PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource;

@interface PXGView : UIView <PXDiagnosticsEnvironment, PXGEngineDelegate, PXScrollViewControllerObserver, PXGLayoutScrollDelegate, PXGLayoutViewDelegate, PXSettingsKeyObserver, UIGestureRecognizerDelegate, PXGAXResponder, PXGDiagnosticsProvider, PXDebugHierarchyProvider, PXTapToRadarDiagnosticProvider, PXGHitTestEnvironment>
{
    PXGDebugHUDLayer *_debugHUDLayer;	// 8 = 0x8
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;	// 16 = 0x10
    PXGAXCoalescingResponder *_coalescingAXResponder;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    _Bool _lowMemoryModeEnabled;	// 40 = 0x28
    _Bool _isScrolling;	// 41 = 0x29
    _Bool _isAnimatingScroll;	// 42 = 0x2a
    _Bool _isAccessibilityEnabled;	// 43 = 0x2b
    _Bool _isSceneBackgrounded;	// 44 = 0x2c
    _Bool _showDebugHUD;	// 45 = 0x2d
    _Bool _showPerspectiveDebug;	// 46 = 0x2e
    _Bool _shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea;	// 47 = 0x2f
    _Bool _shouldWorkaround18475431;	// 48 = 0x30
    _Bool _resizeDrawableManually;	// 49 = 0x31
    id <PXGAXResponder> axNextResponder;	// 56 = 0x38
    id <PXGViewAccessibilityDelegate> _accessibilityDelegate;	// 64 = 0x40
    PXScrollViewController *_scrollViewController;	// 72 = 0x48
    PXScrollViewSpeedometer *_scrollingSpeedometer;	// 80 = 0x50
    PXGMetalRenderer *_metalRenderer;	// 88 = 0x58
    PXGViewRenderer *_viewRenderer;	// 96 = 0x60
    MTKView *_metalView;	// 104 = 0x68
    PXUpdater *_updater;	// 112 = 0x70
    PXGAnchor *_scrollingAnimationAnchor;	// 120 = 0x78
    NSDictionary *_ppt_currentTestOptions;	// 128 = 0x80
    CDUnknownBlockType _nextDidLayoutHandler;	// 136 = 0x88
    id <PXGViewDiagnosticsSource> _diagnosticsSource;	// 144 = 0x90
    unsigned long long _offscreenEffectQuality;	// 152 = 0x98
    PXGEngine *_engine;	// 160 = 0xa0
    struct UIEdgeInsets _hitTestPadding;	// 168 = 0xa8
}

+ (id)allDescriptions;	// IMP=0x00000000008cea78
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;	// IMP=0x00000000008ce9c7
+ (id)debugHierarchyChildGroupingID;	// IMP=0x00000000008ce9a8
+ (void)enumerateAllViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000008ce933
+ (_Bool)forceAccessibilityEnabled;	// IMP=0x00000000008ce927
+ (void)setForceAccessibilityEnabled:(_Bool)arg1;	// IMP=0x00000000008ce88a
+ (unsigned long long)supportLevel;	// IMP=0x00000000008ce825
+ (long long)screenPixelCount;	// IMP=0x00000000008ce6d5
- (void).cxx_destruct;	// IMP=0x00000000008cc36b
@property(readonly, nonatomic) PXGEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) _Bool resizeDrawableManually; // @synthesize resizeDrawableManually=_resizeDrawableManually;
@property(nonatomic) _Bool shouldWorkaround18475431; // @synthesize shouldWorkaround18475431=_shouldWorkaround18475431;
@property(nonatomic) _Bool shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea; // @synthesize shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea=_shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea;
@property(nonatomic) unsigned long long offscreenEffectQuality; // @synthesize offscreenEffectQuality=_offscreenEffectQuality;
@property(retain, nonatomic) id <PXGViewDiagnosticsSource> diagnosticsSource; // @synthesize diagnosticsSource=_diagnosticsSource;
@property(nonatomic) _Bool showPerspectiveDebug; // @synthesize showPerspectiveDebug=_showPerspectiveDebug;
@property(nonatomic) _Bool showDebugHUD; // @synthesize showDebugHUD=_showDebugHUD;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestPadding; // @synthesize hitTestPadding=_hitTestPadding;
@property(nonatomic) _Bool isSceneBackgrounded; // @synthesize isSceneBackgrounded=_isSceneBackgrounded;
@property(nonatomic) _Bool isAccessibilityEnabled; // @synthesize isAccessibilityEnabled=_isAccessibilityEnabled;
@property(copy, nonatomic) CDUnknownBlockType nextDidLayoutHandler; // @synthesize nextDidLayoutHandler=_nextDidLayoutHandler;
@property(copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions; // @synthesize ppt_currentTestOptions=_ppt_currentTestOptions;
@property(retain, nonatomic) PXGAnchor *scrollingAnimationAnchor; // @synthesize scrollingAnimationAnchor=_scrollingAnimationAnchor;
@property(nonatomic) _Bool isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(readonly, nonatomic) PXGViewRenderer *viewRenderer; // @synthesize viewRenderer=_viewRenderer;
@property(readonly, nonatomic) PXGMetalRenderer *metalRenderer; // @synthesize metalRenderer=_metalRenderer;
@property(readonly, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // @synthesize scrollingSpeedometer=_scrollingSpeedometer;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) _Bool lowMemoryModeEnabled; // @synthesize lowMemoryModeEnabled=_lowMemoryModeEnabled;
@property(nonatomic) __weak id <PXGViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder;
- (void)forceFullUpdate;	// IMP=0x00000000008cc05a
- (void)forceUpdate;	// IMP=0x00000000008cbf0e
- (void)ensureUpdatedLayout;	// IMP=0x00000000008cbed1
- (id)viewForSpriteReference:(id)arg1;	// IMP=0x00000000008cbdd2
- (id)trackingContainerViewForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000008cbd73
- (id)viewForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000008cbd14
@property(readonly, nonatomic) NSDictionary *ppt_extraResults;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(_Bool)arg2;	// IMP=0x00000000008cb89e
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(_Bool)arg3;	// IMP=0x00000000008cb7c5
@property(readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_mainScrollView;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000008cb558
- (id)layout:(id)arg1 viewForSpriteIndex:(unsigned int)arg2;	// IMP=0x00000000008cb4cd
- (id)contentCoordinateSpaceForLayout:(id)arg1;	// IMP=0x00000000008cb42b
- (void)setNeedsUpdateOfScrollableAxisForLayout:(id)arg1;	// IMP=0x00000000008cb419
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008cb3a7
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x00000000008cb32e
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x00000000008cb29b
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x00000000008cb20d
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x00000000008cb1bd
- (void)enumerateDebugHierarchyWithIdentifier:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000008ca74e
@property(readonly, nonatomic) NSArray *debugHierarchyIdentifiers;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)_ensureEndAnimatedScroll;	// IMP=0x00000000008ca40b
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000008ca3f9
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;	// IMP=0x00000000008ca35c
- (void)scrollViewControllerDidEndScrolling:(id)arg1;	// IMP=0x00000000008ca32c
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x00000000008ca2f9
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x00000000008ca28c
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;	// IMP=0x00000000008ca203
@property(nonatomic) _Bool slowAnimationsEnabled;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;	// IMP=0x00000000008ca0e2
- (_Bool)engine:(id)arg1 shouldRenderLayout:(id)arg2 sprites:(id)arg3;	// IMP=0x00000000008ca0da
- (void)engineSetNeedsUpdate:(id)arg1;	// IMP=0x00000000008ca09a
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000008ca092
- (void)handlePan:(id)arg1;	// IMP=0x00000000008c9fd2
- (void)_updateRectDiagnosticsLayer;	// IMP=0x00000000008c9d35
- (struct CGImage *)textureSnapshotForSpriteReference:(id)arg1;	// IMP=0x00000000008c99f7
- (_Bool)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;	// IMP=0x00000000008c9439
- (id)regionOfInterestForObjectReference:(id)arg1;	// IMP=0x00000000008c9391
- (id)regionOfInterestForHitTestResult:(id)arg1;	// IMP=0x00000000008c932f
- (id)regionOfInterestForSpriteReference:(id)arg1;	// IMP=0x00000000008c90f9
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayout:(id)arg2;	// IMP=0x00000000008c8fb1
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayout:(id)arg2;	// IMP=0x00000000008c8e63
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayout:(id)arg2;	// IMP=0x00000000008c8d64
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayout:(id)arg2;	// IMP=0x00000000008c8c63
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint)arg1;	// IMP=0x00000000008c8b28
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;	// IMP=0x00000000008c868a
- (id)hitTestResultsInRect:(struct CGRect)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c8439
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c7ff4
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 withIdentifiers:(id)arg2;	// IMP=0x00000000008c7ec0
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000008c7e4c
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c7b8b
- (id)hitTestResultAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000008c7b17
- (void)disablePreheating;	// IMP=0x00000000008c7a83
- (void)installLayoutCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c7984
- (void)_installNextDidLayoutHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c78b8
- (void)_updateEngineLowMemoryMode;	// IMP=0x00000000008c785b
- (void)_updateScrollableAxis;	// IMP=0x00000000008c7799
- (void)_invalidateScrollableAxis;	// IMP=0x00000000008c7755
- (void)_updateDebugHUD;	// IMP=0x00000000008c76da
- (void)_updateFocusItemProvider;	// IMP=0x00000000008c74c5
- (void)_updateUserInterfaceDirection;	// IMP=0x00000000008c73e8
- (void)_updateLayoutScreenScale;	// IMP=0x00000000008c7389
- (void)_updateIsVisible;	// IMP=0x00000000008c732c
- (_Bool)isVisible;	// IMP=0x00000000008c72c0
- (void)_updateLayoutViewEnvironment;	// IMP=0x00000000008c7233
- (void)installAnimationRenderingCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c713c
- (void)installRenderingCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c7045
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;	// IMP=0x00000000008c6fab
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;	// IMP=0x00000000008c6f34
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;	// IMP=0x00000000008c6ebc
@property(retain, nonatomic) PXGLayout *rootLayout;
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000008c6b09
- (void)didMoveToWindow;	// IMP=0x00000000008c6a1a
- (id)backgroundColor;	// IMP=0x00000000008c6a05
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000008c6940
- (void)_updateAccessibility;	// IMP=0x00000000008c685f
- (void)_updateMetalView;	// IMP=0x00000000008c6468
@property(readonly, nonatomic) NSString *preferredFileNameForExportingDebugHierarchy;
- (_Bool)exportDebugHierarchyToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000008c6389
- (id)preferredFocusEnvironments;	// IMP=0x00000000008c6342
- (void)notifyContentFullyLoadedWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c62c6
- (void)_setNeedsUpdate;	// IMP=0x00000000008c6289
- (void)_handleSceneWillEnterForeground:(id)arg1;	// IMP=0x00000000008c6252
- (void)_handleSceneDidEnterBackground:(id)arg1;	// IMP=0x00000000008c623b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000008c6044
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000008c5f84
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000008c5eee
- (void)_willChangeBoundsSizeFrom:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;	// IMP=0x00000000008c522f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000008c5158
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000008c5096
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000008c504c
- (id)initWithFrame:(struct CGRect)arg1 allowedPresentationTypes:(id)arg2;	// IMP=0x00000000008c48fe
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008c48ea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008c4867
@property(readonly, nonatomic) _Bool hasExtendedColorDisplay;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect)arg1 withControl:(long long)arg2;	// IMP=0x000000000009c386
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009c2ba
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009c1ef
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControl:(long long)arg2;	// IMP=0x000000000009c115
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControls:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009c049
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bf7c
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000003371a4
- (CDUnknownBlockType)handleStoryTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000094c80a
- (_Bool)handlePrimaryStoryInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000094c722
- (id)storyHitTestResultAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000094c6c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

