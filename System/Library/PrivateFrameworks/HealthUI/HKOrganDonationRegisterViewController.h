//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <HealthUI/HKOrganDonationConnectionManagerDelegate-Protocol.h>
#import <HealthUI/HKOrganDonationRegistrantDelegate-Protocol.h>
#import <HealthUI/HKSimpleDataEntryItemToolbarDelegate-Protocol.h>

@class HKHealthStore, HKOrganDonationConnectionManager, HKOrganDonationRegistrant, NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIFont, UIView, _HKMedicalIDData;

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate>
{
    HKOrganDonationConnectionManager *_connectionManager;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    UIButton *_continueButton;	// 24 = 0x18
    UIActivityIndicatorView *_loadingIndicator;	// 32 = 0x20
    UIBarButtonItem *_loadingIndicatorBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_updateBarButtonItem;	// 48 = 0x30
    UIView *_headerView;	// 56 = 0x38
    UIView *_footerView;	// 64 = 0x40
    _Bool _isLoading;	// 72 = 0x48
    _Bool _isUpdate;	// 73 = 0x49
    UIFont *_bodyFont;	// 80 = 0x50
    _HKMedicalIDData *_medicalIDData;	// 88 = 0x58
    HKOrganDonationRegistrant *_registrant;	// 96 = 0x60
    NSString *_completionButtonTitle;	// 104 = 0x68
    CDUnknownBlockType _registrationCompletionHandler;	// 112 = 0x70
    NSArray *_dataEntryItems;	// 120 = 0x78
    UIBarButtonItem *_nextButton;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001c2e50
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSArray *dataEntryItems; // @synthesize dataEntryItems=_dataEntryItems;
@property(copy, nonatomic) CDUnknownBlockType registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property(retain, nonatomic) NSString *completionButtonTitle; // @synthesize completionButtonTitle=_completionButtonTitle;
@property(retain, nonatomic) HKOrganDonationRegistrant *registrant; // @synthesize registrant=_registrant;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
- (void)organDonationConnectionManagerDidRemoveCredential:(id)arg1;	// IMP=0x00000000001c2d36
- (void)organDonationConnectionManagerDidStoreCredential:(id)arg1;	// IMP=0x00000000001c2ce1
- (void)updateButtonTapped:(id)arg1;	// IMP=0x00000000001c2c20
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x00000000001c2be5
- (void)nextButtonTapped:(id)arg1;	// IMP=0x00000000001c2a60
- (void)organDonationRegistrantDidUpdateValue:(id)arg1;	// IMP=0x00000000001c2a4e
- (void)focusItemAtIndex:(long long)arg1;	// IMP=0x00000000001c2989
- (void)dataEntryItemNextPressed:(id)arg1;	// IMP=0x00000000001c292b
- (void)dataEntryItemPrevPressed:(id)arg1;	// IMP=0x00000000001c28d9
- (void)dataEntryItemDonePressed:(id)arg1;	// IMP=0x00000000001c289a
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001c286b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001c27e2
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001c27b8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001c2730
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001c24f9
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001c24c0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001c2237
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001c21e8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001c21b8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001c2006
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000001c1fb3
- (void)_reloadRegistrantInformationFromServer;	// IMP=0x00000000001c1e9f
- (void)_headerTapped:(id)arg1;	// IMP=0x00000000001c1e82
- (_Bool)_registrantIsUnderAge;	// IMP=0x00000000001c1e27
- (void)_toggleNextButtonEnabledState;	// IMP=0x00000000001c1ccd
- (void)_setupRegisterViewWithDefaultDemographicsInformation;	// IMP=0x00000000001c1abe
- (void)_handleResponse:(id)arg1 status:(long long)arg2;	// IMP=0x00000000001c1435
- (void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;	// IMP=0x00000000001c13e1
- (void)_toggleLoadingStatusIsLoading:(_Bool)arg1;	// IMP=0x00000000001c12ed
- (void)_setupRegisterViewWithRegistrant:(id)arg1 demographicsInformation:(id)arg2;	// IMP=0x00000000001c10b9
- (void)_setupRegisterViewWithRegistrant:(id)arg1;	// IMP=0x00000000001c10a5
- (id)_createTableFooterView;	// IMP=0x00000000001c0e3e
- (id)_createTableHeaderView;	// IMP=0x00000000001c0b75
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001c0b09
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001c09fb
- (void)viewDidLoad;	// IMP=0x00000000001c065d
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000001c0652
- (void)dealloc;	// IMP=0x00000000001c05c8
- (id)init;	// IMP=0x00000000001c0528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
