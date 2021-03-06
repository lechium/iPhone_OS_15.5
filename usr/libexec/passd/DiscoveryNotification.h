//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryNotification
{
}

+ (id)_propertySettersForNotification;	// IMP=0x004000000032044d
+ (id)_predicateForNotificationsThatAreNotExpiredForDate:(id)arg1;	// IMP=0x00100000003202e5
+ (id)_predicateForNotificationsWithRelevantDate:(id)arg1;	// IMP=0x0010000000320025
+ (id)_predicateForNotificationsThatAreScheduled:(unsigned long long)arg1;	// IMP=0x001000000031ffb2
+ (id)_predicateForNotificationsThatAreDelivered:(unsigned long long)arg1;	// IMP=0x001000000031ff2a
+ (id)_predicateForNotificationsWithScheduledDeliveryDateBeforeDate:(id)arg1;	// IMP=0x001000000031fea9
+ (id)_predicateForNotificationsThatAreActive:(unsigned long long)arg1;	// IMP=0x001000000031fe2f
+ (id)_predicateForNotificationIdentifier:(id)arg1;	// IMP=0x001000000031fe0c
+ (void)deleteAllNotificationInDatabase:(id)arg1;	// IMP=0x001000000031f8bc
+ (void)deleteNotificationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031f817
+ (void)deleteNotificationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031f7d5
+ (id)nextRelevantNotificationForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031f44e
+ (id)notificationsRequiringInsertionForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031f197
+ (id)notificationsToScheduleForDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031eedb
+ (id)notificationsThatAreNotExpiredForDate:(id)arg1 active:(unsigned long long)arg2 delivered:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000031ec49
+ (id)notificationsInDatabase:(id)arg1;	// IMP=0x001000000031ea96
+ (id)insertOrUpdateNotification:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031e127
+ (id)notificationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031e09b
+ (id)databaseTable;	// IMP=0x001000000031e08e
- (id)notification;	// IMP=0x004000000031f956
- (void)updateWithNotification:(id)arg1;	// IMP=0x001000000031e67f
- (id)initWithNotification:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000031e1fc

@end

