//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationRequest.h>

@interface UNNotificationRequest (HKMenstrualCycles)
+ (id)_hkmc_notificationRequestWithContent:(id)arg1;	// IMP=0x0000000000016502
+ (id)_hkmc_notificationRequestWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4;	// IMP=0x000000000001649c
+ (id)_hkmc_requestForCategoryIdentifier:(id)arg1 startDate:(id)arg2 fertileWindowEndDayIndex:(long long)arg3;	// IMP=0x0000000000015ef4
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1 fertileWindowEndDayIndex:(long long)arg2;	// IMP=0x0000000000015e62
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1;	// IMP=0x0000000000015e4e
@end

