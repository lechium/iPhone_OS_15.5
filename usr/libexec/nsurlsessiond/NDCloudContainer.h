//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRContainersMonitor, NSString;

@interface NDCloudContainer
{
    BRContainersMonitor *_monitor;	// 40 = 0x28
    _Bool _isForeground;	// 48 = 0x30
    _Bool _initializedForegroundStateFromMonitorCallback;	// 49 = 0x31
}

+ (id)bundleIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x002000000003fb62
+ (id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x001000000003fac8
- (void).cxx_destruct;	// IMP=0x002000000003fab5
- (void)containerDidEnterForeground:(id)arg1;	// IMP=0x001000000003f9c8
- (void)containerDidEnterBackground:(id)arg1;	// IMP=0x001000000003f8db
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003f804
- (void)addObserver:(id)arg1;	// IMP=0x001000000003f72d
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003f725
- (_Bool)supportsWakes;	// IMP=0x001000000003f71d
- (_Bool)isForeground;	// IMP=0x001000000003f637
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003f62f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003f57f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
