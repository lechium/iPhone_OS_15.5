//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FitnessUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIFont, UIImageView, UIScrollView;
@protocol FUScrollWheelDataSource, FUScrollWheelDelegate;

@interface FUScrollWheel : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_reusableLabelsQueue;	// 8 = 0x8
    NSMutableDictionary *_usedLabels;	// 16 = 0x10
    struct _NSRange _previousRange;	// 24 = 0x18
    unsigned long long _numberOfRows;	// 40 = 0x28
    double _scrollWheelLabelHeight;	// 48 = 0x30
    UIView *_topDividerView;	// 56 = 0x38
    UIView *_bottomDividerView;	// 64 = 0x40
    UIImageView *_maskLayer;	// 72 = 0x48
    _Bool _shouldRegenerateOpacityMask;	// 80 = 0x50
    _Bool _loaded;	// 81 = 0x51
    id <FUScrollWheelDataSource> _dataSource;	// 88 = 0x58
    id <FUScrollWheelDelegate> _delegate;	// 96 = 0x60
    long long _itemTitleAligmnent;	// 104 = 0x68
    unsigned long long _currentIndex;	// 112 = 0x70
    UIFont *_font;	// 120 = 0x78
    UIScrollView *_scrollView;	// 128 = 0x80
    double _scrollWheelLabelPageSize;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000051f98
@property(nonatomic) double scrollWheelLabelPageSize; // @synthesize scrollWheelLabelPageSize=_scrollWheelLabelPageSize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long itemTitleAligmnent; // @synthesize itemTitleAligmnent=_itemTitleAligmnent;
@property(nonatomic) __weak id <FUScrollWheelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FUScrollWheelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_alertDidChangeToCurrentIndex:(unsigned long long)arg1;	// IMP=0x0000000000051deb
- (unsigned long long)_numberOfRows;	// IMP=0x0000000000051d7f
- (id)_titleForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051d02
- (double)_yPositionForLabelAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051cb8
- (struct CGRect)_frameForLabelAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051c2d
- (id)_dequeueLabel;	// IMP=0x0000000000051a8c
- (void)_recycleAllLabels;	// IMP=0x00000000000518aa
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005180e
- (id)_textForLabelAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000517fc
- (void)_reuseLabelsWithRange:(struct _NSRange)arg1 contentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000050efa
- (double)_startingLocation;	// IMP=0x0000000000050ea3
- (void)_layoutScrollView;	// IMP=0x0000000000050d90
- (void)_generateOpacityMask;	// IMP=0x000000000005096e
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000050951
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000005093f
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000508bb
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000000508a3
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000050891
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000005087f
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000050811
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000005075c
- (void)setActiveScrollWheel;	// IMP=0x000000000005074a
- (void)reloadData;	// IMP=0x00000000000506ec
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000005069e
- (void)layoutSubviews;	// IMP=0x00000000000503ec
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000502a8
- (void)_setActiveScrollwheelIfNotActive;	// IMP=0x0000000000050151
- (void)dealloc;	// IMP=0x00000000000500f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004fc88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

