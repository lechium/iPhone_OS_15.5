//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface CEKWheelScrubberViewCell : UICollectionViewCell
{
    UIView *_itemView;	// 8 = 0x8
    double _selectionDotCenterTopSpacing;	// 16 = 0x10
    long long _dotPlacement;	// 24 = 0x18
    UIView *__selectionDotView;	// 32 = 0x20
    UIView *__clippingView;	// 40 = 0x28
}

+ (struct CGSize)screenScaleContentSize;	// IMP=0x000000000000650f
+ (struct CGSize)defaultSize;	// IMP=0x00000000000064c4
+ (struct CGSize)_defaultContentSize;	// IMP=0x00000000000064a0
+ (double)borderInsetWidth;	// IMP=0x0000000000006492
- (void).cxx_destruct;	// IMP=0x0000000000006666
@property(readonly, nonatomic) UIView *_clippingView; // @synthesize _clippingView=__clippingView;
@property(readonly, nonatomic) UIView *_selectionDotView; // @synthesize _selectionDotView=__selectionDotView;
@property(nonatomic) long long dotPlacement; // @synthesize dotPlacement=_dotPlacement;
@property(nonatomic) double selectionDotCenterTopSpacing; // @synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing;
@property(readonly, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
- (void)layoutSubviews;	// IMP=0x00000000000061d8
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000006174
- (double)_selectionDotDiameter;	// IMP=0x0000000000006101
- (void)_updateSelectionDot;	// IMP=0x0000000000005fba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005d0f

@end

