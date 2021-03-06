//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class EKCalendarColorEditItem;

@interface EKCalendarColorViewController : UITableViewController
{
    EKCalendarColorEditItem *_editItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000106125
@property(retain, nonatomic) EKCalendarColorEditItem *editItem; // @synthesize editItem=_editItem;
- (struct CGSize)preferredContentSize;	// IMP=0x000000000010608c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000010606f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000105f9e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000105f62
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000105f45
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000105f3a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000105f28
- (void)resetBackgroundColor;	// IMP=0x0000000000105e94
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0000000000105e3c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000105de9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000105d82
- (void)viewDidLoad;	// IMP=0x0000000000105d70
- (id)init;	// IMP=0x0000000000105cc0

@end

