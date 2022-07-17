//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>

@class CNContact, PKAccount, PKAccountService;

@interface PKAccountServiceBillingAddressViewController <PKAddressEditorViewControllerDelegate>
{
    CNContact *_currentBillingAddress;	// 8 = 0x8
    PKAccountService *_accountService;	// 16 = 0x10
    PKAccount *_account;	// 24 = 0x18
    unsigned long long _accountFeatureIdentifier;	// 32 = 0x20
    long long _detailViewStyle;	// 40 = 0x28
    CDUnknownBlockType _handler;	// 48 = 0x30
    _Bool _loadingNewBillingContact;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003dbc03
- (long long)modalPresentationStyle;	// IMP=0x00000000003dbba7
- (id)requiredBillingAddressKeys;	// IMP=0x00000000003dbb13
- (id)_enterNewBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000003db9ce
- (id)_currentBillingAddressCellForRowIndex:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000003db868
- (void)_didSelectChangeAddress;	// IMP=0x00000000003db51d
- (void)addressEditorViewControllerDidCancel:(id)arg1;	// IMP=0x00000000003db4d9
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;	// IMP=0x00000000003db116
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000003dada8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000003dad0f
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000003dacd5
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000003dacb8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003daca3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000003dac94
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000003dac23
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003dab64
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000003dab57
- (void)viewDidLoad;	// IMP=0x00000000003daa80
- (id)initWithBillingAddress:(id)arg1 account:(id)arg2 accountService:(id)arg3 detailViewStyle:(long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003da689

@end
