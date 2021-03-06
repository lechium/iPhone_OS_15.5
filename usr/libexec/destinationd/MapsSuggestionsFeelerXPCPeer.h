//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDaemonMemory, NSString, NSXPCConnection;

@interface MapsSuggestionsFeelerXPCPeer : NSObject
{
    struct Queue _queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 24 = 0x18
    MapsSuggestionsDaemonMemory *_memory;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x002000000001b9c1
- (void).cxx_destruct;	// IMP=0x001000000001b988
@property(nonatomic) __weak MapsSuggestionsDaemonMemory *memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)signalPackForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b533
- (void)signalPackForDestinationEntryData:(id)arg1 originCoordinateData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001af5d
- (void)signalPackForDestinationMapItemData:(id)arg1 originCoordinateData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a987
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000001a73c
- (id)initWithXPCConnection:(id)arg1 memory:(id)arg2;	// IMP=0x001000000001a54b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

