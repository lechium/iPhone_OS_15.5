//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, SBCClientConfiguration, SBDDomainSyncServiceHandler, SBDDomainValueServiceHandler;
@protocol OS_dispatch_queue, SBCPlaybackPositionClientProtocol;

@interface SBDPlaybackPositionService : NSObject
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <SBCPlaybackPositionClientProtocol> _clientProxy;	// 24 = 0x18
    SBDDomainSyncServiceHandler *_syncHandler;	// 32 = 0x20
    SBDDomainValueServiceHandler *_valueHandler;	// 40 = 0x28
    SBCClientConfiguration *_clientConfiguration;	// 48 = 0x30
}

+ (id)serviceForXPCConnection:(id)arg1;	// IMP=0x0020000000003191
- (void).cxx_destruct;	// IMP=0x0020000000002b80
@property(readonly, nonatomic) SBCClientConfiguration *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property(readonly, nonatomic) SBDDomainValueServiceHandler *valueHandler; // @synthesize valueHandler=_valueHandler;
@property(readonly, nonatomic) SBDDomainSyncServiceHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(readonly, nonatomic) id <SBCPlaybackPositionClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)_sendValueHandlerMessageWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002aa6
- (void)_sendSyncHandlerMessageWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002920
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002866
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000027ac
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000025ba
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;	// IMP=0x0010000000002407
- (oneway void)deletePlaybackPositionEntities;	// IMP=0x001000000000227d
- (oneway void)deletePlaybackPositionEntity:(id)arg1;	// IMP=0x00100000000020ca
- (oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001ed1
- (oneway void)endAccessingPlaybackPositionEntities;	// IMP=0x0010000000001eb8
- (oneway void)beginAccessingPlaybackPositionEntities;	// IMP=0x0010000000001e9f
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001e11
- (oneway void)setClientConfiguration:(id)arg1;	// IMP=0x0010000000001d84
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000001b4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

