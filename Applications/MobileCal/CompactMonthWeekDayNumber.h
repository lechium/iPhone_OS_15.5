//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, CompactMonthWeekDayOverlay, CompactMonthWeekTodayCircle, CompactMonthWeekView, EKCalendarDate, NSCalendar;

@interface CompactMonthWeekDayNumber : NSObject
{
    CALayer *_layer;	// 8 = 0x8
    double _offsetX;	// 16 = 0x10
    CompactMonthWeekView *_weekView;	// 24 = 0x18
    EKCalendarDate *_calendarDate;	// 32 = 0x20
    NSCalendar *_calendar;	// 40 = 0x28
    CompactMonthWeekTodayCircle *_attachedTodayCircle;	// 48 = 0x30
    CompactMonthWeekDayOverlay *_overlay;	// 56 = 0x38
    CALayer *_eventMarker;	// 64 = 0x40
    CALayer *_secondaryEventMarker;	// 72 = 0x48
    double _fontSize;	// 80 = 0x50
    double _overlayFontSize;	// 88 = 0x58
    struct CGRect _frame;	// 96 = 0x60
}

+ (id)dayNumberFontForSize:(double)arg1;	// IMP=0x00400000000c7494
+ (id)_generateImageWithString:(id)arg1 color:(id)arg2 fontSize:(double)arg3;	// IMP=0x00100000000c6e98
+ (id)_standardLabelForFontSize:(double)arg1;	// IMP=0x00100000000c6e0c
+ (double)baselineOffsetFromTopOfLayerForFontSize:(double)arg1;	// IMP=0x00100000000c6916
- (void).cxx_destruct;	// IMP=0x00200000000c75fe
@property(nonatomic) double overlayFontSize; // @synthesize overlayFontSize=_overlayFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) CALayer *secondaryEventMarker; // @synthesize secondaryEventMarker=_secondaryEventMarker;
@property(retain, nonatomic) CALayer *eventMarker; // @synthesize eventMarker=_eventMarker;
@property(retain, nonatomic) CompactMonthWeekDayOverlay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) CompactMonthWeekTodayCircle *attachedTodayCircle; // @synthesize attachedTodayCircle=_attachedTodayCircle;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (id)_weekendImageForDayNumberString:(id)arg1;	// IMP=0x00100000000c728b
- (id)_weekdayImageForDayNumberString:(id)arg1;	// IMP=0x00100000000c7076
- (_Bool)_calendarDateIsOnWeekend;	// IMP=0x00100000000c6d57
@property(readonly, nonatomic) _Bool representsActualDate;
- (void)updateDayNumber;	// IMP=0x00100000000c6a6e
@property(readonly, nonatomic) double offsetX;
@property(readonly, nonatomic) CALayer *layer;
- (void)hideOverlayAndNumber:(_Bool)arg1;	// IMP=0x00100000000c6872
- (void)updateOverlay;	// IMP=0x00100000000c65e0
- (id)description;	// IMP=0x00100000000c6440
- (id)init;	// IMP=0x00100000000c638b
- (id)initWithWeekView:(id)arg1 andCalendar:(id)arg2;	// IMP=0x00100000000c61a0

@end

