//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLSCurrentCalendar
{
}

+ (_Bool)nextWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x00000000000a49de
+ (_Bool)rangeOfWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 containingDate:(id)arg3;	// IMP=0x00000000000a4939
+ (_Bool)closestWeekendLocalStartDate:(out id *)arg1 interval:(out double *)arg2 afterDate:(id)arg3;	// IMP=0x00000000000a4894
+ (_Bool)dateIntervalIntersectsWeekend:(id)arg1;	// IMP=0x00000000000a47ff
+ (_Bool)isWeekendDate:(id)arg1;	// IMP=0x00000000000a476a
+ (void)update;	// IMP=0x00000000000a46b3
+ (id)calendar;	// IMP=0x00000000000a46a2
+ (void)initialize;	// IMP=0x00000000000a4603

@end

