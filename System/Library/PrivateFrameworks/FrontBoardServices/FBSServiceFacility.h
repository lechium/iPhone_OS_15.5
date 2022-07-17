//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class FBSSerialQueue, NSMutableSet, NSSet, NSString;

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable>
{
    NSString *_identifier;	// 8 = 0x8
    FBSSerialQueue *_queue;	// 16 = 0x10
    NSSet *_prerequisiteMilestones;	// 24 = 0x18
    NSMutableSet *_clients;	// 32 = 0x20
    NSSet *_clients_immutable;	// 40 = 0x28
    struct os_unfair_lock_s _clients_immutable_lock;	// 48 = 0x30
    _Bool _invalidated;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000001139e
@property(readonly, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;	// IMP=0x0000000000011384
- (void)noteClientDidDisconnect:(id)arg1;	// IMP=0x000000000001137e
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000011378
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000011370
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000111ad
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001115d
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000110d8
- (id)succinctDescription;	// IMP=0x0000000000011088
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;	// IMP=0x0000000000010cfd
- (void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;	// IMP=0x0000000000010c30
- (void)queue_clientDidDisconnect:(id)arg1;	// IMP=0x0000000000010a4b
- (_Bool)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000001086d
@property(readonly, nonatomic) NSSet *_prerequisiteMilestones;
@property(readonly, nonatomic) NSSet *clients;
- (void)invalidate;	// IMP=0x00000000000107ba
- (void)dealloc;	// IMP=0x000000000001062f
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;	// IMP=0x000000000001038e
- (id)init;	// IMP=0x0000000000010260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
