//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>
#import <SPOwner/SPBeaconScanningXPCProtocol-Protocol.h>

@class CLCircularRegion, NSArray, NSData, NSDate, NSDateInterval, NSSet, NSString, NSUUID, SPBeacon, SPBeaconLocation, SPCommand, SPLocationFetchContext, SPSafeLocation, SPUnauthorizedTrackingAdvertisement, SPUnauthorizedTrackingObservation;

@protocol SPOwnerSessionXPCProtocol <NSObject, SPBeaconScanningXPCProtocol>
- (void)readAISMetadataForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPDiscoveredAccessoryMetadata *, NSError *))arg2;
- (void)readAISMetadataFromMACAddress:(NSData *)arg1 useOwnerControlPoint:(_Bool)arg2 completion:(void (^)(SPDiscoveredAccessoryMetadata *, NSError *))arg3;
- (oneway void)allObservationsForBeacon:(NSUUID *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)requestLiveLocationForFriend:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (oneway void)requestLiveLocationForUUID:(NSUUID *)arg1 completion:(void (^)(NSString *))arg2;
- (oneway void)setFindMyNetworkStatusForMACAddress:(NSData *)arg1 status:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)fetchFindMyNetworkStatusForMACAddress:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)beaconingIdentifierForMACAddress:(NSData *)arg1 completion:(void (^)(NSUUID *))arg2;
- (oneway void)beaconGroupsForUUIDs:(NSArray *)arg1 completion:(void (^)(NSSet *))arg2;
- (oneway void)beaconGroupForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPBeaconGroup *, NSError *))arg2;
- (oneway void)beaconForIdentifier:(NSUUID *)arg1 completion:(void (^)(SPBeacon *, NSError *))arg2;
- (oneway void)simulateAccessoryPairing:(NSString *)arg1 name:(NSString *)arg2 isAirPods:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)fakeClassicPairingWithMACAddress:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceKeySyncForBeaconUUID:(NSUUID *)arg1 lastObservationDate:(NSDate *)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)sendUnregisterIntentWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)sendRegisterIntentWithCompletion:(void (^)(double, NSError *))arg1;
- (oneway void)fetchUnauthorizedEncryptedPayload:(NSUUID *)arg1 completion:(void (^)(NSURL *))arg2;
- (oneway void)shareBeacon:(SPBeacon *)arg1 handles:(NSArray *)arg2 expiration:(NSDate *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (oneway void)fetchSeparationMonitoringStatus:(void (^)(long long))arg1;
- (oneway void)forceLOIBasedSafeLocationRefresh:(void (^)(_Bool))arg1;
- (oneway void)activeCompanionWithCompletion:(void (^)(SPBeacon *))arg1;
- (oneway void)publishSeparationEventForBeacons:(NSSet *)arg1 eventType:(long long)arg2 region:(CLCircularRegion *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (oneway void)beaconsToMonitorForSeparation:(void (^)(NSSet *))arg1;
- (oneway void)safeLocationsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)unassignSafeLocation:(NSUUID *)arg1 from:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)assignSafeLocation:(NSUUID *)arg1 to:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)updateSafeLocation:(SPSafeLocation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)removeSafeLocation:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)addSafeLocation:(SPSafeLocation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)disableSeparationMonitoringForBeacons:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)enableSeparationMonitoringForBeacons:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)tagSeparationStateChanged:(NSString *)arg1 beaconUUID:(NSUUID *)arg2 location:(SPBeaconLocation *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)beaconsToMaintainPersistentConnection:(void (^)(NSSet *))arg1;
- (oneway void)updateBeaconObservations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)acceptUTForBeaconUUID:(NSUUID *)arg1;
- (oneway void)unauthorizedTrackingTypeWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)ignoringUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(NSDate *, NSError *))arg2;
- (oneway void)playUnauthorizedSoundOnBeaconUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)isUTAppAlertDisabled:(void (^)(_Bool))arg1;
- (oneway void)disableUTAppAlert:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)ignoreTrackingFor:(SPUnauthorizedTrackingAdvertisement *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)ignoreBeaconByUUID:(NSUUID *)arg1 untilDate:(NSDate *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)ignoreTrackingForUUID:(NSUUID *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)unknownBeaconsForUUIDs:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)ignoreBeaconByUUID:(NSUUID *)arg1 until:(unsigned long long)arg2;
- (oneway void)didWithdrawUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)didUpdateUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingObservation *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)didDetectUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)updateBatteryStatus:(unsigned char)arg1 beaconUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)beaconsToMaintainWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)waitForBeaconStoreAvailableWithCompletion:(void (^)(void))arg1;
- (oneway void)beaconStoreStatusWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)executeCommand:(SPCommand *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)rawSearchResultsForIdentifier:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)locationForContext:(SPLocationFetchContext *)arg1 completion:(void (^)(SPLocationFetchResult *, NSError *))arg2;
- (oneway void)latestLocationsForIdentifiers:(NSArray *)arg1 fetchLimit:(NSDate *)arg2 sources:(NSSet *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (oneway void)removeBeacon:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)forceUpdateKeyAlignmentRecordForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceUpdateKeyMapsForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)clientConfigurationWithCompletion:(void (^)(NSData *))arg1;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
- (oneway void)ownerSessionStateWithCompletion:(void (^)(SPOwnerSessionState *))arg1;
@end

