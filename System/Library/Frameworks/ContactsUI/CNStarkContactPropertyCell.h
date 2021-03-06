//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNStarkActionViewDelegate-Protocol.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CNStarkContactPropertyCell <CNStarkActionViewDelegate>
{
    _Bool _allowsFocus;	// 8 = 0x8
    CNStarkActionView *_actionView1;	// 16 = 0x10
    CNStarkActionView *_actionView2;	// 24 = 0x18
    NSLayoutConstraint *_labelViewFirstBaselineAnchorConstraint;	// 32 = 0x20
    NSLayoutConstraint *_valueViewFirstBaselineAnchorConstraint;	// 40 = 0x28
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;	// 48 = 0x30
    struct UIEdgeInsets _contentInsets;	// 56 = 0x38
}

+ (double)contentViewBottomAnchorConstraintConstant;	// IMP=0x000000000018a66b
+ (double)valueLabelFirstBaselineAnchorConstraintConstant;	// IMP=0x000000000018a608
+ (double)labelViewFirstBaselineAnchorConstraintConstant;	// IMP=0x000000000018a5a5
+ (double)minimumContentHeight;	// IMP=0x000000000018a547
+ (_Bool)wantsHorizontalLayout;	// IMP=0x000000000018a53f
- (void).cxx_destruct;	// IMP=0x000000000018a1ba
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint; // @synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint; // @synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
@property(readonly, nonatomic) CNStarkActionView *actionView2; // @synthesize actionView2=_actionView2;
@property(readonly, nonatomic) CNStarkActionView *actionView1; // @synthesize actionView1=_actionView1;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)performActionForMessage;	// IMP=0x0000000000189f1d
- (long long)transportTypeForActionType:(id)arg1;	// IMP=0x0000000000189e1c
- (void)actionViewTapped:(id)arg1;	// IMP=0x0000000000189d2f
- (void)updateTransportButtons;	// IMP=0x00000000001899c9
- (_Bool)shouldShowStar;	// IMP=0x00000000001899c1
- (_Bool)supportsValueColorUsesLabelColor;	// IMP=0x00000000001899b9
- (_Bool)supportsTintColorValue;	// IMP=0x00000000001899b1
- (_Bool)allowsCellSelection;	// IMP=0x000000000018999f
- (void)performDefaultAction;	// IMP=0x00000000001898da
- (void)setSeparatorStyle:(long long)arg1;	// IMP=0x00000000001898a9
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000189753
- (_Bool)canBecomeFocused;	// IMP=0x0000000000189741
- (id)variableConstraints;	// IMP=0x000000000018926f
- (id)constantConstraints;	// IMP=0x0000000000188e50
- (void)_cnui_applyContactStyle;	// IMP=0x0000000000188dfd
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000188c72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

