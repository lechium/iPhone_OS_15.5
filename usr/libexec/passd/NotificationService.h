//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NotificationService
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x00400000000df6c3
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x00100000000df6a0
+ (id)_predicateForNoRegistrationURL;	// IMP=0x00100000000df680
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x00100000000df618
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x00100000000df5b0
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x00100000000df53d
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x00100000000df51a
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000000df311
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x00100000000dec70
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x00100000000debe4
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x00100000000debd0
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x00100000000de9ce
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x00100000000de858
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x00100000000de7cc
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00100000000de6f4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000de6c5
+ (id)databaseTable;	// IMP=0x00100000000de6b8
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x00400000000df157
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x00100000000df08c
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x00100000000deffc
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x00100000000defe3
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x00100000000defca
- (void)updateWithPushToken:(id)arg1;	// IMP=0x00100000000defb1
- (id)notificationService;	// IMP=0x00100000000dee72
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00100000000de52a

@end
