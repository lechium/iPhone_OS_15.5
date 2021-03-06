//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeparationAlerts/SAMonitoringSessionManagerServiceProtocol-Protocol.h>
#import <SeparationAlerts/SAScenarioClassifierClientProtocol-Protocol.h>
#import <SeparationAlerts/SATimeClientProtocol-Protocol.h>
#import <SeparationAlerts/SATravelTypeClassifierClientProtocol-Protocol.h>
#import <SeparationAlerts/SAWithYouDetectorClientProtocol-Protocol.h>

@class NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, NSUUID, SADeviceRecord, SAPersistenceManager, TALocationLite;
@protocol SAAnalyticsServiceProtocol, SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol, SAGeoFenceRequestProtocol, SATimeServiceProtocol, SATravelTypeClassifierServiceProtocol, SAWithYouDetectorServiceProtocol, TAEventProtocol;

@interface SAMonitoringSessionManager : NSObject <SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SAWithYouDetectorClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _standby;	// 9 = 0x9
    _Bool _requestedPeriodicScan;	// 10 = 0xa
    _Bool _caIsVehicularBTHintOn;	// 11 = 0xb
    _Bool _isCompanionConnected;	// 12 = 0xc
    id <SATimeServiceProtocol> _clock;	// 16 = 0x10
    id <SAWithYouDetectorServiceProtocol> _withYouDetector;	// 24 = 0x18
    id <SAGeoFenceRequestProtocol> _fenceRequestServicer;	// 32 = 0x20
    id <SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> _fenceManager;	// 40 = 0x28
    NSHashTable *_clients;	// 48 = 0x30
    NSMutableDictionary *_deviceUUIDtoMonitoringSession;	// 56 = 0x38
    TALocationLite *_lastLocation;	// 64 = 0x40
    SADeviceRecord *_deviceRecord;	// 72 = 0x48
    id <SAAnalyticsServiceProtocol> _analytics;	// 80 = 0x50
    id <SATravelTypeClassifierServiceProtocol> _travelTypeClassifier;	// 88 = 0x58
    NSMutableDictionary *_devices;	// 96 = 0x60
    NSMutableDictionary *_safeLocations;	// 104 = 0x68
    NSMutableDictionary *_deviceUUIDtoSafeLocationUUIDs;	// 112 = 0x70
    unsigned long long _disabledReasons;	// 120 = 0x78
    NSDate *_caLastAlertDate;	// 128 = 0x80
    long long _caBroughtOutOnTravel;	// 136 = 0x88
    NSMutableDictionary *_deviceUUIDtoAlertContext;	// 144 = 0x90
    unsigned long long _caCurrentVehicularState;	// 152 = 0x98
    SAPersistenceManager *_persistenceManager;	// 160 = 0xa0
    NSUUID *_nextScheduledAlarmForPersistenceWrite;	// 168 = 0xa8
    NSUUID *_scheduledAlarmForForceUpdateWithYouStatus;	// 176 = 0xb0
    id <TAEventProtocol> _currentVisitOrLOIEvent;	// 184 = 0xb8
    id <TAEventProtocol> _previousVisitOrLOIEvent;	// 192 = 0xc0
    NSDate *_timeOfAttemptToLoadFromPersistence;	// 200 = 0xc8
    NSMutableSet *_devicesWithToBePopulatedTrackedTravelingStartLocation;	// 208 = 0xd0
    NSMutableSet *_devicesWithPendingTransition;	// 216 = 0xd8
}

