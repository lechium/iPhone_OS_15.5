//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBMuteAssertion, NSDate, NSDictionary;

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _showsOnExternalDevices;	// 8 = 0x8
    _Bool _showsCustomSettingsLink;	// 9 = 0x9
    _Bool _userConfiguredTimeSensitiveSetting;	// 10 = 0xa
    _Bool _userConfiguredDirectMessagesSetting;	// 11 = 0xb
    long long _authorizationStatus;	// 16 = 0x10
    NSDate *_authorizationExpirationDate;	// 24 = 0x18
    NSDate *_lastUserGrantedAuthorizationDate;	// 32 = 0x20
    BBMuteAssertion *_muteAssertion;	// 40 = 0x28
    long long _notificationCenterSetting;	// 48 = 0x30
    long long _lockScreenSetting;	// 56 = 0x38
    long long _contentPreviewSetting;	// 64 = 0x40
    unsigned long long _alertType;	// 72 = 0x48
    unsigned long long _pushSettings;	// 80 = 0x50
    long long _carPlaySetting;	// 88 = 0x58
    long long _criticalAlertSetting;	// 96 = 0x60
    long long _timeSensitiveSetting;	// 104 = 0x68
    long long _scheduledDeliverySetting;	// 112 = 0x70
    long long _directMessagesSetting;	// 120 = 0x78
    long long _bulletinGroupingSetting;	// 128 = 0x80
    long long _announceSetting;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005bbad
+ (id)sectionInfoSettingsForManagedBundleID:(id)arg1;	// IMP=0x00000000000046a6
- (void).cxx_destruct;	// IMP=0x000000000005c752
@property(nonatomic) long long announceSetting; // @synthesize announceSetting=_announceSetting;
@property(nonatomic) long long bulletinGroupingSetting; // @synthesize bulletinGroupingSetting=_bulletinGroupingSetting;
@property(nonatomic, getter=hasUserConfiguredDirectMessagesSetting) _Bool userConfiguredDirectMessagesSetting; // @synthesize userConfiguredDirectMessagesSetting=_userConfiguredDirectMessagesSetting;
@property(nonatomic) long long directMessagesSetting; // @synthesize directMessagesSetting=_directMessagesSetting;
@property(nonatomic) long long scheduledDeliverySetting; // @synthesize scheduledDeliverySetting=_scheduledDeliverySetting;
@property(nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) _Bool userConfiguredTimeSensitiveSetting; // @synthesize userConfiguredTimeSensitiveSetting=_userConfiguredTimeSensitiveSetting;
@property(nonatomic) long long timeSensitiveSetting; // @synthesize timeSensitiveSetting=_timeSensitiveSetting;
@property(nonatomic) long long criticalAlertSetting; // @synthesize criticalAlertSetting=_criticalAlertSetting;
@property(nonatomic) long long carPlaySetting; // @synthesize carPlaySetting=_carPlaySetting;
@property(nonatomic) unsigned long long pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
@property(nonatomic) long long contentPreviewSetting; // @synthesize contentPreviewSetting=_contentPreviewSetting;
@property(nonatomic) _Bool showsCustomSettingsLink; // @synthesize showsCustomSettingsLink=_showsCustomSettingsLink;
@property(nonatomic) _Bool showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;
@property(nonatomic) long long lockScreenSetting; // @synthesize lockScreenSetting=_lockScreenSetting;
@property(nonatomic) long long notificationCenterSetting; // @synthesize notificationCenterSetting=_notificationCenterSetting;
@property(retain, nonatomic) BBMuteAssertion *muteAssertion; // @synthesize muteAssertion=_muteAssertion;
@property(retain, nonatomic) NSDate *lastUserGrantedAuthorizationDate; // @synthesize lastUserGrantedAuthorizationDate=_lastUserGrantedAuthorizationDate;
@property(retain, nonatomic) NSDate *authorizationExpirationDate; // @synthesize authorizationExpirationDate=_authorizationExpirationDate;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool allowsNotifications;
@property(readonly, nonatomic) _Bool isAuthorizedTemporarily;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c167
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005bbb5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005b8ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005b3f7
- (unsigned long long)hash;	// IMP=0x000000000005b1ec
- (id)_announceSettingDescription;	// IMP=0x000000000005b18a
- (id)_bulletinGroupingSettingDescription;	// IMP=0x000000000005b144
- (id)_contentPreviewSettingDescription;	// IMP=0x000000000005b0de
- (id)_alertTypeDescription;	// IMP=0x000000000005b098
- (id)_authorizationStatusDescription;	// IMP=0x000000000005b023
- (id)description;	// IMP=0x000000000005a8bc
@property(readonly, copy, nonatomic) NSDictionary *stateCapture;
- (_Bool)isBulletinMutedForThreadIdentifier:(id)arg1;	// IMP=0x000000000005a096
- (void)unmuteThreadIdentifier:(id)arg1;	// IMP=0x0000000000059f45
- (void)muteThreadIdentifier:(id)arg1 untilDate:(id)arg2;	// IMP=0x0000000000059d71
- (void)unmuteSection;	// IMP=0x0000000000059d5d
- (void)muteSectionUntilDate:(id)arg1;	// IMP=0x0000000000059d0a
- (id)initWithDefaultsForSectionType:(long long)arg1;	// IMP=0x0000000000059bb5
@property(nonatomic) long long spokenNotificationSetting;
@property(nonatomic) _Bool showsInLockScreen;
@property(nonatomic) _Bool showsInNotificationCenter;
@property(nonatomic) _Bool showsMessagePreview;

@end
