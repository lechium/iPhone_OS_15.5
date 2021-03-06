//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKBarcodePaymentPrivacyViewController
{
    unsigned long long _displayContext;	// 8 = 0x8
    NSString *_issuerName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ec16
- (void)_dismiss;	// IMP=0x000000000005ebd2
- (void)_closeButtonPressed:(id)arg1;	// IMP=0x000000000005ebc0
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000005ebae
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000005eba6
- (void)viewDidLoad;	// IMP=0x000000000005e955
- (id)initWithIssuerName:(id)arg1 displayContext:(unsigned long long)arg2 paymentSetupContext:(long long)arg3;	// IMP=0x000000000005e8cb

@end

