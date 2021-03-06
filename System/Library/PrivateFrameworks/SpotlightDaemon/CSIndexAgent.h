//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSIndexAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;	// 8 = 0x8
    NSMutableDictionary *_indexConnections;	// 16 = 0x10
}

+ (id)indexDelegateAgent:(id)arg1;	// IMP=0x000000000004b5c7
+ (id)indexAgent;	// IMP=0x000000000004b5b6
+ (id)indexAgent:(_Bool)arg1 serviceName:(id)arg2;	// IMP=0x000000000004b45e
- (void).cxx_destruct;	// IMP=0x000000000004bb8b
@property(retain, nonatomic) NSMutableDictionary *indexConnections; // @synthesize indexConnections=_indexConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;	// IMP=0x000000000004ba3c
- (id)indexConnection:(id)arg1;	// IMP=0x000000000004b9ce
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;	// IMP=0x000000000004b96e
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;	// IMP=0x000000000004b8ee
- (_Bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;	// IMP=0x000000000004b71c

@end

