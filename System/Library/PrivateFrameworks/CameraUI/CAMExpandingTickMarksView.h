//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface CAMExpandingTickMarksView : UIView
{
    _Bool _expanded;	// 8 = 0x8
    NSMutableArray *__tickViews;	// 16 = 0x10
    struct _NSRange __selectedRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017e35c
@property(readonly, nonatomic) NSMutableArray *_tickViews; // @synthesize _tickViews=__tickViews;
@property(nonatomic) struct _NSRange _selectedRange; // @synthesize _selectedRange=__selectedRange;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void)layoutSubviews;	// IMP=0x000000000017df91
- (unsigned long long)_collapsedTickIndexForIndex:(unsigned long long)arg1;	// IMP=0x000000000017df35
- (unsigned long long)_middleTickIndex;	// IMP=0x000000000017def7
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000017de77
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000017ddcb
- (void)setSelectedValue:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000017dc50
- (void)setSelectedValue:(double)arg1;	// IMP=0x000000000017dc3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017db54

@end

