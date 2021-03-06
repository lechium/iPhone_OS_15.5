//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView
{
    LabelSequenceView *_leftView;	// 8 = 0x8
    LabelSequenceView *_rightView;	// 16 = 0x10
    double _width;	// 24 = 0x18
    Stock *_stock;	// 32 = 0x20
    Stock *_deferredStock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000023639
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000235af
- (void)setOpaque:(_Bool)arg1;	// IMP=0x000000000002353d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000234a8
- (void)_stockWillBeRemoved:(id)arg1;	// IMP=0x000000000002343a
- (void)prepareStringsForDeferredStockIfNeeded;	// IMP=0x000000000002340a
- (void)prepareStringsWithStock:(id)arg1 width:(double)arg2;	// IMP=0x00000000000224fc
- (void)layoutSubviews;	// IMP=0x00000000000222ed
- (void)setLabelsHidden:(_Bool)arg1;	// IMP=0x000000000002229f
- (id)init;	// IMP=0x00000000000221b3

@end

