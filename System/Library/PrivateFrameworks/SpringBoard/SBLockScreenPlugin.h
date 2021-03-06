//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBProcessObserver-Protocol.h>
#import <SpringBoard/SBLockScreenPluginAgent-Protocol.h>
#import <SpringBoard/SBLockScreenPluginController-Protocol.h>

@class BSPluginBundle, CSAppearance, CSBehavior, FBProcess, NSMutableArray, NSString, SBLockOverlayContext, SBLockScreenPluginAction, SBLockScreenPluginAppearanceContext, UIViewController, _UILegibilitySettings;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginController, SBLockScreenPluginDelegate, SBLockScreenPluginViewController;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController>
{
    BSPluginBundle *_bundle;	// 8 = 0x8
    NSString *_bundleName;	// 16 = 0x10
    FBProcess *_process;	// 24 = 0x18
    id <SBLockScreenPluginController> _controller;	// 32 = 0x20
    id <SBLockScreenPluginAgent> _agent;	// 40 = 0x28
    SBLockScreenPluginAppearanceContext *_appearance;	// 48 = 0x30
    NSMutableArray *_lifecycleObservers;	// 56 = 0x38
    SBLockOverlayContext *_overlay;	// 64 = 0x40
    CDUnknownBlockType _auxiliaryActivationAnimationBlock;	// 72 = 0x48
    CDUnknownBlockType _auxiliaryDeactivationAnimationBlock;	// 80 = 0x50
    id <SBLockScreenPluginDelegate> _delegate;	// 88 = 0x58
}

+ (id)pluginWithName:(id)arg1 activationContext:(id)arg2;	// IMP=0x000000000029127d
+ (id)_pluginBundleForPluginWithName:(id)arg1;	// IMP=0x00000000002911c4
- (void).cxx_destruct;	// IMP=0x0000000000293116
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent; // @synthesize pluginAgent=_agent;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryDeactivationAnimationBlock; // @synthesize auxiliaryDeactivationAnimationBlock=_auxiliaryDeactivationAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryActivationAnimationBlock; // @synthesize auxiliaryActivationAnimationBlock=_auxiliaryActivationAnimationBlock;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_bundleName;
@property(retain, nonatomic) SBLockOverlayContext *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) id <SBLockScreenPluginController> controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <SBLockScreenPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000292f2d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000292edd
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000292e00
- (id)succinctDescription;	// IMP=0x0000000000292db0
@property(readonly, copy) NSString *description;
- (void)processDidExit:(id)arg1;	// IMP=0x0000000000292ccd
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;	// IMP=0x0000000000292c6e
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;	// IMP=0x0000000000292bcd
- (void)deactivatePluginController:(id)arg1;	// IMP=0x0000000000292b97
- (void)activatePluginController:(id)arg1;	// IMP=0x0000000000292b61
- (void)enumerateLifecycleObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000292a22
- (void)removeLifecycleObserver:(id)arg1;	// IMP=0x00000000002929d5
- (void)addLifecycleObserver:(id)arg1;	// IMP=0x000000000029297b
- (_Bool)pluginHandleEvent:(long long)arg1;	// IMP=0x000000000029292d
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)pluginDidDeactivateWithContext:(id)arg1;	// IMP=0x000000000029285e
- (void)pluginWillActivateWithContext:(id)arg1;	// IMP=0x000000000029279e
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
- (void)_updateAppearance:(id)arg1;	// IMP=0x00000000002926ff
- (_Bool)handleDashBoardEvent:(id)arg1;	// IMP=0x0000000000292673
@property(readonly, nonatomic) CSBehavior *coverSheetBehavior;
@property(readonly, nonatomic) CSAppearance *coverSheetAppearance;
- (_Bool)isCapabilityRestricted:(unsigned long long)arg1;	// IMP=0x0000000000291890
- (id)overrideForElement:(long long)arg1;	// IMP=0x000000000029170b
- (_Bool)isElementHidden:(long long)arg1;	// IMP=0x00000000002916c7
@property(readonly, nonatomic) SBLockScreenPluginAction *unlockAction;
@property(readonly, nonatomic) SBLockScreenPluginAppearanceContext *appearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *viewController;
- (void)dealloc;	// IMP=0x0000000000291638
- (id)initWithBundle:(id)arg1 activationContext:(id)arg2;	// IMP=0x0000000000291364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly) Class superclass;

@end

