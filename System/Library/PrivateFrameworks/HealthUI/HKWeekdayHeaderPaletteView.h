//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView
{
    NSMutableArray *_weekdayLabels;	// 8 = 0x8
}

+ (double)preferredHeight;	// IMP=0x0000000000108bd1
+ (id)weekdayFont;	// IMP=0x0000000000108abd
- (void).cxx_destruct;	// IMP=0x0000000000108d82
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000108c77
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000108a8d
- (double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3;	// IMP=0x00000000001089fb
- (void)layoutSubviews;	// IMP=0x0000000000108874
- (void)_updateFont;	// IMP=0x00000000001086c3
- (id)initWithFrame:(struct CGRect)arg1 shouldSupportRTL:(_Bool)arg2;	// IMP=0x0000000000108343
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010832f

@end
