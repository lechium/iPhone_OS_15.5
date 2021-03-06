//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

#import <ContactsAutocompleteUI/NUIContainerViewDelegate-Protocol.h>

@class CNComposeRecipient, NSString, NUIContainerStackView, UIColor, UILabel;

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>
{
    CNComposeRecipient *_recipient;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_detailLabel;	// 24 = 0x18
    UIColor *_labelColor;	// 32 = 0x20
    double _trailingButtonMidlineInsetFromLayoutMargin;	// 40 = 0x28
    double _trailingButtonWidth;	// 48 = 0x30
    NUIContainerStackView *_labelViewStack;	// 56 = 0x38
}

+ (id)axCappedSymbolConfigurationIsBold:(_Bool)arg1;	// IMP=0x00000000000302d4
+ (id)axCappedFontWithTextStyle:(id)arg1 bold:(_Bool)arg2;	// IMP=0x0000000000030208
+ (void)requireIntrinsicSizeForView:(id)arg1;	// IMP=0x000000000002fd00
+ (double)additionalSeparatorInset;	// IMP=0x000000000002fcf2
+ (Class)containerViewClass;	// IMP=0x000000000002fce1
+ (id)identifier;	// IMP=0x000000000002fcd9
- (void).cxx_destruct;	// IMP=0x0000000000030b51
@property(retain, nonatomic) NUIContainerStackView *labelViewStack; // @synthesize labelViewStack=_labelViewStack;
@property(readonly, nonatomic) double trailingButtonWidth; // @synthesize trailingButtonWidth=_trailingButtonWidth;
@property(nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) _Bool canCollapseRecipient;
@property(readonly, nonatomic) _Bool canExpandRecipient;
@property(readonly, nonatomic) _Bool supportsAvatarView;
- (void)labelsChangedWidth:(double)arg1;	// IMP=0x0000000000030930
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;	// IMP=0x0000000000030860
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;	// IMP=0x0000000000030733
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x0000000000030728
- (void)layoutMarginsDidChange;	// IMP=0x0000000000030512
- (id)labelWithTextStyle:(id)arg1;	// IMP=0x0000000000030457
- (id)titleTextStyle;	// IMP=0x00000000000301f4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002fd61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

