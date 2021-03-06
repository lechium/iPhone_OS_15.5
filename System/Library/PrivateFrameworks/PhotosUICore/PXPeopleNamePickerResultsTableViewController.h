//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController
{
    NSString *_personLocalIdentifier;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSArray *_suggestedContacts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000088cf5d
@property(retain) NSArray *suggestedContacts; // @synthesize suggestedContacts=_suggestedContacts;
@property(retain) NSMutableArray *items; // @synthesize items=_items;
@property(retain) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000088c9de
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000088c99a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000088c98f
- (id)personAtIndexPath:(id)arg1;	// IMP=0x000000000088c8de
- (id)contactAtIndexPath:(id)arg1;	// IMP=0x000000000088c82d
@property(readonly, nonatomic) _Bool hasResults;
- (void)updateItemsForSearchString:(id)arg1;	// IMP=0x000000000088bbb9
- (void)viewDidLoad;	// IMP=0x000000000088baad
- (id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3;	// IMP=0x000000000088ba14
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000088b9b7

@end

