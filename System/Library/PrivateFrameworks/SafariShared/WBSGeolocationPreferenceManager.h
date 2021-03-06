//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSGeolocationPreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;	// 8 = 0x8
    WBSPerSitePreference *_geolocationPreference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c24d4
@property(readonly, nonatomic) WBSPerSitePreference *geolocationPreference; // @synthesize geolocationPreference=_geolocationPreference;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // @synthesize perSitePreferencesStore=_perSitePreferencesStore;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c216a
- (_Bool)_isDateLessThanOneDayAgo:(id)arg1;	// IMP=0x00000000000c213c
- (id)perSitePreferenceValueForGeolocationSetting:(long long)arg1;	// IMP=0x00000000000c20ee
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;	// IMP=0x00000000000c20ca
- (id)preferenceNameForPreference:(id)arg1;	// IMP=0x00000000000c20b6
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c208e
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1b33
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c177d
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c1764
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;	// IMP=0x00000000000c1676
- (id)valuesForPreference:(id)arg1;	// IMP=0x00000000000c1669
- (id)preferences;	// IMP=0x00000000000c15fe
- (void)_removePermissionsPassingTest:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c10a8
- (void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0f82
- (void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0df2
- (void)removeAllPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0c6f
- (void)removeAllPermissions;	// IMP=0x00000000000c0c5b
- (void)removeAllTemporaryPermissions;	// IMP=0x00000000000c0bdf
- (void)setDefaultGeolocationSetting:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0ac8
- (void)setDefaultGeolocationSetting:(long long)arg1;	// IMP=0x00000000000c0ab4
- (void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c09e9
- (void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c08cd
- (id)initWithPerSitePreferencesStore:(id)arg1;	// IMP=0x00000000000c07d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

