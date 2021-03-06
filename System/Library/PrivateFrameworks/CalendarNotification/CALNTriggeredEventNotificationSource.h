//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>
#import <CalendarNotification/CALNTriggeredEventNotificationDataSourceDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSourceEventRepresentationProvider, CALNTimeToLeaveRefreshStorage, CALNTravelAdvisoryTimelinessAuthority, CALNTriggeredEventNotificationBodyDescriptionProvider, CALNTriggeredEventNotificationDataSource, CALNTriggeredEventNotificationDataStorage, CALNTriggeredEventNotificationMapItemURLProvider, CALNTriggeredEventNotificationTransitionProvider, CALNTriggeredEventNotificationTriggerHelper, CALNURLHandler, CalDateProvider, OS_dispatch_queue;

@interface CALNTriggeredEventNotificationSource : NSObject <CALNTriggeredEventNotificationDataSourceDelegate, CALNNotificationSource>
{
    id <CALNTriggeredEventNotificationDataSource> _dataSource;	// 8 = 0x8
    id <CALNNotificationManager> _notificationManager;	// 16 = 0x10
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;	// 24 = 0x18
    id <CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;	// 32 = 0x20
    id <CALNTriggeredEventNotificationTriggerHelper> _triggerHelper;	// 40 = 0x28
    id <CALNTriggeredEventNotificationTransitionProvider> _transitionProvider;	// 48 = 0x30
    id <CALNTriggeredEventNotificationBodyDescriptionProvider> _bodyDescriptionProvider;	// 56 = 0x38
    id <CALNTravelAdvisoryTimelinessAuthority> _travelAdvisoryTimelinessAuthority;	// 64 = 0x40
    id <CalDateProvider> _dateProvider;	// 72 = 0x48
    id <CALNTriggeredEventNotificationDataStorage> _notificationDataStorage;	// 80 = 0x50
    id <CALNTimeToLeaveRefreshStorage> _timeToLeaveRefreshStorage;	// 88 = 0x58
    NSMutableDictionary *_eventURLToObjectIDMap;	// 96 = 0x60
    id <CALNURLHandler> _urlHandler;	// 104 = 0x68
    id <CALNTriggeredEventNotificationMapItemURLProvider> _mapItemURLProvider;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_workQueue;	// 120 = 0x78
}

