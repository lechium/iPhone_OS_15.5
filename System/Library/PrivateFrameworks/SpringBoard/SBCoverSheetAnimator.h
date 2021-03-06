//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBFolderController, SBHUnlockSettings, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBSceneManager, SBWallpaperController, SBWindowSelfHostWrapper, UIWindow;

@interface SBCoverSheetAnimator : NSObject
{
    _Bool _transitioning;	// 8 = 0x8
    SBLockToAppStatusBarAnimator *_statusBarAnimator;	// 16 = 0x10
    SBIconZoomAnimator *_iconAnimator;	// 24 = 0x18
    SBWindowSelfHostWrapper *_coverSheetWindowHostWrapper;	// 32 = 0x20
    SBSceneManager *_sceneManager;	// 40 = 0x28
    UIWindow *_hostingWindow;	// 48 = 0x30
    UIWindow *_switcherWindow;	// 56 = 0x38
    SBWallpaperController *_wallpaperController;	// 64 = 0x40
    SBFolderController *_folderController;	// 72 = 0x48
    SBHUnlockSettings *_unlockSettings;	// 80 = 0x50
    UIWindow *_coverSheetWindow;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000495a6f
@property(nonatomic) __weak UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) SBHUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(retain, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(retain, nonatomic) UIWindow *switcherWindow; // @synthesize switcherWindow=_switcherWindow;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper; // @synthesize coverSheetWindowHostWrapper=_coverSheetWindowHostWrapper;
@property(retain, nonatomic) SBIconZoomAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator; // @synthesize statusBarAnimator=_statusBarAnimator;
- (void)_setWallpaperToLocked:(_Bool)arg1 duration:(double)arg2;	// IMP=0x000000000049589e
- (void)_prepareIconAnimatorIncludingLockScreen:(_Bool)arg1;	// IMP=0x00000000004957be
- (void)_updateCoverSheetHosting;	// IMP=0x0000000000495712
- (void)animateToCoverSheet:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000495317
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;	// IMP=0x00000000004951e3

@end

