//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIStatusBarCarPlayDockAppItemButton, UIView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockItemView
{
    _Bool _showingCallTimer;	// 120 = 0x78
    UILabel *_inCallDurationLabel;	// 128 = 0x80
    UIStatusBarCarPlayDockAppItemButton *_itemOneButton;	// 136 = 0x88
    UIStatusBarCarPlayDockAppItemButton *_itemTwoButton;	// 144 = 0x90
    UIStatusBarCarPlayDockAppItemButton *_itemThreeButton;	// 152 = 0x98
    NSLayoutConstraint *_inCallLabelSpacingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_itemOneTopConstraint;	// 168 = 0xa8
    NSArray *_currentBundleIdentifiers;	// 176 = 0xb0
    NSString *_currentActiveBundleIdentifier;	// 184 = 0xb8
    UIView *_preferredItemViewToFocus;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000db9236
@property(nonatomic, getter=isShowingCallTimer) _Bool showingCallTimer; // @synthesize showingCallTimer=_showingCallTimer;
@property(nonatomic) __weak UIView *preferredItemViewToFocus; // @synthesize preferredItemViewToFocus=_preferredItemViewToFocus;
@property(copy, nonatomic) NSString *currentActiveBundleIdentifier; // @synthesize currentActiveBundleIdentifier=_currentActiveBundleIdentifier;
@property(copy, nonatomic) NSArray *currentBundleIdentifiers; // @synthesize currentBundleIdentifiers=_currentBundleIdentifiers;
@property(retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint; // @synthesize itemOneTopConstraint=_itemOneTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint; // @synthesize inCallLabelSpacingConstraint=_inCallLabelSpacingConstraint;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton; // @synthesize itemThreeButton=_itemThreeButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton; // @synthesize itemTwoButton=_itemTwoButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton; // @synthesize itemOneButton=_itemOneButton;
@property(retain, nonatomic) UILabel *inCallDurationLabel; // @synthesize inCallDurationLabel=_inCallDurationLabel;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000db8fde
- (unsigned long long)_numberOfEnabledItems;	// IMP=0x0000000000db8f1d
- (double)extraRightPadding;	// IMP=0x0000000000db8f0f
- (double)extraLeftPadding;	// IMP=0x0000000000db8f06
- (void)_updateInCallDurationIfNecessary:(id)arg1;	// IMP=0x0000000000db894d
- (id)_toItemViewForBundleIdentifier:(id)arg1;	// IMP=0x0000000000db875d
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000db673b
- (_Bool)animatesDataChange;	// IMP=0x0000000000db6733
- (void)updateForNewStyle:(id)arg1;	// IMP=0x0000000000db62ba
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x0000000000db627c
- (double)_neededSizeWithoutCallTimer;	// IMP=0x0000000000db6237
- (double)_neededSizeWithCallTimer;	// IMP=0x0000000000db6170
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000db6168
- (void)layoutSubviews;	// IMP=0x0000000000db5ff2
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000db5e34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000db5aef

@end
