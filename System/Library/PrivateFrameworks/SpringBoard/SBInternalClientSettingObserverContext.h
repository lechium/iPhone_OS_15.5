//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject
{
    FBScene *_scene;	// 8 = 0x8
    SBDeviceApplicationSceneHandle *_sceneHandle;	// 16 = 0x10
    UIApplicationSceneClientSettings *_oldClientSettings;	// 24 = 0x18
    UIApplicationSceneClientSettings *_updatedClientSettings;	// 32 = 0x20
    FBSSceneTransitionContext *_transition;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000043f2a
@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;

@end

