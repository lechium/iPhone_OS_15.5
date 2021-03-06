//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider
{
    NSSet *_cameraProfiles;	// 8 = 0x8
    unsigned long long _settingsContext;	// 16 = 0x10
    NSMutableSet *_smartDetectionSettingsItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000015b607
@property(readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems; // @synthesize smartDetectionSettingsItems=_smartDetectionSettingsItems;
@property(readonly, nonatomic) unsigned long long settingsContext; // @synthesize settingsContext=_settingsContext;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (id)items;	// IMP=0x000000000015b5c2
- (_Bool)_homeSupportsPackageDetection;	// IMP=0x000000000015b50d
- (id)reloadItems;	// IMP=0x000000000015ad52
- (id)init;	// IMP=0x000000000015ac9d
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;	// IMP=0x000000000015abd6

@end

