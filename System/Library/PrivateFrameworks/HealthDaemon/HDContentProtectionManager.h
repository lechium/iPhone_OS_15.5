//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject>
{
    _Atomic int _contentProtectionState;	// 8 = 0x8
    _Atomic _Bool _shouldIgnoreUnlockedState;	// 12 = 0xc
    _Atomic _Bool _unlockedSinceBoot;	// 13 = 0xd
    int _notifyToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_observationQueue;	// 24 = 0x18
    NSMapTable *_observers;	// 32 = 0x20
    double _beganObservingTime;	// 40 = 0x28
    double _lastNotificationTime;	// 48 = 0x30
    double _lastRecheckTime;	// 56 = 0x38
}

+ (_Bool)isProtectedDataAvailableWithState:(long long)arg1;	// IMP=0x0000000000002dd9
- (void).cxx_destruct;	// IMP=0x000000000042ae1d
- (id)diagnosticDescription;	// IMP=0x000000000042a947
@property(nonatomic) _Bool shouldIgnoreUnlockedState;
- (void)setContentProtectionState:(long long)arg1;	// IMP=0x000000000042a7e3
- (void)recheckContentProtectionState;	// IMP=0x0000000000003ae5
- (_Bool)deviceUnlockedSinceBoot;	// IMP=0x000000000000593f
- (_Bool)isProtectedDataAvailable;	// IMP=0x000000000042a790
- (long long)observedState;	// IMP=0x00000000000024e8
- (void)removeContentProtectionObserver:(id)arg1;	// IMP=0x000000000042a67b
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;	// IMP=0x000000000006b85b
- (void)dealloc;	// IMP=0x000000000042a606
- (id)initWithNotifications:(_Bool)arg1 initialState:(long long)arg2 unlockedSinceBoot:(_Bool)arg3;	// IMP=0x000000000042a430
- (id)init;	// IMP=0x000000000042a414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

