//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TestFlightCore/UITableViewDataSource-Protocol.h>
#import <TestFlightCore/UITableViewDelegate-Protocol.h>

@class NSString, TFFeedbackFormCellUpdater, TFFeedbackFormPresenter;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    TFFeedbackFormPresenter *_presenter;	// 8 = 0x8
    TFFeedbackFormCellUpdater *_cellUpdater;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000080a4
@property(readonly, nonatomic) TFFeedbackFormCellUpdater *cellUpdater; // @synthesize cellUpdater=_cellUpdater;
@property(readonly, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000800b
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000008003
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000007e92
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000007d95
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000007c95
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000007b50
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000007a64
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000007a20
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000079cd
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000780b
- (void)prepareTableViewForDataSource:(id)arg1;	// IMP=0x000000000000778f
- (id)initWithPresenter:(id)arg1;	// IMP=0x000000000000770a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
