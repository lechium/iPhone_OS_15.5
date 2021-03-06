//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData;

@interface PBBProtoRemoteAccountForDevice : PBCodable <NSCopying>
{
    NSData *_serializedDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009460
@property(retain, nonatomic) NSData *serializedDevice; // @synthesize serializedDevice=_serializedDevice;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000009417
- (unsigned long long)hash;	// IMP=0x00000000000093fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009360
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000092e8
- (void)copyTo:(id)arg1;	// IMP=0x00000000000092be
- (void)writeTo:(id)arg1;	// IMP=0x000000000000929a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000928d
- (id)dictionaryRepresentation;	// IMP=0x00000000000090bf
- (id)description;	// IMP=0x0000000000009010
@property(readonly, nonatomic) _Bool hasSerializedDevice;

@end

