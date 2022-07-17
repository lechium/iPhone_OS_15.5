//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIYearMonthView.h>

@interface LargeTextCompactYearMonthView : EKUIYearMonthView
{
}

+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;	// IMP=0x0040000000013cee
+ (double)rightMarginForWindowSize:(struct CGSize)arg1;	// IMP=0x0010000000013bd4
+ (double)leftMarginForWindowSize:(struct CGSize)arg1;	// IMP=0x0010000000013b44
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;	// IMP=0x0040000000014363
- (struct CGSize)roundedRectSizeForDayNumberString:(id)arg1;	// IMP=0x001000000001423f
- (_Bool)computeCircleFrameWithoutAdjustments;	// IMP=0x0010000000014237
- (id)weekDayInitialsFont;	// IMP=0x001000000001422f
- (double)weekDayInitialsAdjustTop;	// IMP=0x0010000000014226
- (double)weekDayInitialsAdjustLeft;	// IMP=0x001000000001421d
- (_Bool)showWeekDayInitials;	// IMP=0x0010000000014215
- (double)ySpacing;	// IMP=0x0010000000014183
- (double)xSpacing;	// IMP=0x00100000000140f1
- (double)daysYAdjustTop;	// IMP=0x001000000001405f
- (double)daysXAdjustLeft;	// IMP=0x0010000000014056
- (double)circleSizeForDoubleDigit;	// IMP=0x0010000000014044
- (double)circleSize;	// IMP=0x0010000000013fb2
- (double)todayTextSize;	// IMP=0x0010000000013fa0
- (double)dayTextSize;	// IMP=0x0010000000013f0e
- (double)todayNumberKerning;	// IMP=0x0010000000013f05
- (id)todayNumberFont;	// IMP=0x0010000000013ef3
- (double)dayNumberKerning;	// IMP=0x0010000000013eea
- (id)dayNumberFont;	// IMP=0x0010000000013eb8
- (double)headerFontKerning;	// IMP=0x0010000000013eaf
- (id)headerFont;	// IMP=0x0010000000013dfb
- (double)headerFontMinSize;	// IMP=0x0010000000013de9
- (double)headerFontMaxSize;	// IMP=0x0010000000013d99
- (double)headerXAdjust;	// IMP=0x0010000000013d90
- (double)yInset;	// IMP=0x0010000000013d87
- (double)xInset;	// IMP=0x0010000000013d7e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000013be6

@end
