//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <EventKitUI/_UICursorInteractionDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont;
@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView <_UICursorInteractionDelegate>
{
    NSArray *_buttons;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    UIFont *_font;	// 24 = 0x18
    double _outsideMargin;	// 32 = 0x20
    NSLayoutConstraint *_leadingMarginConstraint;	// 40 = 0x28
    NSLayoutConstraint *_trailingMarginConstraint;	// 48 = 0x30
    double _baselineFromBoundsTop;	// 56 = 0x38
    _Bool _forcesSingleButtonToCenter;	// 64 = 0x40
    _Bool _inboxStyle;	// 65 = 0x41
    NSArray *_currentConstraints;	// 72 = 0x48
    _Bool _disableButtonHighlights;	// 80 = 0x50
    _Bool _shouldUseVerticalLayout;	// 81 = 0x51
    id <EKUIEventStatusButtonsViewDelegate> _delegate;	// 88 = 0x58
    long long _selectedAction;	// 96 = 0x60
    long long _textSizeMode;	// 104 = 0x68
    struct UIEdgeInsets _buttonsTouchInsets;	// 112 = 0x70
}

+ (_Bool)isActionDestructive:(long long)arg1;	// IMP=0x00000000000328d0
+ (id)imageForAction:(long long)arg1 selected:(_Bool)arg2;	// IMP=0x000000000003247c
+ (id)buttonTitleForAction:(long long)arg1 orb:(_Bool)arg2;	// IMP=0x0000000000031de8
- (void).cxx_destruct;	// IMP=0x00000000000344ac
@property(nonatomic) _Bool shouldUseVerticalLayout; // @synthesize shouldUseVerticalLayout=_shouldUseVerticalLayout;
@property(nonatomic) _Bool disableButtonHighlights; // @synthesize disableButtonHighlights=_disableButtonHighlights;
@property(nonatomic) long long textSizeMode; // @synthesize textSizeMode=_textSizeMode;
@property(nonatomic) struct UIEdgeInsets buttonsTouchInsets; // @synthesize buttonsTouchInsets=_buttonsTouchInsets;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long selectedAction; // @synthesize selectedAction=_selectedAction;
@property(nonatomic) __weak id <EKUIEventStatusButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFonts;	// IMP=0x00000000000343fa
- (void)updateForMiniBarState:(_Bool)arg1;	// IMP=0x00000000000343e2
@property(readonly, nonatomic) UIFont *font;
- (double)baselineFromBoundsTop;	// IMP=0x000000000003438d
- (void)layoutSubviews;	// IMP=0x0000000000033c9d
- (void)updateConstraints;	// IMP=0x0000000000033c13
- (double)_buttonFontSizeFromDelegate;	// IMP=0x0000000000033ae1
- (double)_updateFontFromDelegate;	// IMP=0x000000000003397e
- (id)_fontWithSize:(double)arg1 selected:(_Bool)arg2;	// IMP=0x0000000000033945
- (double)_minimumFontSize;	// IMP=0x0000000000033937
- (double)_defaultFontSizeForButtons;	// IMP=0x0000000000033914
- (void)_updateButtonFonts:(id)arg1;	// IMP=0x000000000003377a
- (void)_updateButtonFontsWithSize:(double)arg1;	// IMP=0x000000000003358c
- (_Bool)_shouldCenterButton;	// IMP=0x000000000003354c
@property(readonly, nonatomic) UIButton *trailingButton;
@property(readonly, nonatomic) UIButton *centerButton;
@property(readonly, nonatomic) UIButton *leadingButton;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000032c7a
- (id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000032b46
- (id)buttonForAction:(long long)arg1;	// IMP=0x0000000000031d98
- (long long)_buttonIndexForAction:(long long)arg1;	// IMP=0x0000000000031cd0
- (long long)_actionForButton:(id)arg1;	// IMP=0x0000000000031cbb
- (void)_updateSelectionToButton:(id)arg1;	// IMP=0x0000000000031b50
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000000031941
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3;	// IMP=0x0000000000031720
- (void)_setupConstraints;	// IMP=0x00000000000304a1
- (void)_setupButtons;	// IMP=0x000000000002fc0f
- (void)findCursorInteractionWithButton:(id)arg1 actions:(CDUnknownBlockType)arg2;	// IMP=0x000000000002faa4
- (id)_newButtonDivider;	// IMP=0x000000000002f9fc
- (id)_newToolbarButton;	// IMP=0x000000000002f8ea
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000002f7c8
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000002f7b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

