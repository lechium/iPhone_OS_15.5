//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UITableView;

@interface STSCategoryView : UIView
{
    UITableView *_tableView;	// 8 = 0x8
    struct CGPoint _footerOffset;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027249
@property(nonatomic) struct CGPoint footerOffset; // @synthesize footerOffset=_footerOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)init;	// IMP=0x0000000000026e27

@end

