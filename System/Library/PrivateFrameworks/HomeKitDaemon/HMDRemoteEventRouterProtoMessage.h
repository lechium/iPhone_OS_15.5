//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDRemoteEventRouterProtoChangeRegistrationsMessage, HMDRemoteEventRouterProtoConnectMessage, HMDRemoteEventRouterProtoDisconnectMessage, HMDRemoteEventRouterProtoFetchEventsMessage, HMDRemoteEventRouterProtoKeepAliveMessage, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying>
{
    HMDRemoteEventRouterProtoChangeRegistrationsMessage *_changeRegistrations;	// 8 = 0x8
    HMDRemoteEventRouterProtoConnectMessage *_connect;	// 16 = 0x10
    HMDRemoteEventRouterProtoDisconnectMessage *_disconnect;	// 24 = 0x18
    HMDRemoteEventRouterProtoFetchEventsMessage *_fetchEvents;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    HMDRemoteEventRouterProtoKeepAliveMessage *_keepAlive;	// 48 = 0x30
    int _request;	// 56 = 0x38
    struct {
        unsigned int request:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000b1150d
- (unsigned long long)hash;	// IMP=0x0000000000b1141a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1124e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b110ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b1101c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b10bc8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b1091b
- (id)description;	// IMP=0x0000000000b1086c

@end

