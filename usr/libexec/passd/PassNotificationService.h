//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassNotificationService
{
}

+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x00400000001ea5b1
+ (id)queryWithDatabase:(id)arg1 transactionServicePID:(unsigned long long)arg2;	// IMP=0x00100000001ea120
+ (id)insertPassNotificationServiceWithNotificationService:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ea093
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001ea04a
+ (id)databaseTable;	// IMP=0x00100000001ea03d
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x00400000001ea4dd
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x00100000001ea44d
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x00100000001ea409
- (void)updateWithRegistrationStatus:(unsigned long long)arg1;	// IMP=0x00100000001ea3af
- (id)lastUpdatedTagDate;	// IMP=0x00100000001ea361
- (id)lastUpdatedTag;	// IMP=0x00100000001ea348
- (id)lastUpdatedDate;	// IMP=0x00100000001ea2fa
- (unsigned long long)registrationStatus;	// IMP=0x00100000001ea2af
- (id)notificationService;	// IMP=0x00100000001ea1d2
- (id)initWithNotificationServicePID:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001e9f4b

@end
