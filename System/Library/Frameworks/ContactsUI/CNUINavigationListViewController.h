//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUINavigationListViewDataSource-Protocol.h>
#import <ContactsUI/CNUINavigationListViewDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNUINavigationListItem, CNUINavigationListView, CNUINavigationListViewCellHeightEstimator, NSArray, NSString;
@protocol CNUINavigationListStyle, CNUINavigationListViewControllerDelegate;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _showFirstSectionTopSeparator;	// 8 = 0x8
    _Bool _ignoreParentControllerResize;	// 9 = 0x9
    CNUINavigationListView *_navigationListView;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    CNUINavigationListItem *_expandedItem;	// 32 = 0x20
    id <CNUINavigationListViewControllerDelegate> _delegate;	// 40 = 0x28
    id <CNUINavigationListStyle> _navigationListStyle;	// 48 = 0x30
    long long _contentAlignment;	// 56 = 0x38
    CNUINavigationListViewCellHeightEstimator *_cellHeightEstimator;	// 64 = 0x40
    CNUINavigationListItem *_displayedExpandedItem;	// 72 = 0x48
}

+ (_Bool)itemRequiresDetailCell:(id)arg1;	// IMP=0x0000000000010bd3
- (void).cxx_destruct;	// IMP=0x0000000000010796
@property(nonatomic) _Bool ignoreParentControllerResize; // @synthesize ignoreParentControllerResize=_ignoreParentControllerResize;
@property(retain, nonatomic) CNUINavigationListItem *displayedExpandedItem; // @synthesize displayedExpandedItem=_displayedExpandedItem;
@property(retain, nonatomic) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator; // @synthesize cellHeightEstimator=_cellHeightEstimator;
@property(nonatomic) _Bool showFirstSectionTopSeparator; // @synthesize showFirstSectionTopSeparator=_showFirstSectionTopSeparator;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(nonatomic) __weak id <CNUINavigationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUINavigationListItem *expandedItem; // @synthesize expandedItem=_expandedItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) CNUINavigationListView *navigationListView; // @synthesize navigationListView=_navigationListView;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001053c
- (_Bool)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000104e6
- (_Bool)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000010490
- (void)stopTrackingRollover;	// IMP=0x000000000001048a
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000010418
- (_Bool)canSelectItem:(id)arg1;	// IMP=0x00000000000102fb
- (void)updateNavigationListViewStateAnimated:(_Bool)arg1;	// IMP=0x000000000000fa35
- (void)reloadNavigationListView;	// IMP=0x000000000000f8b4
- (void)updateNavigationListView;	// IMP=0x000000000000f7f1
- (struct CGSize)contentSizeForExpandedItem:(id)arg1;	// IMP=0x000000000000f479
- (id)itemsForItem:(id)arg1;	// IMP=0x000000000000f37e
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000000f34a
- (id)itemAtIndex:(long long)arg1;	// IMP=0x000000000000f2bb
- (id)dequeueReusableDetailCell;	// IMP=0x000000000000f236
- (id)dequeueReusableStandardCell;	// IMP=0x000000000000f1b1
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x000000000000f162
- (_Bool)canExpandItem:(id)arg1;	// IMP=0x000000000000f0ed
- (void)toggleItem:(id)arg1;	// IMP=0x000000000000efdb
- (void)expandItem:(id)arg1;	// IMP=0x000000000000ef60
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000000ef45
- (double)cellSeparatorHeight;	// IMP=0x000000000000eeb1
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000000ee88
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000edbf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ea4d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000000e996
- (void)viewDidLoad;	// IMP=0x000000000000e83a
- (void)loadView;	// IMP=0x000000000000e76b
- (void)styleUpdated;	// IMP=0x000000000000e6d9
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000e67f
- (id)init;	// IMP=0x000000000000e5a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
