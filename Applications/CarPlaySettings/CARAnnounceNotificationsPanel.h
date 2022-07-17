//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARAnnounceNotificationsMuteOptionsPanel, CARSettingsButtonCellSpecifier, CARSettingsCellSpecifier, CARSettingsSwitchCellSpecifier, CRSSiriPreferences, DNDStateService, NSString;

@interface CARAnnounceNotificationsPanel
{
    _Bool _focusActive;	// 8 = 0x8
    _Bool _pendingAnnounceEnablementChangeFromSiri;	// 9 = 0x9
    _Bool _pendingAnnounceEnablementChangeFromUserNotifications;	// 10 = 0xa
    CARSettingsCellSpecifier *_cellSpecifier;	// 16 = 0x10
    CARSettingsSwitchCellSpecifier *_announceEnabledSpecifier;	// 24 = 0x18
    CARSettingsButtonCellSpecifier *_muteAnnouncementsSpecifier;	// 32 = 0x20
    DNDStateService *_dndStateService;	// 40 = 0x28
    CARAnnounceNotificationsMuteOptionsPanel *_muteOptionsPanel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000556f
@property(readonly, nonatomic) CARAnnounceNotificationsMuteOptionsPanel *muteOptionsPanel; // @synthesize muteOptionsPanel=_muteOptionsPanel;
@property(nonatomic) _Bool pendingAnnounceEnablementChangeFromUserNotifications; // @synthesize pendingAnnounceEnablementChangeFromUserNotifications=_pendingAnnounceEnablementChangeFromUserNotifications;
@property(nonatomic) _Bool pendingAnnounceEnablementChangeFromSiri; // @synthesize pendingAnnounceEnablementChangeFromSiri=_pendingAnnounceEnablementChangeFromSiri;
@property(nonatomic, getter=isFocusActive) _Bool focusActive; // @synthesize focusActive=_focusActive;
@property(readonly, nonatomic) DNDStateService *dndStateService; // @synthesize dndStateService=_dndStateService;
- (id)_muteAnnouncementsSpecifierTitleForMuted:(_Bool)arg1 announceEnablementType:(long long)arg2;	// IMP=0x00100000000054a8
- (void)_updateAnnounceMuted:(_Bool)arg1;	// IMP=0x001000000000545c
- (_Bool)_isAnnounceMuted;	// IMP=0x0010000000005389
- (id)_announceEnabledFooterText;	// IMP=0x001000000000530a
- (void)_updateAnnounceEnabled:(_Bool)arg1;	// IMP=0x0010000000005007
- (_Bool)_isAnnounceEnabled;	// IMP=0x0010000000004f94
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;	// IMP=0x0010000000004f38
- (void)preferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x0010000000004ec3
- (void)preferences:(id)arg1 carPlayAnnounceEnablementTypeChanged:(long long)arg2;	// IMP=0x0010000000004dbc
- (void)announceCarPlaySettingUpdated:(long long)arg1;	// IMP=0x0010000000004c4a
@property(readonly, nonatomic) CARSettingsButtonCellSpecifier *muteAnnouncementsSpecifier; // @synthesize muteAnnouncementsSpecifier=_muteAnnouncementsSpecifier;
@property(readonly, nonatomic) CARSettingsSwitchCellSpecifier *announceEnabledSpecifier; // @synthesize announceEnabledSpecifier=_announceEnabledSpecifier;
@property(readonly, nonatomic) CRSSiriPreferences *siriPreferences;
- (id)specifierSections;	// IMP=0x0010000000004272
- (id)cellSpecifier;	// IMP=0x00100000000040c7
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000003ddd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
