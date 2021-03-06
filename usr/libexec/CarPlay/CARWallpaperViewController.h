//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CARApplicationInfo, CARSceneUpdate, FBScene, NSMutableDictionary, NSString, UIView;
@protocol CAREnvironment, UIScenePresentation, UIScenePresenter;

@interface CARWallpaperViewController : UIViewController
{
    _Bool _invalidated;	// 8 = 0x8
    id <CAREnvironment> _environment;	// 16 = 0x10
    CARApplicationInfo *_wallpaperAppInfo;	// 24 = 0x18
    NSString *_sceneID;	// 32 = 0x20
    FBScene *_scene;	// 40 = 0x28
    id <UIScenePresenter> _scenePresenter;	// 48 = 0x30
    NSMutableDictionary *_scenePresentersByIdentifier;	// 56 = 0x38
    UIView<UIScenePresentation> *_sceneHostView;	// 64 = 0x40
    NSString *_requester;	// 72 = 0x48
    CARSceneUpdate *_currentSceneUpdate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000d0566
@property(retain, nonatomic) CARSceneUpdate *currentSceneUpdate; // @synthesize currentSceneUpdate=_currentSceneUpdate;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // @synthesize sceneHostView=_sceneHostView;
@property(retain, nonatomic) NSMutableDictionary *scenePresentersByIdentifier; // @synthesize scenePresentersByIdentifier=_scenePresentersByIdentifier;
@property(retain, nonatomic) id <UIScenePresenter> scenePresenter; // @synthesize scenePresenter=_scenePresenter;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(retain, nonatomic) CARApplicationInfo *wallpaperAppInfo; // @synthesize wallpaperAppInfo=_wallpaperAppInfo;
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_sendSceneUpdate;	// IMP=0x00100000000d0012
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;	// IMP=0x00100000000cffc3
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00100000000cfeba
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00100000000cfd37
- (void)invalidate;	// IMP=0x00100000000cfd20
- (void)updateAppearanceForWallpaper;	// IMP=0x00100000000cf4d0
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000cf395
- (void)viewDidLoad;	// IMP=0x00100000000cf2e9
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000cf148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

