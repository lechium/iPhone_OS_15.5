//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class DESBfloat16Transport, DESBinary32Transport, DESBinary64Transport;

@interface DESDataTransport : PBCodable <NSCopying>
{
    DESBfloat16Transport *_bfloat16;	// 8 = 0x8
    DESBinary32Transport *_binary32;	// 16 = 0x10
    DESBinary64Transport *_binary64;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003066e
@property(retain, nonatomic) DESBfloat16Transport *bfloat16; // @synthesize bfloat16=_bfloat16;
@property(retain, nonatomic) DESBinary32Transport *binary32; // @synthesize binary32=_binary32;
@property(retain, nonatomic) DESBinary64Transport *binary64; // @synthesize binary64=_binary64;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000030537
- (unsigned long long)hash;	// IMP=0x00000000000304ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000303d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003030e
- (void)copyTo:(id)arg1;	// IMP=0x000000000003028b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000030211
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000030204
- (id)dictionaryRepresentation;	// IMP=0x000000000002fe78
- (id)description;	// IMP=0x000000000002fdc9
@property(readonly, nonatomic) _Bool hasBfloat16;
@property(readonly, nonatomic) _Bool hasBinary32;
@property(readonly, nonatomic) _Bool hasBinary64;

@end
