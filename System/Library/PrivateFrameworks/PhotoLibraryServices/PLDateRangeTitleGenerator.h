//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject
{
    PLLazyObject *_lazyRecentDateRangeFormatter;	// 8 = 0x8
    PLLazyObject *_lazyDateRangeFormatter;	// 16 = 0x10
    PLLazyObject *_lazyYearlessDateRangeFormatter;	// 24 = 0x18
    PLLazyObject *_lazyMonthYearDateRangeFormatter;	// 32 = 0x20
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;	// 40 = 0x28
    PLLazyObject *_lazyYearDateRangeFormatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000022f7e8
- (id)yearDateRangeFormatter;	// IMP=0x000000000022f7d2
- (id)shortMonthYearDateRangeFormatter;	// IMP=0x000000000022f7bc
- (id)monthYearDateRangeFormatter;	// IMP=0x000000000022f7a6
- (id)yearlessDateRangeFormatter;	// IMP=0x000000000022f790
- (id)dateRangeFormatter;	// IMP=0x000000000022f77a
- (id)recentDateRangeFormatter;	// IMP=0x000000000022f764
- (id)newYearDateRangeFormatter;	// IMP=0x000000000022f721
- (id)newShortMonthYearDateRangeFormatter;	// IMP=0x000000000022f6de
- (id)newMonthYearDateRangeFormatter;	// IMP=0x000000000022f69b
- (id)newYearlessDateRangeFormatter;	// IMP=0x000000000022f639
- (id)newDateRangeFormatter;	// IMP=0x000000000022f5da
- (id)newRecentDateRangeFormatter;	// IMP=0x000000000022f578
- (id)dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000022f4e6
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(unsigned long long)arg5;	// IMP=0x000000000022f3ba
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4;	// IMP=0x000000000022f397
- (id)init;	// IMP=0x000000000022ef71

@end

