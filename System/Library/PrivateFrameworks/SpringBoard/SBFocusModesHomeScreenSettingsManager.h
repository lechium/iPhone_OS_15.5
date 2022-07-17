//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFocusModesHomeScreenSettingsServerDelegate-Protocol.h>

@class NSString, SBFocusModesHomeScreenSettingsServer;

@interface SBFocusModesHomeScreenSettingsManager : NSObject <SBFocusModesHomeScreenSettingsServerDelegate>
{
    SBFocusModesHomeScreenSettingsServer *_settingsServer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030d2b9
@property(retain, nonatomic) SBFocusModesHomeScreenSettingsServer *settingsServer; // @synthesize settingsServer=_settingsServer;
- (void)settingsServer:(id)arg1 updateFocusModeHomeScreenSettingsWithRequest:(id)arg2;	// IMP=0x000000000030ca92
- (void)settingsServer:(id)arg1 homeScreenSnapshotsWithRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000030c446
- (id)init;	// IMP=0x000000000030c3c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
