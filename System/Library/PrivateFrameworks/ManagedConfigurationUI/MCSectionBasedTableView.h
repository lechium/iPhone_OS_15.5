//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UITableView;

@interface MCSectionBasedTableView : UIView
{
    UITableView *_tableView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b826
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)layoutSubviews;	// IMP=0x000000000001b70f
- (id)_createTableView;	// IMP=0x000000000001b64c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b5b5

@end
