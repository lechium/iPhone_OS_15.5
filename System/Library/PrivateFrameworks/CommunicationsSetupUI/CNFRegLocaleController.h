//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CommunicationsSetupUI/CNFRegRegionChooserDelegate-Protocol.h>

@class NSArray, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CNFRegLocaleController <CNFRegRegionChooserDelegate>
{
    NSString *_currentRegionID;	// 296 = 0x128
    NSString *_currentPhoneValue;	// 304 = 0x130
    PSSpecifier *_countryFieldSpecifier;	// 312 = 0x138
    NSArray *_phoneNumberSpecifiers;	// 320 = 0x140
    PSSpecifier *_phoneNumberGroupSpecifier;	// 328 = 0x148
    PSSpecifier *_phoneNumberFieldSpecifier;	// 336 = 0x150
    NSArray *_regionData;	// 344 = 0x158
    _Bool _isLoading;	// 352 = 0x160
    _Bool _isError;	// 353 = 0x161
    id _regionListChangeObserver;	// 360 = 0x168
    CDUnknownBlockType _completionBlock;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x0000000000058dc4
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSArray *regionData; // @synthesize regionData=_regionData;
@property(copy, nonatomic) NSString *currentPhoneValue; // @synthesize currentPhoneValue=_currentPhoneValue;
@property(copy, nonatomic) NSString *currentRegionID; // @synthesize currentRegionID=_currentRegionID;
- (void)_setupEventHandlers;	// IMP=0x0000000000058635
- (void)_buildSpecifierCache:(id)arg1;	// IMP=0x00000000000585e0
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;	// IMP=0x0000000000058461
- (void)_buildCountryFieldSpecifierCache:(id)arg1;	// IMP=0x000000000005841b
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;	// IMP=0x00000000000583dd
- (void)hideCountryPicker;	// IMP=0x00000000000583c6
- (void)showCountryPicker;	// IMP=0x00000000000583af
- (void)_hideCountryPickerAnimated:(_Bool)arg1;	// IMP=0x00000000000582c4
- (void)_showCountryPickerAnimated:(_Bool)arg1;	// IMP=0x0000000000057f60
- (void)_handleTimeout;	// IMP=0x0000000000057db5
- (void)_startTimeout;	// IMP=0x0000000000057d9b
- (void)_rightButtonTapped;	// IMP=0x0000000000057663
- (id)_rightButtonItem;	// IMP=0x00000000000575a0
- (void)_finishValidation;	// IMP=0x00000000000574d0
- (void)_failValidationWithError:(id)arg1;	// IMP=0x00000000000571c4
- (void)_refreshPhoneFieldAnimated:(_Bool)arg1;	// IMP=0x0000000000057173
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000057015
- (id)currentPhoneNumberForSpecifier:(id)arg1;	// IMP=0x0000000000056d8f
- (id)_unformattedPhoneNumber:(id)arg1;	// IMP=0x0000000000056d6e
- (id)currentPhoneCompatibleCountryCode;	// IMP=0x0000000000056ce8
- (id)_phoneTextField;	// IMP=0x0000000000056c8d
- (void)_showPhoneField:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000056ba0
- (void)_refreshCountryFieldAnimated:(_Bool)arg1;	// IMP=0x0000000000056b81
- (id)currentCountryValueForSpecifier:(id)arg1;	// IMP=0x0000000000056a60
- (id)_currentRegion;	// IMP=0x00000000000569d9
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000056973
- (void)_updateControllerState;	// IMP=0x0000000000056758
- (void)_updateUI;	// IMP=0x0000000000056469
- (void)_handleRegionListLoad;	// IMP=0x00000000000563b0
- (void)_stopListeningForRegionListChanges;	// IMP=0x0000000000056282
- (void)_startListeningForRegionListChanges;	// IMP=0x0000000000055fdd
- (id)titleString;	// IMP=0x0000000000055fd0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000055ef6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000055e9e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000055e34
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000055de4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000055d30
- (void)_loadInitialValues;	// IMP=0x0000000000055ae3
- (void)_loadRegionsIfNecessary;	// IMP=0x0000000000055a65
- (id)countryList;	// IMP=0x0000000000055a53
- (id)validationString;	// IMP=0x0000000000055996
- (id)logName;	// IMP=0x0000000000055989
- (id)controllerForSpecifier:(id)arg1;	// IMP=0x00000000000558a7
- (id)specifierList;	// IMP=0x00000000000556f3
- (id)bundle;	// IMP=0x00000000000556e9
- (void)dismiss;	// IMP=0x0000000000055662
- (id)initWithRegController:(id)arg1;	// IMP=0x000000000005541c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

