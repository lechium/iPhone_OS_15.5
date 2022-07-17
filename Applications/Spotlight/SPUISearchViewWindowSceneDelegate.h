//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SPUISearchViewController, UINavigationController, UIWindow;

@interface SPUISearchViewWindowSceneDelegate : NSObject
{
    UIWindow *_searchViewWindow;	// 8 = 0x8
    SPUISearchViewController *_searchViewController;	// 16 = 0x10
    UINavigationController *_navController;	// 24 = 0x18
    unsigned long long _currentPresentationSource;	// 32 = 0x20
    unsigned long long _currentIntent;	// 40 = 0x28
    double _currentRevealProgress;	// 48 = 0x30
}

+ (void)postMemoryWarningAndPerformBlockIfOverInactiveLimit:(CDUnknownBlockType)arg1;	// IMP=0x00200000000038d7
- (void).cxx_destruct;	// IMP=0x0020000000003bdc
@property double currentRevealProgress; // @synthesize currentRevealProgress=_currentRevealProgress;
@property unsigned long long currentIntent; // @synthesize currentIntent=_currentIntent;
@property unsigned long long currentPresentationSource; // @synthesize currentPresentationSource=_currentPresentationSource;
@property(retain) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain) UIWindow *searchViewWindow; // @synthesize searchViewWindow=_searchViewWindow;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;	// IMP=0x0010000000003a8c
- (void)dismissSearchView;	// IMP=0x0010000000003a75
- (void)backgroundSearchScene;	// IMP=0x00100000000039cc
- (void)searchFieldDidFocus;	// IMP=0x00100000000039c6
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x0010000000003055
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x0010000000003018
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000003006
- (void)updateSearchViewClientSceneSettings;	// IMP=0x0010000000002cde
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000029d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
