//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLLocation, CLLocationManager, CLPlacemark, NSArray, NSDate, NSLocale, NSMutableArray, NSString, NSURL, PDAccountManager, PDApplyManager, PDDatabaseManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDRuleManager, PDTransitNotificationService, PDUserNotificationManager;
@protocol OS_dispatch_queue, PDDiscoveryManagerDelegate;

@interface PDDiscoveryManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 16 = 0x10
    PDRuleManager *_ruleManager;	// 24 = 0x18
    PDAccountManager *_accountManager;	// 32 = 0x20
    PDApplyManager *_applyManager;	// 40 = 0x28
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 48 = 0x30
    PDTransitNotificationService *_transitNotificationService;	// 56 = 0x38
    PDUserNotificationManager *_userNotificationManager;	// 64 = 0x40
    PDPaymentTransactionProcessor *_paymentTransactionProcessor;	// 72 = 0x48
    id <PDDiscoveryManagerDelegate> _delegate;	// 80 = 0x50
    CLLocation *_latestValidLocation;	// 88 = 0x58
    CLPlacemark *_latestValidPlacemark;	// 96 = 0x60
    CLLocationManager *_locationManager;	// 104 = 0x68
    CLGeocoder *_geocoder;	// 112 = 0x70
    NSLocale *_geocodingLocale;	// 120 = 0x78
    _Bool _rulesNeedLocation;	// 128 = 0x80
    _Bool _rulesNeedPlacemark;	// 129 = 0x81
    NSURL *_discoveryManifestURL;	// 136 = 0x88
    _Bool _isUpdatingDiscoveryManifest;	// 144 = 0x90
    _Bool _isEvaluatingRules;	// 145 = 0x91
    _Bool _forceUpdateBadgeCountOnNextProcessingOfDiscoveryObjects;	// 146 = 0x92
    NSMutableArray *_pendingProcessingDiscoveryObjectsBlocks;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_workQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_replyQueue;	// 168 = 0xa8
    long long _currentMessagesBundleVersion;	// 176 = 0xb0
    _Bool _shouldRestoreDiscoveryItemsStatusFromDefaults;	// 184 = 0xb8
    _Bool _shouldRestoreDiscoveryMessagesStatusFromDefaults;	// 185 = 0xb9
    _Bool _shouldRestoreNotificationsStatusFromDefaults;	// 186 = 0xba
    NSDate *_lastProcessForTransactionUpdateDate;	// 192 = 0xc0
    NSArray *_discoveryArticleLayoutOverrides;	// 200 = 0xc8
    NSArray *_engagementMessageOverrides;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x002000000034e83d
