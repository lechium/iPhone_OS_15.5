//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface _LTActivityLogging : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000024a7
- (id)_featureNameForTask:(long long)arg1;	// IMP=0x000000000000246d
- (void)_logMonthlyActivityFeature:(long long)arg1 date:(id)arg2;	// IMP=0x00000000000022a3
- (void)_logWeeklyActivityFeature:(long long)arg1 date:(id)arg2;	// IMP=0x00000000000020d9
- (void)_logDailyActivityFeature:(long long)arg1 date:(id)arg2;	// IMP=0x0000000000001fce
- (void)_logAllActivityFeature:(long long)arg1 date:(id)arg2;	// IMP=0x0000000000001f54
- (void)registerActivity:(long long)arg1;	// IMP=0x0000000000001d2a
- (id)init;	// IMP=0x0000000000001ca8

@end
