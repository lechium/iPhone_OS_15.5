//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMEProtoEventInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying>
{
    HMEProtoEventInfo *_connectEvent;	// 8 = 0x8
    unsigned int _routerVersion;	// 16 = 0x10
    NSMutableArray *_topicAdditions;	// 24 = 0x18
    NSMutableArray *_topicFilterAdditions;	// 32 = 0x20
    HMEProtoEventInfo *_unregisterEvent;	// 40 = 0x28
    struct {
        unsigned int routerVersion:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000086dcfc
- (unsigned long long)hash;	// IMP=0x000000000086dc49
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000086dae5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000086d7bb
- (void)writeTo:(id)arg1;	// IMP=0x000000000086d54e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000086d541
- (id)dictionaryRepresentation;	// IMP=0x000000000086d1f7
- (id)description;	// IMP=0x000000000086d148

@end

