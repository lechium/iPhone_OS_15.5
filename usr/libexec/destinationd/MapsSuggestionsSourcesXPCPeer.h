//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDestinationGraph, MapsSuggestionsSourceWrapper, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsSourcesXPCPeer : NSObject
{
    MapsSuggestionsSourceWrapper *_wrapper;	// 8 = 0x8
    MapsSuggestionsDestinationGraph *_graph;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000031ca2
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000031a98
- (void)updateGraphWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030f6c
- (void)_stopMonitoring;	// IMP=0x0010000000030e10
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000030b61
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;	// IMP=0x00100000000308b2
- (void)feedbackForEntryData:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000030603
- (void)removeEntryData:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030288
- (void)forceEarlyUpdateForType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ff41
- (void)stopMonitoringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002fd4d
- (void)startMonitoringWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f928
- (id)initWithXPCConnection:(id)arg1 sourceWrapper:(id)arg2 graph:(id)arg3;	// IMP=0x001000000002f78d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
