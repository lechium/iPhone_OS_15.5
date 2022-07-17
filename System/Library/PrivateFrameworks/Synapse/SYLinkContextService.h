//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/NSXPCListenerDelegate-Protocol.h>
#import <Synapse/SYAddLinkContextServiceDelegate-Protocol.h>
#import <Synapse/SYLinkContextServiceProtocol-Protocol.h>

@class NSArray, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SYLinkContextService : NSObject <SYLinkContextServiceProtocol, NSXPCListenerDelegate, SYAddLinkContextServiceDelegate>
{
    _Bool __forTesting;	// 8 = 0x8
    NSXPCListener *__listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *__serviceQueue;	// 24 = 0x18
    NSXPCConnection *__activeConnection;	// 32 = 0x20
    NSArray *__contextsDataForTesting;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000006842
@property(copy, nonatomic) NSArray *_contextsDataForTesting; // @synthesize _contextsDataForTesting=__contextsDataForTesting;
@property(readonly, nonatomic) _Bool _forTesting; // @synthesize _forTesting=__forTesting;
@property(retain, nonatomic) NSXPCConnection *_activeConnection; // @synthesize _activeConnection=__activeConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue; // @synthesize _serviceQueue=__serviceQueue;
@property(retain, nonatomic) NSXPCListener *_listener; // @synthesize _listener=__listener;
- (id)_listenerEndpoint;	// IMP=0x00000000000065ef
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000612d
- (void)userEditDidAddContentItemDatas:(id)arg1;	// IMP=0x0000000000005f53
- (void)userDidRemoveContentItemDatas:(id)arg1;	// IMP=0x0000000000005d79
- (void)userWillAddLinkWithActivityData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005b51
- (oneway void)fetchLinkContextsDataForUserActivityInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005825
- (oneway void)simpleMethod;	// IMP=0x000000000000581f
- (void)beginListeningToConnections;	// IMP=0x0000000000005622
- (void)dealloc;	// IMP=0x0000000000005570
- (id)initForTesting:(_Bool)arg1;	// IMP=0x00000000000054e1
- (id)init;	// IMP=0x00000000000054cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
