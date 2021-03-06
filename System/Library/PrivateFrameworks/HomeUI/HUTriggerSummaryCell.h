//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUSelectableCellProtocol-Protocol.h>

@class HFItem, HUIconListView, NSArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol>
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _canBeSelected;	// 9 = 0x9
    _Bool _hideTitle;	// 10 = 0xa
    _Bool _hideDescription;	// 11 = 0xb
    _Bool _hideDescriptionIcon;	// 12 = 0xc
    HFItem *_item;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
    UIImage *_descriptionIcon;	// 40 = 0x28
    NSArray *_iconDescriptors;	// 48 = 0x30
    UIColor *_cellColor;	// 56 = 0x38
    NSArray *_verticalLabelConstraints;	// 64 = 0x40
    NSArray *_horizontalLabelConstraints;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_descriptionLabel;	// 88 = 0x58
    UIImageView *_descriptionIconView;	// 96 = 0x60
    HUIconListView *_iconContainerView;	// 104 = 0x68
    UIView *_textContainerView;	// 112 = 0x70
    double _textAlpha;	// 120 = 0x78
    UIFont *_titleFont;	// 128 = 0x80
    UIFont *_descriptionFont;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000bf70a
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) HUIconListView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIImageView *descriptionIconView; // @synthesize descriptionIconView=_descriptionIconView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(retain, nonatomic) UIColor *cellColor; // @synthesize cellColor=_cellColor;
@property(retain, nonatomic) NSArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
@property(nonatomic) _Bool hideDescriptionIcon; // @synthesize hideDescriptionIcon=_hideDescriptionIcon;
@property(retain, nonatomic) UIImage *descriptionIcon; // @synthesize descriptionIcon=_descriptionIcon;
@property(nonatomic) _Bool hideDescription; // @synthesize hideDescription=_hideDescription;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)updateSelectionUI;	// IMP=0x00000000000bf4c5
- (void)updateTitle;	// IMP=0x00000000000bf3e7
- (void)_addDescriptionIconView;	// IMP=0x00000000000bf242
- (void)_addDescriptionLabel;	// IMP=0x00000000000bf0cc
- (void)_addTitleLabel;	// IMP=0x00000000000bef62
- (void)updateUIIconsWithResults:(id)arg1;	// IMP=0x00000000000bee14
- (void)updateUITextWithResults:(id)arg1;	// IMP=0x00000000000bea8e
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000000be9f9
- (void)updateHorizontalLabelConstraints;	// IMP=0x00000000000be357
- (void)updateVerticalLabelConstraints;	// IMP=0x00000000000bdc4c
- (void)setUpTextContainerViewConstraints;	// IMP=0x00000000000bd822
- (void)setUpIconContainerViewConstraints;	// IMP=0x00000000000bd4bf
- (void)updateConstraints;	// IMP=0x00000000000bd400
@property(nonatomic) _Bool canBeSelected; // @synthesize canBeSelected=_canBeSelected;
- (void)prepareForReuse;	// IMP=0x00000000000bcecd
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000bcc8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

