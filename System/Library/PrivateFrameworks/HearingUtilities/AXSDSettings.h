//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HearingCore/HCSettings.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AXSDSettings : HCSettings
{
}

+ (id)stringForSoundDetectionState:(int)arg1;	// IMP=0x000000000000bcfd
+ (id)sharedInstance;	// IMP=0x000000000000b0ec
+ (void)initialize;	// IMP=0x000000000000b0ca
- (void)logMessage:(id)arg1;	// IMP=0x000000000000c1e2
- (id)keysToSync;	// IMP=0x000000000000c1c9
- (_Bool)shouldStoreLocally;	// IMP=0x000000000000c1c1
- (void)pipeFile:(id)arg1;	// IMP=0x000000000000c172
- (_Bool)hasCustomHapticForDetector:(id)arg1;	// IMP=0x000000000000bfec
- (_Bool)hasCustomToneForDetector:(id)arg1;	// IMP=0x000000000000be66
- (id)sortedSupportedSoundDetectionTypes;	// IMP=0x000000000000bd33
- (id)localizedNameForSoundDetectionType:(id)arg1;	// IMP=0x000000000000bd26
- (id)soundAlertTopicForSoundDetectionType:(id)arg1;	// IMP=0x000000000000ba8a
- (void)addSnoozeDateToSnoozeDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000b9cf
- (void)removeAllSoundDetectionTypes;	// IMP=0x000000000000b97c
- (void)removeSoundDetectionType:(id)arg1;	// IMP=0x000000000000b8df
- (void)addSoundDetectionType:(id)arg1;	// IMP=0x000000000000b842
@property(readonly, nonatomic) _Bool soundDetectionEnabled;
- (void)setPipedInFile:(id)arg1;	// IMP=0x000000000000b811
@property(readonly, nonatomic) NSString *pipedInFile; // @dynamic pipedInFile;
@property(nonatomic) _Bool micDisabled; // @dynamic micDisabled;
- (void)setSupportedSoundDetectionTypes:(id)arg1;	// IMP=0x000000000000b705
@property(readonly, nonatomic) NSArray *supportedSoundDetectionTypes; // @dynamic supportedSoundDetectionTypes;
@property(retain, nonatomic) NSMutableDictionary *soundDetectionSnoozeDictionary; // @dynamic soundDetectionSnoozeDictionary;
@property(retain, nonatomic) NSArray *enabledSoundDetectionTypes; // @dynamic enabledSoundDetectionTypes;
@property(nonatomic) int soundDetectionState; // @dynamic soundDetectionState;
@property(nonatomic) _Bool ultronSupportEnabled; // @dynamic ultronSupportEnabled;
@property(nonatomic) _Bool ultronIsRunning; // @dynamic ultronIsRunning;
- (id)preferenceKeyForSelector:(SEL)arg1;	// IMP=0x000000000000b15e
- (id)preferenceDomain;	// IMP=0x000000000000b141

@end

