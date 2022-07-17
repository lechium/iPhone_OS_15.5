//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CloudSubscriptionFeatures : NSObject
{
}

+ (void)refreshGeoclassificationCache;	// IMP=0x0000000000001a93
+ (void)clearCacheAndNotify;	// IMP=0x0000000000001a7a
+ (void)processPushNotificationDictionary:(id)arg1;	// IMP=0x0000000000001a61
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)arg1;	// IMP=0x0000000000001a48
+ (id)registerForFeatureChangeNotificationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001a2f
+ (void)refreshAllGeoclassificationCache;	// IMP=0x000000000002a630
+ (void)clearFeatureCacheAndNotify;	// IMP=0x000000000002a610
+ (void)processPushNotificationWithDictionary:(id)arg1;	// IMP=0x000000000002a590
+ (void)removeFeatureChangeObserverWithToken:(id)arg1;	// IMP=0x000000000002a0f0
+ (id)addFeatureChangeObserverWithChange:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a020
+ (void)requestGeoClassificationForFeatureID:(id)arg1 bundleID:(id)arg2 ignoreCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029ef0
+ (void)requestGeoClassificationForFeatureID:(id)arg1 bundleID:(id)arg2 altDSID:(id)arg3 ignoreCache:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000029ab0
+ (void)getFeatureEligibilityForFeatureWithId:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029710
+ (void)requestFeatureWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029210

@end
