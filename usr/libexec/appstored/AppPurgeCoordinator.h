//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationController, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AppPurgeCoordinator : NSObject
{
    AKAuthorizationController *_authorizationController;	// 8 = 0x8
    NSArray *_cachedBundleIDsWithEntitlements;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastDuetSync;	// 32 = 0x20
    NSArray *_watchAppList;	// 40 = 0x28
}

+ (id)_offloadingGracePeriodStartDate;	// IMP=0x002000000002869e
+ (id)_appPurgePluginDenyList;	// IMP=0x001000000002867e
+ (id)_appPurgeRecentInstallCutoffDate;	// IMP=0x001000000002865e
+ (id)_appPurgeCutoffDate;	// IMP=0x001000000002863e
+ (id)_appPurgeDenyList;	// IMP=0x001000000002861e
+ (void)recordOffloadingGracePeriodStartDateIfUnset;	// IMP=0x00100000000285ba
+ (_Bool)offloadingAppsEnabled;	// IMP=0x0010000000028598
- (void).cxx_destruct;	// IMP=0x0020000000031967
- (id)_watchAppBundlesWithLogKey:(id)arg1;	// IMP=0x001000000003194e
- (void)_syncDuetEventsWithLogKey:(id)arg1;	// IMP=0x0010000000031948
- (void)_syncDuetEventsIfNeededWithLogKey:(id)arg1;	// IMP=0x0010000000031942
- (void)_springboardUpdateWidgetFromWidgetDictionary:(id)arg1 widgetPlugins:(id)arg2 widgetContainingBundles:(id)arg3;	// IMP=0x0010000000031806
- (id)_springBoardWidgetContextWithLogKey:(id)arg1;	// IMP=0x0010000000030f64
- (id)_registeredDateForRecord:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000030b3c
- (void)_recordOffloadingCoreAnalyticsEventsWithRequestedSpace:(long long)arg1 actualPurged:(long long)arg2 offloadedAppCount:(long long)arg3 isRescue:(_Bool)arg4 client:(id)arg5;	// IMP=0x00100000000308a1
- (id)_sortDescriptors:(_Bool)arg1;	// IMP=0x001000000003030b
- (id)_purgeableForOptions:(id)arg1 logKey:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000002fc5b
- (id)_purgeApps:(id)arg1 desiredPurgeSize:(long long)arg2 purgedSize:(unsigned long long *)arg3 offloadOnly:(_Bool)arg4 logKey:(id)arg5 client:(id)arg6;	// IMP=0x001000000002f46c
- (id)_processApp:(id)arg1 context:(id)arg2;	// IMP=0x001000000002e3bf
- (id)_offloadableAppsWithInterval:(long long)arg1 context:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000002e07f
- (id)_launchEventsFromDate:(id)arg1 toDate:(id)arg2 prediate:(id)arg3;	// IMP=0x001000000002dcdc
- (id)_launchEventsFromDuetFromDate:(id)arg1 endDate:(id)arg2 logKey:(id)arg3;	// IMP=0x001000000002d4d5
- (_Bool)_isOffloadCandidate:(id)arg1;	// IMP=0x001000000002d3ab
- (_Bool)_isBeyondGracePeriodWithLogKey:(id)arg1;	// IMP=0x001000000002d1a5
- (double)_gracePeriodInSeconds;	// IMP=0x001000000002d13f
- (id)_filterPurgeableApps:(id)arg1 performAvailabilityCheck:(_Bool)arg2 additionalApps:(id)arg3 desiredPurgeSize:(long long)arg4 client:(id)arg5 logKey:(id)arg6;	// IMP=0x001000000002bd74
- (id)_cutoffDateForUrgency:(long long)arg1;	// IMP=0x001000000002bd34
- (id)_bundleIDsForVPNPluginsOrAppsContainingEntitlements:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000002bd1b
- (id)_appsBasedOnWindow:(long long)arg1 cutoffDate:(id)arg2 logKey:(id)arg3 ourError:(id *)arg4;	// IMP=0x001000000002b624
- (id)_appsUsedWindow:(long long)arg1 logKey:(id)arg2 ourError:(id *)arg3;	// IMP=0x001000000002b58b
- (id)_availableInStore:(id)arg1 logKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002b19e
- (_Bool)_authorizedBySignInWithApple:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000002ae27
- (id)_appPluginProtocolDenyListWithLogKey:(id)arg1;	// IMP=0x001000000002ab9a
- (id)_appDenyList:(id)arg1;	// IMP=0x001000000002a98c
- (void)recordDailyOffloadingCoreAnalyticsStatus;	// IMP=0x001000000002a82e
- (long long)purgeForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3 client:(id)arg4;	// IMP=0x001000000002a4bf
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 override:(_Bool)arg3 client:(id)arg4;	// IMP=0x0010000000029f44
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 client:(id)arg3;	// IMP=0x0010000000029f2c
- (void)cacheInvalidated;	// IMP=0x0010000000029dde
- (id)allPurgeablesForVolume:(id)arg1 client:(id)arg2;	// IMP=0x0010000000029b8d
- (void)syncDuetEvents;	// IMP=0x0010000000029b3a
- (id)purgeAppsForOptions:(id)arg1 logKey:(id)arg2 client:(id)arg3;	// IMP=0x00100000000297d8
- (id)purgeableAppsForOptions:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000029335
- (id)launchEventsFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x0010000000029320
- (id)diagnosticDescription:(_Bool)arg1;	// IMP=0x0010000000028c40
- (void)clearLaunchHistoryForBundleIDs:(id)arg1;	// IMP=0x00100000000286be
- (void)_registerBagKeys;	// IMP=0x00100000000284d2
- (id)init;	// IMP=0x001000000002842f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
