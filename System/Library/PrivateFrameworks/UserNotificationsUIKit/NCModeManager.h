//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/DNDModeConfigurationServiceListener-Protocol.h>
#import <UserNotificationsUIKit/DNDStateUpdateListener-Protocol.h>

@class DNDModeConfiguration, DNDModeConfigurationService, DNDStateService, NSHashTable, NSString;

@interface NCModeManager : NSObject <DNDStateUpdateListener, DNDModeConfigurationServiceListener>
{
    DNDStateService *_stateService;	// 8 = 0x8
    DNDModeConfigurationService *_modeConfigurationService;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    DNDModeConfiguration *_currentModeConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e0667
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e0492
- (void)_updateWithModeConfiguration:(id)arg1 previousModeConfiguration:(id)arg2;	// IMP=0x00000000000e02e4
- (void)_fetchCurrentModeConfiguration;	// IMP=0x00000000000e01d2
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;	// IMP=0x00000000000e01c0
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;	// IMP=0x00000000000e00ef
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000e00cd
- (void)addObserver:(id)arg1;	// IMP=0x00000000000e0012
- (void)setModeConfiguration:(id)arg1;	// IMP=0x00000000000dffe8
- (id)currentModeConfiguration;	// IMP=0x00000000000dffda
- (void)dealloc;	// IMP=0x00000000000dff95
- (id)init;	// IMP=0x00000000000dfea1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
