//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

#import <HomeUI/HUDashboardNavigationHost-Protocol.h>
#import <HomeUI/HUDashboardNavigationTitleViewDelegate-Protocol.h>

@class HUDashboardNavigationTitleView, HUNavigationBarLayoutOptions, NSArray, NSString;

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate, HUDashboardNavigationHost>
{
    _Bool _isBackgroundVisible;	// 8 = 0x8
    NSArray *_leftDashboardNavigationButtons;	// 16 = 0x10
    NSArray *_rightDashboardNavigationButtons;	// 24 = 0x18
    HUNavigationBarLayoutOptions *_layoutOptions;	// 32 = 0x20
    HUDashboardNavigationTitleView *_titleView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000041bcc1
@property(retain, nonatomic) HUDashboardNavigationTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool isBackgroundVisible; // @synthesize isBackgroundVisible=_isBackgroundVisible;
@property(copy, nonatomic) HUNavigationBarLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) NSArray *rightDashboardNavigationButtons; // @synthesize rightDashboardNavigationButtons=_rightDashboardNavigationButtons;
@property(retain, nonatomic) NSArray *leftDashboardNavigationButtons; // @synthesize leftDashboardNavigationButtons=_leftDashboardNavigationButtons;
- (void)largeTitleHeightDidChange:(double)arg1;	// IMP=0x000000000041bada
- (void)_updateLayoutMargins;	// IMP=0x000000000041ba3f
- (void)_updateTintColorForBarButtons:(id)arg1;	// IMP=0x000000000041b8f6
- (void)_updateTintColor;	// IMP=0x000000000041b7c0
- (void)_updateRightBarButtonItemsForTopItem;	// IMP=0x000000000041b688
- (void)_updateLeftBarButtonItemsForTopItem;	// IMP=0x000000000041b550
- (void)_updateAllBarButtonItemsForTopItem;	// IMP=0x000000000041b4be
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000041b3fd
- (void)setItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000041b27b
- (id)popNavigationItemAnimated:(_Bool)arg1;	// IMP=0x000000000041b224
- (void)pushNavigationItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000041b1e3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041b049

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
