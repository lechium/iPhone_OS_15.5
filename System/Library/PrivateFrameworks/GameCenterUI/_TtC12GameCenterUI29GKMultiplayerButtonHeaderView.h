//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI29GKMultiplayerButtonHeaderView : UIView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *playerCountLabel;	// 16 = 0x10
    MISSING_TYPE *iconView;	// 24 = 0x18
    MISSING_TYPE *cancelButton;	// 32 = 0x20
    MISSING_TYPE *cancelButtonHandler;	// 40 = 0x28
    MISSING_TYPE *backgroundView;	// 56 = 0x38
    MISSING_TYPE *bottomSeparator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001ea530
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ea4d0
- (void)cancelPressed:(id)arg1;	// IMP=0x00000000001ea380
- (void)updateCountWithMinPlayers:(long long)arg1 maxPlayers:(long long)arg2;	// IMP=0x00000000001ea340
- (void)applyGame:(id)arg1;	// IMP=0x00000000001ea2f0
- (void)layoutSubviews;	// IMP=0x00000000001ea0e0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001e9c00
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001e9b40
- (void)wantsMaterialBackgroundWithScrollOffset:(double)arg1;	// IMP=0x00000000001e9ad0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e97a0
- (id)initWithMinimumValue:(long long)arg1 maximumValue:(long long)arg2 initialValue:(long long)arg3 cancelButtonHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e9710
- (id)initWithCancelButtonHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e9320

@end

