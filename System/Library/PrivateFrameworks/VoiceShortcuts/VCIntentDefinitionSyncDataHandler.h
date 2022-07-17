//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler
{
    VCDaemonXPCEventHandler *_eventHandler;	// 8 = 0x8
}

+ (int)messageType;	// IMP=0x000000000005c30c
- (void).cxx_destruct;	// IMP=0x000000000005af9c
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (_Bool)deleteSyncedData:(id *)arg1;	// IMP=0x000000000005ae9b
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005a6b8
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005a6a1
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005a5b7
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000005a426
- (void)installedApplicationsDidChange:(id)arg1;	// IMP=0x000000000005a382
- (void)dealloc;	// IMP=0x000000000005a298
- (id)initWithEventHandler:(id)arg1;	// IMP=0x000000000005a0d2

@end
