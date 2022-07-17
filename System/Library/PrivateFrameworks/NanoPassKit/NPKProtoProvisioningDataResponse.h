//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoProvisioningDataResponse : PBCodable <NSCopying>
{
    NSData *_provisioningDataBytes;	// 8 = 0x8
    _Bool _pending;	// 16 = 0x10
    CDStruct_eab6c78c _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000114698
@property(retain, nonatomic) NSData *provisioningDataBytes; // @synthesize provisioningDataBytes=_provisioningDataBytes;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000114600
- (unsigned long long)hash;	// IMP=0x00000000001145b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001144e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000114453
- (void)copyTo:(id)arg1;	// IMP=0x00000000001143f0
- (void)writeTo:(id)arg1;	// IMP=0x000000000011438b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011437e
- (id)dictionaryRepresentation;	// IMP=0x00000000001140a4
- (id)description;	// IMP=0x0000000000113ff5
@property(readonly, nonatomic) _Bool hasProvisioningDataBytes;
@property(nonatomic) _Bool hasPending;

@end
