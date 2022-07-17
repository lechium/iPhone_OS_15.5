//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDaemonMemory, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsDonationsXPCPeer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    MapsSuggestionsDaemonMemory *_memory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002b7ae
@property(nonatomic) __weak MapsSuggestionsDaemonMemory *memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)donateSignalPackData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b350
- (void)donateETAData:(id)arg1 destinationKey:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002aec7
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000002acd1
- (id)initWithXPCConnection:(id)arg1 memory:(id)arg2;	// IMP=0x001000000002ab2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
