//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

@interface PKPaymentSetupLabelFieldCell
{
    UIButton *_button;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002248b7
- (void)_buttonTapped;	// IMP=0x000000000022485a
- (void)layoutSubviews;	// IMP=0x00000000002245e8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022442b
- (void)_updateDisplayForFieldTypeLabel:(id)arg1;	// IMP=0x0000000000224001
- (void)_updateDisplay:(_Bool)arg1;	// IMP=0x0000000000223f7b
- (double)minimumTextFieldOffset;	// IMP=0x0000000000223f72
- (void)setMinimumTextLabelWidth:(double)arg1;	// IMP=0x0000000000223f6c
- (id)editableTextField;	// IMP=0x0000000000223f64
- (id)init;	// IMP=0x0000000000223f35
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x000000000037373e

@end

