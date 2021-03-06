//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDDataListViewControllerDataProvider-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController, NSMutableArray, NSMutableSet, NSPredicate, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>
{
    _Bool _hasDetailViewController;	// 8 = 0x8
    _Bool _hasCompleteDataSet;	// 9 = 0x9
    NSPredicate *defaultQueryPredicate;	// 16 = 0x10
    NSString *_profileName;	// 24 = 0x18
    NSMutableArray *_data;	// 32 = 0x20
    NSMutableArray *_activeDataQueries;	// 40 = 0x28
    NSMutableSet *_activeQueryTypes;	// 48 = 0x30
    HKDisplayType *_displayType;	// 56 = 0x38
    WDProfile *_profile;	// 64 = 0x40
    HKUnitPreferenceController *_unitController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000073645
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSMutableSet *activeQueryTypes; // @synthesize activeQueryTypes=_activeQueryTypes;
@property(retain, nonatomic) NSMutableArray *activeDataQueries; // @synthesize activeDataQueries=_activeDataQueries;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property _Bool hasCompleteDataSet; // @synthesize hasCompleteDataSet=_hasCompleteDataSet;
@property(nonatomic) _Bool hasDetailViewController; // @synthesize hasDetailViewController=_hasDetailViewController;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate; // @synthesize defaultQueryPredicate;
- (id)_predicateForTheLastMonth;	// IMP=0x00000000000734a6
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072f1c
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072775
- (void)viewControllerIsNearEndOfScreen;	// IMP=0x000000000007276f
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000072533
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000720b2
- (void)deleteAllData;	// IMP=0x0000000000072079
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;	// IMP=0x0000000000072055
- (void)stopCollectingData;	// IMP=0x0000000000071eb3
- (unsigned long long)_statisticsOptionsForSampleType:(id)arg1;	// IMP=0x0000000000071e7f
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071ac1
- (void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(_Bool)arg4 withError:(id)arg5 updateHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000071725
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;	// IMP=0x000000000007f96a
@property(readonly, nonatomic) double customEstimatedCellHeight;
@property(readonly, nonatomic) double customCellHeight;
- (void)customizeTableView:(id)arg1;	// IMP=0x000000000007171f
@property(readonly, nonatomic) _Bool textAdjustsFontSizeToFitWidth;
- (id)secondaryTextForObject:(id)arg1;	// IMP=0x0000000000071684
- (id)textForObject:(id)arg1;	// IMP=0x000000000007f8f3
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;	// IMP=0x000000000007166e
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x0000000000071658
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x0000000000071605
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) long long cellStyle;
- (id)_statisticsAtIndexPath:(id)arg1;	// IMP=0x00000000000715bd
- (id)sampleTypes;	// IMP=0x00000000000715b0
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x0000000000071497

// Remaining properties
@property(readonly) _Bool calendarDateSelectorVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

