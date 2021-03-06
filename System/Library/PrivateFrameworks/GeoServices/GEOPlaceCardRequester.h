//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEOPlaceCardRequester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQ;	// 8 = 0x8
}

+ (id)sharedRequester;	// IMP=0x0000000000370a30
- (void).cxx_destruct;	// IMP=0x0000000000372e69
- (void)clearCache;	// IMP=0x0000000000372dec
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x0000000000372d41
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x0000000000372c28
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x0000000000372b7d
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000372a64
- (void)cancelRequest:(id)arg1;	// IMP=0x00000000003729a0
- (id)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000371b99
- (void)trackPlaceData:(id)arg1;	// IMP=0x0000000000371756
- (id)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 networkActivity:(CDUnknownBlockType)arg6 requesterHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000371277
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003710d6
- (id)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(CDUnknownBlockType)arg7 requesterHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000370b75
- (id)init;	// IMP=0x0000000000370b21
- (id)_createServerConnection;	// IMP=0x0000000000370a85

@end

