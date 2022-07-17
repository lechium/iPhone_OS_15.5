//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class HFSiriLanguageOption, NAFuture, NSHashTable, NSSet, NSString;

@interface HFAccessorySettingSiriLanguageAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
    NSSet *_availableLanguageOptions;	// 8 = 0x8
    HFSiriLanguageOption *_selectedLanguageOption;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005d38f
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // @synthesize selectedLanguageOption=_selectedLanguageOption;
@property(copy, nonatomic) NSSet *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
- (_Bool)shouldShowSettingsEntity:(id)arg1;	// IMP=0x000000000005d016
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;	// IMP=0x000000000005cfff
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(_Bool)arg1;	// IMP=0x000000000005c85c
@property(readonly, nonatomic) NAFuture *languageSettingFuture;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;	// IMP=0x000000000005c0dc
- (id)preferredOutputVoiceOptionsForSelectedOption:(id)arg1;	// IMP=0x000000000005befb
- (id)preferredRecognitionLanguageOptionsForSelectedOption:(id)arg1;	// IMP=0x000000000005b8ab
- (void)_dumpAvailableLanguageOptionsWithReason:(id)arg1;	// IMP=0x000000000005b5c7
- (id)updateSelectedLanguageOption:(id)arg1;	// IMP=0x000000000005af9f
- (id)updateAvailableLanguageOptions:(id)arg1;	// IMP=0x000000000005a296
- (void)removeObserver:(id)arg1;	// IMP=0x000000000005a216
- (void)addObserver:(id)arg1;	// IMP=0x000000000005a196
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;	// IMP=0x000000000005a074
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059fbf
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000059f0a
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000059de7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
