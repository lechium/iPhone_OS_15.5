//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOActiveTileGroup, NSDictionary, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface WatchDebugController
{
    NSDictionary *_debugInfo;	// 8 = 0x8
    GEOActiveTileGroup *_activeTileGroup;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

+ (id)navigationDestinationTitle;	// IMP=0x00200000006fb9c0
- (void).cxx_destruct;	// IMP=0x00200000006fd026
- (void)updateDroppedPin:(id)arg1;	// IMP=0x00100000006fd020
- (void)updateDirectionsStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000006fd015
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000006fc611
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000006fc3be
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000006fc3a4
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00100000006fc332
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00100000006fc31c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000006fc302
- (void)dealloc;	// IMP=0x00100000006fc2a3
- (id)init;	// IMP=0x00100000006fb9cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

