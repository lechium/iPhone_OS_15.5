//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKDayTimeView, NSString, UILabel, UIScrollView;

@interface WeekTimeView : UIView
{
    UIScrollView *_timeScroller;	// 8 = 0x8
    EKDayTimeView *_timeView;	// 16 = 0x10
    UIView *_rightBorderView;	// 24 = 0x18
    UILabel *_monthLabel;	// 32 = 0x20
    UILabel *_overlayMonthLabel;	// 40 = 0x28
    UILabel *_weekNumberLabel;	// 48 = 0x30
    UILabel *_allDayLabel;	// 56 = 0x38
    UIView *_allDayBackgroundColorView;	// 64 = 0x40
    UIView *_topAllDaySeparatorView;	// 72 = 0x48
    UIView *_bottomAllDaySeparatorView;	// 80 = 0x50
    UIView *_headerBackground;	// 88 = 0x58
    double _preferredMonthLabelBaselineOffsetFromTop;	// 96 = 0x60
    double _headerHeight;	// 104 = 0x68
    long long _orientation;	// 112 = 0x70
}

+ (double)widthForOrientation:(long long)arg1 inViewHierarchy:(id)arg2;	// IMP=0x002000000003119d
- (void).cxx_destruct;	// IMP=0x00200000000334ab
@property(readonly, nonatomic) EKDayTimeView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_timeScroller;
- (void)updateMarkerPosition;	// IMP=0x0010000000033449
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000333d2
- (void)sizeToFit;	// IMP=0x0010000000033296
- (double)_yLocationForMonthLabel;	// IMP=0x0010000000033226
- (void)layoutSubviews;	// IMP=0x0010000000032471
- (double)allDayBackgroundColorOriginY;	// IMP=0x0010000000032446
@property(retain, nonatomic) NSString *overlayMonthText;
@property(retain, nonatomic) NSString *weekNumberText;
- (void)setMonthTextBaselineOffset:(double)arg1;	// IMP=0x0010000000032171
- (id)monthText;	// IMP=0x0010000000032154
- (void)setMonthText:(id)arg1 isCurrentMonth:(_Bool)arg2;	// IMP=0x0010000000032020
- (void)_updateOverlayMonthFont;	// IMP=0x0010000000031f64
- (void)_updateWeekNumberFont;	// IMP=0x0010000000031ea8
- (void)_updateMonthFont;	// IMP=0x0010000000031d1f
@property(nonatomic) double allDayAlpha;
- (void)contentSizeCategoryChanged;	// IMP=0x0010000000031bce
- (void)setHourHeightScale:(double)arg1;	// IMP=0x0010000000031b14
- (void)setDayTimeViewDelegate:(id)arg1;	// IMP=0x0010000000031ad1
@property(nonatomic) _Bool showsTimeMarker;
@property(nonatomic) _Bool allDayHighlighted;
@property(nonatomic) _Bool usesLightText;
- (_Bool)_showRightBorder;	// IMP=0x00100000000318d4
- (id)initWithFrame:(struct CGRect)arg1 targetSizeClass:(long long)arg2 orientation:(long long)arg3;	// IMP=0x00100000000311bf

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

