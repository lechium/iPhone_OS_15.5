//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject
{
    NSTimer *_tzSupportDayRolloverTimer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000633a5
- (void)invalidateTodayAndNotifyIfChanged;	// IMP=0x0000000000063342
- (_Bool)todayChangedAfterInvalidation;	// IMP=0x00000000000632a4
- (void)_killTimeZoneTimer;	// IMP=0x0000000000063266
- (void)_setupTimeZoneTimerWithCalendar:(id)arg1;	// IMP=0x0000000000062fcd
- (void)dealloc;	// IMP=0x0000000000062f8f
- (id)initWithCalendar:(id)arg1;	// IMP=0x0000000000062f27

@end

