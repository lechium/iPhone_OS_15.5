//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, STScreenTimeOrganizationController, STUserNotificationManager;
@protocol STPersistenceControllerProtocol;

@interface STToolServerDelegate : NSObject
{
    id <STPersistenceControllerProtocol> _persistenceController;	// 8 = 0x8
    STScreenTimeOrganizationController *_screenTimeOrganizationController;	// 16 = 0x10
    STUserNotificationManager *_notificationManager;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000096112
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) STUserNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly) STScreenTimeOrganizationController *screenTimeOrganizationController; // @synthesize screenTimeOrganizationController=_screenTimeOrganizationController;
@property(readonly) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
- (void)performCloudSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096050
- (void)getMirroringMonitorStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095f86
- (void)scheduleAppMonitorAppDiscovery;	// IMP=0x0010000000095f49
- (void)getAppMonitorStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095ebd
- (void)postWeeklyReportNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095e4b
- (void)removeNotificationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095dc5
- (void)postNotificationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095d3f
- (void)setInstalledApps:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000095b11
- (void)rollupUsageData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095999
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000095851
- (id)initWithPersistenceController:(id)arg1 screenTimeOrganizationController:(id)arg2 notificationManager:(id)arg3;	// IMP=0x0010000000095765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

