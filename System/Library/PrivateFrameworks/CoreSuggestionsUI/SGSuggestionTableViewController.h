//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@class NSString, SGSuggestionStore;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter>
{
    SGSuggestionStore *_suggestionStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002404e
@property(retain, nonatomic) SGSuggestionStore *suggestionStore; // @synthesize suggestionStore=_suggestionStore;
- (void)dismissViewController:(id)arg1;	// IMP=0x0000000000023ebe
- (void)presentViewController:(id)arg1;	// IMP=0x0000000000023dd2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000023c7f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000023c2d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000023ba5
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000023b88
- (void)listDidChangeNotification:(id)arg1;	// IMP=0x0000000000023563
- (void)updatePrefferedSize;	// IMP=0x0000000000023414
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000023309
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002325f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000231bc
- (void)viewDidLoad;	// IMP=0x0000000000023012
- (id)init;	// IMP=0x0000000000022fde
- (void)dealloc;	// IMP=0x0000000000022f69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

