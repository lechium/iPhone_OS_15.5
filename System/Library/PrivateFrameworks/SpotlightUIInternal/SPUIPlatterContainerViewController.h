//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpotlightUIInternal/NUIContainerViewDelegate-Protocol.h>
#import <SpotlightUIInternal/SPUINavigationControllerDelegate-Protocol.h>
#import <SpotlightUIInternal/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NUIContainerBoxView, SPUINavigationController, UIGestureRecognizer, UIView;

@interface SPUIPlatterContainerViewController : UIViewController <NUIContainerViewDelegate, UIGestureRecognizerDelegate, SPUINavigationControllerDelegate>
{
    UIView *_platterBackgroundView;	// 8 = 0x8
    UIView *_visualEffectView;	// 16 = 0x10
    SPUINavigationController *_navController;	// 24 = 0x18
    UIGestureRecognizer *_tapGestureRecognizer;	// 32 = 0x20
}

+ (_Bool)isHardwareKeyboardAttached;	// IMP=0x00000000000174e4
- (void).cxx_destruct;	// IMP=0x0000000000017e52
@property(retain) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain) SPUINavigationController *navController; // @synthesize navController=_navController;
@property(retain) UIView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain) UIView *platterBackgroundView; // @synthesize platterBackgroundView=_platterBackgroundView;
- (void)dealloc;	// IMP=0x0000000000017d33
- (struct UIEdgeInsets)layoutMarginsForContainer;	// IMP=0x0000000000017cd5
- (id)platterVisualEffectView;	// IMP=0x0000000000017cc3
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000017bd8
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000017bd0
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;	// IMP=0x000000000001793a
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;	// IMP=0x0000000000017830
- (void)navigationViewDidInvalidateSizeAnimated:(_Bool)arg1;	// IMP=0x0000000000017644
- (void)hardwareKeyboardAvailabilityChangedAnimated:(_Bool)arg1;	// IMP=0x00000000000174f4
- (id)initWithNavigationController:(id)arg1;	// IMP=0x0000000000016fee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NUIContainerBoxView *view; // @dynamic view;

@end

