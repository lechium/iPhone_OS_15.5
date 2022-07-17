//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAUserNotificationProvider, NSString;

@interface NotificationController : NSObject
{
    FAUserNotificationProvider *_notificationProvider;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0020000000001ea9
- (void).cxx_destruct;	// IMP=0x0020000000002da3
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x0010000000002cf2
- (void)provider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000002a07
- (void)provider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x001000000000263e
- (void)_allPendingNotificationsSortedByDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000024b7
- (void)allPendingNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002420
- (void)pendingNotificationsForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000021bd
- (void)removeAllNotificationsFromClient:(id)arg1;	// IMP=0x0010000000002011
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001f51
- (void)deliverNotification:(id)arg1;	// IMP=0x0010000000001f3b
- (void)start;	// IMP=0x0010000000001efe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
