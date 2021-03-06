//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBLockScreenActionProvider-Protocol.h>
#import <SpringBoard/SBLockScreenPluginAgent-Protocol.h>

@class CSLockScreenTestPluginSettings, NSMutableDictionary, NSString, SBLockScreenPlugin;
@protocol SBLockScreenPluginManagerDelegate;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider>
{
    NSMutableDictionary *_plugins;	// 8 = 0x8
    SBLockScreenPlugin *_activePlugin;	// 16 = 0x10
    SBLockScreenPlugin *_displayedPlugin;	// 24 = 0x18
    id <SBLockScreenPluginManagerDelegate> _delegate;	// 32 = 0x20
    CSLockScreenTestPluginSettings *_testSettings;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000051374c
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SBLockScreenPluginManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBLockScreenPlugin *displayedPlugin; // @synthesize displayedPlugin=_displayedPlugin;
@property(readonly, nonatomic) SBLockScreenPlugin *activePlugin; // @synthesize activePlugin=_activePlugin;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000051353b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000005134eb
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000513467
- (id)succinctDescription;	// IMP=0x0000000000513417
@property(readonly, copy) NSString *description;
- (id)lockScreenActionContext;	// IMP=0x000000000009c75a
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;	// IMP=0x0000000000513362
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;	// IMP=0x00000000005132e3
- (void)deactivatePluginController:(id)arg1;	// IMP=0x0000000000513234
- (void)activatePluginController:(id)arg1;	// IMP=0x00000000005131f0
- (id)_pluginForPluginController:(id)arg1;	// IMP=0x0000000000512ffd
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000512f18
- (_Bool)_handlePluginDisabled:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000512c1e
- (_Bool)_loadLockScreenPluginWithContext:(id)arg1;	// IMP=0x0000000000512989
- (void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2;	// IMP=0x0000000000094e2e
- (void)_refreshLockScreenPlugin;	// IMP=0x0000000000094b5b
- (id)_highestPriorityPluginIgnoringViewDisplay:(_Bool)arg1;	// IMP=0x0000000000094bd2
- (void)_handleUIRelock;	// IMP=0x000000000051294d
- (_Bool)_sendEventToPlugin:(CDUnknownBlockType)arg1;	// IMP=0x000000000009c549
- (_Bool)handleEvent:(long long)arg1;	// IMP=0x000000000009c4a2
- (_Bool)disableLockScreenPluginWithContext:(id)arg1;	// IMP=0x0000000000512888
- (_Bool)enableLockScreenPluginWithContext:(id)arg1;	// IMP=0x0000000000512779
- (void)dealloc;	// IMP=0x0000000000512671
- (id)init;	// IMP=0x0000000000512563

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

