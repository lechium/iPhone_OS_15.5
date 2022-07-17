//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionParent-Protocol.h>

@class BSXPCServiceConnectionContext, BSXPCServiceConnectionEventHandler, BSXPCServiceConnectionMessage, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionPeer, NSMutableArray, NSString, RBSTarget;
@protocol BSServiceDispatchingQueue, BSXPCServiceConnectionParent, OS_xpc_object;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSInvalidatable>
{
    NSString *_proem;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    unsigned int _lock_activationGeneration;	// 20 = 0x14
    BSXPCServiceConnectionPeer *_lock_peer;	// 24 = 0x18
    id <BSServiceDispatchingQueue> _configured_connectionQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_lock_connection;	// 40 = 0x28
    NSMutableArray *_lock_childConnections;	// 48 = 0x30
    NSMutableArray *_lock_connectionActivatedEvents;	// 56 = 0x38
    NSMutableArray *_lock_connectionEstablishedEvents;	// 64 = 0x40
    BSXPCServiceConnectionMessage *_lock_activationMessage;	// 72 = 0x48
    BSXPCServiceConnectionMessageReply *_lock_activationReply;	// 80 = 0x50
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;	// 88 = 0x58
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;	// 96 = 0x60
    id <BSXPCServiceConnectionParent> _lock_parent;	// 104 = 0x68
    _Bool _lock_configured;	// 112 = 0x70
    _Bool _lock_activated;	// 113 = 0x71
    _Bool _lock_sendsMustWaitForEstablished;	// 114 = 0x72
    _Bool _lock_established;	// 115 = 0x73
    _Bool _lock_remotelyInvalidated;	// 116 = 0x74
    _Bool _lock_clientInvalidated;	// 117 = 0x75
    _Bool _lock_clientInvalidatedExplicitly;	// 118 = 0x76
    _Bool _lock_invalidated;	// 119 = 0x77
    RBSTarget *_remoteAssertionTarget;	// 120 = 0x78
    BSXPCServiceConnectionContext *_context;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000003c020
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x000000000003bd36
- (void)_invalidateChildConnection:(id)arg1;	// IMP=0x000000000003880d
@property(readonly, nonatomic, getter=_isClientInvalidated) _Bool _clientInvalidated;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool _invalidated;
- (void)dealloc;	// IMP=0x00000000000337ae
- (id)init;	// IMP=0x000000000003331c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
