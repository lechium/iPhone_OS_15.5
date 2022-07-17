//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNUNUserNotificationCenterProtocol-Protocol.h>

@class NSString, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>
{
    UNUserNotificationCenter *_userNotificationCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001075a
@property(readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (id)notificationSettingsForTopics;	// IMP=0x0000000000010700
- (id)notificationSettings;	// IMP=0x00000000000106b0
- (void)setWantsNotificationResponsesDelivered;	// IMP=0x0000000000010673
- (void)removeAllDeliveredNotifications;	// IMP=0x0000000000010636
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;	// IMP=0x00000000000105c4
- (id)deliveredNotifications;	// IMP=0x0000000000010574
- (_Bool)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010424
- (_Bool)addNotificationRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000102da
- (id)notificationCategories;	// IMP=0x000000000001028a
- (void)setNotificationCategories:(id)arg1;	// IMP=0x0000000000010218
@property(nonatomic) __weak id <UNUserNotificationCenterDelegate> delegate;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000100d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
