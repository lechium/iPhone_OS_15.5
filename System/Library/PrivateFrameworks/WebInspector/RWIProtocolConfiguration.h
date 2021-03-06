//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;
@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject
{
    struct AugmentableInspectorController *_controller;	// 8 = 0x8
    struct RetainPtr<id<RWIProtocolCSSDomainHandler>> _cssHandler;	// 16 = 0x10
    struct RetainPtr<RWIProtocolCSSDomainEventDispatcher> _cssEventDispatcher;	// 24 = 0x18
    struct RetainPtr<RWIProtocolConsoleDomainEventDispatcher> _consoleEventDispatcher;	// 32 = 0x20
    struct RetainPtr<id<RWIProtocolDOMDomainHandler>> _domHandler;	// 40 = 0x28
    struct RetainPtr<RWIProtocolDOMDomainEventDispatcher> _domEventDispatcher;	// 48 = 0x30
    struct RetainPtr<id<RWIProtocolDOMStorageDomainHandler>> _domStorageHandler;	// 56 = 0x38
    struct RetainPtr<RWIProtocolDOMStorageDomainEventDispatcher> _domStorageEventDispatcher;	// 64 = 0x40
    struct RetainPtr<id<RWIProtocolNetworkDomainHandler>> _networkHandler;	// 72 = 0x48
    struct RetainPtr<RWIProtocolNetworkDomainEventDispatcher> _networkEventDispatcher;	// 80 = 0x50
    struct RetainPtr<id<RWIProtocolPageDomainHandler>> _pageHandler;	// 88 = 0x58
    struct RetainPtr<RWIProtocolPageDomainEventDispatcher> _pageEventDispatcher;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000020b49
- (void).cxx_destruct;	// IMP=0x0000000000020a45
@property(readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property(retain, nonatomic, setter=setPageHandler:) id <RWIProtocolPageDomainHandler> pageHandler;
@property(readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property(retain, nonatomic, setter=setNetworkHandler:) id <RWIProtocolNetworkDomainHandler> networkHandler;
@property(readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property(retain, nonatomic, setter=setDOMStorageHandler:) id <RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property(readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property(retain, nonatomic, setter=setDOMHandler:) id <RWIProtocolDOMDomainHandler> domHandler;
@property(readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property(readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property(retain, nonatomic, setter=setCSSHandler:) id <RWIProtocolCSSDomainHandler> cssHandler;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;	// IMP=0x00000000000201a8

@end

