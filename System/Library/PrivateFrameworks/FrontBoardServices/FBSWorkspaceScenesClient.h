//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSSceneUpdater-Protocol.h>
#import <FrontBoardServices/FBSWorkspaceScenesSource-Protocol.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, FBSSerialQueue, FBSWorkspace, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol BSServiceConnectionClient, FBSWorkspaceDelegate, NSCopying, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource>
{
    FBSWorkspace *_workspace;	// 8 = 0x8
    id <FBSWorkspaceDelegate> _workspaceDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    FBSSerialQueue *_callOutQueue;	// 32 = 0x20
    BSServiceConnection<BSServiceConnectionClient> *_connection;	// 40 = 0x28
    BSServiceConnectionEndpoint *_endpoint;	// 48 = 0x30
    NSMutableDictionary *_scenesByIdentifier;	// 56 = 0x38
    NSMutableDictionary *_clientSettingsByIdentifier;	// 64 = 0x40
    NSHashTable *_reconnectingScenes;	// 72 = 0x48
    NSMutableArray *_pendedSendBlocks;	// 80 = 0x50
    struct os_unfair_lock_s _reportingLock;	// 88 = 0x58
    NSMutableDictionary *_reportingLock_scenesByIdentifier;	// 96 = 0x60
    _Bool _activated;	// 104 = 0x68
}

+ (id)serviceQuality;	// IMP=0x0000000000032893
- (void).cxx_destruct;	// IMP=0x00000000000377d7
- (void)_queue_invalidateScene:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000372ad
- (void)_queue_updateScene:(id)arg1 withSettings:(id)arg2 diff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000036e26
- (id)_queue_connectedSceneWithIdentifier:(id)arg1;	// IMP=0x0000000000036db4
- (void)_queue_sendHandshake;	// IMP=0x0000000000036772
- (id)_reportedSceneWithIdentifier:(id)arg1;	// IMP=0x0000000000036702
- (void)_configureReceivedActions:(id)arg1 forScene:(id)arg2;	// IMP=0x0000000000036556
- (id)_remoteTarget;	// IMP=0x00000000000364f3
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000361e2
- (oneway void)sceneID:(id)arg1 sendActions:(id)arg2;	// IMP=0x0000000000035fb7
- (oneway void)sendActions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035e13
- (oneway void)sceneID:(id)arg1 destroyWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035cb8
- (oneway void)sceneID:(id)arg1 updateWithSettingsDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035c01
- (oneway void)reconnectWithSceneID:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035427
- (oneway void)createWithSceneID:(id)arg1 groupID:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000345f6
- (oneway void)willTerminateWithTransitionContext:(id)arg1;	// IMP=0x0000000000034482
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033b5e
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x00000000000339ae
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000033714
- (id)endpoint;	// IMP=0x0000000000033706
- (id)hostProcess;	// IMP=0x00000000000336f0
- (id)callOutQueue;	// IMP=0x00000000000336e2
- (id)scenes;	// IMP=0x0000000000033632
- (id)sceneWithIdentifier:(id)arg1;	// IMP=0x00000000000335c2
@property(readonly, nonatomic) NSObject<NSCopying> *identifier;
- (void)requestSceneWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032a76
- (void)queue_activate;	// IMP=0x00000000000328ac
- (id)initWithEndpoint:(id)arg1 queue:(id)arg2 calloutQueue:(id)arg3 workspace:(id)arg4;	// IMP=0x0000000000031a9c
- (id)init;	// IMP=0x000000000003196e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
