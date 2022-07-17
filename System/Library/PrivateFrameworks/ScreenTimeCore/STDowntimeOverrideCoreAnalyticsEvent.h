//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STCoreAnalyticsEvent-Protocol.h>

@class NSDictionary, NSString;

@interface STDowntimeOverrideCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>
{
    _Bool _downtimeEnabled;	// 8 = 0x8
    _Bool _gracePeriodUsed;	// 9 = 0x9
    _Bool _scheduleEnabled;	// 10 = 0xa
    _Bool _userIsManaged;	// 11 = 0xb
    long long _hourOfDay;	// 16 = 0x10
}

+ (id)description;	// IMP=0x000000000003c82c
@property(readonly) _Bool userIsManaged; // @synthesize userIsManaged=_userIsManaged;
@property(readonly) long long hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(readonly) _Bool scheduleEnabled; // @synthesize scheduleEnabled=_scheduleEnabled;
@property(readonly) _Bool gracePeriodUsed; // @synthesize gracePeriodUsed=_gracePeriodUsed;
@property(readonly) _Bool downtimeEnabled; // @synthesize downtimeEnabled=_downtimeEnabled;
@property(readonly, copy) NSDictionary *payload;
@property(readonly, copy) NSString *name;
- (id)initWithDowntimeEnabled:(_Bool)arg1 gracePeriodUsed:(_Bool)arg2 scheduleEnabled:(_Bool)arg3 hourOfDay:(long long)arg4 userIsManaged:(_Bool)arg5;	// IMP=0x000000000003c7bc

// Remaining properties
@property(readonly, copy) NSString *description;

@end
