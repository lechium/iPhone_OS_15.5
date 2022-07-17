//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface GeoTotalRequestCountTableViewController : UITableViewController
{
    NSDictionary *_info;	// 8 = 0x8
    NSDictionary *_sectionDict;	// 16 = 0x10
    NSOrderedSet *_orderedSectionKeys;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004a75d6
@property(retain, nonatomic) NSOrderedSet *orderedSectionKeys; // @synthesize orderedSectionKeys=_orderedSectionKeys;
@property(retain, nonatomic) NSDictionary *sectionDict; // @synthesize sectionDict=_sectionDict;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (unsigned long long)getRequestCountForType:(CDStruct_026435ec)arg1 andApp:(id)arg2;	// IMP=0x00100000004a74b2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000004a71a5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000004a70bd
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000004a6ef9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000004a6eb5
- (void)didReceiveMemoryWarning;	// IMP=0x00100000004a6e86
- (void)viewDidLoad;	// IMP=0x00100000004a6e57
- (void)dataPreProcessing;	// IMP=0x00100000004a66f4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000004a6660

@end
