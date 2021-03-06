//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AnnouncementsManager, CLLocationManager, MSPRemoteModelAccessServer, MSPSharedTripServer, MapsConnectionBrokerServer, MapsNotificationCenter, NSLock, NSMutableArray, NSString, NSTimer, NSXPCListener, NotificationFromGEODHandler, RAPSubmissionStatusDownloader, RAPSubmissionStatusSyncHandler;

__attribute__((visibility("hidden")))
@interface MapsPushDaemonLocalProxy : NSObject
{
    _Bool _isEnabled;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableArray *_peerConnections;	// 24 = 0x18
    NSLock *_peerConnectionsLock;	// 32 = 0x20
    id _userDisabledDefaultListener;	// 40 = 0x28
    id _serverDisabledDefaultListener;	// 48 = 0x30
    NSTimer *_updateSharedETAServerTimer;	// 56 = 0x38
    NotificationFromGEODHandler *_notificationFromGEODHandler;	// 64 = 0x40
    MSPSharedTripServer *_sharedTripServer;	// 72 = 0x48
    AnnouncementsManager *_announcementsManager;	// 80 = 0x50
    MSPRemoteModelAccessServer *_remoteAccessServer;	// 88 = 0x58
    MapsNotificationCenter *_notificationCenter;	// 96 = 0x60
    RAPSubmissionStatusDownloader *_submissionStatusDownloader;	// 104 = 0x68
    RAPSubmissionStatusSyncHandler *_syncHandler;	// 112 = 0x70
    MapsConnectionBrokerServer *_mapsConnectionBrokerServer;	// 120 = 0x78
    CLLocationManager *_locationManager;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x002000000001d6b8
- (void).cxx_destruct;	// IMP=0x0020000000022733
- (void)fetchUserRoutingPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022582
- (void)noteMapstoolChangedFavoritesOnDisk;	// IMP=0x001000000002256c
- (void)noteMapstoolChangedHistoryOnDisk;	// IMP=0x0010000000022556
- (void)testByNotingHistoryChangedOnDisk;	// IMP=0x0010000000022540
- (void)eraseHistorySerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000224a1
- (void)commitHistorySerializedRepresentation:(id)arg1 reapingTombstones:(_Bool)arg2 earliestKnownSyncDate:(id)arg3 operationIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000223dc
- (void)fetchHistorySerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002233b
- (void)fetchLastKnownHistoryOperationIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022314
- (void)eraseFavoritesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022275
- (void)commitFavoritesSerializedRepresentation:(id)arg1 reapingTombstones:(_Bool)arg2 operationIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000221bd
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002211c
- (void)fetchLastKnownFavoritesOperationIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00100000000220f5
- (void)eraseCollectionsSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022056
- (void)commitCollectionsSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021fa5
- (void)fetchCollectionsSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021f04
- (void)fetchLastKnownCollectionsOperationIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021edd
- (void)erasePinnedPlacesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021e3e
- (void)commitPinnedPlacesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021d8d
- (void)fetchPinnedPlacesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021cec
- (void)fetchLastKnownPinnedPlacesOperationIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021cc5
- (oneway void)updateMapsModelBackupAttributesIfNeeded;	// IMP=0x0010000000021b0f
- (void)clearParkedCarBulletin;	// IMP=0x00100000000219fb
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;	// IMP=0x00100000000217a2
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;	// IMP=0x00100000000215f3
- (void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00100000000213ce
- (void)showParkedCarBulletinForEvent:(id)arg1;	// IMP=0x0010000000021239
- (void)clearLowFuelAlertBulletin;	// IMP=0x001000000002121e
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;	// IMP=0x00100000000211f9
- (void)clearPredictedRouteTrafficIncidentBulletin;	// IMP=0x00100000000211de
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00100000000210ee
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;	// IMP=0x00100000000210c9
- (void)clearVenueBulletin;	// IMP=0x0010000000020fb5
- (void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000020e3e
- (void)clearMapsSuggestionsBulletin;	// IMP=0x0010000000020d2a
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000020bb3
- (void)clearTrafficIncidentsBulletin;	// IMP=0x0010000000020b98
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;	// IMP=0x0010000000020b82
- (void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(_Bool)arg2 title:(id)arg3 description:(id)arg4;	// IMP=0x0010000000020b5a
- (void)clearTrafficConditionsBulletin;	// IMP=0x0010000000020a46
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x00100000000208cf
- (void)announcementDidClearWithID:(unsigned int)arg1;	// IMP=0x00100000000208b9
- (void)removeProblemStatusResponseWithNotificationID:(id)arg1;	// IMP=0x00100000000208a0
- (void)problemStatusResponseWithNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020827
- (void)clearBulletinWithRecordID:(id)arg1;	// IMP=0x001000000002076c
- (void)setShouldUseDevAPNS:(_Bool)arg1;	// IMP=0x0010000000020672
- (void)shouldUseDevAPNS:(CDUnknownBlockType)arg1;	// IMP=0x00100000000205f0
- (void)resetAnnouncements;	// IMP=0x00100000000205da
- (void)clearShownAnnouncements;	// IMP=0x00100000000205c4
- (void)fetchShownAnnouncements:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020498
- (void)fetchDownloadedAnnouncements:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020482
- (void)clearCurrentAnnouncement;	// IMP=0x001000000002046c
- (void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;	// IMP=0x001000000002038b
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;	// IMP=0x001000000002025a
- (void)updateActiveAnnouncement;	// IMP=0x0010000000020244
- (void)updateAnnouncements:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020202
- (void)fetchAnnouncementsURLPath:(CDUnknownBlockType)arg1;	// IMP=0x00100000000201ac
- (void)fetchAnnouncementsFilePath:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020156
- (void)checkin;	// IMP=0x0010000000020150
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;	// IMP=0x00100000000200c0
- (void)fetchProblemStatus;	// IMP=0x0010000000020060
- (void)simulateProblemResolution;	// IMP=0x0010000000020011
- (void)registerForTopic;	// IMP=0x001000000001ffc2
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000001fc35
- (void)geodInternalErrorNotification:(long long)arg1;	// IMP=0x001000000001fb8a
- (void)geodProxyAuthFailedNotification:(long long)arg1;	// IMP=0x001000000001fae8
- (void)announcementsManager:(id)arg1 didChangeActiveAnnouncement:(id)arg2;	// IMP=0x001000000001f872
- (void)_cleanupMapsGroupDirectory;	// IMP=0x001000000001f68c
- (void)handleMapsApplicationRemoval:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f44f
- (void)eraseRAPData;	// IMP=0x001000000001f0ae
- (_Bool)_shouldDisplayNotificationForProblemStatus:(id)arg1;	// IMP=0x001000000001f009
- (void)_cleanupRAPNotifications;	// IMP=0x001000000001ee44
- (id)_mapItemForPlace:(id)arg1;	// IMP=0x001000000001ee0f
- (void)pushManager:(id)arg1 receivedFixedProblemNotification:(id)arg2 manifestToken:(id)arg3;	// IMP=0x001000000001e80c
- (void)pushManager:(id)arg1 gotPushData:(id)arg2;	// IMP=0x001000000001e7f7
- (void)_processPushData:(id)arg1;	// IMP=0x001000000001e536
- (void)_migrateLegacyShareETAUserEnabledFlag;	// IMP=0x001000000001e3d9
- (void)_updateSharedETAServerState;	// IMP=0x001000000001e17c
- (void)updateSharedETAServerState;	// IMP=0x001000000001e02e
- (void)createGeoServicesServer;	// IMP=0x001000000001df3c
- (void)prepareServer;	// IMP=0x001000000001decc
- (void)_pathsBecameInvalid;	// IMP=0x001000000001deba
- (void)exitForLocaleChanged;	// IMP=0x001000000001de17
- (void)_exitForChangedPath;	// IMP=0x001000000001dd20
- (void)dealloc;	// IMP=0x001000000001dc65
- (id)init;	// IMP=0x001000000001d70d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

