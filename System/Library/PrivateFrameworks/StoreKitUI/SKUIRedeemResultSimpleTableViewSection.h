//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultSimpleTableViewSection
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UIView *_view;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012fb2
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x0000000000012ee7
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000012e15
- (long long)numberOfRowsInSection;	// IMP=0x0000000000012e0a
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000012da4
- (id)initWithView:(id)arg1;	// IMP=0x0000000000012d36

@end
