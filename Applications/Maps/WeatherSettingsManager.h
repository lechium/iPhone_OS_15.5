//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WeatherSettingsManager : NSObject
{
}

+ (id)settingsUpdatedNotification;	// IMP=0x0040000000616c1f
+ (id)sharedManager;	// IMP=0x0010000000616a7d
- (void)_postWeatherConditionsSettingsUpdatedNotification;	// IMP=0x0020000000616cce
@property(nonatomic) _Bool shouldShowWeatherConditions;
@property(nonatomic) _Bool shouldShowAirQualityConditions;
- (void)countryConfigurationDidChange:(id)arg1;	// IMP=0x0010000000616c2c
- (id)initSharedManager;	// IMP=0x0010000000616af0
- (id)init;	// IMP=0x0010000000616ae2

@end

