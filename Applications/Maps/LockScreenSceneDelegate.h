//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PlatformController, UIWindow;

__attribute__((visibility("hidden")))
@interface LockScreenSceneDelegate : NSObject
{
    UIWindow *_lockScreenWindow;	// 8 = 0x8
    PlatformController *_platformController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000003411c7
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) UIWindow *lockScreenWindow; // @synthesize lockScreenWindow=_lockScreenWindow;
- (void)mapsAppCoordinatorWillEndLockscreenSession;	// IMP=0x0010000000340f3a
- (id)appSessionController;	// IMP=0x0010000000340ee3
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000340e14
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000340967
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000340256

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

