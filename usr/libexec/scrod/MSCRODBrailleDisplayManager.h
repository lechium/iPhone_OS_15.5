//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 232 = 0xe8
    int _notifyLockStateToken;	// 256 = 0x100
    int _blankScreenToken;	// 260 = 0x104
    _Bool;	// 264 = 0x108
    _Bool _isScreenLocked;	// 265 = 0x109
    _Bool _airplaneMode;	// 266 = 0x10a
    _Bool _isBrailleSystemSleeping;	// 267 = 0x10b
    RadiosPreferences *_radiosPrefs;	// 272 = 0x110
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000002264
+ (void)initialize;	// IMP=0x001000000000220d
+ (id)sharedManager;	// IMP=0x00100000000021fc
- (void).cxx_destruct;	// IMP=0x00200000000069b7
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x0010000000006939
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x0010000000006918
- (void)airplaneModeChanged;	// IMP=0x001000000000682d
- (void)_registerHasBlankedScreenNotification;	// IMP=0x0010000000006597
- (void)_updateScreenLock:(int)arg1 screenBlank:(int)arg2;	// IMP=0x00100000000063f1
- (void)_handleSystemSleep;	// IMP=0x00100000000063d3
- (void)_delayedHandleSystemSleep;	// IMP=0x001000000000605a
- (void)_wakeFromSleep;	// IMP=0x001000000000603c
- (void)_delayedWakeFromSleep;	// IMP=0x0010000000006019
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x0010000000005e23
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x0010000000005d54
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x0010000000005bb0
- (unsigned int)_rootPowerPort;	// IMP=0x0010000000005ba0
- (_Bool)_registerSleepNotifications;	// IMP=0x0010000000005a53
- (_Bool)isConfigured;	// IMP=0x0010000000005916
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x00100000000058a6
- (id)driverConfiguration;	// IMP=0x001000000000575d
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x0010000000004b97
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004b0a
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004a06
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x001000000000409a
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002eb0
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000002e91
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000002dd9
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x0010000000002bb5
- (void)powerChangedNotification:(id)arg1;	// IMP=0x0010000000002b96
- (void)_setupBluetooth;	// IMP=0x0010000000002ac3
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0010000000002a61
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x0010000000002a00
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x0010000000002979
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x00100000000028f2
- (void)invalidate;	// IMP=0x00100000000028b1
- (void)_eventQueue_begin;	// IMP=0x00100000000027aa
- (void)handleSettingsChange:(id)arg1;	// IMP=0x00100000000026b8
- (id)init;	// IMP=0x00100000000022a1

@end
