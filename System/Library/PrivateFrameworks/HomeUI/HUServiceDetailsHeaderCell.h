//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UITextView;
@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;	// 8 = 0x8
    id <HUResizableCellDelegate> _resizingDelegate;	// 16 = 0x10
    UIButton *_actionButton;	// 24 = 0x18
    UITextView *_messageTextView;	// 32 = 0x20
    NSArray *_hiddenMessageTextViewConstraints;	// 40 = 0x28
    NSArray *_visibleMessageTextViewConstraints;	// 48 = 0x30
    UIStackView *_titleSpinnerStackView;	// 56 = 0x38
    UIActivityIndicatorView *_checkingForUpdateSpinner;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    NSLayoutConstraint *_spinnerBottomConstraint;	// 80 = 0x50
    NSLayoutConstraint *_messageBottomConstraint;	// 88 = 0x58
    NSLayoutConstraint *_actionBottomConstraint;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000000d8a0e
- (void).cxx_destruct;	// IMP=0x00000000000da65d
@property(retain, nonatomic) NSLayoutConstraint *actionBottomConstraint; // @synthesize actionBottomConstraint=_actionBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageBottomConstraint; // @synthesize messageBottomConstraint=_messageBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *spinnerBottomConstraint; // @synthesize spinnerBottomConstraint=_spinnerBottomConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // @synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner;
@property(retain, nonatomic) UIStackView *titleSpinnerStackView; // @synthesize titleSpinnerStackView=_titleSpinnerStackView;
@property(retain, nonatomic) NSArray *visibleMessageTextViewConstraints; // @synthesize visibleMessageTextViewConstraints=_visibleMessageTextViewConstraints;
@property(retain, nonatomic) NSArray *hiddenMessageTextViewConstraints; // @synthesize hiddenMessageTextViewConstraints=_hiddenMessageTextViewConstraints;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (id)_visibleMessageTextViewConstraints;	// IMP=0x00000000000d995b
- (id)_hiddenMessageTextViewConstraints;	// IMP=0x00000000000d9837
- (void)_updateErrorLabelConstraints;	// IMP=0x00000000000d944a
- (void)_configureConstraints;	// IMP=0x00000000000d9389
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000000d8a16
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000000d8957
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000d8901
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000d82d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

