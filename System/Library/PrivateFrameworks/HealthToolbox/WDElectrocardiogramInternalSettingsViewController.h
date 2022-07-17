//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKHeartRhythmAvailabilityObserver-Protocol.h>
#import <HealthToolbox/HRElectrocardiogramOnboardingManagerDelegate-Protocol.h>
#import <HealthToolbox/UIPickerViewDataSource-Protocol.h>
#import <HealthToolbox/UIPickerViewDelegate-Protocol.h>

@class HKDateCache, HKHealthStore, HKHeartRhythmAvailability, HKHostingAreaLayoutView, HKKeyValueDomain, HRElectrocardiogramOnboardingManager, NPSManager, NSArray, NSDictionary, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource, HRElectrocardiogramOnboardingManagerDelegate, HKHeartRhythmAvailabilityObserver>
{
    _Bool _deletingSamples;	// 8 = 0x8
    NSArray *_allDemoResults;	// 16 = 0x10
    HKHostingAreaLayoutView *_pickerInputView;	// 24 = 0x18
    UIPickerView *_resultPicker;	// 32 = 0x20
    NSArray *_allAlgorithmVersions;	// 40 = 0x28
    HKHostingAreaLayoutView *_algorithmVersionPickerInputView;	// 48 = 0x30
    UIPickerView *_algorithmVersionPicker;	// 56 = 0x38
    NPSManager *_syncManager;	// 64 = 0x40
    NSArray *_demoResultKeys;	// 72 = 0x48
    HKHealthStore *_healthStore;	// 80 = 0x50
    HKDateCache *_dateCache;	// 88 = 0x58
    HKHeartRhythmAvailability *_heartRhythmAvailability;	// 96 = 0x60
    HRElectrocardiogramOnboardingManager *_onboardingManager;	// 104 = 0x68
    HKKeyValueDomain *_keyValueDomain;	// 112 = 0x70
    NSArray *_keyValueDomainContentKeys;	// 120 = 0x78
    NSDictionary *_keyValueDomainContent;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000054ebd
@property(nonatomic, getter=isDeletingSamples) _Bool deletingSamples; // @synthesize deletingSamples=_deletingSamples;
@property(retain, nonatomic) NSDictionary *keyValueDomainContent; // @synthesize keyValueDomainContent=_keyValueDomainContent;
@property(retain, nonatomic) NSArray *keyValueDomainContentKeys; // @synthesize keyValueDomainContentKeys=_keyValueDomainContentKeys;
@property(readonly, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) NSArray *demoResultKeys; // @synthesize demoResultKeys=_demoResultKeys;
@property(readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) UIPickerView *algorithmVersionPicker; // @synthesize algorithmVersionPicker=_algorithmVersionPicker;
@property(retain, nonatomic) HKHostingAreaLayoutView *algorithmVersionPickerInputView; // @synthesize algorithmVersionPickerInputView=_algorithmVersionPickerInputView;
@property(readonly, nonatomic) NSArray *allAlgorithmVersions; // @synthesize allAlgorithmVersions=_allAlgorithmVersions;
- (void)heartRhythmAvailabilityDidUpdate;	// IMP=0x0000000000054c76
- (void)didDismissOnboarding;	// IMP=0x0000000000054c62
- (void)didCompleteOnboarding;	// IMP=0x0000000000054c4e
- (void)didTapOnElectrocardiogram:(id)arg1;	// IMP=0x0000000000054c11
- (void)_presentOnboardingManagerWithOnboardingType:(long long)arg1;	// IMP=0x0000000000054ab0
- (void)_startUpgrade;	// IMP=0x000000000005499f
- (void)_startFullOnboarding;	// IMP=0x000000000005488d
- (id)_onboardingCompletedAlgorithmVersion;	// IMP=0x000000000005480a
- (unsigned long long)_overrideAlgorithmVersion;	// IMP=0x0000000000054774
- (void)_saveOverrideAlgorithmVersionIfNeeded:(long long)arg1;	// IMP=0x0000000000054696
- (void)_presentAvailabilityInternalSettingsViewController;	// IMP=0x00000000000545e6
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0000000000054244
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000005418c
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000000540ef
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000000540e4
- (void)clearCellIndexNumberLabels;	// IMP=0x0000000000053f64
- (void)updateCellIndexNumberLabels;	// IMP=0x0000000000053cb3
- (void)keyboardDidDismiss:(id)arg1;	// IMP=0x0000000000053b8b
- (id)displayableDescriptionFromValue:(id)arg1;	// IMP=0x000000000005397c
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000053790
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000005376b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000052cab
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x0000000000052c19
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000000052ad8
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000005293c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000000528aa
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000052863
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000052838
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000520a0
- (id)_styleSubtitleCellForTableView:(id)arg1;	// IMP=0x0000000000051f5a
- (id)_styleValue1CellForTableView:(id)arg1 inputView:(id)arg2;	// IMP=0x0000000000051e5d
- (id)_buttonCellForTableView:(id)arg1;	// IMP=0x0000000000051d94
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000051ca3
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000051c98
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000051c4d
@property(readonly, nonatomic) NSArray *allDemoResults; // @synthesize allDemoResults=_allDemoResults;
@property(readonly, nonatomic) HKHostingAreaLayoutView *pickerInputView; // @synthesize pickerInputView=_pickerInputView;
@property(readonly, nonatomic) UIPickerView *resultPicker; // @synthesize resultPicker=_resultPicker;
- (void)reloadKeyValueDomainContent;	// IMP=0x00000000000516b0
- (void)viewDidLoad;	// IMP=0x000000000005147a
- (void)dealloc;	// IMP=0x000000000005142e
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2;	// IMP=0x0000000000051228

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
