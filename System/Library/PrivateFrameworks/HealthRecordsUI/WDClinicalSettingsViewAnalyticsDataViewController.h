//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class HKHealthRecordsStore, NSArray, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController
{
    HKHealthRecordsStore *_healthRecordsStore;	// 8 = 0x8
    NSArray *_filePaths;	// 16 = 0x10
    _UIContentUnavailableView *_noDataView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002ec32
@property(retain) _UIContentUnavailableView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (id)description;	// IMP=0x000000000002eb1d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002e9c2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002e88d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002e79c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002e791
- (void)fetchClinicalOptInDataCollectionFilePaths;	// IMP=0x000000000002e549
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000002e53e
- (void)viewDidLoad;	// IMP=0x000000000002e361

@end
