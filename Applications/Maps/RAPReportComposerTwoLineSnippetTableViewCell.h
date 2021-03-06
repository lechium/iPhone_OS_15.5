//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface RAPReportComposerTwoLineSnippetTableViewCell : UITableViewCell
{
    UILabel *_firstLineLabel;	// 8 = 0x8
    UILabel *_secondLineLabel;	// 16 = 0x10
    NSArray *_leftMarginConstraints;	// 24 = 0x18
    NSArray *_rightMarginConstraints;	// 32 = 0x20
    NSLayoutConstraint *_collapsibleFirstSecondLineMargin;	// 40 = 0x28
    NSArray *_allConstraints;	// 48 = 0x30
    UIView *_thirdLineAccessoryView;	// 56 = 0x38
}

+ (id)measuringCell;	// IMP=0x0040000000867a18
- (void).cxx_destruct;	// IMP=0x0020000000867b10
@property(retain, nonatomic) UIView *thirdLineAccessoryView; // @synthesize thirdLineAccessoryView=_thirdLineAccessoryView;
- (double)preferredHeightInTableView:(id)arg1;	// IMP=0x0010000000867981
- (void)updateTextWithReplacements:(id)arg1;	// IMP=0x0010000000867760
- (id)defaultReplacementAttributes;	// IMP=0x0010000000867753
@property(readonly, nonatomic) NSAttributedString *attributedStringFormat;
- (void)layoutMarginsDidChange;	// IMP=0x001000000086770a
- (void)didMoveToSuperview;	// IMP=0x00100000008676c9
- (void)_updateLeftRightConstraints;	// IMP=0x0010000000866e2b
- (void)_recreateConstraints;	// IMP=0x0010000000865eb8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000865c54

@end

