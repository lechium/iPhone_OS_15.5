//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel;

@interface PKPaymentSetupFooterView
{
    UIButton *_continueButton;	// 8 = 0x8
    UIButton *_skipCardButton;	// 16 = 0x10
    UILabel *_notificationText;	// 24 = 0x18
    _Bool _isBuddyiPad;	// 32 = 0x20
    _Bool _forceShowSetupLaterButton;	// 33 = 0x21
    long long _context;	// 40 = 0x28
    UIButton *_manualEntryButton;	// 48 = 0x30
    UIButton *_setupLaterButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000430cc1
@property(retain, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property(nonatomic) _Bool forceShowSetupLaterButton; // @synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void)_createSetupLaterButton;	// IMP=0x0000000000430a5c
- (void)setButtonsEnabled:(_Bool)arg1;	// IMP=0x00000000004309fa
- (void)layoutSubviews;	// IMP=0x000000000043053a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004303a8
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;	// IMP=0x00000000004302cd
- (struct CGSize)_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(struct CGSize)arg3;	// IMP=0x00000000004300bd
@property(retain, nonatomic) UIButton *skipCardButton;
@property(retain, nonatomic) UILabel *notificationText;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;	// IMP=0x000000000042f93e

@end
