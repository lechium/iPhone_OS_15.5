//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/BBSectionInfo.h>

@interface BBSectionInfo (UserNotificationsServer)
- (id)uns_topicSettings;	// IMP=0x000000000000ef1a
- (id)uns_notificationSource;	// IMP=0x000000000000ed50
- (void)uns_setPropertiesFromTopicRecord:(id)arg1;	// IMP=0x000000000000ea90
- (void)uns_setPropertiesFromSourceSettingsDescription:(id)arg1;	// IMP=0x000000000000e8a6
- (long long)uns_notificationSettingForBBSectionAnnounceSetting:(long long)arg1;	// IMP=0x000000000000e887
- (long long)uns_BBSectionAnnounceSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x000000000000e84f
- (long long)uns_BBSectionInfoSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x000000000000e838
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;	// IMP=0x000000000000e821
- (id)uns_notificationSettings;	// IMP=0x000000000000e570
- (void)uns_setPropertiesFromNotificationSettings:(id)arg1 systemSettings:(id)arg2;	// IMP=0x000000000000e27f
- (void)uns_setPropertiesFromAuthorizationOptions:(unsigned long long)arg1 supportsProvisionalAlerts:(_Bool)arg2;	// IMP=0x000000000000e092
@end

