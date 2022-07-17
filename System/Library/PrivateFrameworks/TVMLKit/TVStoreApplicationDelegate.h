//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>
#import <TVMLKit/UIApplicationDelegate-Protocol.h>

@class IKURLBagCache, NSDictionary, NSString, NSURL, TVApplicationController, TVStoreApplicationSetupHelper, UIWindow;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>
{
    TVStoreApplicationSetupHelper *_setupHelper;	// 8 = 0x8
    NSDictionary *_launchOptions;	// 16 = 0x10
    NSURL *_launchOpenURL;	// 24 = 0x18
    NSDictionary *_launchOpenURLOptions;	// 32 = 0x20
    _Bool _shouldTerminateOnEnterBackground;	// 40 = 0x28
    _Bool _headLess;	// 41 = 0x29
    _Bool _overrideOrientation;	// 42 = 0x2a
    UIWindow *_window;	// 48 = 0x30
    TVApplicationController *_appController;	// 56 = 0x38
    IKURLBagCache *_bagCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a70b2
@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(readonly, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;	// IMP=0x00000000000a6c16
- (void)_controllerDidDisplay:(id)arg1;	// IMP=0x00000000000a6b75
- (void)_loadWithBootURL:(id)arg1;	// IMP=0x00000000000a67f6
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x00000000000a676e
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000a670d
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000000000a6607
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000000a65b1
- (void)_launchApp;	// IMP=0x00000000000a6482
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000000000a619d
- (_Bool)shouldBeForcedLeftToRight;	// IMP=0x00000000000a6108
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;	// IMP=0x00000000000a607b
@property(readonly, nonatomic) _Bool supportsIdleModeVisualEffects;
- (void)reload;	// IMP=0x00000000000a6036
- (void)didShowViewController;	// IMP=0x00000000000a6030
- (void)setupWithBootURL:(id)arg1;	// IMP=0x00000000000a602a
- (id)offlineJSURL;	// IMP=0x00000000000a6022
- (id)appLocalBootURL;	// IMP=0x00000000000a601a
- (id)bootURL;	// IMP=0x00000000000a6012
- (id)cachedBagPath;	// IMP=0x00000000000a600a
- (id)_bagBootURL;	// IMP=0x00000000000a5f2d
- (id)bagBootURLKey;	// IMP=0x00000000000a5f00
- (void)dealloc;	// IMP=0x00000000000a5e8b
- (id)init;	// IMP=0x00000000000a5e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
