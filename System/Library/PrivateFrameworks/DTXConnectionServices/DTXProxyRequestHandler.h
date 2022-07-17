//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface DTXProxyRequestHandler : NSObject
{
    Protocol *_publishedProtocol;	// 8 = 0x8
    NSString *_publishedProtocolName;	// 16 = 0x10
    Protocol *_peerProtocol;	// 24 = 0x18
    NSString *_peerProtocolName;	// 32 = 0x20
    CDUnknownBlockType _handlerBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008ec2
@property(readonly, copy) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(readonly, copy) NSString *peerProtocolName; // @synthesize peerProtocolName=_peerProtocolName;
@property(readonly) Protocol *peerProtocol; // @synthesize peerProtocol=_peerProtocol;
@property(readonly, copy) NSString *publishedProtocolName; // @synthesize publishedProtocolName=_publishedProtocolName;
@property(readonly) Protocol *publishedProtocol; // @synthesize publishedProtocol=_publishedProtocol;
- (_Bool)matchesPublishedProtocolName:(id)arg1 peerProtocolName:(id)arg2;	// IMP=0x0000000000008d58
@property(readonly, copy) NSString *channelIdentifier;
- (id)initWithPublishedProtocol:(id)arg1 publishedProtocolName:(id)arg2 peerProtocol:(id)arg3 peerProtocolName:(id)arg4 handlerBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000898e

@end
