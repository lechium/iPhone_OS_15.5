//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell
{
    CNGeminiBadge *_badge;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003387a
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) CNGeminiBadge *badge; // @synthesize badge=_badge;
- (void)setLabel:(id)arg1 badge:(id)arg2;	// IMP=0x0000000000033206
- (void)setLabelWithNoBadge:(id)arg1;	// IMP=0x0000000000032fef
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000032cae

@end

