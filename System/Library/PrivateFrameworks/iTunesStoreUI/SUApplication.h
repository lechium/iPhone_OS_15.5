//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

#import <iTunesStoreUI/UIApplicationDelegate-Protocol.h>

@class NSString, UIColor, UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate>
{
    _Bool _terminateOnNextSuspend;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    UIColor *_interactionTintColor;	// 24 = 0x18
}

@property(copy, nonatomic) UIColor *interactionTintColor; // @synthesize interactionTintColor=_interactionTintColor;
- (void)_teardownUI;	// IMP=0x000000000000303c
- (void)_setupUI;	// IMP=0x0000000000002f2d
- (void)_exitIfStoreNotAvailable;	// IMP=0x0000000000002e96
- (void)_exitForStoreNotAvailable;	// IMP=0x0000000000002d64
- (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000000002bdb
- (void)_storeEnabledChangeNotification:(id)arg1;	// IMP=0x0000000000002bc9
- (double)defaultImageSnapshotExpiration;	// IMP=0x0000000000002b97
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000002b28
- (_Bool)applicationSuspendWithSettings:(id)arg1;	// IMP=0x0000000000002acd
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000000002abb
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000002a62
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000000002a22
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x0000000000002951
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000000000293c
- (void)dealloc;	// IMP=0x0000000000002853
- (id)init;	// IMP=0x00000000000027d7
- (void)_runScriptTestWithOptions:(id)arg1;	// IMP=0x000000000006245a
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000000062294
- (void)runTestInvocation:(id)arg1;	// IMP=0x000000000006221f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
