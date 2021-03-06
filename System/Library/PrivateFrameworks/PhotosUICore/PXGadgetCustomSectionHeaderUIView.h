//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UIImageView, UILabel;

@interface PXGadgetCustomSectionHeaderUIView
{
    UILabel *_appleInternalLabel;	// 8 = 0x8
    UIButton *_infoButton;	// 16 = 0x10
    UIImageView *_iconImageView;	// 24 = 0x18
    UILabel *_iconTitleLabel;	// 32 = 0x20
}

+ (double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1;	// IMP=0x000000000097bbd1
+ (id)_appleInternalLabelText;	// IMP=0x000000000097bb52
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(_Bool)arg5;	// IMP=0x000000000097ba7f
- (void).cxx_destruct;	// IMP=0x000000000097ae2b
@property(retain, nonatomic) UILabel *iconTitleLabel; // @synthesize iconTitleLabel=_iconTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *appleInternalLabel; // @synthesize appleInternalLabel=_appleInternalLabel;
- (void)layoutSubviews;	// IMP=0x000000000097aaec
- (void)configureTitleLabel:(id)arg1;	// IMP=0x000000000097a99c
- (void)_infoButtonSelected;	// IMP=0x000000000097a916

@end

