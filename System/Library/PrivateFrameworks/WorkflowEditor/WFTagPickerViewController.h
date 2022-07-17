//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowEditor/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, UISearchController;
@protocol WFTagPickerViewControllerDelegate;

@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating>
{
    id <WFTagPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_tags;	// 16 = 0x10
    NSMutableOrderedSet *_selectedTags;	// 24 = 0x18
    UISearchController *_searchController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000247d59
@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) NSMutableOrderedSet *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id <WFTagPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000247cbc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000247afe
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000024798e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000024794a
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000247942
- (id)currentResults;	// IMP=0x000000000024773b
- (void)dismiss;	// IMP=0x00000000002476a2
- (void)cancel;	// IMP=0x0000000000247656
- (struct CGSize)preferredContentSize;	// IMP=0x00000000002475fe
- (void)viewDidLoad;	// IMP=0x0000000000247321
- (id)initWithTitle:(id)arg1 tags:(id)arg2;	// IMP=0x00000000002471ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
