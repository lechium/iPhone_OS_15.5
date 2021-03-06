//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/STStatusDomainPublisherClientHandle-Protocol.h>
#import <SystemStatusServer/STStatusDomainPublisherXPCServer-Protocol.h>

@class BSMutableIntegerMap, NSMutableSet, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientHandle : NSObject <STStatusDomainPublisherXPCServer, STStatusDomainPublisherClientHandle>
{
    id <STStatusDomainPublisherServerHandle> _serverHandle;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSXPCConnection *_clientXPCConnection;	// 24 = 0x18
    BSMutableIntegerMap *_dataByDomain;	// 32 = 0x20
    BSMutableIntegerMap *_volatileDataByDomain;	// 40 = 0x28
    BSMutableIntegerMap *_fallbackDataByDomain;	// 48 = 0x30
    NSSet *_entitledDomains;	// 56 = 0x38
    NSMutableSet *_publishingDomains;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001670e
@property(readonly, copy, nonatomic) NSMutableSet *publishingDomains; // @synthesize publishingDomains=_publishingDomains;
@property(readonly, copy, nonatomic) NSSet *entitledDomains; // @synthesize entitledDomains=_entitledDomains;
@property(readonly, nonatomic) BSMutableIntegerMap *fallbackDataByDomain; // @synthesize fallbackDataByDomain=_fallbackDataByDomain;
@property(readonly, nonatomic) BSMutableIntegerMap *volatileDataByDomain; // @synthesize volatileDataByDomain=_volatileDataByDomain;
@property(readonly, nonatomic) BSMutableIntegerMap *dataByDomain; // @synthesize dataByDomain=_dataByDomain;
@property(readonly, nonatomic) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) __weak id <STStatusDomainPublisherServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
- (void)_internalQueue_unregisterFromPublishingDomain:(unsigned long long)arg1;	// IMP=0x0000000000016521
- (id)_internalQueue_fallbackDataForDomain:(unsigned long long)arg1;	// IMP=0x000000000001648d
- (id)_internalQueue_volatileDataForDomain:(unsigned long long)arg1;	// IMP=0x00000000000163f9
- (id)_internalQueue_dataForDomain:(unsigned long long)arg1;	// IMP=0x0000000000016365
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;	// IMP=0x0000000000016228
- (void)publishDiff:(id)arg1 forDomain:(unsigned long long)arg2 replacingData:(_Bool)arg3 discardingOnExit:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000015dec
- (void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015ae9
- (void)unregisterFromPublishingDomain:(unsigned long long)arg1;	// IMP=0x0000000000015a50
- (void)registerToPublishDomain:(unsigned long long)arg1 fallbackData:(id)arg2;	// IMP=0x00000000000157eb
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;	// IMP=0x0000000000015177

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

