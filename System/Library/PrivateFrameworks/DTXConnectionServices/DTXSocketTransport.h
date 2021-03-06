//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DTXSocketTransport
{
    NSObject<OS_dispatch_semaphore> *_socketAcceptedSem;	// 8 = 0x8
    _Atomic int _socketSemProtector;	// 16 = 0x10
    NSArray *_addresses;	// 24 = 0x18
    int _port;	// 32 = 0x20
}

+ (id)addressForHost:(const char *)arg1 port:(int)arg2;	// IMP=0x00000000000126bf
+ (id)schemes;	// IMP=0x000000000001269f
- (void).cxx_destruct;	// IMP=0x00000000000132c9
@property(readonly) int port; // @synthesize port=_port;
- (unsigned int)supportedDirections;	// IMP=0x00000000000132ae
- (id)localAddresses;	// IMP=0x000000000001311a
- (void)disconnect;	// IMP=0x00000000000130dc
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x0000000000013061
- (id)initWithRemoteAddress:(id)arg1;	// IMP=0x0000000000012d44
- (id)initWithLocalPort:(int)arg1;	// IMP=0x0000000000012cd9
- (id)initWithConnectedSocket:(int)arg1 disconnectAction:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012bca
- (void)_signalSocketAccepted;	// IMP=0x0000000000012b87
- (void)_commonSocketTransportInit;	// IMP=0x0000000000012b49
- (void)_setupChannelWithConnectedSocket:(int)arg1 assumingOwnership:(_Bool)arg2 orDisconnectBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000129cd
- (void)_setupWithLocalPort:(int)arg1;	// IMP=0x0000000000012785

@end

