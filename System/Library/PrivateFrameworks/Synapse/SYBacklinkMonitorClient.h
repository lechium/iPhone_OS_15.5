//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/SYBacklinkMonitorClientProtocol-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection, SYBacklinkFilterCache;
@protocol OS_dispatch_queue;

@interface SYBacklinkMonitorClient : NSObject <SYBacklinkMonitorClientProtocol>
{
    _Bool __previousFilterCacheMatched;	// 8 = 0x8
    NSXPCConnection *__connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *__clientQueue;	// 24 = 0x18
    NSMutableSet *__pendingCompletionBlocks;	// 32 = 0x20
    SYBacklinkFilterCache *__filterCache;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001a3f7
@property(nonatomic) _Bool _previousFilterCacheMatched; // @synthesize _previousFilterCacheMatched=__previousFilterCacheMatched;
@property(retain, nonatomic) SYBacklinkFilterCache *_filterCache; // @synthesize _filterCache=__filterCache;
@property(readonly, nonatomic) NSMutableSet *_pendingCompletionBlocks; // @synthesize _pendingCompletionBlocks=__pendingCompletionBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // @synthesize _clientQueue=__clientQueue;
@property(retain, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
- (void)createConnectionWithEndpoint:(id)arg1;	// IMP=0x000000000001a1eb
- (void)_invalidateConnection;	// IMP=0x0000000000019ef8
- (void)_configureConnectionAndResume;	// IMP=0x0000000000019acb
- (void)_createConnectionIfNeeded;	// IMP=0x000000000001998e
- (void)_processNotifyActiveUserActivityDidChange:(id)arg1 context:(id)arg2 serviceProxy:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000194a3
- (oneway void)updateWithFilterCache:(id)arg1;	// IMP=0x0000000000019473
- (void)notifyActiveUserActivityDidChange:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018f8b
- (void)dealloc;	// IMP=0x0000000000018f11
- (id)init;	// IMP=0x0000000000018e66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

