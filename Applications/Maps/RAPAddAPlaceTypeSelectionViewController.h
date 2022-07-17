//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString, RAPAddNewPlaceQuestion;
@protocol RAPAddAPlaceTypeSelectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RAPAddAPlaceTypeSelectionViewController : UITableViewController
{
    id <RAPAddAPlaceTypeSelectionViewControllerDelegate> _delegate;	// 8 = 0x8
    RAPAddNewPlaceQuestion *_question;	// 16 = 0x10
    CDUnknownBlockType _cancelBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009754ab
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) RAPAddNewPlaceQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <RAPAddAPlaceTypeSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_captureAnalyticsForSelectedType:(long long)arg1;	// IMP=0x00100000009753bc
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000097535d
- (void)geocodeAddressLocationWithMapPicker:(id)arg1;	// IMP=0x0010000000974ca5
- (int)_analyticTargetForMapPicker;	// IMP=0x0010000000974c1f
- (id)mapPicker;	// IMP=0x0010000000974801
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000009744df
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000009742cc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000974231
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00100000009741b3
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000009740e2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000974074
- (_Bool)isReportAnIssueSection:(long long)arg1;	// IMP=0x0010000000974068
@property(readonly, nonatomic) int analyticTarget;
- (void)cancel;	// IMP=0x0010000000973fec
- (void)viewDidLoad;	// IMP=0x0010000000973f33
- (id)initWithAddNewPlaceQuestion:(id)arg1 onCancel:(CDUnknownBlockType)arg2;	// IMP=0x0010000000973d23

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
