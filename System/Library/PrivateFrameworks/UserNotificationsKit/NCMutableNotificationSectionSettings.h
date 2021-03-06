//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, NSString, UIImage;
@protocol NCNotificationMuteAssertion;

@interface NCMutableNotificationSectionSettings
{
}

@property(nonatomic) id <NCNotificationMuteAssertion> muteAssertion; // @dynamic muteAssertion;
@property(nonatomic) _Bool isAppClip; // @dynamic isAppClip;
@property(nonatomic) _Bool hasProvisionalAuthorization; // @dynamic hasProvisionalAuthorization;
@property(nonatomic) _Bool isDeliveredQuietly; // @dynamic isDeliveredQuietly;
@property(nonatomic) _Bool showsCustomSettingsLink; // @dynamic showsCustomSettingsLink;
@property(retain, nonatomic) UIImage *settingsIcon; // @dynamic settingsIcon;
@property(nonatomic, getter=isUserConfigurable) _Bool userConfigurable; // @dynamic userConfigurable;
@property(copy, nonatomic) NSSet *subSectionSettings; // @dynamic subSectionSettings;
@property(copy, nonatomic) NSDictionary *settings; // @dynamic settings;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *subSectionIdentifier; // @dynamic subSectionIdentifier;
@property(copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;

@end

