//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCDeviceComponent-Protocol.h>

@class GCControllerSettings, NSString;

@protocol _GCDeviceSettingsComponent <_GCDeviceComponent>
- (GCControllerSettings *)settingsForBundleIdentifier:(NSString *)arg1;
- (GCControllerSettings *)defaultSettings;
@end
