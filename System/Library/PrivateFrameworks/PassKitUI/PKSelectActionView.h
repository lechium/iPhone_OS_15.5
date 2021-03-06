//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PKPass, PKPaymentPassAction, PKSelectActionHeader, UITableView;
@protocol PKSelectActionViewDelegate;

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    PKPass *_pass;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    NSDictionary *_balances;	// 24 = 0x18
    unsigned long long _actionType;	// 32 = 0x20
    PKSelectActionHeader *_actionHeader;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    id <PKSelectActionViewDelegate> _delegate;	// 56 = 0x38
    PKPaymentPassAction *_selectedAction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001cc64e
@property(nonatomic) __weak id <PKSelectActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentPassAction *selectedAction; // @synthesize selectedAction=_selectedAction;
- (void)_addSubviews;	// IMP=0x00000000001cc515
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001cc2ba
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001cc2a5
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001cc297
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001cbe18
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001cbdfb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001cbdf0
- (void)layoutSubviews;	// IMP=0x00000000001cbcff
- (id)_balanceForTopUpAction:(id)arg1;	// IMP=0x00000000001cbb2c
- (id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 balanceDictionary:(id)arg4;	// IMP=0x00000000001cb8c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

