//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SBFStatusBarLegibilityView;

@interface SBHomeScreenView : UIView
{
    SBFStatusBarLegibilityView *_statusBarLegibilityView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000057a943
@property(readonly, nonatomic) SBFStatusBarLegibilityView *statusBarLegibilityView; // @synthesize statusBarLegibilityView=_statusBarLegibilityView;
- (void)layoutSubviews;	// IMP=0x000000000006f295
- (void)didMoveToWindow;	// IMP=0x000000000057a84a
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000be506
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000057a7c4

@end
