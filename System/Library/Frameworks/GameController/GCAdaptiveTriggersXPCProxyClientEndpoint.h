//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCAdaptiveTriggers-Protocol.h>
#import <GameController/GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface-Protocol.h>
#import <GameController/_GCIPCEndpointClient-Protocol.h>

@class GCController, GCDeviceAdaptiveTriggersPayload, GCDeviceAdaptiveTriggersStatusPayload, NSString;
@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface>
{
    GCController *_controller;	// 8 = 0x8
    id <GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    GCDeviceAdaptiveTriggersPayload *_leftTrigger;	// 48 = 0x30
    GCDeviceAdaptiveTriggersPayload *_rightTrigger;	// 56 = 0x38
    GCDeviceAdaptiveTriggersStatusPayload *_leftStatus;	// 64 = 0x40
    GCDeviceAdaptiveTriggersStatusPayload *_rightStatus;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000ed5e
@property(retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *rightStatus; // @synthesize rightStatus=_rightStatus;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *leftStatus; // @synthesize leftStatus=_leftStatus;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ec94
- (void)invalidateConnection;	// IMP=0x000000000000ebf0
- (void)refreshStatuses;	// IMP=0x000000000000eac3
- (void)newStatuses:(id)arg1;	// IMP=0x000000000000e9a5
- (void)_remoteEndpointHasSetStatuses:(id)arg1;	// IMP=0x000000000000e857
- (void)setController:(id)arg1;	// IMP=0x000000000000e7b1
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000000e589
- (id)init;	// IMP=0x000000000000e55e
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;	// IMP=0x000000000000e371

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
