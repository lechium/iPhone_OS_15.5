//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourClient/NSXPCListenerDelegate-Protocol.h>
#import <SeymourClient/_TtP13SeymourClient15TransportServer_-Protocol.h>

@interface (null) (SeymourClient) <NSXPCListenerDelegate, _TtP13SeymourClient15TransportServer_>
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000085710
- (void)receiveEvent:(long long)arg1 data:(id)arg2;	// IMP=0x0000000000085850
- (void)receiveRequest:(long long)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000085780
@end

