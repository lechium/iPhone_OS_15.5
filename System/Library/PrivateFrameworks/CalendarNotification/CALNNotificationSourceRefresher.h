//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALNInboxNotificationMonitor, NSArray;
@protocol CALNNotificationManager, CALNNotificationSource, OS_dispatch_queue;

@interface CALNNotificationSourceRefresher : NSObject
{
    _Bool _needsRefreshOnNotificationsLoaded;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_refreshQueue;	// 16 = 0x10
    NSArray<CALNNotificationSource> *_sources;	// 24 = 0x18
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;	// 32 = 0x20
    id <CALNNotificationManager> _notificationManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000112ad
@property(readonly, nonatomic) id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // @synthesize inboxNotificationMonitor=_inboxNotificationMonitor;
@property(readonly, copy, nonatomic) NSArray<CALNNotificationSource> *sources; // @synthesize sources=_sources;
- (void)_withdrawExpiredNotificationsForSource:(id)arg1;	// IMP=0x0000000000010f34
- (void)_refreshNotifications:(id)arg1;	// IMP=0x0000000000010bc0
- (void)refreshNotifications;	// IMP=0x0000000000010b5d
- (void)handleNotificationsChangedNotification:(id)arg1;	// IMP=0x00000000000109a4
- (void)handleNotificationsLoadedNotification;	// IMP=0x000000000001088b
- (id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3;	// IMP=0x000000000001076a

@end
