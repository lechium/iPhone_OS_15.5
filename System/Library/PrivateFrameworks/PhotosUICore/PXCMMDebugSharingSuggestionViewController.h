//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PHAssetCollection, UISegmentedControl, UITableView;

@interface PXCMMDebugSharingSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
    NSArray *_sectionTitles;	// 8 = 0x8
    NSDictionary *_tableContent;	// 16 = 0x10
    NSDictionary *_sourceDictionary;	// 24 = 0x18
    UISegmentedControl *_segmentedControl;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    PHAssetCollection *_sourceSuggestion;	// 48 = 0x30
}

+ (_Bool)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3 sourceSuggestion:(id)arg4 sourceDictionary:(id)arg5;	// IMP=0x0000000000a23561
- (void).cxx_destruct;	// IMP=0x0000000000a23245
@property(retain, nonatomic) PHAssetCollection *sourceSuggestion; // @synthesize sourceSuggestion=_sourceSuggestion;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000a231b6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000a22eab
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000a22e2f
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000a22e12
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x0000000000a22df9
- (void)_closeAction:(id)arg1;	// IMP=0x0000000000a22de0
- (void)_sendByEmailAction:(id)arg1;	// IMP=0x0000000000a22a9b
- (void)_switchLogsAction:(id)arg1;	// IMP=0x0000000000a22936
- (void)viewDidLoad;	// IMP=0x0000000000a22482
- (id)_debugDictionary;	// IMP=0x0000000000a22475
- (id)initWithSharingSuggestion:(id)arg1;	// IMP=0x0000000000a22292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

