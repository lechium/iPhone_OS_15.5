//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <AppleAccountUI/AAUIDataclassPickerViewControllerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary, NSString;
@protocol AAUISignOutControllerDelegate;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate>
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    long long _currentStyle;	// 16 = 0x10
    NSDictionary *_dataclassOptions;	// 24 = 0x18
    ACAccount *_account;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006b884
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions; // @synthesize _dataclassOptions;
@property(retain, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore; // @synthesize _accountStore;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000006b7e3
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(id)arg2;	// IMP=0x000000000006b6b1
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;	// IMP=0x000000000006b69f
- (id)messageTextForDataclassPickerViewController:(id)arg1;	// IMP=0x000000000006b5d6
- (id)titleTextForDataclassPickerViewController:(id)arg1;	// IMP=0x000000000006b52e
- (id)footerTextForDataclassPickerViewController:(id)arg1;	// IMP=0x000000000006b518
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000006b45e
- (void)_delegate_signOutControllerDidCancel;	// IMP=0x000000000006b3ce
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b31d
- (void)_mainQueue_continueSignOutWithDataclassActions:(id)arg1;	// IMP=0x000000000006b015
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ab9a
- (void)prepareInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006a95f
- (id)_actionableDataclassOptions;	// IMP=0x000000000006a8bb
- (_Bool)_hasPaymentPasses;	// IMP=0x000000000006a6c6
- (_Bool)_hasiCloudPhotosData;	// IMP=0x000000000006a5e7
- (_Bool)_hasiCloudDriveData;	// IMP=0x000000000006a599
- (id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2;	// IMP=0x000000000006a4f3
- (id)_signOutMessageSimplified:(_Bool)arg1 withConfirmation:(_Bool)arg2;	// IMP=0x000000000006a19e
- (id)_spinnerViewControllerForActions:(id)arg1;	// IMP=0x000000000006a05b
- (id)_dataclassViewController;	// IMP=0x0000000000069fe3
- (void)_updateStyleIfNeeded;	// IMP=0x0000000000069e59
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000069e18
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000069d5d
- (void)viewDidLoad;	// IMP=0x0000000000069c20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000069bf6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069acb
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000069a12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUISignOutControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
