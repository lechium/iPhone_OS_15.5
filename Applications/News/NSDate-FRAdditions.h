//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (FRAdditions)
+ (id)randomDateBeforeNow;	// IMP=0x0020000000048287
+ (id)_fr_sharedShortDateDateFormatter;	// IMP=0x0010000000048dc4
+ (id)_fr_sharedShortTimeDateFormatter;	// IMP=0x0010000000048d37
+ (id)_fr_sharedDayOfWeekDateFormatter;	// IMP=0x0010000000048cc7
+ (id)_fr_sharedGregorianCalendar;	// IMP=0x0010000000048c58
- (id)fr_localDate;	// IMP=0x0010000000048b26
- (id)fr_gregorianLongDisplayString;	// IMP=0x0010000000048a33
- (id)fr_gregorianMediumDisplayString;	// IMP=0x0010000000048940
- (id)fr_gregorianShortDisplayString;	// IMP=0x0010000000048850
- (id)fr_gregorianLongDisplayStringPreferringToday;	// IMP=0x001000000004875a
- (id)fr_gregorianMediumDisplayStringPreferringToday;	// IMP=0x0010000000048664
- (id)fr_gregorianShortDisplayStringPreferringToday;	// IMP=0x001000000004854c
- (id)fr_partOfDay;	// IMP=0x0010000000048404
- (id)stringWithTopStoriesFormat;	// IMP=0x001000000004833e
- (id)stringWithFormat:(id)arg1;	// IMP=0x00100000000482d3
@property(readonly, nonatomic) _Bool isYesterday;
@property(readonly, nonatomic) _Bool isToday;
@end

