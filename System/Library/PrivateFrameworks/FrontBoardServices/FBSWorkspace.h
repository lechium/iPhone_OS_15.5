//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSServiceConnectionEndpointMonitorDelegate-Protocol.h>

@class BSServiceConnectionEndpoint, BSServiceConnectionEndpointMonitor, FBSSerialQueue, NSArray, NSMutableDictionary, NSString;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding>
{
    FBSSerialQueue *_callOutQueue;	// 8 = 0x8
    id <FBSWorkspaceDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableDictionary *_queue_identifierToScenesSource;	// 32 = 0x20
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;	// 40 = 0x28
    BSServiceConnectionEndpoint *_defaultShellEndpoint;	// 48 = 0x30
}

+ (void)_registerBlockForWorkspaceCreation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015d82
+ (id)_sharedWorkspaceIfExists;	// IMP=0x0000000000015c15
- (void).cxx_destruct;	// IMP=0x0000000000017c8c
@property(readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint; // @synthesize defaultShellEndpoint=_defaultShellEndpoint;
- (id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(_Bool)arg2;	// IMP=0x0000000000017b1d
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000017b01
- (id)succinctDescription;	// IMP=0x0000000000017ab1
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000174a3
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000017453
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;	// IMP=0x0000000000017388
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;	// IMP=0x00000000000171d1
- (void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001701e
- (void)_activate;	// IMP=0x000000000001700a
- (void)_queue_unregisterSource:(id)arg1;	// IMP=0x0000000000016f18
- (void)_unregisterSource:(id)arg1;	// IMP=0x0000000000016e6e
- (void)_queue_registerSource:(id)arg1;	// IMP=0x0000000000016d79
- (void)_registerSource:(id)arg1;	// IMP=0x0000000000016ccf
- (void)_registerSourceEndpoint:(id)arg1;	// IMP=0x0000000000016cb6
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016c1a
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016af8
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016a06
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016941
- (id)sceneWithIdentifier:(id)arg1;	// IMP=0x000000000001676b
@property(readonly, copy, nonatomic) NSArray *scenes;
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000165d3
- (void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001602f
@property(readonly, nonatomic) id <FBSWorkspaceDelegate> delegate;
- (void)_activate:(_Bool)arg1;	// IMP=0x0000000000015e78
- (void)dealloc;	// IMP=0x0000000000015ae7
- (id)_initWithOptions:(id)arg1;	// IMP=0x000000000001567f
- (id)_initWithSerialQueue:(id)arg1;	// IMP=0x0000000000015548
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x0000000000015411
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000152da
- (id)init;	// IMP=0x00000000000151ac

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

