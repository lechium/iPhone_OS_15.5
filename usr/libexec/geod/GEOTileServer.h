//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMutableDictionary, NSString;

@interface GEOTileServer : GEOServer
{
    NSMutableDictionary *_pendingPeerToClientIdentifiers;	// 16 = 0x10
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000018708
+ (id)identifier;	// IMP=0x00100000000186fb
- (void).cxx_destruct;	// IMP=0x0010000000045185
- (void)tileLoader:(id)arg1 submittedTilesToNetwork:(id)arg2 forClient:(id)arg3;	// IMP=0x0010000000044e5f
- (void)_receivedTile:(id)arg1 error:(id)arg2 info:(id)arg3 forKey:(const struct _GEOTileKey *)arg4 forPeer:(id)arg5;	// IMP=0x00100000000449b1
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000004465c
- (void)peerDidConnect:(id)arg1;	// IMP=0x00100000000445c8
- (void)endPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000044500
- (void)beginPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00100000000443e0
- (void)corrupt:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00100000000442d3
- (void)_shrinkDB:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0010000000043cda
- (void)shrinkDBSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043cc2
- (void)shrinkDB:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043cad
- (void)_canShrinkBySize:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0010000000043a66
- (void)canShrinkBySizeSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043a4e
- (void)canShrinkBySize:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043a39
- (void)reprioritizeKey:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043886
- (void)cancel:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0010000000043495
- (void)loadTiles:(id)arg1 fromPeer:(id)arg2;	// IMP=0x001000000003f268
- (void)_didDeleteExternalTileData:(id)arg1;	// IMP=0x001000000003f254
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000003f10b
- (id)init;	// IMP=0x001000000003efc8
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000018713

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

