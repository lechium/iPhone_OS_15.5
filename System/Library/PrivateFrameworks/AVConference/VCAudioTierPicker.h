//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BitrateLimits, NSMutableDictionary, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableDictionary *_tierTablesForRedNumPayloads;	// 8 = 0x8
    VCAudioTier *_defaultTier;	// 16 = 0x10
    VCAudioTier *_fallbackTier;	// 24 = 0x18
    BitrateLimits *_bitrateLimits;	// 32 = 0x20
    CDStruct_898ba246 _config;	// 40 = 0x28
}

+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;	// IMP=0x000000000029683b
+ (_Bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 mode:(int)arg4 redNumPayloads:(unsigned int)arg5 cellular:(_Bool)arg6;	// IMP=0x0000000000296754
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(_Bool)arg3;	// IMP=0x0000000000295d39
+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 tierPickerMode:(int)arg5 usingCellular:(_Bool)arg6 useCaseWatchContinuity:(_Bool)arg7;	// IMP=0x00000000002955c5
+ (_Bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;	// IMP=0x00000000002954bc
+ (int)operatingModeToTierPickerMode:(int)arg1;	// IMP=0x0000000000294eb8
+ (int)tierPickerModeToAVConferenceOperatingMode:(int)arg1;	// IMP=0x0000000000294e9b
@property CDStruct_898ba246 config; // @synthesize config=_config;
@property(readonly) VCAudioTier *defaultTier; // @synthesize defaultTier=_defaultTier;
- (id)allAudioTiers;	// IMP=0x0000000000297e13
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;	// IMP=0x00000000002971e6
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;	// IMP=0x00000000002968d8
- (void)printCreatedAudioTiers:(id)arg1;	// IMP=0x000000000029640a
- (void)dealloc;	// IMP=0x000000000029544f
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)arg1 usingCellular:(_Bool)arg2;	// IMP=0x0000000000294ed4
- (_Bool)setupTierPickerForConfig:(CDStruct_898ba246)arg1;	// IMP=0x00000000002947b5
- (void)logTierPickerConfig:(CDStruct_898ba246)arg1;	// IMP=0x00000000002944c9
- (id)configToString:(CDStruct_898ba246)arg1;	// IMP=0x000000000029444e
- (_Bool)reconfigureTierPicker:(CDStruct_898ba246)arg1;	// IMP=0x0000000000294336
- (id)initWithConfig:(CDStruct_898ba246)arg1;	// IMP=0x000000000029429b

@end
