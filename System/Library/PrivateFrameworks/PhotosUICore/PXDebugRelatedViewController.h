//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSCountedSet, NSDictionary, NSMutableDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugRelatedViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
    UISegmentedControl *_segmentedControl;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    double _curationScore;	// 24 = 0x18
    double _graphScore;	// 32 = 0x20
    double _neighborScore;	// 40 = 0x28
    double _relatedScore;	// 48 = 0x30
    double _matchingScore;	// 56 = 0x38
    _Bool _isInteresting;	// 64 = 0x40
    unsigned long long _relatedType;	// 72 = 0x48
    NSString *_debugDescription;	// 80 = 0x50
    NSDictionary *_matchingWeight;	// 88 = 0x58
    NSDictionary *_matchingKeywords;	// 96 = 0x60
    NSDictionary *_referenceKeywords;	// 104 = 0x68
    NSDictionary *_relatedKeywords;	// 112 = 0x70
    NSMutableDictionary *_currentKeywords;	// 120 = 0x78
    NSCountedSet *_countedKeywords;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001a8302
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a8298
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a7f29
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001a7e75
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001a7e26
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;	// IMP=0x00000000001a7e0d
- (void)_closeAction:(id)arg1;	// IMP=0x00000000001a7df4
- (void)_sendByEmailAction:(id)arg1;	// IMP=0x00000000001a7902
- (void)_switchLogsAction:(id)arg1;	// IMP=0x00000000001a7878
- (void)_initDataSourceWithKeywords:(id)arg1;	// IMP=0x00000000001a77cf
- (void)viewDidLoad;	// IMP=0x00000000001a6ca7
- (void)_setupWithDictionary:(id)arg1;	// IMP=0x00000000001a6952
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a68ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

