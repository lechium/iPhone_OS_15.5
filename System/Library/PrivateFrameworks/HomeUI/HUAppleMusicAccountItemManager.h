//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HUAppleMusicAccountModule, HUPrimaryUserSettingsItemModule;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountItemManager : HFItemManager
{
    _Bool _shouldDisableUpdates;	// 8 = 0x8
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 16 = 0x10
    HUAppleMusicAccountModule *_appleMusicAccountModule;	// 24 = 0x18
    HUPrimaryUserSettingsItemModule *_primaryUserSettingsItemModule;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000042dc22
@property(nonatomic) _Bool shouldDisableUpdates; // @synthesize shouldDisableUpdates=_shouldDisableUpdates;
@property(retain, nonatomic) HUPrimaryUserSettingsItemModule *primaryUserSettingsItemModule; // @synthesize primaryUserSettingsItemModule=_primaryUserSettingsItemModule;
@property(retain, nonatomic) HUAppleMusicAccountModule *appleMusicAccountModule; // @synthesize appleMusicAccountModule=_appleMusicAccountModule;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (_Bool)_showAppleMusicSettings;	// IMP=0x000000000042db4b
- (_Bool)_showPrimaryUserSettings;	// IMP=0x000000000042db07
- (void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000042daa8
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x000000000042d92d
- (id)_buildItemModulesForHome:(id)arg1;	// IMP=0x000000000042d538
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000042d4c0

@end
