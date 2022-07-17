//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents;

@interface EKUIMiniMonthView
{
    NSDateComponents *_dateComponents;	// 8 = 0x8
}

+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;	// IMP=0x00000000000be504
- (void).cxx_destruct;	// IMP=0x00000000000be8f0
- (id)dayColorKey;	// IMP=0x00000000000be8e3
- (id)dayColor;	// IMP=0x00000000000be8ca
- (double)todayTextYAdjustment;	// IMP=0x00000000000be8bc
- (double)circleFrameYAdjustment;	// IMP=0x00000000000be8ae
- (double)circleFrameXAdjustment;	// IMP=0x00000000000be8a0
- (_Bool)vibrant;	// IMP=0x00000000000be898
- (_Bool)showMonthName;	// IMP=0x00000000000be890
- (_Bool)opaque;	// IMP=0x00000000000be888
- (double)weekDayInitialsAdjustTop;	// IMP=0x00000000000be87f
- (double)weekDayInitialsAdjustLeft;	// IMP=0x00000000000be86d
- (id)weekDayInitialsFont;	// IMP=0x00000000000be85b
- (_Bool)showWeekDayInitials;	// IMP=0x00000000000be853
- (double)todayNumberKerning;	// IMP=0x00000000000be84a
- (double)ySpacing;	// IMP=0x00000000000be83c
- (double)xSpacing;	// IMP=0x00000000000be82e
- (double)daysYAdjustTop;	// IMP=0x00000000000be81c
- (double)daysXAdjustLeft;	// IMP=0x00000000000be80e
- (double)circleSizeForDoubleDigit;	// IMP=0x00000000000be7fc
- (double)circleSize;	// IMP=0x00000000000be7ea
- (double)todayTextSize;	// IMP=0x00000000000be7dc
- (double)dayTextSize;	// IMP=0x00000000000be7ca
- (id)todayNumberFont;	// IMP=0x00000000000be7b8
- (id)dayNumberFont;	// IMP=0x00000000000be6f1
- (double)headerFontKerning;	// IMP=0x00000000000be6e8
- (id)headerFont;	// IMP=0x00000000000be5cb
- (double)headerFontMinSize;	// IMP=0x00000000000be5bd
- (double)headerFontMaxSize;	// IMP=0x00000000000be56d
- (double)headerXAdjust;	// IMP=0x00000000000be55f
- (double)yInset;	// IMP=0x00000000000be556
- (double)xInset;	// IMP=0x00000000000be548
- (double)_gridOfDaysHeightAdjustment;	// IMP=0x00000000000be53a
- (double)_gridOfDaysYAdjustment;	// IMP=0x00000000000be531
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;	// IMP=0x00000000000be512
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000be457
@property(retain, nonatomic) NSDateComponents *dateComponents;
- (id)initWithCalendar:(id)arg1 dateComponents:(id)arg2;	// IMP=0x00000000000be238

@end
