//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface WFContentAttributionSetDebuggerViewController : UITableViewController
{
    NSArray *_contentItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000057b16
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000057a85
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000057935
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000005787a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000057836
- (void)viewDidLoad;	// IMP=0x0000000000057753

@end
