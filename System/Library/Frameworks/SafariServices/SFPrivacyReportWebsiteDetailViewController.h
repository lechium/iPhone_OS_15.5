//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class WBSTrackedFirstParty;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController
{
    WBSTrackedFirstParty *_website;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000080f03
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000080efb
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000080edc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000080cfe
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000080caf
- (void)viewDidLoad;	// IMP=0x0000000000080be1
- (id)initWithWebsite:(id)arg1;	// IMP=0x0000000000080b5b

@end

