//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont, UILabel, UIStackView;
@protocol HFStringGenerator;

@interface HUTitleDescriptionContentView : UIView
{
    _Bool _disabled;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    id <HFStringGenerator> _titleText;	// 24 = 0x18
    UIColor *_titleTextColor;	// 32 = 0x20
    id <HFStringGenerator> _descriptionText;	// 40 = 0x28
    UIColor *_descriptionTextColor;	// 48 = 0x30
    UILabel *_descriptionLabel;	// 56 = 0x38
    UIStackView *_stackView;	// 64 = 0x40
    NSArray *_verticalLabelConstraints;	// 72 = 0x48
    NSArray *_horizontalLabelConstraints;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000027b948
@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) id <HFStringGenerator> descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) id <HFStringGenerator> titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateLabel:(id)arg1 withContent:(id)arg2;	// IMP=0x000000000027b66a
- (void)_setupDescriptionLabel;	// IMP=0x000000000027b478
- (void)_setupTitleLabel;	// IMP=0x000000000027b29c
- (void)_setupStackView;	// IMP=0x000000000027ae00
@property(retain, nonatomic) UIFont *descriptionFont;
@property(retain, nonatomic) UIFont *titleFont;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000027a87a

@end
