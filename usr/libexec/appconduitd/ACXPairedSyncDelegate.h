//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXPairedSyncAppInstaller, MISSING_TYPE, NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator;

@interface ACXPairedSyncDelegate : NSObject
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    PSYInitialSyncStateObserver *_stateObserver;	// 16 = 0x10
    ACXPairedSyncAppInstaller *_appInstaller;	// 24 = 0x18
}

+ (id)sharedSyncDelegate;	// IMP=0x0020000000005729
- (void).cxx_destruct;	// IMP=0x0020000000005f3a
@property(readonly, nonatomic) ACXPairedSyncAppInstaller *appInstaller; // @synthesize appInstaller=_appInstaller;
@property(readonly, nonatomic) PSYInitialSyncStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property(readonly, nonatomic) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)installCompleteForSyncSession:(id)arg1;	// IMP=0x0010000000005ecb
- (void)reportSystemAppInstallFailureForBundleID:(id)arg1;	// IMP=0x0010000000005e59
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000005c1e
- (void)supportsMigrationSync;	// IMP=0x0010000000005c18
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000005bf9
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000005bda
- (void)_syncDidCompleteForPairingIdentifier:(id)arg1 withDescription:(id)arg2;	// IMP=0x0010000000005917
- (_Bool)syncingIsRestrictedForPairingID:(id)arg1;	// IMP=0x001000000000590f
- (MISSING_TYPE *)_startSystemAppInstallerWithSyncSession:forConnection: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000005877
- (id)init;	// IMP=0x00100000000057c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
