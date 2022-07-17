//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface BMStreamsAccessService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    unsigned long long _signpost;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025d31
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000025912
- (void)dealloc;	// IMP=0x0000000000025814
- (id)init;	// IMP=0x0000000000025636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
