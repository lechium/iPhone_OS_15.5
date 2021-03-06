//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKDataMetadataDeletionSectionDelegate-Protocol.h>
#import <HealthToolbox/HKElectrocardiogramMetadataViewDelegate-Protocol.h>

@class HKElectrocardiogram, HRElectrocardiogramReportGenerator, NSMutableArray, WDElectrocardiogramReportDataSource;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate>
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    _Bool _actionsEnabled;	// 9 = 0x9
    HKElectrocardiogram *_sample;	// 16 = 0x10
    long long _activeAlgorithmVersion;	// 24 = 0x18
    id <HKDataMetadataViewControllerDelegate> _delegate;	// 32 = 0x20
    NSMutableArray *_sections;	// 40 = 0x28
    WDElectrocardiogramReportDataSource *_reportDataSource;	// 48 = 0x30
    HRElectrocardiogramReportGenerator *_reportGenerator;	// 56 = 0x38
    long long _mode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000021ea6
@property(nonatomic) _Bool actionsEnabled; // @synthesize actionsEnabled=_actionsEnabled;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator; // @synthesize reportGenerator=_reportGenerator;
@property(retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource; // @synthesize reportDataSource=_reportDataSource;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long activeAlgorithmVersion; // @synthesize activeAlgorithmVersion=_activeAlgorithmVersion;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
@property(retain, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
- (long long)sampleAlgorithmVersion;	// IMP=0x0000000000021d04
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000021c2c
- (void)deleteSampleTriggeredBySection:(id)arg1;	// IMP=0x0000000000021a8f
- (void)presentPDFViewController;	// IMP=0x0000000000021910
- (void)shareButtonTapped:(id)arg1;	// IMP=0x0000000000021746
- (void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1;	// IMP=0x00000000000216ba
- (_Bool)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1;	// IMP=0x00000000000216b2
- (id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2;	// IMP=0x000000000002160b
- (void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1;	// IMP=0x00000000000214f5
- (void)deletionSectionDidSelectRow:(id)arg1;	// IMP=0x0000000000021228
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002113d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000021049
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000020f15
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000020ea1
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000020e21
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000020da1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000020d5d
- (id)_electrocardiogramMetadataContainerView;	// IMP=0x0000000000020bf8
- (void)_reloadElectrocardiogramMetadataTableHeaderView;	// IMP=0x000000000002094b
- (void)_loadSections;	// IMP=0x00000000000202f8
- (_Bool)_addSectionIfNonNull:(id)arg1;	// IMP=0x0000000000020279
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000002026e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002018f
- (void)viewDidLoad;	// IMP=0x000000000001ff09
- (void)_localeOrDisplayTypeChange:(id)arg1;	// IMP=0x000000000001febc
- (long long)_fetchActiveAlgorithmVersionWithHealthStore:(id)arg1;	// IMP=0x000000000001fdfb
- (void)dealloc;	// IMP=0x000000000001fd86
- (id)initWithSample:(id)arg1 delegate:(id)arg2 mode:(long long)arg3 activeAlgorithmVersion:(id)arg4;	// IMP=0x000000000001fa77

@end

