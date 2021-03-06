//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController
{
    _Bool _shouldUpdateContentOnlyWhenAuthenticated;	// 8 = 0x8
    GKViewController *_rootViewController;	// 16 = 0x10
    GKColorPalette *_colorPalette;	// 24 = 0x18
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0000000000099507
- (void).cxx_destruct;	// IMP=0x0000000000099557
@property(nonatomic) _Bool shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(retain, nonatomic) GKViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000009947d
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000099429
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000993fa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009935a
- (_Bool)displayUsingSplitNavigationBar;	// IMP=0x0000000000099352
- (void)loadView;	// IMP=0x0000000000099228

@end

