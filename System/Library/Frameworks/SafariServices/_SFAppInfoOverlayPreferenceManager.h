//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSPerSitePreferenceManager.h>

#import <SafariServices/WBSPerSitePreferenceBinaryToggleItemManager-Protocol.h>
#import <SafariServices/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>
#import <SafariServices/WBSPerSitePreferenceManagerStorageDelegate-Protocol.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

__attribute__((visibility("hidden")))
@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;	// 8 = 0x8
    WBSPerSitePreference *_appInfoOverlayPreference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000072eae
@property(readonly, nonatomic) WBSPerSitePreference *appInfoOverlayPreference; // @synthesize appInfoOverlayPreference=_appInfoOverlayPreference;
- (id)offValueForPreference:(id)arg1;	// IMP=0x0000000000072e90
- (id)onValueForPreference:(id)arg1;	// IMP=0x0000000000072e83
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;	// IMP=0x0000000000072e4e
- (id)preferenceNameForPreference:(id)arg1;	// IMP=0x0000000000072e3a
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;	// IMP=0x0000000000072d57
- (id)valuesForPreference:(id)arg1;	// IMP=0x0000000000072d4a
- (id)preferences;	// IMP=0x0000000000072cdf
- (long long)_defaultPreferenceValue;	// IMP=0x0000000000072cd4
- (void)setAppInfoOverlayPreferenceForDomain:(id)arg1 settings:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000072c2f
- (void)getAppInfoOverlayPreferenceForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072ac3
- (id)initWithPerSitePreferencesStore:(id)arg1;	// IMP=0x00000000000729e6
- (id)init;	// IMP=0x00000000000729d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

