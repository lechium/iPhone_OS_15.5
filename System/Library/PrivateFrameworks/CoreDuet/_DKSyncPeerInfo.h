//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    _DKSyncPeer *_peer;	// 16 = 0x10
    long long _transports;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000019c936
- (id)debugDescription;	// IMP=0x000000000019c874
- (id)description;	// IMP=0x000000000019c7d3

@end

