//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, PUPhotosAlbumViewController;

__attribute__((visibility("hidden")))
@interface PUCurationUtilityComparisonBrowserDebugViewController : UITableViewController
{
    NSMutableArray *_isUtilityButWasnt;	// 8 = 0x8
    NSMutableArray *_wasUtilityButIsnt;	// 16 = 0x10
    NSMutableArray *_isUtilityAndWas;	// 24 = 0x18
    NSMutableArray *_isUtilityForMemoriesButNotUtility;	// 32 = 0x20
    PUPhotosAlbumViewController *_assetCollectionViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000454324
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000454121
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000454116
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000045410b
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000454105
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000004540fd
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004540f5
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000000004540ef
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004540e1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000453d89
- (void)_fetchUtilityAssetInformation;	// IMP=0x0000000000453bf3
- (void)viewDidLoad;	// IMP=0x0000000000453b02

@end

