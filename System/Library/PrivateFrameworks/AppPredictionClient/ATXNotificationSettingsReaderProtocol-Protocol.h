//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet, NSString, NSUUID;

@protocol ATXNotificationSettingsReaderProtocol <NSObject>
- (NSNumber *)numConfiguredModes;
- (NSSet *)allConfiguredDigestApps;
- (_Bool)doesAppAllowMessageBreakthrough:(NSString *)arg1;
- (_Bool)doesAppSendNotificationsToDigest:(NSString *)arg1;
- (_Bool)digestSetupComplete;
- (NSArray *)notificationDigestDeliveryTimes;
- (_Bool)contactIsOnAllowList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
- (_Bool)appIsOnAllowList:(NSString *)arg1 dndModeUUID:(NSUUID *)arg2;
@end
