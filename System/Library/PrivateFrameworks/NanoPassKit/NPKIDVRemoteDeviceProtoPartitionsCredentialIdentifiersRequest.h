//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKIDVRemoteDeviceProtoPartitionsCredentialIdentifiersRequest : PBRequest <NSCopying>
{
    NSMutableArray *_partitionsIdentifiers;	// 8 = 0x8
}

+ (Class)partitionsIdentifiersType;	// IMP=0x00000000000a4552
- (void).cxx_destruct;	// IMP=0x00000000000a4dd4
@property(retain, nonatomic) NSMutableArray *partitionsIdentifiers; // @synthesize partitionsIdentifiers=_partitionsIdentifiers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a4c7a
- (unsigned long long)hash;	// IMP=0x00000000000a4c5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4bc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4a00
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a4939
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a4809
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a47fc
- (id)dictionaryRepresentation;	// IMP=0x00000000000a4612
- (id)description;	// IMP=0x00000000000a4563
- (id)partitionsIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4535
- (unsigned long long)partitionsIdentifiersCount;	// IMP=0x00000000000a4518
- (void)addPartitionsIdentifiers:(id)arg1;	// IMP=0x00000000000a44ae
- (void)clearPartitionsIdentifiers;	// IMP=0x00000000000a4491

@end
