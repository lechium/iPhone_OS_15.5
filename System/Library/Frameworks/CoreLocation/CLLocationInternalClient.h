//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x000000000005c295
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x000000000006120d
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00000000000611c8
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x00000000000610dc
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x0000000000061003
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x0000000000060f1b
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x0000000000060e38
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x0000000000060d69
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString *)arg3 forBundleID:(const struct __CFString *)arg4 orBundlePath:(const struct __CFString *)arg5;	// IMP=0x0000000000060c6f
- (const struct __CFArray *)copyActivityAlarms;	// IMP=0x0000000000060b98
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x0000000000060a76
- (id)getAccessoryMotionSensorLogs;	// IMP=0x0000000000060a5d
- (id)getMotionSensorLogs;	// IMP=0x0000000000060a44
- (id)getPipelinedCache;	// IMP=0x0000000000060900
- (int)getStatusBarIconState;	// IMP=0x0000000000060837
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x0000000000060690
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000000604fc
- (unsigned char)copyLastLog;	// IMP=0x000000000006038e
- (int)getAccessoryTypeBitSet;	// IMP=0x0000000000060127
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x000000000005fe23
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x000000000005fd06
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_2fb123db *)arg5;	// IMP=0x000000000005fbd1
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005fa47
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x000000000005f8b1
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x000000000005f70a
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x000000000005f545
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000005f2b2
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x000000000005f1c2
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;	// IMP=0x000000000005f04a
- (unsigned char)displayStatistics;	// IMP=0x000000000005eedc
- (unsigned char)shutdownDaemon;	// IMP=0x000000000005ed6e
- (unsigned char)performMigration;	// IMP=0x000000000005ec00
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000005e9bc
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000005e8cf
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x000000000005e7e8
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x000000000005e6ff
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x000000000005e554
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x000000000005e38b
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005e18c
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x000000000005df30
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x000000000005de49
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x000000000005dc95
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x000000000005dbaa
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x000000000005daa3
- (unsigned char)pingDaemon;	// IMP=0x000000000005d9de
- (unsigned char)getPrivateMode;	// IMP=0x000000000005d917
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x000000000005d82e
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x000000000005d611
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;	// IMP=0x000000000005d419
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;	// IMP=0x000000000005d22c
- (const struct __CFArray *)copyGnssBandsInUse;	// IMP=0x000000000005d150
- (const struct __CFDictionary *)copyZaxisStats;	// IMP=0x000000000005d074
- (const struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x000000000005cf98
- (const struct __CFArray *)copyTechnologiesInUse;	// IMP=0x000000000005cebc
- (const struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x000000000005cdcd
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x000000000005cbd0
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x000000000005c97b
- (unsigned char)clearLocationAuthorizations;	// IMP=0x000000000005c8b6
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000005c7c9
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;	// IMP=0x000000000005c6d3
- (id)synchronousRemoteObject;	// IMP=0x000000000005c595
- (id)connection;	// IMP=0x000000000005c2da

@end

