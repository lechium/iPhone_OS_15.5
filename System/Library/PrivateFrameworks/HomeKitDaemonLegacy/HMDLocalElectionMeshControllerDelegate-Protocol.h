//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@protocol HMDLocalElectionMeshController;

@protocol HMDLocalElectionMeshControllerDelegate <NSObject>
- (void)meshControllerDidReceivePingFromLeader:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidUpdatesNodes:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidElectLeader:(id <HMDLocalElectionMeshController>)arg1;
- (void)meshControllerDidStartElection:(id <HMDLocalElectionMeshController>)arg1;
@end
