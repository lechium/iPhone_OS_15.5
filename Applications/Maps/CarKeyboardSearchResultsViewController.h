//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CarKeyboardModeController, NSArray, NSMapTable, NSString, SearchDataProvider, UITableView;

__attribute__((visibility("hidden")))
@interface CarKeyboardSearchResultsViewController : UIViewController
{
    SearchDataProvider *_searchDataProvider;	// 8 = 0x8
    NSArray *_filteredResults;	// 16 = 0x10
    NSString *_inputText;	// 24 = 0x18
    long long _cellStyle;	// 32 = 0x20
    NSMapTable *_modelsByItem;	// 40 = 0x28
    CarKeyboardModeController *_keyboardMode;	// 48 = 0x30
    UITableView *_searchResultTableView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000007de6e3
@property(retain, nonatomic) UITableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode; // @synthesize keyboardMode=_keyboardMode;
- (id)modelForItemAtIndexPath:(id)arg1;	// IMP=0x00100000007de62a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007de2e5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000007de110
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000007ddfe9
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00100000007dded9
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000007dde5d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000007dde40
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000007ddcb4
- (void)searchDataProviderDidUpdate:(id)arg1;	// IMP=0x00100000007dd733
- (void)handleCancelButtonPressed;	// IMP=0x00100000007dd6c4
- (void)handleSearchTextDidChange:(id)arg1;	// IMP=0x00100000007dd62f
- (void)handleSearchButtonPressedWithText:(id)arg1;	// IMP=0x00100000007dd4a9
- (void)updateForInteractionModel:(unsigned long long)arg1;	// IMP=0x00100000007dd458
- (void)prepareTableView;	// IMP=0x00100000007dd257
- (void)viewDidLoad;	// IMP=0x00100000007dd216
- (id)init;	// IMP=0x00000000007dd143

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
