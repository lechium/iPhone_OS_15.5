//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PKAccount, PKBankAccountInformation, PKFindBankAccountInformationFooterView, PKTableHeaderView, UIButton;
@protocol PKAddBankAccountInformationViewControllerDelegate;

@interface PKAddBankAccountInformationViewController <UITextFieldDelegate>
{
    PKTableHeaderView *_tableHeader;	// 8 = 0x8
    PKFindBankAccountInformationFooterView *_footerView;	// 16 = 0x10
    UIButton *_deleteBankInformationButton;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    PKBankAccountInformation *_bankInformation;	// 40 = 0x28
    NSArray *_cellText;	// 48 = 0x30
    NSArray *_cellPlaceholderText;	// 56 = 0x38
    NSMutableDictionary *_cells;	// 64 = 0x40
    NSString *_accountCountryCode;	// 72 = 0x48
    NSMutableDictionary *_userEnteredValues;	// 80 = 0x50
    _Bool _isEditingBankInformation;	// 88 = 0x58
    _Bool _hasInteractedWithCell;	// 89 = 0x59
    _Bool _prefilledFromKeychain;	// 90 = 0x5a
    NSMutableDictionary *_cellHasPastedContent;	// 96 = 0x60
    PKAccount *_featureAccount;	// 104 = 0x68
    _Bool _offerKeychainPreFill;	// 112 = 0x70
    id <PKAddBankAccountInformationViewControllerDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000305b01
@property(nonatomic) __weak id <PKAddBankAccountInformationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool offerKeychainPreFill; // @synthesize offerKeychainPreFill=_offerKeychainPreFill;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3;	// IMP=0x000000000030596b
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2;	// IMP=0x0000000000305888
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1;	// IMP=0x00000000003057c6
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1;	// IMP=0x00000000003057a5
- (unsigned long long)_minTextLengthForRow:(unsigned long long)arg1;	// IMP=0x0000000000305786
- (void)_showHowToFindAccountInformationViewController:(id)arg1;	// IMP=0x0000000000305482
- (id)_footerView;	// IMP=0x00000000003051f9
- (id)_headerTitle;	// IMP=0x00000000003051c2
- (void)_updateHeaderAndNavigationItems;	// IMP=0x000000000030507d
- (id)_headerSubTitle;	// IMP=0x0000000000305033
- (void)_addPaymentFundingSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000030496e
- (void)_updateBankAccountInformationWithValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003042f8
- (void)_deleteBankInformation;	// IMP=0x00000000003040ac
- (void)_setNavigationBarItemsHidden:(_Bool)arg1;	// IMP=0x0000000000303f89
- (void)_setNavigationBarEnabled:(_Bool)arg1;	// IMP=0x0000000000303e81
- (void)_setIdleTimerDisabled:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x0000000000303d3b
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0000000000303b08
- (void)_setTableViewHeaderActivitySpinnerAnimated:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x0000000000303996
- (void)_hideHeaderActivitySpinner;	// IMP=0x0000000000303978
- (void)_showHeaderActivitySpinner;	// IMP=0x000000000030392b
- (id)_placeholderTextForRow:(unsigned long long)arg1;	// IMP=0x00000000003038c5
- (id)_textForRow:(unsigned long long)arg1;	// IMP=0x0000000000303881
- (id)_bankInformationTextForRow:(unsigned long long)arg1;	// IMP=0x0000000000303765
- (void)_reloadTableSection;	// IMP=0x000000000030368a
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0000000000302804
- (void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2;	// IMP=0x0000000000302722
- (id)_userEnteredTextForCellAtRow:(unsigned long long)arg1;	// IMP=0x0000000000302675
- (_Bool)_isCellValidAtRow:(unsigned long long)arg1;	// IMP=0x00000000003025dc
- (_Bool)_isRoutingNumberCellValid;	// IMP=0x00000000003025c8
- (_Bool)_isAccountNumberCellValid;	// IMP=0x00000000003025b1
- (_Bool)_cellValuesAreValid;	// IMP=0x0000000000302578
- (void)textFieldDidClear:(id)arg1;	// IMP=0x0000000000302545
- (double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2;	// IMP=0x000000000030234f
- (unsigned long long)_rowWithTextField:(id)arg1;	// IMP=0x00000000003021d4
- (void)_setTableFooterView;	// IMP=0x0000000000302119
- (_Bool)_allCellsHavePastedContent;	// IMP=0x000000000030203d
- (void)_setCellHasPastedContent:(_Bool)arg1 forRow:(unsigned long long)arg2;	// IMP=0x0000000000301f8e
- (id)_cellHasPastedContent;	// IMP=0x0000000000301ea1
- (void)next:(id)arg1;	// IMP=0x0000000000301e81
- (void)cancel:(id)arg1;	// IMP=0x0000000000301dd9
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000301ba3
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000000301b28
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000301a0c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000301934
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000301584
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000301576
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000030156b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000301560
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000030108a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000300fe8
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000300a8f
- (void)loadView;	// IMP=0x000000000030063a
- (void)dealloc;	// IMP=0x00000000003005c5
- (id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4 featureAccount:(id)arg5;	// IMP=0x0000000000300124
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3 featureAccount:(id)arg4;	// IMP=0x00000000003000f4
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3;	// IMP=0x00000000003000c3
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00000000003000bb
- (id)init;	// IMP=0x000000000030009e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