+ (id)_mailtoURLForNotification:(id)arg1;	// IMP=0x000000000003e900
+ (id)_conferenceURLForNotification:(id)arg1;	// IMP=0x000000000003e847
+ (id)_mapItemURLForNotification:(id)arg1;	// IMP=0x000000000003e78e
+ (id)_mergeDataFromUnprotectedStore:(id)arg1 withDataInProtectedStore:(id)arg2;	// IMP=0x000000000003dd1f
+ (id)mailToURLUserInfoKey;	// IMP=0x000000000003ebd0
+ (id)conferenceURLUserInfoKey;	// IMP=0x000000000003ebc3
+ (id)mapItemURLUserInfoKey;	// IMP=0x000000000003ebb6
+ (id)mailOrganizerActionIdentifier;	// IMP=0x000000000003eba2
+ (id)conferenceCallActionIdentifier;	// IMP=0x000000000003eb8e
+ (id)directionsActionIdentifier;	// IMP=0x000000000003eb7a
+ (id)snoozeActionIdentifier;	// IMP=0x000000000003eb66
- (void).cxx_destruct;	// IMP=0x000000000003eab1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationMapItemURLProvider> mapItemURLProvider; // @synthesize mapItemURLProvider=_mapItemURLProvider;
@property(readonly, nonatomic) id <CALNURLHandler> urlHandler; // @synthesize urlHandler=_urlHandler;
@property(readonly, nonatomic) NSMutableDictionary *eventURLToObjectIDMap; // @synthesize eventURLToObjectIDMap=_eventURLToObjectIDMap;
@property(readonly, nonatomic) id <CALNTimeToLeaveRefreshStorage> timeToLeaveRefreshStorage; // @synthesize timeToLeaveRefreshStorage=_timeToLeaveRefreshStorage;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationDataStorage> notificationDataStorage; // @synthesize notificationDataStorage=_notificationDataStorage;
@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <CALNTravelAdvisoryTimelinessAuthority> travelAdvisoryTimelinessAuthority; // @synthesize travelAdvisoryTimelinessAuthority=_travelAdvisoryTimelinessAuthority;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationBodyDescriptionProvider> bodyDescriptionProvider; // @synthesize bodyDescriptionProvider=_bodyDescriptionProvider;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationTransitionProvider> transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationTriggerHelper> triggerHelper; // @synthesize triggerHelper=_triggerHelper;
@property(readonly, nonatomic) id <CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider; // @synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(_Bool)arg1;	// IMP=0x000000000003e9b9
- (id)_launchURLForResponse:(id)arg1;	// IMP=0x000000000003e673
- (_Bool)_sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;	// IMP=0x000000000003e4b7
- (id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)arg1 oldSourceClientIdentifier:(id)arg2;	// IMP=0x000000000003e38a
- (id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)arg1 hypothesisMessage:(id)arg2;	// IMP=0x000000000003e2cf
- (void)_setNotificationResponseData:(id)arg1 onNotificationContent:(id)arg2;	// IMP=0x000000000003e24c
- (id)_notificationResponseDataForSourceNotificationInfo:(id)arg1;	// IMP=0x000000000003e1a1
- (id)_notificationResponseDataForRecord:(id)arg1;	// IMP=0x000000000003dfd1
- (_Bool)migrateToStorage:(id)arg1;	// IMP=0x000000000003d83e
- (id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)arg1;	// IMP=0x000000000003d7ce
- (void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)arg1;	// IMP=0x000000000003d671
- (void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)arg1;	// IMP=0x000000000003d52b
- (_Bool)_shouldUpdateStoredNotificationDataGivenTransition:(unsigned long long)arg1;	// IMP=0x000000000003d51b
- (_Bool)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(_Bool)arg1 hasExistingTravelInformation:(_Bool)arg2 mayCeaseRouteMonitoring:(_Bool)arg3;	// IMP=0x000000000003d50c
- (void)_addNotificationData:(id)arg1 forSourceClientIdentifier:(id)arg2;	// IMP=0x000000000003d352
- (void)_addNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5;	// IMP=0x000000000003d1b9
- (void)_updateStoredNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5;	// IMP=0x000000000003cf8d
- (void)_removeStoredNotificationDataForEventWithEventID:(id)arg1;	// IMP=0x000000000003cf0a
- (id)_notificationDataForSourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(unsigned long long)arg3 now:(id)arg4;	// IMP=0x000000000003cc74
- (id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)arg1;	// IMP=0x000000000003cb96
- (void)_handleMailOrganizerActionWithResponse:(id)arg1;	// IMP=0x000000000003ca81
- (void)_handleConferenceCallActionWithResponse:(id)arg1;	// IMP=0x000000000003c9bd
- (void)_handleDirectionsActionWithResponse:(id)arg1;	// IMP=0x000000000003c87a
- (void)_commonHandleResponse:(id)arg1;	// IMP=0x000000000003c7a6
- (void)_addEventURL:(id)arg1 mappingToEventObjectID:(id)arg2;	// IMP=0x000000000003c77b
- (void)_updateNotification:(id)arg1 shouldClearHypothesis:(_Bool)arg2;	// IMP=0x000000000003c519
- (void)_notificationAddedWithSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 trigger:(unsigned long long)arg3;	// IMP=0x000000000003c354
- (void)_addRecord:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 trigger:(unsigned long long)arg4 transition:(unsigned long long)arg5 now:(id)arg6;	// IMP=0x000000000003c197
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1 existingRecords:(id)arg2;	// IMP=0x000000000003c059
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1;	// IMP=0x000000000003be38
- (id)_updatedSourceNotificationInfoForContentCreation:(id)arg1;	// IMP=0x000000000003ba27
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 notificationInfo:(id)arg2 existingNotificationData:(id)arg3 hypothesis:(id)arg4 shouldClearHypothesis:(_Bool)arg5 isOffsetFromTravelTimeStart:(_Bool)arg6 isForContentCreation:(_Bool)arg7;	// IMP=0x000000000003b49c
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(_Bool)arg2 isForContentCreation:(_Bool)arg3;	// IMP=0x000000000003b2f4
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(_Bool)arg2;	// IMP=0x000000000003b0ff
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1;	// IMP=0x000000000003b0eb
- (_Bool)_itemWithEventID:(id)arg1 affectedByChangesToObjects:(id)arg2;	// IMP=0x000000000003af85
- (_Bool)_notificationWithSourceClientIdentifier:(id)arg1 affectedByChangesToObjects:(id)arg2;	// IMP=0x000000000003ae66
- (_Bool)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;	// IMP=0x000000000003acb0
- (void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;	// IMP=0x000000000003abdc
- (void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)arg1;	// IMP=0x000000000003aa58
- (_Bool)_isNotificationMetaDataExpired:(id)arg1 eventID:(id)arg2;	// IMP=0x000000000003a8ba
- (_Bool)_shouldRemoveNotificationMetaData:(id)arg1 eventID:(id)arg2;	// IMP=0x000000000003a749
- (void)_refreshNotificationMetaData:(id)arg1 eventID:(id)arg2;	// IMP=0x000000000003a5cf
- (void)_refreshNotificationMetaDataWithObjectIDs:(id)arg1;	// IMP=0x000000000003a44b
- (void)_refreshNotification:(id)arg1;	// IMP=0x000000000003a28f
- (void)_refreshNotificationRecordsWithObjectIDs:(id)arg1;	// IMP=0x000000000003a007
- (void)_refreshNotifications:(id)arg1;	// IMP=0x0000000000039f6d
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 allowsLocationAlerts:(_Bool)arg3;	// IMP=0x0000000000039a80
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;	// IMP=0x00000000000399e4
- (unsigned long long)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(unsigned long long)arg1;	// IMP=0x00000000000399d0
- (unsigned long long)_travelAdvisoryTimelinessPeriodForHypothesis:(id)arg1;	// IMP=0x0000000000039945
- (_Bool)_mayCeaseRouteMonitoringForExistingNotificationData:(id)arg1;	// IMP=0x0000000000039872
- (_Bool)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;	// IMP=0x00000000000397ed
- (void)_clearTravelAdvisoryHypotheses;	// IMP=0x00000000000394cb
- (void)_travelAdvisoryAuthorizationChanged:(_Bool)arg1;	// IMP=0x00000000000393b8
- (void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg1;	// IMP=0x0000000000039248
- (void)_triggeredWithSourceClientIdentifier:(id)arg1 triggerData:(id)arg2;	// IMP=0x0000000000038585
- (void)dataSource:(id)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg2;	// IMP=0x00000000000384b6
- (void)dataSource:(id)arg1 travelAdvisoryAuthorizationChanged:(_Bool)arg2;	// IMP=0x000000000003840b
- (void)dataSource:(id)arg1 triggeredWithSourceClientIdentifier:(id)arg2 triggerData:(id)arg3;	// IMP=0x000000000003830d
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)_didReceiveResponse:(id)arg1;	// IMP=0x00000000000371a5
- (void)didReceiveResponse:(id)arg1;	// IMP=0x00000000000370d6
- (void)refreshNotifications:(id)arg1;	// IMP=0x0000000000036fe1
- (id)contentForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 isProtectedDataAvailable:(_Bool)arg3;	// IMP=0x000000000003642f
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;	// IMP=0x0000000000036214
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 triggerHelper:(id)arg5 transitionProvider:(id)arg6 bodyDescriptionProvider:(id)arg7 travelAdvisoryTimelinessAuthority:(id)arg8 dateProvider:(id)arg9 notificationDataStorage:(id)arg10 urlHandler:(id)arg11 mapItemURLProvider:(id)arg12 timeToLeaveRefreshStorage:(id)arg13;	// IMP=0x0000000000035f1c
- (_Bool)sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;	// IMP=0x000000000003ebdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

