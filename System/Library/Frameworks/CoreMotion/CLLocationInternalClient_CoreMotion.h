//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x000000000015c457
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x00000000001613cf
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x000000000016138a
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x000000000016129e
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x00000000001611c5
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x00000000001610dd
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x0000000000160ffa
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x0000000000160f2b
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString *)arg3 forBundleID:(const struct __CFString *)arg4 orBundlePath:(const struct __CFString *)arg5;	// IMP=0x0000000000160e31
- (const struct __CFArray *)copyActivityAlarms;	// IMP=0x0000000000160d5a
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x0000000000160c38
- (id)getAccessoryMotionSensorLogs;	// IMP=0x0000000000160c1f
- (id)getMotionSensorLogs;	// IMP=0x0000000000160c06
- (id)getPipelinedCache;	// IMP=0x0000000000160ac2
- (int)getStatusBarIconState;	// IMP=0x00000000001609f9
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x0000000000160852
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000001606be
- (unsigned char)copyLastLog;	// IMP=0x0000000000160550
- (int)getAccessoryTypeBitSet;	// IMP=0x00000000001602e9
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x000000000015ffe5
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x000000000015fec8
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_7cf4616f *)arg5;	// IMP=0x000000000015fd93
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x000000000015fc09
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x000000000015fa73
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x000000000015f8cc
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x000000000015f707
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000015f474
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x000000000015f384
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;	// IMP=0x000000000015f20c
- (unsigned char)displayStatistics;	// IMP=0x000000000015f09e
- (unsigned char)shutdownDaemon;	// IMP=0x000000000015ef30
- (unsigned char)performMigration;	// IMP=0x000000000015edc2
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000015eb7e
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000015ea91
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x000000000015e9aa
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x000000000015e8c1
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x000000000015e716
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x000000000015e54d
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000015e34e
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x000000000015e0f2
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x000000000015e00b
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x000000000015de57
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x000000000015dd6c
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x000000000015dc65
- (unsigned char)pingDaemon;	// IMP=0x000000000015dba0
- (unsigned char)getPrivateMode;	// IMP=0x000000000015dad9
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x000000000015d9f0
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x000000000015d7d3
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;	// IMP=0x000000000015d5db
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;	// IMP=0x000000000015d3ee
- (const struct __CFArray *)copyGnssBandsInUse;	// IMP=0x000000000015d312
- (const struct __CFDictionary *)copyZaxisStats;	// IMP=0x000000000015d236
- (const struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x000000000015d15a
- (const struct __CFArray *)copyTechnologiesInUse;	// IMP=0x000000000015d07e
- (const struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x000000000015cf8f
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x000000000015cd92
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x000000000015cb3d
- (unsigned char)clearLocationAuthorizations;	// IMP=0x000000000015ca78
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000015c98b
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;	// IMP=0x000000000015c895
- (id)synchronousRemoteObject;	// IMP=0x000000000015c757
- (id)connection;	// IMP=0x000000000015c49c

@end

