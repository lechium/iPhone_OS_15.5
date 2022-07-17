//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSilo, NSString, PSYServiceSyncSession;

@interface CLTileSyncDelegate : NSObject
{
    void *fManager;	// 8 = 0x8
    CLSilo *fSilo;	// 16 = 0x10
    PSYServiceSyncSession *fPsSession;	// 24 = 0x18
}

- (void)initialSyncStateObserverClientCanRetryFailedRequests:(id)arg1;	// IMP=0x00200000000b01bc
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;	// IMP=0x00100000000b010d
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00100000000afe21
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00100000000afd72
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x00100000000af7d5
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x00100000000af5e6
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00100000000aed59
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00100000000ae93f
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x00100000000ae624
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x00100000000ae573
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x00100000000adf20
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ad88b
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000000ad679
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x00100000000ad3cd
- (void)serviceDidUnpairDevice:(id)arg1;	// IMP=0x00100000000ad2d0
- (void)serviceDidPairDevice:(id)arg1;	// IMP=0x00100000000ad1d3
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x00100000000ad12a
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000acdfa
- (id)initWithSyncManager:(void *)arg1 silo:(id)arg2;	// IMP=0x00100000000acdaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
