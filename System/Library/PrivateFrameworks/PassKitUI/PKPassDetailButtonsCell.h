//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell
{
    PKPaymentPassActionWidgetView *_widgetView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004a4c6d
- (_Bool)hasEnabledWidgets;	// IMP=0x00000000004a4c50
- (void)setCurrentUser:(id)arg1;	// IMP=0x00000000004a4c33
- (void)setPeerPaymentAccount:(id)arg1;	// IMP=0x00000000004a4c16
- (void)setAccount:(id)arg1;	// IMP=0x00000000004a4bf9
- (void)setDelegate:(id)arg1;	// IMP=0x00000000004a4bdc
- (void)setPaymentPass:(id)arg1;	// IMP=0x00000000004a4bbf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004a4ba2
- (void)layoutSubviews;	// IMP=0x00000000004a4af0
- (id)initWithReuseIdentifier:(id)arg1 widgetViewStyle:(unsigned long long)arg2;	// IMP=0x00000000004a49fb

@end

