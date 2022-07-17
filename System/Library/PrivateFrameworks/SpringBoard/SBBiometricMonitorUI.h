//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricMonitorObserver-Protocol.h>

@class NSString, SBBiometricMonitorViewController, UIWindow;
@protocol SBBiometricMonitorDataSource;

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver>
{
    _Bool _enabled;	// 8 = 0x8
    UIWindow *_debugWindow;	// 16 = 0x10
    SBBiometricMonitorViewController *_debugViewController;	// 24 = 0x18
    _Bool _deferredMatchUpdatePending;	// 32 = 0x20
    _Bool _deferredPresenceDetectUpdatePending;	// 33 = 0x21
    id <SBBiometricMonitorDataSource> _dataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001310b6
@property(retain, nonatomic) id <SBBiometricMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)biometricMonitorDataSourcePoseUpdated:(id)arg1;	// IMP=0x0000000000131028
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;	// IMP=0x0000000000130ff1
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;	// IMP=0x0000000000130f86
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;	// IMP=0x0000000000130f1b
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;	// IMP=0x0000000000130eed
- (void)biometricMonitorDataSourceMatchingEnded:(id)arg1;	// IMP=0x0000000000130e92
- (void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;	// IMP=0x0000000000130e1a
- (void)biometricMonitorDataSourceMatchingFailed:(id)arg1;	// IMP=0x0000000000130da2
- (void)biometricMonitorDataSourceMatchingStarted:(id)arg1;	// IMP=0x0000000000130d37
- (void)_cancelDeferredUpdatePresenceDetectState;	// IMP=0x0000000000130d02
- (_Bool)_isDeferredPresenceDetectStateUpdatePending;	// IMP=0x0000000000130cf9
- (void)_deferredUpdatePresenceDetectState;	// IMP=0x0000000000130cb6
- (void)_cancelDeferredUpdateMatchState;	// IMP=0x0000000000130c81
- (_Bool)_isDeferredMatchStateUpdatePending;	// IMP=0x0000000000130c78
- (void)_deferredUpdateMatchState;	// IMP=0x0000000000130c35
- (void)_doDeferredPresenceDetectUpdate;	// IMP=0x0000000000130c14
- (void)_updatePresenceDetectState;	// IMP=0x0000000000130bb6
- (void)_doDeferredMatchStateUpdate;	// IMP=0x0000000000130b95
- (void)_updateMatchState;	// IMP=0x0000000000130b37
- (void)disable;	// IMP=0x0000000000130ace
- (void)enable;	// IMP=0x000000000013091e
- (id)init;	// IMP=0x0000000000130885

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
