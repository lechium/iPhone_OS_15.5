//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentTransactionCellResponder-Protocol.h>

@class NSString, PKPaymentTransactionView, UIColor;

@interface PKPaymentTransactionTableCell <PKPaymentTransactionCellResponder>
{
    NSString *_identifier;	// 8 = 0x8
    PKPaymentTransactionView *_transactionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000297b65
@property(readonly, nonatomic) PKPaymentTransactionView *transactionView; // @synthesize transactionView=_transactionView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIColor *secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor;
- (void)prepareForReuse;	// IMP=0x0000000000297999
- (void)layoutSubviews;	// IMP=0x00000000002978e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002978ca
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000297821

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
