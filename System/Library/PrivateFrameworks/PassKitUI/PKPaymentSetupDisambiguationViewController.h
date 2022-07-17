//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PKDisambiguationFooterView, PKPaymentSetupProduct, PKTableHeaderView, UIBarButtonItem;
@protocol PKPaymentSetupDisambiguationViewControllerDelegate;

@interface PKPaymentSetupDisambiguationViewController <UITableViewDelegate>
{
    NSArray *_products;	// 8 = 0x8
    UIBarButtonItem *_nextBarButtonItem;	// 16 = 0x10
    PKTableHeaderView *_headerView;	// 24 = 0x18
    PKDisambiguationFooterView *_footerView;	// 32 = 0x20
    id <PKPaymentSetupDisambiguationViewControllerDelegate> _delegate;	// 40 = 0x28
    PKPaymentSetupProduct *_selectedProduct;	// 48 = 0x30
    NSString *_enteredCardNumber;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000dc8ac
@property(copy, nonatomic) NSString *enteredCardNumber; // @synthesize enteredCardNumber=_enteredCardNumber;
@property(readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) __weak id <PKPaymentSetupDisambiguationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupLater:(id)arg1;	// IMP=0x00000000000dc7a8
- (void)_popToCameraCapture:(id)arg1;	// IMP=0x00000000000dc6d0
- (void)_notifyDelegateDidSelectProduct:(id)arg1;	// IMP=0x00000000000dc615
- (void)_nextTapped:(id)arg1;	// IMP=0x00000000000dc5ce
- (void)clearSelectedProduct;	// IMP=0x00000000000dc5ba
- (void)_updateSelectedProduct:(id)arg1;	// IMP=0x00000000000dc50c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000dc20d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000dc0ea
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000dc0dc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000dc0bf
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000dc0b4
- (id)_productAtIndexPath:(id)arg1;	// IMP=0x00000000000dc078
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000dbf81
- (void)setupFooterViewForTableView:(id)arg1;	// IMP=0x00000000000dba93
- (void)setupHeaderViewForTableView:(id)arg1;	// IMP=0x00000000000db81b
- (void)viewDidLoad;	// IMP=0x00000000000db758
- (id)initWithProducts:(id)arg1 context:(long long)arg2;	// IMP=0x00000000000db581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
