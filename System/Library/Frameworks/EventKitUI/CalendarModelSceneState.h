//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CalendarModelSceneState : NSObject
{
    _Bool _showDayAsList;	// 8 = 0x8
    _Bool _showMonthAsDivided;	// 9 = 0x9
    int _dayViewFirstVisibleSecond;	// 12 = 0xc
    double _dayViewHourScale;	// 16 = 0x10
    double _weekViewHourScale;	// 24 = 0x18
    long long _weekViewFirstVisibleSecond;	// 32 = 0x20
    long long _lastUsedNonYearView;	// 40 = 0x28
}

@property(nonatomic) long long lastUsedNonYearView; // @synthesize lastUsedNonYearView=_lastUsedNonYearView;
@property(nonatomic) long long weekViewFirstVisibleSecond; // @synthesize weekViewFirstVisibleSecond=_weekViewFirstVisibleSecond;
@property(nonatomic) int dayViewFirstVisibleSecond; // @synthesize dayViewFirstVisibleSecond=_dayViewFirstVisibleSecond;
@property(nonatomic) double weekViewHourScale; // @synthesize weekViewHourScale=_weekViewHourScale;
@property(nonatomic) double dayViewHourScale; // @synthesize dayViewHourScale=_dayViewHourScale;
@property(nonatomic) _Bool showMonthAsDivided; // @synthesize showMonthAsDivided=_showMonthAsDivided;
@property(nonatomic) _Bool showDayAsList; // @synthesize showDayAsList=_showDayAsList;
- (id)init;	// IMP=0x000000000016ce94

@end
