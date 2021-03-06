//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NSString, UIVisualEffectView;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController>
{
    UIViewController *_contentViewController;	// 8 = 0x8
    UIViewController *_pocketViewController;	// 16 = 0x10
    UIVisualEffectView *_pocketBackgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002bf611
@property(retain, nonatomic) UIVisualEffectView *pocketBackgroundView; // @synthesize pocketBackgroundView=_pocketBackgroundView;
@property(retain, nonatomic) UIViewController *pocketViewController; // @synthesize pocketViewController=_pocketViewController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)_installContentViewController;	// IMP=0x00000000002bf1db
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002bf05a
- (id)_tearDownPocket;	// IMP=0x00000000002bee3c
- (id)_installPocket;	// IMP=0x00000000002be4b2
- (id)hu_preloadContent;	// IMP=0x00000000002be2d9
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x00000000002be09d
- (struct CGSize)preferredContentSize;	// IMP=0x00000000002be043
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002bdffa
- (void)viewDidLoad;	// IMP=0x00000000002bdf9c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002bdee7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002bde32
- (id)initWithContentViewController:(id)arg1;	// IMP=0x00000000002bde1e
- (id)initWithContentViewController:(id)arg1 pocketViewController:(id)arg2;	// IMP=0x00000000002bdd03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

