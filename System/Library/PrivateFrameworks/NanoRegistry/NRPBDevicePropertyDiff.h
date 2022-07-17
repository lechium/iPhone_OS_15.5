//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBPropertyValue;

@interface NRPBDevicePropertyDiff : PBCodable <NSCopying>
{
    NRPBPropertyValue *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005140d
@property(retain, nonatomic) NRPBPropertyValue *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005138e
- (unsigned long long)hash;	// IMP=0x0000000000051371
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000512d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005125f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000051235
- (void)writeTo:(id)arg1;	// IMP=0x0000000000051211
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000051204
- (id)dictionaryRepresentation;	// IMP=0x0000000000050fbb
- (id)description;	// IMP=0x0000000000050f0c
@property(readonly, nonatomic) _Bool hasValue;

@end
