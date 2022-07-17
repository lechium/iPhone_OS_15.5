//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, SKUIGiftTableSectionHeaderView, SKUIItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftSendDateSection
{
    NSString *_dateString;	// 8 = 0x8
    SKUIItem *_giftItem;	// 16 = 0x10
    struct UIEdgeInsets _headerInsets;	// 24 = 0x18
    SKUIGiftTableSectionHeaderView *_headerView;	// 56 = 0x38
    NSDate *_sendDate;	// 64 = 0x40
    long long _sendDateStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000008f486
@property(nonatomic) long long sendDateStyle; // @synthesize sendDateStyle=_sendDateStyle;
@property(copy, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) SKUIItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)_createFormattedDateString:(_Bool)arg1;	// IMP=0x000000000008f330
- (id)_headerView;	// IMP=0x000000000008f200
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000008f026
- (long long)numberOfRowsInSection;	// IMP=0x000000000008f01b
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000008f00d
- (id)headerViewForTableView:(id)arg1;	// IMP=0x000000000008effb
- (void)updateCell:(id)arg1 forTransitionToSize:(struct CGSize)arg2;	// IMP=0x000000000008ef8f
@property(nonatomic) struct UIEdgeInsets headerInsets;

@end
