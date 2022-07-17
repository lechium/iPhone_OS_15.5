//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable, geo_isolater;

@interface GEOPlaceDataServer : GEOServer
{
    geo_isolater *_peerToRequestUUIDIsolater;	// 16 = 0x10
    NSMapTable *_peerToRequestUUID;	// 24 = 0x18
}

+ (unsigned long long)launchMode;	// IMP=0x00200000000176c6
+ (id)identifier;	// IMP=0x00100000000176b9
- (void).cxx_destruct;	// IMP=0x0010000000003911
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x00100000000038cd
- (void)shrinkBySizeSyncWithRequest:(id)arg1;	// IMP=0x0010000000003805
- (void)shrinkBySizeWithRequest:(id)arg1;	// IMP=0x00100000000036db
- (void)calculateFreeableSpaceSyncWithRequest:(id)arg1;	// IMP=0x0010000000003632
- (void)calculateFreeableSpaceWithRequest:(id)arg1;	// IMP=0x001000000000351e
- (void)cancelPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x001000000000340e
- (void)performPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000002e45
- (void)preservePlaceDataWithRequest:(id)arg1;	// IMP=0x0010000000002c59
- (void)fetchAllCacheEntriesWithRequest:(id)arg1;	// IMP=0x0010000000002a7e
- (void)requestPhoneNumbersWithRequest:(id)arg1;	// IMP=0x00100000000023a8
- (void)requestMUIDsWithRequest:(id)arg1;	// IMP=0x0010000000001f55
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x0010000000001bd1
- (void)_removeRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000001aaf
- (void)_addRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000001944
- (id)init;	// IMP=0x0010000000001880
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000176d1

@end
