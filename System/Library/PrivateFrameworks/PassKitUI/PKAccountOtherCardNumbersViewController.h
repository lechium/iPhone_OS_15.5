//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass, PKPhysicalCard;

@interface PKAccountOtherCardNumbersViewController
{
    PKPhysicalCard *_physicalCard;	// 8 = 0x8
    PKPaymentPass *_paymentPass;	// 16 = 0x10
    unsigned long long _accountFeatureIdentifier;	// 24 = 0x18
    long long _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000153ccf
- (id)_applePayCardNumberHeaderWithTableView:(id)arg1;	// IMP=0x0000000000153bcf
- (id)_titaniumCardNumberHeaderWithTableView:(id)arg1;	// IMP=0x0000000000153acf
- (void)_appendApplePayCardNumberSectionToConfiguration:(id)arg1;	// IMP=0x0000000000153874
- (void)_appendPhysicalCardSectionToConfiguration:(id)arg1;	// IMP=0x0000000000153697
- (void)_updateCardNumbersConfigurationAnimated:(_Bool)arg1;	// IMP=0x0000000000153607
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000015356c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000015355b
- (void)viewDidLoad;	// IMP=0x0000000000153463
- (id)initWithPhysicalCard:(id)arg1 paymentPass:(id)arg2 accountFeatureIdentifier:(unsigned long long)arg3 context:(long long)arg4;	// IMP=0x0000000000153381

@end

