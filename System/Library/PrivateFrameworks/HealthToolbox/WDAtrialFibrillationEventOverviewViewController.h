//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKFeatureStatusProvidingObserver-Protocol.h>
#import <HealthToolbox/HKOnboardingSetupViewDelegate-Protocol.h>
#import <HealthToolbox/HRAtrialFibrillationOnboardingManagerDelegate-Protocol.h>
#import <HealthToolbox/UITextViewDelegate-Protocol.h>

@class HKDisplayType, HKFeatureStatus, HKFeatureStatusManager, HKKeyValueDomain, HRAtrialFibrillationOnboardingManager, NSArray, NSDate, NSString, UITapGestureRecognizer, WDProfile;
@protocol HKDataMetadataSectionProtocol, WDDataListViewControllerDataProvider;

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController <HRAtrialFibrillationOnboardingManagerDelegate, UITextViewDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver>
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    id <WDDataListViewControllerDataProvider> _dataProvider;	// 16 = 0x10
    long long _totalSampleCount;	// 24 = 0x18
    HKDisplayType *_displayType;	// 32 = 0x20
    WDProfile *_profile;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
    HRAtrialFibrillationOnboardingManager *_onboardingManager;	// 56 = 0x38
    HKKeyValueDomain *_keyValueDomain;	// 64 = 0x40
    HKFeatureStatusManager *_statusManager;	// 72 = 0x48
    long long _detectionState;	// 80 = 0x50
    UITapGestureRecognizer *_tripleTapToSettingsRecognizer;	// 88 = 0x58
    HKFeatureStatus *_featureStatus;	// 96 = 0x60
    NSArray *_sectionsToDisplay;	// 104 = 0x68
    id <HKDataMetadataSectionProtocol> _metaDataSection;	// 112 = 0x70
    NSDate *_latestAnalyzedSampleDate;	// 120 = 0x78
    long long _visibleSampleCount;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000018c35
@property(nonatomic) long long visibleSampleCount; // @synthesize visibleSampleCount=_visibleSampleCount;
@property(retain, nonatomic) NSDate *latestAnalyzedSampleDate; // @synthesize latestAnalyzedSampleDate=_latestAnalyzedSampleDate;
@property(retain, nonatomic) id <HKDataMetadataSectionProtocol> metaDataSection; // @synthesize metaDataSection=_metaDataSection;
@property(retain, nonatomic) NSArray *sectionsToDisplay; // @synthesize sectionsToDisplay=_sectionsToDisplay;
@property(retain, nonatomic) HKFeatureStatus *featureStatus; // @synthesize featureStatus=_featureStatus;
@property(retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer; // @synthesize tripleTapToSettingsRecognizer=_tripleTapToSettingsRecognizer;
@property(nonatomic) long long detectionState; // @synthesize detectionState=_detectionState;
@property(retain, nonatomic) HKFeatureStatusManager *statusManager; // @synthesize statusManager=_statusManager;
@property(retain, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) HRAtrialFibrillationOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
@property(nonatomic) long long totalSampleCount; // @synthesize totalSampleCount=_totalSampleCount;
@property(retain, nonatomic) id <WDDataListViewControllerDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)didDismissOnboarding;	// IMP=0x0000000000018a04
- (void)didCompleteOnboarding;	// IMP=0x00000000000189f0
- (void)didEnableAtrialFibrillationNotifications;	// IMP=0x00000000000189de
- (void)launchOnboardingToReenableFeature;	// IMP=0x00000000000189ca
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;	// IMP=0x00000000000189b3
- (id)_atrialFibrillationSetupContainerView;	// IMP=0x00000000000188dc
- (void)_reloadAtrialFibrillationSetupTableHeaderView;	// IMP=0x000000000001852b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000000184a0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001818c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000018000
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000017b4c
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000001791d
- (id)_atrialFibrillationDetectionRescindedHeaderView;	// IMP=0x000000000001751c
- (id)_sectionHeaderViewWithTitle:(id)arg1;	// IMP=0x0000000000017460
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000017260
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000017010
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000016eda
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000016e96
@property(nonatomic, getter=isFavorited) _Bool favorited;
- (void)reloadFavoritesSection;	// IMP=0x0000000000016ddd
- (void)didSelectRegulatoryRow;	// IMP=0x0000000000016dd7
- (id)_pushDataSourcesAndAccessController;	// IMP=0x0000000000016c98
- (id)_pushShowAllViewController;	// IMP=0x0000000000016acb
- (id)_cellForIRN2ConsentForm;	// IMP=0x0000000000016a16
- (id)_cellForAFibEducationalMaterialInTable:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000001698d
- (id)_cellForAFibEventInTable:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000016890
- (id)_cellForDataTypeDescription;	// IMP=0x00000000000167d7
- (id)_cellForRegulatory;	// IMP=0x00000000000166b2
- (id)_cellForShowAll;	// IMP=0x00000000000164fd
- (id)_cellForDataSourcesAndAccess;	// IMP=0x000000000001641a
- (id)_cellForFavorites;	// IMP=0x000000000001630b
- (void)_getLatestAnalyzedSampleDate;	// IMP=0x0000000000016142
- (void)recomputeTotalSampleCount;	// IMP=0x0000000000015e88
- (void)_reloadAllData;	// IMP=0x0000000000015da7
- (void)_updateDetectionState;	// IMP=0x000000000001585e
- (_Bool)_hasDetailViewController;	// IMP=0x0000000000015849
- (void)_startOnboardingForFirstTime:(_Bool)arg1;	// IMP=0x00000000000156c7
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;	// IMP=0x00000000000155a4
- (void)_reloadTableViewAndScrollToTop;	// IMP=0x000000000001543d
- (double)adjustedSafeAreaInsetTop;	// IMP=0x00000000000153ce
- (id)userConfigurationRowsToDisplay;	// IMP=0x0000000000015398
- (long long)_sectionIndexForSection:(long long)arg1;	// IMP=0x0000000000015336
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000150b5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000014f8e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000014f4d
- (void)viewDidLoad;	// IMP=0x0000000000014a9f
- (void)dealloc;	// IMP=0x0000000000014a2a
- (void)_showInternalSettingsViewController;	// IMP=0x00000000000149a1
- (id)makeInternalSettingsControllerWithHealthStore:(id)arg1;	// IMP=0x0000000000014988
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 mode:(long long)arg3;	// IMP=0x0000000000014694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

