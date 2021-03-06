//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitUserPresenceAuthorization : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _auth;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int auth:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a59c09
- (unsigned long long)hash;	// IMP=0x0000000000a59bc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a59b10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a59a91
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a59a35
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a599c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a599b6
- (id)dictionaryRepresentation;	// IMP=0x0000000000a5988d
- (id)description;	// IMP=0x0000000000a597de
- (int)StringAsAuth:(id)arg1;	// IMP=0x0000000000a5974c
- (id)authAsString:(int)arg1;	// IMP=0x0000000000a596e6
@property(nonatomic) _Bool hasAuth;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(nonatomic) _Bool hasTimestamp;

@end

