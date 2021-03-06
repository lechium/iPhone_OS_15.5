//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RadioRecentStationsController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _hasRefreshed;	// 16 = 0x10
    _Bool _hasValidStationGroups;	// 17 = 0x11
    NSMutableArray *_pendingRecentStations;	// 24 = 0x18
    NSArray *_serverRecentStationGroups;	// 32 = 0x20
    NSArray *_stationGroups;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000020d09
- (void)_postStationsDidChangeNotification;	// IMP=0x0000000000020c9c
- (id)_newRecentStationsRequest;	// IMP=0x0000000000020b9f
- (void)_insertPendingRecentStation:(id)arg1;	// IMP=0x0000000000020af5
- (void)_handleRecentStationsResponse:(id)arg1 fromRequest:(id)arg2 pendingRecentStations:(id)arg3 isInitialCacheLoad:(_Bool)arg4;	// IMP=0x00000000000204ac
- (void)_createStationGroups;	// IMP=0x00000000000200a9
- (void)removePendingRecentStation:(id)arg1;	// IMP=0x0000000000020019
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ff24
- (void)insertPendingRecentStationDictionary:(id)arg1;	// IMP=0x000000000001fe94
- (void)insertPendingRecentStation:(id)arg1;	// IMP=0x000000000001fe04
@property(readonly, copy, nonatomic) NSArray *stations;
@property(readonly, copy, nonatomic) NSArray *stationGroups;
- (id)init;	// IMP=0x000000000001fa4d

@end

