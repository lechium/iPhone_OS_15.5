//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AudioPreferences
{
    NSNumber *_drivingModernPreference;	// 8 = 0x8
    NSNumber *_walkingModernPreference;	// 16 = 0x10
    NSNumber *_cyclingModernPreference;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001aad6
- (id)_values;	// IMP=0x001000000001a9ab
- (id)_keys;	// IMP=0x001000000001a99e
- (void)loadValuesFromDefaults;	// IMP=0x001000000001a88f
- (void)setGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;	// IMP=0x001000000001a85e
- (unsigned long long)guidanceLevelForTransportType:(int)arg1;	// IMP=0x001000000001a82d
- (_Bool)_migratedMutedValue;	// IMP=0x001000000001a7ba
- (void)_migrateVolumeSettings;	// IMP=0x001000000001a621
@property(nonatomic) unsigned long long cyclingVoiceGuidance;
@property(nonatomic) unsigned long long walkingVoiceGuidance;
@property(nonatomic) unsigned long long drivingVoiceGuidance;

@end

