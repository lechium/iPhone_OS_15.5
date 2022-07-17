//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBSectionInfo, NPSDomainAccessor, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier;

@interface BPSNotificationAppController
{
    _Bool _mirrorSettings;	// 192 = 0xc0
    NSString *_bundleIdentifier;	// 200 = 0xc8
    BBSectionInfo *_bbSectionInfo;	// 208 = 0xd0
    NSMutableArray *_notificationApplicationSpecifiers;	// 216 = 0xd8
    NPSDomainAccessor *_bbAppsSettings;	// 224 = 0xe0
    NSMutableArray *_notificationSpecifiers;	// 232 = 0xe8
    NSMutableDictionary *_sectionInfo;	// 240 = 0xf0
    unsigned long long _settingsMode;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000001ab84
@property(nonatomic) unsigned long long settingsMode; // @synthesize settingsMode=_settingsMode;
@property(readonly, nonatomic) NSMutableDictionary *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(readonly, nonatomic) _Bool mirrorSettings; // @synthesize mirrorSettings=_mirrorSettings;
@property(readonly, nonatomic) NSMutableArray *notificationSpecifiers; // @synthesize notificationSpecifiers=_notificationSpecifiers;
@property(retain, nonatomic) NPSDomainAccessor *bbAppsSettings; // @synthesize bbAppsSettings=_bbAppsSettings;
@property(retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers; // @synthesize notificationApplicationSpecifiers=_notificationApplicationSpecifiers;
@property(retain, nonatomic) BBSectionInfo *bbSectionInfo; // @synthesize bbSectionInfo=_bbSectionInfo;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)localizedPreviewGroupFooter;	// IMP=0x000000000001aab9
- (id)localizedPreviewGroupLabel;	// IMP=0x000000000001aab1
- (_Bool)wantsPreviewChoice;	// IMP=0x000000000001aaa9
- (id)localizedPreviewChoiceTitle;	// IMP=0x000000000001aa2b
@property(readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
- (long long)alertType;	// IMP=0x000000000001a99f
@property(readonly, nonatomic) _Bool showPreview;
@property(readonly, nonatomic) _Bool showAlerts;
- (id)vibrationValue:(id)arg1;	// IMP=0x000000000001a40e
- (void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x000000000001a394
- (id)soundsValue:(id)arg1;	// IMP=0x000000000001a315
- (void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x000000000001a29b
- (id)showPreviewValue:(id)arg1;	// IMP=0x000000000001a274
- (void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x000000000001a0cb
@property(readonly, nonatomic) unsigned long long alertingMode;
- (void)setAlertingMode:(unsigned long long)arg1;	// IMP=0x0000000000019e60
- (void)setNotificationGroupingValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000019e1d
- (id)notificationGroupingValue:(id)arg1;	// IMP=0x0000000000019dc2
- (id)notificationGroupValues;	// IMP=0x0000000000019db5
- (id)notificationGroupTitles;	// IMP=0x0000000000019bfa
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000019911
- (void)setMirrorSettings:(_Bool)arg1;	// IMP=0x000000000001977e
- (void)writeSectionState;	// IMP=0x00000000000196b0
- (id)localizedMirroringDetailFooter;	// IMP=0x00000000000196a8
- (id)applicationGroupSpecifiers;	// IMP=0x00000000000195dd
- (id)mirroredApplicationGroupSpecifiers;	// IMP=0x00000000000195d5
- (void)mirrorSettingsChanged:(_Bool)arg1;	// IMP=0x00000000000195c7
- (_Bool)watchHasCapabilitySendToNotificationCenter;	// IMP=0x000000000001958b
- (_Bool)_suppressSendToNotificationCenterOption;	// IMP=0x0000000000019552
- (_Bool)suppressNotificationCoalescingOptions;	// IMP=0x000000000001954a
- (_Bool)suppressSendToNotificationCenterOption;	// IMP=0x0000000000019542
- (_Bool)suppressAllMirrorSpecifiers;	// IMP=0x000000000001953a
- (_Bool)suppressAlertSpecifiers;	// IMP=0x0000000000019532
- (_Bool)suppressMirrorOption;	// IMP=0x000000000001952a
- (id)applicationBundleIdentifier;	// IMP=0x000000000001950d
- (id)localizedPaneTitle;	// IMP=0x00000000000194f0
- (void)removeSendToNotificationCenterOption;	// IMP=0x0000000000019492
- (void)removeNotificationCoalescingOptions;	// IMP=0x00000000000193e4
- (void)removeAlertOptions;	// IMP=0x00000000000191bb
- (void)removeMirrorOptions;	// IMP=0x00000000000190cf
- (void)updateSubsections;	// IMP=0x0000000000018c40
- (id)sectionInfoForBBSectionInfo:(id)arg1;	// IMP=0x0000000000018584
- (void)_showSettingsNotifications;	// IMP=0x0000000000018467
- (id)customGroupSpecifierForDescription:(id)arg1;	// IMP=0x000000000001827d
- (id)specifiers;	// IMP=0x000000000001730e
- (id)glanceSpecifierForIdentifier:(id)arg1;	// IMP=0x0000000000017306
- (id)bulletinBoardSettings;	// IMP=0x000000000001706f
- (_Bool)caresAboutSubsections;	// IMP=0x0000000000017067
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000001705f
- (id)bundle;	// IMP=0x000000000001702d
- (id)init;	// IMP=0x0000000000016f90

@end
