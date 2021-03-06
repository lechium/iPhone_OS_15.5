//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, PRXButton, PRXLabel, PRXTextView, UILayoutGuide;
@protocol PRXCardContentViewDelegate, PRXTextContainer;

@interface PRXCardContentView : UIView
{
    NSArray *_titleViewConstraints;	// 8 = 0x8
    NSArray *_subtitleLabelConstraints;	// 16 = 0x10
    NSArray *_actionButtonConstraints;	// 24 = 0x18
    NSArray *_mainContentConstraints;	// 32 = 0x20
    NSLayoutConstraint *_titleViewHeightConstraint;	// 40 = 0x28
    long long _cardStyle;	// 48 = 0x30
    UIView<PRXTextContainer> *_titleView;	// 56 = 0x38
    PRXLabel *_subtitleLabel;	// 64 = 0x40
    UIView *_activityIndicator;	// 72 = 0x48
    UILayoutGuide *_mainContentGuide;	// 80 = 0x50
    id <PRXCardContentViewDelegate> _delegate;	// 88 = 0x58
    UILayoutGuide *_internalContentGuide;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000017586
@property(readonly, nonatomic) UILayoutGuide *internalContentGuide; // @synthesize internalContentGuide=_internalContentGuide;
@property(nonatomic) __weak id <PRXCardContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILayoutGuide *mainContentGuide; // @synthesize mainContentGuide=_mainContentGuide;
@property(retain, nonatomic) UIView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) PRXLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView<PRXTextContainer> *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) long long cardStyle; // @synthesize cardStyle=_cardStyle;
- (id)auxiliaryViews;	// IMP=0x000000000001748f
- (void)updateTitleTextViewExclusionPathsForCardWidth:(double)arg1;	// IMP=0x000000000001709d
- (void)_invalidateMainContentConstraints;	// IMP=0x0000000000017032
@property(copy, nonatomic) NSArray *actionButtons;
@property(readonly, nonatomic) PRXTextView *titleTextView;
@property(readonly, nonatomic) PRXLabel *titleLabel;
@property(retain, nonatomic) PRXButton *dismissButton;
- (void)updateConstraints;	// IMP=0x00000000000163f3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001627b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016267
- (id)initWithFrame:(struct CGRect)arg1 cardStyle:(long long)arg2;	// IMP=0x0000000000015e64
- (id)initWithCardStyle:(long long)arg1;	// IMP=0x0000000000015d96
- (id)init;	// IMP=0x0000000000015d82

@end

