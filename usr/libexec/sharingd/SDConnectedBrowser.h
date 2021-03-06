//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x00400000001beb71
- (void).cxx_destruct;	// IMP=0x00200000001c01bc
- (void)stop;	// IMP=0x00100000001c011e
- (void)start;	// IMP=0x00100000001c0014
- (void)volumesChanged:(id)arg1;	// IMP=0x00100000001bfffa
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001bff2a
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x00100000001bfe77
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001bfd1d
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x00100000001bfcef
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x00100000001bf6e5
- (id)connectedNodes;	// IMP=0x00100000001bef4e
- (id)URLForRemounting:(id)arg1;	// IMP=0x00100000001bee9c
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x00100000001bee20
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x00100000001bee1a
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x00100000001bee0f
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x00100000001bee04
- (id)recentNodes;	// IMP=0x00100000001bedbe
- (void)addToRecents:(id)arg1;	// IMP=0x00100000001bedb8
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001bed98
- (void)postNotification;	// IMP=0x00100000001bed39
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x00100000001becbe
- (void)setServers:(id)arg1;	// IMP=0x00100000001bec6f
- (id)init;	// IMP=0x00100000001bebc6

@end

