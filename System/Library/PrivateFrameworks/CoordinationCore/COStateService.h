//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COEndpointMonitorDelegate-Protocol.h>
#import <CoordinationCore/COStateAddOnDelegate-Protocol.h>
#import <CoordinationCore/COStateManagerServiceInterface-Protocol.h>

@class COEndpointMonitor, NSArray, NSDictionary, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface COStateService <COStateAddOnDelegate, COEndpointMonitorDelegate, COStateManagerServiceInterface>
{
    NSDictionary *_connectedClients;	// 8 = 0x8
    NSUserDefaults *_SoundBoardDefaults;	// 16 = 0x10
    NSArray *_mediaObservers;	// 24 = 0x18
    COEndpointMonitor *_endpointMonitor;	// 32 = 0x20
    double _doorbellDelay;	// 40 = 0x28
}

+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x000000000002bb30
- (void).cxx_destruct;	// IMP=0x0000000000032334
@property(nonatomic) double doorbellDelay; // @synthesize doorbellDelay=_doorbellDelay;
@property(copy, nonatomic) COEndpointMonitor *endpointMonitor; // @synthesize endpointMonitor=_endpointMonitor;
@property(copy, nonatomic) NSArray *mediaObservers; // @synthesize mediaObservers=_mediaObservers;
@property(readonly, nonatomic) NSUserDefaults *SoundBoardDefaults; // @synthesize SoundBoardDefaults=_SoundBoardDefaults;
@property(copy, nonatomic) NSDictionary *connectedClients; // @synthesize connectedClients=_connectedClients;
- (void)endpointAvailableInHomeChanged:(_Bool)arg1;	// IMP=0x0000000000032151
- (void)_cleanupDisconnectedClient:(id)arg1;	// IMP=0x0000000000031b10
- (void)_setIsWriting:(_Bool)arg1 forClient:(id)arg2;	// IMP=0x00000000000319f5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003169a
- (void)requestCompositionForCluster:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031076
- (void)unregisterForMediaSystemLeaderChange;	// IMP=0x0000000000031070
- (void)registerForMediaSystemLeaderChange;	// IMP=0x0000000000030f74
- (void)isMediaSystemLeader:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030f28
- (_Bool)isMediaSystemLeader;	// IMP=0x0000000000030e3b
- (id)_stateSetByClientsForSuite:(id)arg1 cluster:(id)arg2;	// IMP=0x0000000000030b44
- (void)_informClientsOfUpdates:(id)arg1 removals:(id)arg2 inCluster:(id)arg3;	// IMP=0x0000000000030171
- (void)_checkinClientWithSuite:(id)arg1 clusters:(id)arg2;	// IMP=0x000000000002ff8a
- (void)doorbellDelayWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ff41
- (void)removeKeyPaths:(id)arg1 targetClusters:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ef13
- (void)setDictionary:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3 targetCluster:(id)arg4 withCallback:(CDUnknownBlockType)arg5;	// IMP=0x000000000002da54
- (void)removeObserverWithPredicate:(id)arg1;	// IMP=0x000000000002d77c
- (void)addObserverWithPredicate:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3;	// IMP=0x000000000002cd85
- (void)stateForAddOn:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c822
- (void)addOn:(id)arg1 receivedUpdates:(id)arg2 removals:(id)arg3;	// IMP=0x000000000002c5bd
- (_Bool)_canRequestCreationOfCluster:(id)arg1;	// IMP=0x000000000002c4fc
- (void)_addOnRemoved:(id)arg1;	// IMP=0x000000000002c446
- (void)_addOnAdded:(id)arg1;	// IMP=0x000000000002c010
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x000000000002be80
- (void)_clientLost:(id)arg1;	// IMP=0x000000000002be08
- (void)dealloc;	// IMP=0x000000000002bd4d
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000002bbe1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
