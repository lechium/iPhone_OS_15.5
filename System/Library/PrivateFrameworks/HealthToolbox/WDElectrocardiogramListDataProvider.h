//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WDElectrocardiogramListDataProvider
{
    _Bool _shouldConsiderRequeryDueToDeletedObjects;	// 8 = 0x8
    unsigned long long _recentSampleLimit;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
}

@property(nonatomic) _Bool shouldConsiderRequeryDueToDeletedObjects; // @synthesize shouldConsiderRequeryDueToDeletedObjects=_shouldConsiderRequeryDueToDeletedObjects;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long recentSampleLimit; // @synthesize recentSampleLimit=_recentSampleLimit;
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x000000000002b866
- (id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x000000000002b790
- (id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x000000000002b773
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;	// IMP=0x000000000002b687
- (id)_compactCellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;	// IMP=0x000000000002b366
- (id)_waveCellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;	// IMP=0x000000000002b19f
- (id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4;	// IMP=0x000000000002b0ed
- (double)customEstimatedCellHeight;	// IMP=0x000000000002b0d4
- (double)customCellHeight;	// IMP=0x000000000002b0c3
- (void)customizeTableView:(id)arg1;	// IMP=0x000000000002b00c
- (long long)cellStyle;	// IMP=0x000000000002b001
- (id)textForObject:(id)arg1;	// IMP=0x000000000002aff4
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x000000000002afec
- (id)queryDateForSelectedDate:(id)arg1;	// IMP=0x000000000002afa1
- (_Bool)canEditRowAtIndexPath:(id)arg1;	// IMP=0x000000000002af99
- (_Bool)calendarDateSelectorVisible;	// IMP=0x000000000002af91
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x000000000002af62
- (unsigned long long)numberOfSections;	// IMP=0x000000000002af1b
- (id)sampleTypes;	// IMP=0x000000000002ae66
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ac41
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(_Bool)arg5;	// IMP=0x000000000002ab46
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002aa4f
- (id)activeECGAlgorithmVersion;	// IMP=0x000000000002a96b
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 mode:(long long)arg3;	// IMP=0x000000000002a927
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x000000000002a8e4

@end

