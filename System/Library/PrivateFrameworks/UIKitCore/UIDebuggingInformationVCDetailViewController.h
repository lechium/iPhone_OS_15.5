//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, UIViewController;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCDetailViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
    UIViewController *_inspectedVC;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000010f120f
@property(nonatomic) __weak UIViewController *inspectedVC; // @synthesize inspectedVC=_inspectedVC;
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000010f116d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000010f114e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000010f10a3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010f0dd7
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010f0bfc
- (void)_updateDataAndReload:(_Bool)arg1;	// IMP=0x00000000010f06ac
- (void)inspectVC:(id)arg1;	// IMP=0x00000000010f0679
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000010f0633
- (void)viewDidLoad;	// IMP=0x00000000010f04a6
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000010f03d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
