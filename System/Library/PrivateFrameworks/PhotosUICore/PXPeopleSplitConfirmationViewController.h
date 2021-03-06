//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, UIBarButtonItem, UIButton, UILayoutGuide, UIView;

@interface PXPeopleSplitConfirmationViewController
{
    UIView *_interimLoadingView;	// 8 = 0x8
    UIButton *_confirmButton;	// 16 = 0x10
    UIButton *_denyButton;	// 24 = 0x18
    UIBarButtonItem *_undoButton;	// 32 = 0x20
    UILayoutGuide *_controlLayoutGuide;	// 40 = 0x28
    NSLayoutConstraint *_buttonSizeConstraint;	// 48 = 0x30
    NSLayoutConstraint *_firstButtonSpacingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_secondButtonSpacingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_controlGuideHeightConstraint;	// 72 = 0x48
    NSArray *_portraitConstraints;	// 80 = 0x50
    NSArray *_landscapeConstraints;	// 88 = 0x58
    NSArray *_commonConstraints;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000a220be
@property(retain, nonatomic) NSArray *commonConstraints; // @synthesize commonConstraints=_commonConstraints;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(retain, nonatomic) NSLayoutConstraint *controlGuideHeightConstraint; // @synthesize controlGuideHeightConstraint=_controlGuideHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondButtonSpacingConstraint; // @synthesize secondButtonSpacingConstraint=_secondButtonSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *firstButtonSpacingConstraint; // @synthesize firstButtonSpacingConstraint=_firstButtonSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonSizeConstraint; // @synthesize buttonSizeConstraint=_buttonSizeConstraint;
@property(retain, nonatomic) UILayoutGuide *controlLayoutGuide; // @synthesize controlLayoutGuide=_controlLayoutGuide;
@property(retain, nonatomic) UIBarButtonItem *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UIButton *denyButton; // @synthesize denyButton=_denyButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *interimLoadingView; // @synthesize interimLoadingView=_interimLoadingView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000a21e83
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000a21d76
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0000000000a21d39
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;	// IMP=0x0000000000a21cbc
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;	// IMP=0x0000000000a21c3f
- (void)_updateUndoButton;	// IMP=0x0000000000a21b80
- (id)_buttonBackgroundImageFromColor:(id)arg1;	// IMP=0x0000000000a21acb
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;	// IMP=0x0000000000a2198f
- (void)_enableActionButtons;	// IMP=0x0000000000a21874
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3;	// IMP=0x0000000000a2160c
- (void)undoButtonTapped:(id)arg1;	// IMP=0x0000000000a215ab
- (void)denyTapped:(id)arg1;	// IMP=0x0000000000a214be
- (void)confirmTapped:(id)arg1;	// IMP=0x0000000000a213d1
- (void)suggestionDidDisplay;	// IMP=0x0000000000a21390
- (void)updateViewWithViewState:(unsigned long long)arg1;	// IMP=0x0000000000a2125f
- (void)dealloc;	// IMP=0x0000000000a1fb77
- (void)updateViewConstraints;	// IMP=0x0000000000a1f738
- (void)viewDidLoad;	// IMP=0x0000000000a1f235
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000a1f1a1

@end

