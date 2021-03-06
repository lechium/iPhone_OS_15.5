//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject
{
    _Bool _valid;	// 8 = 0x8
    unsigned long long _ticks;	// 16 = 0x10
    id <ABVCardTimeProvider> _timeProvider;	// 24 = 0x18
    NSDate *_startTime;	// 32 = 0x20
}

+ (_Bool)shouldCheckTime;	// IMP=0x000000000005e486
+ (id)timerWithTimeProvider:(id)arg1;	// IMP=0x000000000005e43a
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) id <ABVCardTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(nonatomic) unsigned long long ticks; // @synthesize ticks=_ticks;
- (_Bool)isValid;	// IMP=0x000000000005e604
- (void)checkValidity;	// IMP=0x000000000005e588
- (_Bool)isStarted;	// IMP=0x000000000005e56f
- (void)start;	// IMP=0x000000000005e531
- (void)dealloc;	// IMP=0x000000000005e4e7
- (id)initWithTimeProvider:(id)arg1;	// IMP=0x000000000005e493

@end

