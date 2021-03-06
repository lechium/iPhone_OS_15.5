//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <HealthToolbox/HKMedicalIDViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKMedicalIDViewController, HKNavigationController, NSString, SOSContactsManager, UIAlertController, UIScrollView, UIStackView, WDProfile, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder>
{
    _HKMedicalIDData *_medicalIDData;	// 8 = 0x8
    _Bool _medicalIDIsNew;	// 16 = 0x10
    UIScrollView *_introView;	// 24 = 0x18
    UIStackView *_introStackView;	// 32 = 0x20
    _Bool _loadingMedicalID;	// 40 = 0x28
    int _medicalIDChangedToken;	// 44 = 0x2c
    HKNavigationController *_medicalIDEditor;	// 48 = 0x30
    _Bool _shouldShowConsolidationAlert;	// 56 = 0x38
    _Bool _shouldReloadMedicalIDData;	// 57 = 0x39
    HKMedicalIDViewController *_currentMedicalIDViewController;	// 64 = 0x40
    UIAlertController *_consolidationAlertController;	// 72 = 0x48
    SOSContactsManager *_sosContactsManager;	// 80 = 0x50
    WDProfile *_profile;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000633f0
@property(nonatomic) _Bool shouldReloadMedicalIDData; // @synthesize shouldReloadMedicalIDData=_shouldReloadMedicalIDData;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) SOSContactsManager *sosContactsManager; // @synthesize sosContactsManager=_sosContactsManager;
@property(nonatomic) __weak UIAlertController *consolidationAlertController; // @synthesize consolidationAlertController=_consolidationAlertController;
@property(nonatomic) __weak HKMedicalIDViewController *currentMedicalIDViewController; // @synthesize currentMedicalIDViewController=_currentMedicalIDViewController;
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000000063334
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000000063322
- (void)_updateActivityForViewDidAppear;	// IMP=0x00000000000632a1
- (id)uniqueUserActivityType;	// IMP=0x0000000000063294
- (id)_createMedicalIDDataFromMeCardAndHealthKit;	// IMP=0x00000000000630ad
- (void)medicalIDViewControllerDidAppear:(id)arg1;	// IMP=0x000000000006309b
- (void)medicalIDViewControllerDidDelete:(id)arg1;	// IMP=0x0000000000063000
- (void)medicalIDViewControllerDidSave:(id)arg1;	// IMP=0x0000000000062fee
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000062fa4
- (void)_assertViewStateWhenViewDidAppear;	// IMP=0x0000000000062f17
- (void)_dismissMedicalIDEditor;	// IMP=0x0000000000062e5f
- (void)_dismissMedicalIDView;	// IMP=0x0000000000062e18
- (void)_pushAndSetCurrentMedicalIDViewController:(id)arg1;	// IMP=0x0000000000062d94
- (void)_showMedicalIDView;	// IMP=0x0000000000062ade
- (void)_showMedicalIDEditor;	// IMP=0x00000000000629e2
- (id)medicalIDViewControllerInEditMode:(_Bool)arg1;	// IMP=0x0000000000062906
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000628a0
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000062898
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000062678
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000062604
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000625d3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000624b4
- (void)_organDonationSignupButtonTapped:(id)arg1;	// IMP=0x0000000000062328
- (void)_createMedicalIDTapped:(id)arg1;	// IMP=0x00000000000622cb
- (void)_consolidateSOSContactsWithMedicalIDContacts;	// IMP=0x0000000000062103
- (void)_showContactsConsolidationAlert;	// IMP=0x0000000000061e00
- (void)_checkForEmergencyContactConsolidationNeeds;	// IMP=0x0000000000061b25
- (void)_handleFetchedMedicalIDData:(id)arg1;	// IMP=0x0000000000061a1b
- (void)_loadMedicalIDDataIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061747
- (void)updateNavigationbar;	// IMP=0x0000000000061593
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000061588
- (long long)preferredStatusBarStyle;	// IMP=0x000000000006157d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000061520
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000614a7
- (void)viewDidLoad;	// IMP=0x0000000000061066
- (void)dealloc;	// IMP=0x0000000000060fe1
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000060e5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

