//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXNotificationSettingsReaderProtocol-Protocol.h>

@class ATXDNDModeConfigurationClient, NSString, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol>
{
    ATXDNDModeConfigurationClient *_modeConfigClient;	// 8 = 0x8
    UNNotificationSettingsCenter *_notificationSettingsCenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006a2eb
- (id)numConfiguredModes;	// IMP=0x000000000006a26a
- (id)allConfiguredDigestApps;	// IMP=0x000000000006a11c
- (_Bool)doesAppAllowMessageBreakthrough:(id)arg1;	// IMP=0x000000000006a080
- (_Bool)doesAppSendNotificationsToDigest:(id)arg1;	// IMP=0x0000000000069fe4
- (_Bool)digestSetupComplete;	// IMP=0x0000000000069f97
- (id)notificationDigestDeliveryTimes;	// IMP=0x0000000000069f24
- (id)modeConfiguration:(id)arg1;	// IMP=0x0000000000069e8c
- (_Bool)contactIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;	// IMP=0x0000000000069db7
- (_Bool)appIsOnAllowList:(id)arg1 dndModeUUID:(id)arg2;	// IMP=0x0000000000069d11
- (id)initWithModeConfigurationClient:(id)arg1 notificationSettingsCenter:(id)arg2;	// IMP=0x0000000000069c78
- (id)init;	// IMP=0x0000000000069bf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