+ (id)convertSAMonitoringSessionStateToString:(unsigned long long)arg1;	// IMP=0x000000000001a20f
+ (id)createLocationFromCircularRegion:(id)arg1 forDevice:(id)arg2 withContext:(unsigned long long)arg3;	// IMP=0x0000000000013e13
- (void).cxx_destruct;	// IMP=0x000000000001c6b6
@property(retain, nonatomic) NSMutableSet *devicesWithPendingTransition; // @synthesize devicesWithPendingTransition=_devicesWithPendingTransition;
@property(retain, nonatomic) NSMutableSet *devicesWithToBePopulatedTrackedTravelingStartLocation; // @synthesize devicesWithToBePopulatedTrackedTravelingStartLocation=_devicesWithToBePopulatedTrackedTravelingStartLocation;
@property(nonatomic) _Bool isCompanionConnected; // @synthesize isCompanionConnected=_isCompanionConnected;
@property(retain, nonatomic) NSDate *timeOfAttemptToLoadFromPersistence; // @synthesize timeOfAttemptToLoadFromPersistence=_timeOfAttemptToLoadFromPersistence;
@property(retain, nonatomic) id <TAEventProtocol> previousVisitOrLOIEvent; // @synthesize previousVisitOrLOIEvent=_previousVisitOrLOIEvent;
@property(retain, nonatomic) id <TAEventProtocol> currentVisitOrLOIEvent; // @synthesize currentVisitOrLOIEvent=_currentVisitOrLOIEvent;
@property(retain, nonatomic) NSUUID *scheduledAlarmForForceUpdateWithYouStatus; // @synthesize scheduledAlarmForForceUpdateWithYouStatus=_scheduledAlarmForForceUpdateWithYouStatus;
@property(retain, nonatomic) NSUUID *nextScheduledAlarmForPersistenceWrite; // @synthesize nextScheduledAlarmForPersistenceWrite=_nextScheduledAlarmForPersistenceWrite;
@property(retain, nonatomic) SAPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(nonatomic) _Bool caIsVehicularBTHintOn; // @synthesize caIsVehicularBTHintOn=_caIsVehicularBTHintOn;
@property(nonatomic) unsigned long long caCurrentVehicularState; // @synthesize caCurrentVehicularState=_caCurrentVehicularState;
@property(retain, nonatomic) NSMutableDictionary *deviceUUIDtoAlertContext; // @synthesize deviceUUIDtoAlertContext=_deviceUUIDtoAlertContext;
@property(nonatomic) long long caBroughtOutOnTravel; // @synthesize caBroughtOutOnTravel=_caBroughtOutOnTravel;
@property(retain, nonatomic) NSDate *caLastAlertDate; // @synthesize caLastAlertDate=_caLastAlertDate;
@property(nonatomic) unsigned long long disabledReasons; // @synthesize disabledReasons=_disabledReasons;
@property(nonatomic) _Bool requestedPeriodicScan; // @synthesize requestedPeriodicScan=_requestedPeriodicScan;
@property(retain, nonatomic) NSMutableDictionary *deviceUUIDtoSafeLocationUUIDs; // @synthesize deviceUUIDtoSafeLocationUUIDs=_deviceUUIDtoSafeLocationUUIDs;
@property(retain, nonatomic) NSMutableDictionary *safeLocations; // @synthesize safeLocations=_safeLocations;
@property(retain, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) id <SATravelTypeClassifierServiceProtocol> travelTypeClassifier; // @synthesize travelTypeClassifier=_travelTypeClassifier;
@property(retain, nonatomic) id <SAAnalyticsServiceProtocol> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) SADeviceRecord *deviceRecord; // @synthesize deviceRecord=_deviceRecord;
@property(retain, nonatomic) TALocationLite *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSMutableDictionary *deviceUUIDtoMonitoringSession; // @synthesize deviceUUIDtoMonitoringSession=_deviceUUIDtoMonitoringSession;
@property(retain, nonatomic) NSHashTable *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) id <SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> fenceManager; // @synthesize fenceManager=_fenceManager;
@property(retain, nonatomic) id <SAGeoFenceRequestProtocol> fenceRequestServicer; // @synthesize fenceRequestServicer=_fenceRequestServicer;
@property(retain, nonatomic) id <SAWithYouDetectorServiceProtocol> withYouDetector; // @synthesize withYouDetector=_withYouDetector;
@property(nonatomic) __weak id <SATimeServiceProtocol> clock; // @synthesize clock=_clock;
@property(nonatomic) _Bool standby; // @synthesize standby=_standby;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)didChangeTravelTypeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 hints:(unsigned long long)arg3;	// IMP=0x000000000001bdd0
- (void)alarmFiredForUUID:(id)arg1;	// IMP=0x000000000001bb4d
- (double)minimumTimeSinceScenarioTransitionForAlertForDevice:(id)arg1;	// IMP=0x000000000001baf5
- (_Bool)enoughTimeHasPassedBeforeSurfacingAlert:(id)arg1 forAlertForDevice:(id)arg2;	// IMP=0x000000000001ba2e
- (void)scheduleNextForceUpdateWithYouStatus;	// IMP=0x000000000001b978
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;	// IMP=0x000000000001a5d1
- (_Bool)deviceShouldTransitionWithLastScenarioChangeDate:(id)arg1 lastWithYouDate:(id)arg2;	// IMP=0x000000000001a5b0
- (void)checkReunion:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;	// IMP=0x000000000001a5aa
- (void)didForceUpdateWithYouStatus;	// IMP=0x000000000001a280
- (unsigned long long)scenarioClassForDeviceUUID:(id)arg1;	// IMP=0x000000000001a16a
- (unsigned long long)stateForDeviceUUID:(id)arg1;	// IMP=0x000000000001a0c5
- (void)removeClient:(id)arg1;	// IMP=0x000000000001a053
- (void)addClient:(id)arg1;	// IMP=0x0000000000019fd4
- (_Bool)isAnyTrackedWhileTraveling;	// IMP=0x0000000000019e5f
- (_Bool)isAnyInTrackedInUnsafeLocation;	// IMP=0x0000000000019d20
- (void)didChangeScenarioClassFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000000019188
- (void)handleSystemStateChanged:(id)arg1;	// IMP=0x0000000000018b0d
- (void)addDisableReason:(unsigned long long)arg1;	// IMP=0x0000000000018a3e
- (void)removeDisableReason:(unsigned long long)arg1;	// IMP=0x0000000000018975
- (void)handleGeofenceEvent:(id)arg1;	// IMP=0x00000000000183fc
- (void)updateLocation:(id)arg1;	// IMP=0x0000000000017e37
- (void)updateSafeLocations:(id)arg1;	// IMP=0x00000000000179d2
- (id)computeRemovedSafeLocations:(id)arg1;	// IMP=0x0000000000017864
- (void)updateDevicesWithSafeLocations:(id)arg1;	// IMP=0x0000000000017737
- (void)ingestTAEvent:(id)arg1;	// IMP=0x0000000000017169
- (_Bool)shouldIssueBookendedNotificationForDevice:(id)arg1;	// IMP=0x0000000000017061
- (_Bool)shouldIssueBookendedNotificationBasedOnTimeForDevice:(id)arg1;	// IMP=0x0000000000016dc7
- (_Bool)shouldIssueBookendedNotificationBasedOnLocationForDevice:(id)arg1;	// IMP=0x0000000000016cda
- (_Bool)isWithinCurrentVisitOrLOI:(id)arg1;	// IMP=0x0000000000016ac9
- (void)removeSafeLocationsIfNeededPerNewSet:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000016ab4
- (void)addSafeLocationsIfNeededPerNewSet:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000016aa2
- (void)addDevicesIfNeededPerEvent:(id)arg1;	// IMP=0x0000000000016249
- (void)removeDevicesIfNeededPerEvent:(id)arg1;	// IMP=0x0000000000015973
- (void)handleModifiedSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;	// IMP=0x000000000001596d
- (void)stopSafeLocation:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000001562f
- (void)startSafeLocation:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000000152a3
- (void)removeAndStopSafeLocationsForDeviceUUID:(id)arg1;	// IMP=0x0000000000015040
- (void)removeSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;	// IMP=0x0000000000014e3a
- (void)addSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;	// IMP=0x0000000000014e34
- (void)setSafeLocations:(id)arg1 forDeviceUUID:(id)arg2;	// IMP=0x0000000000014512
- (void)handleRemovedSafeLocation:(id)arg1;	// IMP=0x000000000001450c
- (void)handleModifiedSafeLocation:(id)arg1;	// IMP=0x0000000000014506
- (void)handleNewSafeLocation:(id)arg1;	// IMP=0x0000000000014500
- (void)removeDeviceWithUUID:(id)arg1 isLastDeviceEvent:(_Bool)arg2;	// IMP=0x0000000000014265
- (void)modifyDevice:(id)arg1;	// IMP=0x000000000001425f
- (void)addDevice:(id)arg1 isLastDeviceEvent:(_Bool)arg2;	// IMP=0x0000000000014033
- (void)notifyEarlyLeftBehind:(id)arg1;	// IMP=0x0000000000013aec
- (void)notifyLeftBehind:(id)arg1 withRegion:(id)arg2 isEarlyVehicularTrigger:(_Bool)arg3;	// IMP=0x00000000000136e6
- (void)notifyWhenLeftBehind:(id)arg1;	// IMP=0x000000000001349e
- (void)notifyWhileTraveling:(id)arg1 isBookendingTravel:(_Bool)arg2;	// IMP=0x00000000000130ad
- (void)storeSeparationLocation:(id)arg1;	// IMP=0x0000000000012f64
- (void)removeTravelFenceForDevice:(id)arg1;	// IMP=0x0000000000012ce3
- (_Bool)addTravelFenceForDevice:(id)arg1;	// IMP=0x0000000000012a40
- (_Bool)_isOnlyMonitoringDisconnectedCompanionDevice;	// IMP=0x000000000001276d
- (void)handleGeofenceExitedForDeviceUUID:(id)arg1;	// IMP=0x0000000000012510
- (void)handleSeparationForDeviceUUID:(id)arg1 withSafeLocationRecommendation:(id)arg2 context:(id)arg3;	// IMP=0x0000000000012131
- (unsigned long long)convertSADeviceTypeForCoreAnalytics:(id)arg1;	// IMP=0x0000000000011ffd
- (void)startPeriodicScansIfNeeded;	// IMP=0x0000000000011fb2
- (void)startPeriodicScans;	// IMP=0x0000000000011f3d
- (void)stopPeriodicScansIfNotNeeded;	// IMP=0x0000000000011ef2
- (void)stopPeriodicScans;	// IMP=0x0000000000011ea8
- (_Bool)needPeriodicScan;	// IMP=0x0000000000011c8c
- (long long)determineTrackedTravelingCount;	// IMP=0x0000000000011ab1
- (void)changeMonitoringSessionState:(id)arg1 toState:(unsigned long long)arg2;	// IMP=0x0000000000011343
- (void)attemptToPopulateTrackedTravelingStartLocationForDevice:(id)arg1;	// IMP=0x0000000000011012
- (void)cancelMonitoringDevice:(id)arg1;	// IMP=0x0000000000010a82
- (void)createMonitoringDevice:(id)arg1;	// IMP=0x00000000000104e0
- (_Bool)anyDeviceInUnsafeLocation;	// IMP=0x0000000000010308
- (_Bool)allDevicesInSafeLocation;	// IMP=0x000000000001012e
- (void)forceStandbyMode:(id)arg1;	// IMP=0x000000000000ff8f
- (void)bootstrapMonitoringSessionRecord:(id)arg1;	// IMP=0x000000000000f565
- (void)configureBackgroundScanning;	// IMP=0x000000000000f476
- (void)requestToFetchLastVisit;	// IMP=0x000000000000f33c
- (void)requestToStopBackgroundScanning;	// IMP=0x000000000000f202
- (void)requestToStartBackgroundScanning;	// IMP=0x000000000000f0c8
- (id)initWithWithYouDetector:(id)arg1 fenceRequestServicer:(id)arg2 fenceManager:(id)arg3 travelTypeClassifier:(id)arg4 clock:(id)arg5 deviceRecord:(id)arg6 analytics:(id)arg7 persistenceManager:(id)arg8;	// IMP=0x000000000000ed1e

@end

