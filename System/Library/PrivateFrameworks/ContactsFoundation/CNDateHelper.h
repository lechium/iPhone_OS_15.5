//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNDateHelper : NSObject
{
}

+ (_Bool)isGregorianDerivedCalendarIdentifier:(id)arg1;	// IMP=0x000000000006c48d
+ (_Bool)isGregorianDerivedCalendar:(id)arg1;	// IMP=0x000000000006c437
+ (id)dateComponentsFromDateComponents:(id)arg1 preservingUnits:(unsigned long long)arg2;	// IMP=0x000000000006c12d
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000006bec7
+ (id)gregorianDateComponentsFromDateComponents:(id)arg1;	// IMP=0x000000000006bab3
+ (id)dateComponentsInCalendar:(id)arg1 fromGregorianDateComponents:(id)arg2;	// IMP=0x000000000006b80c
+ (id)componentsForJanuary1WithYear:(long long)arg1;	// IMP=0x000000000006b6f7
+ (id)componentsFromDate:(id)arg1;	// IMP=0x000000000006b65f
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;	// IMP=0x000000000006b52f
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;	// IMP=0x000000000006b49b
+ (long long)gregorianYearFromDate:(id)arg1;	// IMP=0x000000000006b41f
+ (long long)gregorianYearInGMTFromDate:(id)arg1;	// IMP=0x000000000006b3a3
+ (long long)currentGregorianYearInGMT;	// IMP=0x000000000006b349
+ (id)gregorianCalendarInGMT;	// IMP=0x000000000006b278
+ (id)gregorianCalendar;	// IMP=0x000000000006b209
+ (_Bool)isComponentsEmpty:(id)arg1;	// IMP=0x000000000006b18b

@end