@property(nonatomic) _Bool rulesNeedPlacemark; // @synthesize rulesNeedPlacemark=_rulesNeedPlacemark;
@property(nonatomic) _Bool rulesNeedLocation; // @synthesize rulesNeedLocation=_rulesNeedLocation;
@property(readonly, nonatomic) CLPlacemark *latestValidPlacemark; // @synthesize latestValidPlacemark=_latestValidPlacemark;
@property(readonly, nonatomic) CLLocation *latestValidLocation; // @synthesize latestValidLocation=_latestValidLocation;
- (void)_queue_updateDiscoveryNotificationsStatusDefaultsForUpdatedNotifications:(id)arg1;	// IMP=0x001000000034e506
- (void)_queue_updateDiscoveryNotificationsStatusDefaults;	// IMP=0x001000000034e4b6
- (void)_queue_restoreDiscoveryNotificationStatusFromDefaultsIfNecessaryWithServerNotifications:(id)arg1;	// IMP=0x001000000034e15a
- (void)_updateDiscoveryEngagementMessageStatusDefaultsForUpdatedMessages:(id)arg1;	// IMP=0x001000000034de4f
- (void)_queue_updateDiscoveryEngagementMessageStatusDefaults;	// IMP=0x001000000034ddff
- (void)_queue_restoreDiscoveryEngagementMessageStatusFromDefaultsIfNecessaryWithServerMessages:(id)arg1;	// IMP=0x001000000034daa3
- (void)_updateDiscoveryItemStatusDefaultsForUpdatedItems:(id)arg1;	// IMP=0x001000000034d798
- (void)_queue_updateDiscoveryItemStatusDefaults;	// IMP=0x001000000034d748
- (void)_queue_restoreDiscoveryItemStatusFromDefaultsIfNecessaryWithServerItems:(id)arg1;	// IMP=0x001000000034d3ec
- (void)_cleanArticleLayoutsDirectories;	// IMP=0x001000000034cfd1
- (id)_deleteMessagesBundle;	// IMP=0x001000000034ce6c
- (id)_discoveryMessageManifestFromBundle:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000034cce1
- (id)_discoveryArticleLayoutFromBundleForDiscoveryItem:(id)arg1 error:(id *)arg2;	// IMP=0x001000000034ca3b
- (id)_filterEngagementMessagesForViewCount:(id)arg1;	// IMP=0x001000000034c838
- (id)_filterItemsForViewCount:(id)arg1;	// IMP=0x001000000034c652
- (id)_filterDiscoveryObjectsForOSAndHardwareVersion:(id)arg1;	// IMP=0x001000000034c36e
- (id)_filterNotificationsForOSAndHardwareVersion:(id)arg1;	// IMP=0x001000000034c35c
- (id)_filterEngagementMessagesForOSAndHardwareVersion:(id)arg1;	// IMP=0x001000000034c34a
- (id)_filterDiscoveryItemsForOSAndHardwareVersion:(id)arg1;	// IMP=0x001000000034c338
- (id)_filterRulesForOSVersion:(id)arg1;	// IMP=0x001000000034c0ea
- (void)_fetchAndWriteBundleFromRemoteBundleURL:(id)arg1 toLocalBundleURL:(id)arg2 processTempBundle:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000034b7fb
- (void)_fetchAndWriteBundleForDiscoveryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034b628
- (void)_articleLayoutForDiscoveryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034b21e
- (void)_queue_performProcessingDiscoveryObjectsShouldForceBadgeCountUpdate:(_Bool)arg1 withCompletionBlocks:(id)arg2 finalCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000034a5b7
- (void)_queue_scheduleTaskForNextAction;	// IMP=0x001000000034a2b9
- (void)_queue_insertDiscoveryNotificationsIfNecessary;	// IMP=0x00100000003491f0
- (void)_queue_processExistingDiscoveryUserNotifications:(id)arg1;	// IMP=0x0010000000348b24
- (void)_queue_performNextProcessingDiscoveryObjects;	// IMP=0x001000000034893c
- (void)_queue_processDiscoveryItemsAndMessagesShouldForceBadgeCountUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003488d3
- (void)_queue_updateWithServerNotifications:(id)arg1;	// IMP=0x001000000034882b
- (void)_queue_updateWithServerEngagementMessages:(id)arg1;	// IMP=0x0010000000348783
- (void)_queue_updateWithServerDiscoveryItems:(id)arg1;	// IMP=0x00100000003486db
- (long long)_currentMessagesBundleVersion;	// IMP=0x001000000034859b
- (void)_callDelegateWithUpdatedDiscoveryItems:(id)arg1 engagementMessages:(id)arg2;	// IMP=0x00100000003483cc
- (void)_processUpdatedNotifications;	// IMP=0x0010000000348046
- (void)_queue_processDiscoveryManifest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000034798e
- (void)_processDiscoveryManifest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003478b2
- (void)_fetchDiscoverManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000347651
- (void)_queue_shouldUpdateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003473b3
- (void)_shouldUpdateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000347308
- (void)removeDiscoveryUserNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346f4d
- (void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000346df7
- (void)insertDiscoveryEngagementMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000346c34
- (void)processDiscoveryItemsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346a6f
- (void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003468a5
- (void)discoveryItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346742
- (void)manifestAllowsMiniCardsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003464e6
- (void)updateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000346393
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0010000000345d58
- (void)paymentTransactionUpdated:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x0010000000345b02
- (_Bool)_shouldReprocessForTransaction:(id)arg1 withLastProcessedForTransactionUpdateDate:(id)arg2;	// IMP=0x0010000000345a23
- (void)transitNotificationService:(id)arg1 didAddRenotifyNotificationForMarket:(id)arg2;	// IMP=0x0010000000345949
- (void)transitNotificationService:(id)arg1 didAddOpenLoopUpgradeNotificationForMarket:(id)arg2;	// IMP=0x001000000034586f
- (void)transitNotificationService:(id)arg1 didAddDCINotificationForMarket:(id)arg2;	// IMP=0x0010000000345795
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x00100000003456bb
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x00100000003455e1
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x0010000000345507
- (void)peerPaymentWebServiceCoordinator:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x0010000000345190
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00100000003450b6
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x0010000000344fdc
- (void)processLocationUpdate;	// IMP=0x0010000000344f02
- (void)locationManager:(id)arg1 didVisit:(id)arg2;	// IMP=0x0010000000344ba3
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000034495a
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0010000000344875
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000003447e2
- (void)passAdded:(id)arg1;	// IMP=0x0010000000344708
- (void)clearVisitorIDAndRelatedData;	// IMP=0x0010000000344621
- (id)_rotateVisitorIDIfNecessaryWithVisitorIDCreationInterval:(double)arg1;	// IMP=0x0010000000344480
- (id)_createOrRotateVisitorIDIfNecessary;	// IMP=0x0010000000344364
- (id)_createVisitorID;	// IMP=0x001000000034427f
- (id)archivedTokenForDiscoveryAnalyticsSubject;	// IMP=0x0010000000344221
- (void)setArchivedTokenForDiscoveryAnalyticsSubject:(id)arg1;	// IMP=0x00100000003441a4
- (void)_incrementCountForCountsDictionaryWithKey:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x001000000034402e
- (id)visitorIDForCompletedDiscoveryItemCTA;	// IMP=0x0010000000343ec5
- (id)visitorIDForTappedDiscoveryItemCTA:(id)arg1 itemIdentifier:(id)arg2 cardSize:(long long)arg3;	// IMP=0x0010000000343cef
- (id)visitorIDForDismissedDiscoveryItemWithIdentifier:(id)arg1;	// IMP=0x0010000000343b9c
- (id)visitorIDForExpandedDiscoveryItemWithIdentifier:(id)arg1;	// IMP=0x0010000000343a49
- (id)visitorIDForDisplayedDiscoveryItemWithIdentifier:(id)arg1 isWelcomeCard:(_Bool)arg2;	// IMP=0x0010000000343910
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1;	// IMP=0x00100000003437e4
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000343386
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003428c8
- (void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000034258c
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000342198
- (void)discoveryArticleLayoutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000034152d
- (void)_paymentWebServiceContextChanged;	// IMP=0x00100000003412e9
- (void)_startup;	// IMP=0x00100000003411bc
- (void)dealloc;	// IMP=0x00100000003410e6
- (void)updateMonitoringRequiringLocation:(_Bool)arg1 andPlacemarks:(_Bool)arg2;	// IMP=0x001000000034106c
- (id)initWithDatabaseManager:(id)arg1 paymentWebServiceCoordinator:(id)arg2 ruleManager:(id)arg3 accountManager:(id)arg4 applyManager:(id)arg5 peerPaymentWebServiceCoordinator:(id)arg6 transitNotificationService:(id)arg7 userNotificationManager:(id)arg8 transactionProcessor:(id)arg9 delegate:(id)arg10;	// IMP=0x0010000000340ad1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
