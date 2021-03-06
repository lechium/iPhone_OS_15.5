//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MusicUIServiceScreenManager, NSMutableDictionary, NSString, UIWindow;

@interface MusicUIServiceAppDelegate : UIResponder
{
    MusicUIServiceScreenManager *_screenManager;	// 8 = 0x8
    NSMutableDictionary *_environments;	// 16 = 0x10
    UIWindow *_activeWindow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000a249
@property(nonatomic) __weak UIWindow *activeWindow; // @synthesize activeWindow=_activeWindow;
@property(retain, nonatomic) NSMutableDictionary *environments; // @synthesize environments=_environments;
- (id)_keyWindowForScreen:(id)arg1;	// IMP=0x001000000000a1e5
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000009efd
- (void)appEnvironmentWillDisconnect:(id)arg1;	// IMP=0x0010000000009e89
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000009dd0
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000009d5b
- (id)init;	// IMP=0x0010000000009ca1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

