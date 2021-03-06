//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UITextField;
@protocol RAPTextCellDelegate;

__attribute__((visibility("hidden")))
@interface RAPTextTableViewCell : UITableViewCell
{
    UITextField *_valueField;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 24 = 0x18
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 32 = 0x20
    int _analyticTarget;	// 40 = 0x28
    id <RAPTextCellDelegate> _delegate;	// 48 = 0x30
    long long _correctableItemKind;	// 56 = 0x38
    NSString *_placeholder;	// 64 = 0x40
    NSString *_value;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000831336
@property(nonatomic) int analyticTarget; // @synthesize analyticTarget=_analyticTarget;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long correctableItemKind; // @synthesize correctableItemKind=_correctableItemKind;
@property(nonatomic) __weak id <RAPTextCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long preferredKeyboardType;
- (void)_instrumentTextFieldTap;	// IMP=0x0010000000830fb3
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000830dc9
- (void)fieldSelected:(id)arg1;	// IMP=0x0010000000830db7
- (void)fieldChanged:(id)arg1;	// IMP=0x0000000000830d30
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000830c9f
- (void)_setupConstraints;	// IMP=0x00100000008307c9
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00100000008306cc
- (void)_setupViews;	// IMP=0x001000000083040d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

