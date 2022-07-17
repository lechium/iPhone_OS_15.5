//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FBApplicationUpdateScenesTransaction, FBSDisplayConfiguration, FBScene, NSString, NSTimer, NSURL, UIView;
@protocol CAREnvironment, UIScenePresentation, UIScenePresenter;

@interface CARInstrumentClusterRootViewController : UIViewController
{
    _Bool _invalidated;	// 8 = 0x8
    NSString *_sceneID;	// 16 = 0x10
    FBScene *_scene;	// 24 = 0x18
    NSString *_targetBundleIdentifier;	// 32 = 0x20
    id <CAREnvironment> _environment;	// 40 = 0x28
    FBSDisplayConfiguration *_displayConfiguration;	// 48 = 0x30
    id <UIScenePresenter> _scenePresenter;	// 56 = 0x38
    UIView<UIScenePresentation> *_sceneHostView;	// 64 = 0x40
    NSString *_requester;	// 72 = 0x48
    NSTimer *_retryTimer;	// 80 = 0x50
    double _retryDelay;	// 88 = 0x58
    FBApplicationUpdateScenesTransaction *_transaction;	// 96 = 0x60
    NSURL *_lastClusterURL;	// 104 = 0x68
    unsigned long long _targetAppCrashTally;	// 112 = 0x70
    unsigned long long _proxyAppCrashTally;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000495a0
@property(nonatomic) unsigned long long proxyAppCrashTally; // @synthesize proxyAppCrashTally=_proxyAppCrashTally;
@property(nonatomic) unsigned long long targetAppCrashTally; // @synthesize targetAppCrashTally=_targetAppCrashTally;
@property(retain, nonatomic) NSURL *lastClusterURL; // @synthesize lastClusterURL=_lastClusterURL;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // @synthesize sceneHostView=_sceneHostView;
@property(retain, nonatomic) id <UIScenePresenter> scenePresenter; // @synthesize scenePresenter=_scenePresenter;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
// Error: Property attributes should begin with the type ('T') attribute, property name: sceneID
// Property attributes: (null)

- (void)processMonitor:(id)arg1 didHandleDeathOfBundleIdentifier:(id)arg2;	// IMP=0x00100000000492f9
- (void)processMonitor:(id)arg1 shouldHandleDeathOfBundleIdentifier:(id)arg2 isCrash:(_Bool)arg3;	// IMP=0x0010000000048de5
- (void)invalidate;	// IMP=0x0010000000048cbe
- (void)_retryTimerFired:(id)arg1;	// IMP=0x0010000000048bfd
- (void)_scheduleForegroundRetry;	// IMP=0x0010000000048ace
- (void)_invalidateRetryTimer;	// IMP=0x0010000000048a64
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x0010000000048954
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x0010000000048883
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x0010000000048747
- (void)_performSceneUpdateForeground:(_Bool)arg1 settings:(id)arg2;	// IMP=0x0010000000047e88
- (id)_applySceneSettingsToSettings:(id)arg1 foreground:(_Bool)arg2 sceneSpecification:(id)arg3;	// IMP=0x0010000000047c67
- (void)_performSceneUpdateForeground:(_Bool)arg1;	// IMP=0x0010000000047bf1
- (id)_sceneSettingsCreateIfNecessary;	// IMP=0x0010000000047a46
- (void)backgroundScene;	// IMP=0x00100000000479c5
- (void)foregroundSceneWithURL:(id)arg1;	// IMP=0x0010000000047856
- (id)proxiedApplicationInfo;	// IMP=0x001000000004775c
- (id)applicationInfo;	// IMP=0x00100000000475dd
- (id)_bundleIdentifier;	// IMP=0x001000000004756d
- (void)_invalidateScene;	// IMP=0x0010000000047428
- (void)_updateSceneID;	// IMP=0x001000000004735b
- (struct CGRect)_frame;	// IMP=0x00100000000470c1
- (void)updateSceneWithAnimationSettings:(id)arg1;	// IMP=0x0010000000046e79
- (void)dealloc;	// IMP=0x0010000000046293
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000046192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
