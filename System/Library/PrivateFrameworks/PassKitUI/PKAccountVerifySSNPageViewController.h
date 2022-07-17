//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount, PKPaymentSetupField, PKPaymentSetupFieldFooterView;

@interface PKAccountVerifySSNPageViewController
{
    PKAccount *_account;	// 8 = 0x8
    PKPaymentSetupField *_aboutCreditReportingField;	// 16 = 0x10
    PKPaymentSetupFieldFooterView *_footerView;	// 24 = 0x18
    _Bool _isLoading;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000271dc5
- (void)_terminateFlow;	// IMP=0x0000000000271d37
- (void)_cancelPressed;	// IMP=0x0000000000271ca9
- (void)_handleNextStep;	// IMP=0x0000000000271415
- (id)defaultHeaderViewSubTitle;	// IMP=0x0000000000271404
- (id)defaultHeaderViewTitle;	// IMP=0x00000000002713f3
- (void)_showSpinner:(_Bool)arg1;	// IMP=0x000000000027136f
- (void)viewDidLoad;	// IMP=0x00000000002711e2
- (id)initWithAccount:(id)arg1 context:(long long)arg2;	// IMP=0x0000000000270f3d

@end
