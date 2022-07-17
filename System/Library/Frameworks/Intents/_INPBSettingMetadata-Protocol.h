//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBAppIdentifier, _INPBDevice;

@protocol _INPBSettingMetadata <NSObject>
@property(readonly, nonatomic) _Bool hasTargetDevice;
@property(retain, nonatomic) _INPBDevice *targetDevice;
@property(readonly, nonatomic) _Bool hasTargetApp;
@property(retain, nonatomic) _INPBAppIdentifier *targetApp;
@property(readonly, nonatomic) _Bool hasSettingId;
@property(copy, nonatomic) NSString *settingId;
@end
