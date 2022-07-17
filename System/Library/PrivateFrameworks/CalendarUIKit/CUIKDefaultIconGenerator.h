//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarUIKit/CUIKIconGenerator-Protocol.h>

@class NSCalendar, NSDateComponents, NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSDateComponents *_dateComponents;	// 16 = 0x10
    long long _iconFormat;	// 24 = 0x18
    double _canvasScale;	// 32 = 0x20
    struct CGSize _canvasSize;	// 40 = 0x28
}

+ (_Bool)_isBlackDayOfWeekRequiredForLocale:(id)arg1;	// IMP=0x0000000000029d88
+ (id)_countriesRequiringBlackDayOfWeek;	// IMP=0x0000000000029d10
+ (id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3 forceAbbreviated:(_Bool)arg4;	// IMP=0x0000000000029028
+ (id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000028a4d
+ (id)_whiteImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000028991
- (void).cxx_destruct;	// IMP=0x0000000000029e4d
@property(readonly, nonatomic) double canvasScale; // @synthesize canvasScale=_canvasScale;
@property(readonly, nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(readonly, nonatomic) long long iconFormat; // @synthesize iconFormat=_iconFormat;
@property(readonly, copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(readonly, copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)_colorForDayOfWeek;	// IMP=0x0000000000029c62
- (id)_iconRedColor;	// IMP=0x0000000000029c2e
- (id)_iconBlackColor;	// IMP=0x0000000000029bff
- (id)_dayNumberFont;	// IMP=0x0000000000029bba
- (id)_dateNameFont;	// IMP=0x0000000000029b75
- (double)_roundSpecToActual:(double)arg1;	// IMP=0x0000000000029b44
- (void)_drawDateName;	// IMP=0x00000000000293d7
- (void)_drawDayNumber;	// IMP=0x0000000000028bb5
- (void)_drawIconInContext:(struct CGContext *)arg1 iconBase:(id)arg2;	// IMP=0x0000000000028826
- (struct CGImage *)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5;	// IMP=0x00000000000285ed
- (id)initWithForceNoTextEffects:(_Bool)arg1;	// IMP=0x00000000000285be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
