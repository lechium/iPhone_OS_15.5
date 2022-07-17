//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSString;

@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying>
{
    NSString *_macAddress;	// 8 = 0x8
    NSString *_networkSSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a2263
@property(retain, nonatomic) NSString *networkSSID; // @synthesize networkSSID=_networkSSID;
@property(retain, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a21b6
- (unsigned long long)hash;	// IMP=0x00000000001a2169
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a20a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a2003
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a1fa0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a1f43
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a1f36
- (id)dictionaryRepresentation;	// IMP=0x00000000001a1eb3
- (id)description;	// IMP=0x00000000001a1e04
@property(readonly, nonatomic) _Bool hasNetworkSSID;
@property(readonly, nonatomic) _Bool hasMacAddress;

@end
