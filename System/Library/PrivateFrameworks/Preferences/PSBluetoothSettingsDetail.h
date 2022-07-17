//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsBoolDetail-Protocol.h>

@class NSString;

@interface PSBluetoothSettingsDetail : NSObject <PSSettingsBoolDetail>
{
}

+ (_Bool)isEnabled;	// IMP=0x00000000000bb615
+ (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000bb52c
+ (id)iconImage;	// IMP=0x00000000000bb4cb
+ (id)preferencesURL;	// IMP=0x00000000000bb4ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
