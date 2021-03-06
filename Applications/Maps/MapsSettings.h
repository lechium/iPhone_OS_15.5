//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsSettings : NSObject
{
}

+ (_Bool)usesMetric;	// IMP=0x002000000063a26d
+ (id)preferredDistanceUnit;	// IMP=0x001000000063a170
+ (void)postNotification;	// IMP=0x001000000063a0f7
+ (void)setAlwaysShowScale:(_Bool)arg1;	// IMP=0x001000000063a08c
+ (_Bool)alwaysShowScale;	// IMP=0x0010000000639ffb
+ (void)setShowsZoomControls:(_Bool)arg1;	// IMP=0x0010000000639f90
+ (_Bool)showsZoomControls;	// IMP=0x0010000000639eff
+ (void)setShowsCompass:(_Bool)arg1;	// IMP=0x0010000000639e94
+ (_Bool)showsCompass;	// IMP=0x0010000000639e03
+ (void)setAllowEmailCorrespondence:(_Bool)arg1;	// IMP=0x0010000000639de8
+ (_Bool)allowEmailCorrespondence;	// IMP=0x0010000000639dcf
+ (void)setShowsAirQualityIndex:(_Bool)arg1;	// IMP=0x0010000000639d7c
+ (_Bool)showsAirQualityIndex;	// IMP=0x0010000000639d31
+ (void)setShowsWeather:(_Bool)arg1;	// IMP=0x0010000000639cde
+ (_Bool)showsWeather;	// IMP=0x0010000000639c93
+ (_Bool)userDesiresLabels;	// IMP=0x0010000000639c02
+ (void)setUserDesiresLabels:(_Bool)arg1;	// IMP=0x0010000000639ba8
+ (_Bool)userDesiresTraffic;	// IMP=0x0010000000639abb
+ (void)setUserDesiresTraffic:(_Bool)arg1;	// IMP=0x0010000000639a61
+ (void)clearSelectedViewModeIfExpired;	// IMP=0x0010000000639a00
+ (_Bool)_selectedViewModeIsExpired;	// IMP=0x0010000000639935
+ (void)setSelectedViewMode:(long long)arg1;	// IMP=0x00100000006398b4
+ (long long)selectedViewMode;	// IMP=0x0010000000639827
+ (void)_synchronizeNanoDefaultsForDomain:(id)arg1 key:(id)arg2 container:(id)arg3;	// IMP=0x00100000006396b0
+ (void)setValue:(id)arg1 forConfigKey:(CDStruct_065526f1)arg2;	// IMP=0x00100000006394e0
+ (void)setValue:(id)arg1 forDefaultsKey:(id)arg2 bundleID:(id)arg3 syncToNano:(_Bool)arg4;	// IMP=0x0010000000639035
+ (id)valueForConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000639022
+ (id)valueForDefaultsKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0010000000638f45
+ (id)valueForDefaultsKey:(id)arg1;	// IMP=0x0010000000638f31
+ (id)settingsUpdatedNotificationKey;	// IMP=0x0010000000638f24

@end

