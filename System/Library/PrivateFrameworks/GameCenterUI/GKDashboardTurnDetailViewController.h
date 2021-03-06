//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKTurnBasedMatch, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface GKDashboardTurnDetailViewController
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    _Bool _shouldShowQuit;	// 9 = 0x9
    GKTurnBasedMatch *_match;	// 16 = 0x10
    UIView *_contentVerticalCenteringView;	// 24 = 0x18
    UIView *_turnDetailContentView;	// 32 = 0x20
    UILabel *_playingWithLabel;	// 40 = 0x28
    UILabel *_createdLabel;	// 48 = 0x30
    UIButton *_firstButton;	// 56 = 0x38
    UIButton *_secondButton;	// 64 = 0x40
    NSLayoutConstraint *_secondButtonCenteringConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000096266
@property(nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // @synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *createdLabel; // @synthesize createdLabel=_createdLabel;
@property(nonatomic) UILabel *playingWithLabel; // @synthesize playingWithLabel=_playingWithLabel;
@property(nonatomic) UIView *turnDetailContentView; // @synthesize turnDetailContentView=_turnDetailContentView;
@property(nonatomic) UIView *contentVerticalCenteringView; // @synthesize contentVerticalCenteringView=_contentVerticalCenteringView;
@property(nonatomic) _Bool shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)handleTurnBasedEvent:(id)arg1;	// IMP=0x0000000000096008
- (void)turnOK:(id)arg1;	// IMP=0x0000000000095fee
- (void)removeMatch:(id)arg1;	// IMP=0x0000000000095de6
- (void)quitMatch:(id)arg1;	// IMP=0x0000000000095943
- (void)disableButtons;	// IMP=0x00000000000958e9
- (void)chooseMatch:(id)arg1;	// IMP=0x0000000000095688
- (void)declineInvitation:(id)arg1;	// IMP=0x0000000000095480
- (void)acceptInvitation:(id)arg1;	// IMP=0x000000000009524d
- (void)refreshPresenter;	// IMP=0x00000000000951f5
- (id)preferredFocusEnvironments;	// IMP=0x000000000009517c
- (void)viewDidLoad;	// IMP=0x0000000000094c0c
- (void)dealloc;	// IMP=0x0000000000094b97
- (id)initWithTurnBasedMatch:(id)arg1;	// IMP=0x0000000000094a70

@end

