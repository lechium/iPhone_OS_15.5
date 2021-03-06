//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPUI/UITableViewDataSource-Protocol.h>
#import <CoreCDPUI/UITableViewDelegate-Protocol.h>

@class CDPUICustodianOSSelectionViewModel, NSString;

@interface CDPUICustodianOSSelectionViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDPUICustodianOSSelectionViewModel *_viewModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002317a
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x0000000000022dee
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x0000000000022de0
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022dd2
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022d1f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022c32
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000022b90
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000228f4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002287e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000022873
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000000022753

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

