//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegatePrivate-Protocol.h>
#import <WorkflowUI/WFCompactPlatterContentClippingDelegate-Protocol.h>

@class NSCache, NSMutableArray, NSString, UITableView, WFChooseFromListDialogCell;

@interface WFChooseFromListDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate>
{
    UITableView *_listTableView;	// 8 = 0x8
    NSMutableArray *_selectedItems;	// 16 = 0x10
    WFChooseFromListDialogCell *_prototypeCell;	// 24 = 0x18
    NSCache *_imageCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000135201
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) WFChooseFromListDialogCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(nonatomic) __weak UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000134f73
- (void)platterView:(id)arg1 didUpdateContentVerticalOffset:(double)arg2;	// IMP=0x0000000000134f1c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000134d26
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x0000000000134d1e
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x0000000000134d16
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000134b60
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000134aa8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000134a3a
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;	// IMP=0x000000000013483f
- (void)finishWithSelectedItems;	// IMP=0x00000000001347b8
- (void)loadView;	// IMP=0x0000000000133e56
- (void)dealloc;	// IMP=0x0000000000133dda
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000133ba9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
