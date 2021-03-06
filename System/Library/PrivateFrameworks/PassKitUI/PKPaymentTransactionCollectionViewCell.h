//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentTransactionCellResponder-Protocol.h>

@class NSString, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell <PKPaymentTransactionCellResponder>
{
    NSString *_identifier;	// 8 = 0x8
    PKPaymentTransactionView *_transactionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b2ffd
@property(readonly, nonatomic) PKPaymentTransactionView *transactionView; // @synthesize transactionView=_transactionView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (double)maxWidthForTransactionCellInWidth:(double)arg1;	// IMP=0x00000000000b2f99
- (void)layoutSubviews;	// IMP=0x00000000000b2ee7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b2e89
- (void)prepareForReuse;	// IMP=0x00000000000b2d89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b2cd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

