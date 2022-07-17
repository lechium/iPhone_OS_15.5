//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSCalendar, NSDate;

@interface STDowntimeConfiguration : NSObject <NSCopying>
{
    long long _currentState;	// 8 = 0x8
    NSDate *_currentDate;	// 16 = 0x10
    long long _nextState;	// 24 = 0x18
    NSDate *_nextStateChangeDate;	// 32 = 0x20
    NSCalendar *_calendar;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003bb4e
@property(readonly, copy) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, copy) NSDate *nextStateChangeDate; // @synthesize nextStateChangeDate=_nextStateChangeDate;
@property(readonly) long long nextState; // @synthesize nextState=_nextState;
@property(readonly, copy) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly) long long currentState; // @synthesize currentState=_currentState;
- (unsigned long long)hash;	// IMP=0x000000000003ba14
- (_Bool)isEqualToDowntimeState:(id)arg1;	// IMP=0x000000000003b7a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b741
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b6fc
- (id)description;	// IMP=0x000000000003b534
- (id)initWithCurrentState:(long long)arg1 currentDate:(id)arg2 nextState:(long long)arg3 nextStateChangeDate:(id)arg4 calendar:(id)arg5;	// IMP=0x000000000003b430

@end
