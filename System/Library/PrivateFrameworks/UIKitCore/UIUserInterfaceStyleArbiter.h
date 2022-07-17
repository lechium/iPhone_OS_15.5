//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISUserInterfaceStyleModeDelegate-Protocol.h>

@class NSBackgroundActivityScheduler, NSDate, NSString, UISUserInterfaceStyleMode, _UICustomScheduleController, _UISunScheduleController;

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate>
{
    UISUserInterfaceStyleMode *_styleMode;	// 8 = 0x8
    long long _currentModeValue;	// 16 = 0x10
    long long _currentStyle;	// 24 = 0x18
    long long _lastProposedAutomaticStyle;	// 32 = 0x20
    struct {
        long long style;
        long long timing;
    } _lastOverride;	// 40 = 0x28
    int _screenDimmingNotificationToken;	// 56 = 0x38
    _Bool _isDim;	// 60 = 0x3c
    _UISunScheduleController *_sunScheduleController;	// 64 = 0x40
    _UICustomScheduleController *_customScheduleController;	// 72 = 0x48
    NSDate *_lastUpdateDate;	// 80 = 0x50
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;	// 88 = 0x58
    int _notificationToken;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x0000000000e6575c
- (void).cxx_destruct;	// IMP=0x0000000000e674f0
- (void)_updateScreenDimUpdatingStyle:(_Bool)arg1;	// IMP=0x0000000000e6735b
- (void)_setWatchesScreenDim:(_Bool)arg1;	// IMP=0x0000000000e67217
- (void)_logPeriodicEvent;	// IMP=0x0000000000e67066
- (void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5;	// IMP=0x0000000000e66d2e
- (long long)_proposedStyleForCurrentMode;	// IMP=0x0000000000e66ce9
- (_Bool)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2;	// IMP=0x0000000000e6659d
- (void)_updateCurrentStyleAndNotify:(_Bool)arg1 forReason:(long long)arg2;	// IMP=0x0000000000e65f35
- (void)_updateCurrentStyleForReason:(long long)arg1;	// IMP=0x0000000000e65eec
- (void)userInterfaceStyleModeDidChange:(id)arg1;	// IMP=0x0000000000e65e72
- (id)nextTransition;	// IMP=0x0000000000e65cf2
- (void)toggleCurrentStyleWithOverrideTiming:(long long)arg1;	// IMP=0x0000000000e65bc2
- (void)toggleCurrentStyle;	// IMP=0x0000000000e65bab
@property(readonly, nonatomic) long long currentStyle;
- (id)_init;	// IMP=0x0000000000e65955

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
