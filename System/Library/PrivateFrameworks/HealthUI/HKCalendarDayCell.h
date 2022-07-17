//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class HKDateCache, NSDate, UIColor, UIFont;

@interface HKCalendarDayCell : CALayer
{
    long long _dayOfMonth;	// 8 = 0x8
    _Bool _selected;	// 16 = 0x10
    _Bool _representsToday;	// 17 = 0x11
    HKDateCache *_dateCache;	// 24 = 0x18
    CALayer *_circle;	// 32 = 0x20
    CALayer *_dayLabel;	// 40 = 0x28
    UIColor *_textColor;	// 48 = 0x30
    UIFont *_font;	// 56 = 0x38
    UIFont *_boldFont;	// 64 = 0x40
    double _dayDiameter;	// 72 = 0x48
    NSDate *_date;	// 80 = 0x50
}

+ (void)clearImageCache;	// IMP=0x0000000000090c7e
- (void).cxx_destruct;	// IMP=0x0000000000091a25
@property(readonly, nonatomic) _Bool representsToday; // @synthesize representsToday=_representsToday;
@property(readonly, nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double dayDiameter; // @synthesize dayDiameter=_dayDiameter;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) CALayer *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly, nonatomic) CALayer *circle; // @synthesize circle=_circle;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
- (id)debugDescription;	// IMP=0x0000000000091844
- (struct CGSize)_roundedRectSizeForDayNumberString:(id)arg1;	// IMP=0x0000000000091646
- (struct CGSize)circleSize;	// IMP=0x000000000009154d
- (double)_roundedRectCornerRadius;	// IMP=0x00000000000914d1
- (void)layoutOnce;	// IMP=0x0000000000091397
- (void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2;	// IMP=0x000000000009130d
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;	// IMP=0x0000000000091269
- (id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2;	// IMP=0x0000000000090dd2
- (id)_integerNumberFormatter;	// IMP=0x0000000000090d60
- (id)init;	// IMP=0x0000000000090c04
- (id)initWithDateCache:(id)arg1;	// IMP=0x0000000000090af3

@end
