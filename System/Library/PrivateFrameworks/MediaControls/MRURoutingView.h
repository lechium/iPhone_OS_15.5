//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UITableView;

__attribute__((visibility("hidden")))
@interface MRURoutingView : UIView
{
    UITableView *_tableView;	// 8 = 0x8
    struct UIEdgeInsets _contentEdgeInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000024fba
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000024eaf
- (void)layoutSubviews;	// IMP=0x0000000000024e2e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024bb0

@end

