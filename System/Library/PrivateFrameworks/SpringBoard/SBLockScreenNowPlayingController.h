//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class CSLockScreenSettings, NSString, PCPersistentTimer, PTToggleTestRecipe, SBMediaController;
@protocol SBLockScreenNowPlayingControllerDelegate;

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver>
{
    SBMediaController *_mediaController;	// 8 = 0x8
    PCPersistentTimer *_disableTimer;	// 16 = 0x10
    CSLockScreenSettings *_testSettings;	// 24 = 0x18
    PTToggleTestRecipe *_testRecipe;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    long long _currentState;	// 48 = 0x30
    id <SBLockScreenNowPlayingControllerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005014c0
@property(nonatomic) __weak id <SBLockScreenNowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000501474
- (void)_disableTimerFired;	// IMP=0x00000000005013fc
- (void)_invalidateDisableTimer;	// IMP=0x00000000005013ca
- (void)_startDisableTimer;	// IMP=0x000000000050131c
- (void)_updateToState:(long long)arg1;	// IMP=0x0000000000501298
- (void)_updateNowPlayingPlugin;	// IMP=0x00000000005010db
- (void)_removeObservers;	// IMP=0x000000000050102e
- (void)_addObservers;	// IMP=0x0000000000500f65
- (_Bool)_isMediaRecentlyActive;	// IMP=0x0000000000500e34
- (double)_timeoutInterval;	// IMP=0x0000000000500d92
- (_Bool)isNowPlayingActive;	// IMP=0x0000000000500d84
- (void)dealloc;	// IMP=0x0000000000500be4
- (id)initWithMediaController:(id)arg1;	// IMP=0x00000000005009a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
