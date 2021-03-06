//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary, PUCurationClassificationSignalAssetBrowserDebugViewController;

__attribute__((visibility("hidden")))
@interface PUCurationClassificationSignalBrowserDebugViewController : UITableViewController
{
    NSArray *_sectionNames;	// 8 = 0x8
    NSDictionary *_signalIdentifiersBySectionName;	// 16 = 0x10
    NSDictionary *_signalInfoBySignalIdentifier;	// 24 = 0x18
    NSDictionary *_countsBySignalIdentifier;	// 32 = 0x20
    NSDictionary *_signalConfidenceByAssetUUIDBySignalIdentifier;	// 40 = 0x28
    unsigned long long _numberOfAssets;	// 48 = 0x30
    PUCurationClassificationSignalAssetBrowserDebugViewController *_assetCollectionViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002289a0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000227c4c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000227c05
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000227be5
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000227bc8
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000227bc2
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000227bba
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000227bb2
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x0000000000227bac
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000227b9e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002278a6
- (id)signalIdentifiersForSection:(long long)arg1;	// IMP=0x0000000000227834
- (id)signalNameForUnknownSignalIdentifier:(int)arg1;	// IMP=0x0000000000227798
- (void)_fetchSignals;	// IMP=0x0000000000226dd1
- (void)viewDidLoad;	// IMP=0x0000000000226ce0

@end

