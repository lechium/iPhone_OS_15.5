//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIBlurEffect, UIImageView, UIView, UIVisualEffectView;

@interface SidebarViewController : UIViewController
{
    UIBlurEffect *_backgroundBlurEffect;	// 8 = 0x8
    UIVisualEffectView *_backdrop;	// 16 = 0x10
    UIView *_verticalSeparator;	// 24 = 0x18
    UIView *_wallpaperView;	// 32 = 0x20
    UIImageView *_wallpaperImageView;	// 40 = 0x28
    UIViewController *_contentViewController;	// 48 = 0x30
    struct UIEdgeInsets _wallpaperObscuredInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a903e
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) struct UIEdgeInsets wallpaperObscuredInsets; // @synthesize wallpaperObscuredInsets=_wallpaperObscuredInsets;
- (void)_updateWallpaperInset;	// IMP=0x00000000000a8e56
- (void)_setWallpaperImage:(id)arg1;	// IMP=0x00000000000a8d4a
- (void)_updateWallpaperImage;	// IMP=0x00000000000a8a4b
- (void)_springBoardWallpaperDidChange:(id)arg1;	// IMP=0x00000000000a8a39
@property(readonly, nonatomic) double separatorWidth;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a86f8
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000a8515
- (void)viewDidLoad;	// IMP=0x00000000000a829b

@end

