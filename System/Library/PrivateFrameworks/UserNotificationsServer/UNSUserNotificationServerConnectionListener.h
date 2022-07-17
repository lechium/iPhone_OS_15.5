//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSXPCListenerDelegate-Protocol.h>
#import <UserNotificationsServer/UNUserNotificationServerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCListener, UNSApplicationLauncher, UNSAttachmentsService, UNSLocalizationService, UNSLocationMonitor, UNSNotificationAuthorizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSNotificationTopicRepository, UNSRemoteNotificationServer, UNSUserNotificationServerRemoteNotificationConnectionListener, _UNNotificationCommunicationContextService;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableDictionary *_connectionsByBundleIdentifier;	// 24 = 0x18
    NSMapTable *_bundleIdentifiersByConnection;	// 32 = 0x20
    UNSApplicationLauncher *_applicationLauncher;	// 40 = 0x28
    UNSLocalizationService *_localizationService;	// 48 = 0x30
    UNSNotificationCategoryRepository *_categoryRepository;	// 56 = 0x38
    UNSNotificationSchedulingService *_notificationSchedulingService;	// 64 = 0x40
    UNSNotificationAuthorizationService *_notificationsAuthorizationService;	// 72 = 0x48
    UNSNotificationSettingsService *_notificationSettingsService;	// 80 = 0x50
    UNSNotificationRepository *_notificationRepository;	// 88 = 0x58
    UNSNotificationTopicRepository *_topicRepository;	// 96 = 0x60
    UNSUserNotificationServerRemoteNotificationConnectionListener *_remoteNotificationConnectionListener;	// 104 = 0x68
    UNSRemoteNotificationServer *_remoteNotificationService;	// 112 = 0x70
    UNSAttachmentsService *_attachmentsService;	// 120 = 0x78
    UNSLocationMonitor *_locationMonitor;	// 128 = 0x80
    _UNNotificationCommunicationContextService *_communicationContextService;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000005e438
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005e1d1
- (id)_queue_delegateConnectionForBundleIdentifier:(id)arg1;	// IMP=0x000000000005dfdb
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;	// IMP=0x000000000005dfc5
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;	// IMP=0x000000000005de29
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005dd13
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005dbd4
- (id)_queue_notificationRequestsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000005dab4
- (id)_queue_notificationsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000005d994
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;	// IMP=0x000000000005d8ec
- (id)_currentConnection;	// IMP=0x000000000005d890
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005d7b7
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d609
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d4ba
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d15d
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cfa9
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ce4b
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cced
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005caab
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c96a
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c75e
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c472
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c32f
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005bfcb
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005be5e
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005bbbd
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005b9b9
- (void)_saveNotificationRecord:(id)arg1 shouldRepost:(_Bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b780
- (void)_saveNotificationRequest:(id)arg1 shouldRepost:(_Bool)arg2 deliveredDate:(id)arg3 forBundleIdentifier:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005b243
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ad88
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ab14
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005a896
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005a52b
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005a3dc
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005a1cd
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059f9c
- (void)setObservingUserNotifications:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000059e7d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000059b87
- (void)resume;	// IMP=0x0000000000059b71
- (void)dealloc;	// IMP=0x0000000000059aee
- (id)initWithCategoryRepository:(id)arg1 notificationSchedulingService:(id)arg2 notificationAuthorizationService:(id)arg3 notificationSettingsService:(id)arg4 notificationRepository:(id)arg5 remoteNotificationConnectionListener:(id)arg6 remoteNotificationService:(id)arg7 applicationLauncher:(id)arg8 attachmentsService:(id)arg9 locationMonitor:(id)arg10 topicRepository:(id)arg11 localizationService:(id)arg12 communicationContextService:(id)arg13;	// IMP=0x00000000000597d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
