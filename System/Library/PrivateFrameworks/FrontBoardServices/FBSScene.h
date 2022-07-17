//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSSceneAgentProxy-Protocol.h>
#import <FrontBoardServices/FBSSceneHandle-Protocol.h>
#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>
#import <FrontBoardServices/FBSSceneUpdaterDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneDefinition, FBSSceneIdentityToken, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, NSOrderedSet, NSString;
@protocol FBSSceneClientAgent, FBSSceneDelegate, FBSSceneUpdater;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding>
{
    FBSSerialQueue *_callOutQueue;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    FBSSceneDefinition *_definition;	// 24 = 0x18
    _Bool _hasAgent;	// 32 = 0x20
    id <FBSSceneClientAgent> _callOutQueue_agent;	// 40 = 0x28
    NSMutableArray *_callOutQueue_agentSessions;	// 48 = 0x30
    CDUnknownBlockType _callOutQueue_agentMessageHandler;	// 56 = 0x38
    _Bool _callOutQueue_agentInvalidateCalled;	// 64 = 0x40
    struct os_unfair_lock_s _lock;	// 68 = 0x44
    id <FBSSceneUpdater> _lock_updater;	// 72 = 0x48
    FBSSceneSettings *_lock_settings;	// 80 = 0x50
    FBSSceneClientSettings *_lock_clientSettings;	// 88 = 0x58
    NSOrderedSet *_lock_layers;	// 96 = 0x60
    id <FBSSceneDelegate> _lock_delegate;	// 104 = 0x68
    FBSSceneIdentityToken *_identityToken;	// 112 = 0x70
    NSString *__groupID;	// 120 = 0x78
}

+ (_Bool)_canHaveAgent;	// IMP=0x0000000000008b2d
- (void).cxx_destruct;	// IMP=0x000000000000a605
@property(readonly, copy, nonatomic) NSString *_groupID; // @synthesize _groupID=__groupID;
- (_Bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;	// IMP=0x000000000000a56a
- (_Bool)snapshotRequestAllowSnapshot:(id)arg1;	// IMP=0x000000000000a537
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009ef2
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009d0e
- (void)closeSession:(id)arg1;	// IMP=0x0000000000009c82
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;	// IMP=0x0000000000009bc8
- (id)clientProcess;	// IMP=0x0000000000009baf
- (id)hostProcess;	// IMP=0x0000000000009b54
- (id)counterpartAgent;	// IMP=0x0000000000009b4c
- (id)callOutQueue;	// IMP=0x0000000000009b3e
- (id)parameters;	// IMP=0x0000000000009aa0
- (id)definition;	// IMP=0x0000000000009a92
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x000000000000990e
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0000000000009791
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000947a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009285
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009235
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000009197
- (id)succinctDescription;	// IMP=0x0000000000009147
@property(readonly, copy) NSString *description;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008e59
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008b3e
- (_Bool)_hasAgent;	// IMP=0x0000000000008b35
- (id)_group;	// IMP=0x0000000000008ad9
- (void)_callOutQueue_invalidate;	// IMP=0x0000000000008a31
- (id)_initWithUpdater:(id)arg1 sceneID:(id)arg2 groupID:(id)arg3 specification:(id)arg4 settings:(id)arg5 initialClientSettings:(id)arg6;	// IMP=0x0000000000007caf
- (void)_callOutQueue_invalidateAgent;	// IMP=0x0000000000007b3f
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x00000000000074d0
- (id)layers;	// IMP=0x0000000000007456
- (id)contexts;	// IMP=0x0000000000007444
- (id)fbsDisplay;	// IMP=0x00000000000073f4
- (id)display;	// IMP=0x000000000000737a
- (_Bool)invalidateSnapshotWithContext:(id)arg1;	// IMP=0x000000000000731c
- (_Bool)performSnapshotWithContext:(id)arg1;	// IMP=0x00000000000072a5
- (id)snapshotRequest;	// IMP=0x00000000000071f2
- (void)detachSceneContext:(id)arg1;	// IMP=0x00000000000071e0
- (void)attachSceneContext:(id)arg1;	// IMP=0x00000000000071ce
- (void)detachContext:(id)arg1;	// IMP=0x000000000000717b
- (void)attachContext:(id)arg1;	// IMP=0x0000000000007128
- (void)detachLayer:(id)arg1;	// IMP=0x0000000000006fa2
- (void)attachLayer:(id)arg1;	// IMP=0x0000000000006dc2
- (void)sendActions:(id)arg1;	// IMP=0x00000000000065f3
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000653d
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006478
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x000000000000634e
@property(readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property(readonly, nonatomic) FBSSceneSettings *settings;
@property(nonatomic) __weak id <FBSSceneDelegate> delegate;
@property(readonly, nonatomic) FBSSceneSpecification *specification;
@property(readonly, nonatomic) FBSSceneIdentityToken *identityToken;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x00000000000060f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
