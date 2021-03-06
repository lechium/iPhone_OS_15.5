//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell
{
    TSKSegmentedControl *mLeftSegmentedControl;	// 8 = 0x8
    TSKSegmentedControl *mRightSegmentedControl;	// 16 = 0x10
}

@property(readonly, nonatomic) TSKSegmentedControl *rightSegmentedControl; // @synthesize rightSegmentedControl=mRightSegmentedControl;
@property(readonly, nonatomic) TSKSegmentedControl *leftSegmentedControl; // @synthesize leftSegmentedControl=mLeftSegmentedControl;
- (void)layoutSubviews;	// IMP=0x00000000001b5a5a
- (void)dealloc;	// IMP=0x00000000001b5a02
- (id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2;	// IMP=0x00000000001b58bd

@end

