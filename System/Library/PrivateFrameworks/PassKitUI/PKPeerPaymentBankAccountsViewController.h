//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>

@class NSString, PKBankAccountInformation, PKPeerPaymentAccount;

@interface PKPeerPaymentBankAccountsViewController <PKAddBankAccountInformationViewControllerDelegate>
{
    PKBankAccountInformation *_bankInformation;	// 8 = 0x8
    PKPeerPaymentAccount *_account;	// 16 = 0x10
    long long _detailViewStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002fdbf1
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000000002fdb45
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;	// IMP=0x00000000002fdb08
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002fd990
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002fd5f1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002fd5e6
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002fd5a9
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000002fd5a1
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002fd50e
- (id)initWithPeerPaymentAccount:(id)arg1 detailViewStyle:(long long)arg2;	// IMP=0x00000000002fd38a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

