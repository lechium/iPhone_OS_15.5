//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>

@class NSArray, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNEventCanceledNotificationDataSource, CALNNotificationManager, CalDateProvider;

@interface CALNEventCanceledNotificationSource : NSObject <CALNNotificationSource>
{
    id <CALNEventCanceledNotificationDataSource> _dataSource;	// 8 = 0x8
    id <CALNNotificationManager> _notificationManager;	// 16 = 0x10
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;	// 24 = 0x18
    id <CalDateProvider> _dateProvider;	// 32 = 0x20
}

+ (id)deleteActionIdentifier;	// IMP=0x00000000000201e5
- (void).cxx_destruct;	// IMP=0x00000000000201a9
@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNEventCanceledNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id *)arg2 summaryArgument:(id *)arg3;	// IMP=0x000000000001fe72
- (void)didReceiveResponse:(id)arg1;	// IMP=0x000000000001fca9
- (id)contentForNotificationWithInfo:(id)arg1;	// IMP=0x000000000001f6ce
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;	// IMP=0x000000000001f5e2
- (void)refreshNotifications:(id)arg1;	// IMP=0x000000000001f18f
@property(readonly, nonatomic) NSArray *categories;
- (id)_categoryIdentifier;	// IMP=0x000000000001ef4c
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 dateProvider:(id)arg4;	// IMP=0x000000000001ee62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

