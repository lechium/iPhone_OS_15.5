//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsAnalyticStateProvider : NSObject
{
}

+ (void)setUserProfileAvailableActions:(id)arg1;	// IMP=0x002000000073fe36
+ (void)setUserProfileUserIsLoggedIntoICloud:(_Bool)arg1;	// IMP=0x001000000073fde3
+ (void)updatePreciseLocationInformation;	// IMP=0x001000000073fcd7
+ (void)updateiCloudStateInformation;	// IMP=0x001000000073fc65
+ (void)updateCycleOptionsInformation:(id)arg1;	// IMP=0x001000000073fb32
+ (void)updateDriveOptionsInformation:(id)arg1;	// IMP=0x001000000073fa46
+ (void)updateButtonsInformationMunin:(_Bool)arg1;	// IMP=0x001000000073f9f3
+ (void)updateButtonsInformationAQI:(_Bool)arg1 weather:(_Bool)arg2;	// IMP=0x001000000073f95e
+ (void)updateNotificationsStateInformation;	// IMP=0x001000000073f88f
+ (void)updateSettingsInformation;	// IMP=0x001000000073f458
+ (void)updateMapSettingsInformationLabels:(_Bool)arg1 traffic:(_Bool)arg2;	// IMP=0x001000000073f3c3
+ (void)updateLayoutInformation:(id)arg1;	// IMP=0x001000000073f1e8
+ (void)updateSuggestionSearchInformation:(id)arg1 searchText:(id)arg2 searchIndex:(int)arg3 searchfieldType:(int)arg4 suggestionsAcSequenceNumber:(int)arg5;	// IMP=0x001000000073f001
+ (void)updateTouristInformation;	// IMP=0x001000000073ef0f
+ (void)updateMapViewViewMode:(long long)arg1;	// IMP=0x001000000073edca
+ (void)updateMapViewInformation:(id)arg1;	// IMP=0x001000000073e999
+ (void)updateLocaleInformation:(id)arg1;	// IMP=0x001000000073e811
+ (void)clearSharedState;	// IMP=0x001000000073e706
+ (id)serialQueue;	// IMP=0x001000000073e65c

@end

