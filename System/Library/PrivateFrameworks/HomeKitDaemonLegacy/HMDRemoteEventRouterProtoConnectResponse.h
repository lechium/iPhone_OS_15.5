//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable <NSCopying>
{
    NSMutableArray *_cachedEvents;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000099fcb
- (unsigned long long)hash;	// IMP=0x0000000000099fae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000099f14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000099d77
- (void)writeTo:(id)arg1;	// IMP=0x0000000000099c47
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000099c3a
- (id)dictionaryRepresentation;	// IMP=0x0000000000099a07
- (id)description;	// IMP=0x0000000000099958

@end

