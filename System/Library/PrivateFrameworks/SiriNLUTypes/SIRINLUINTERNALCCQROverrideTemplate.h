//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALRewriteMessage;

@interface SIRINLUINTERNALCCQROverrideTemplate : PBCodable <NSCopying>
{
    SIRINLUEXTERNALRewriteMessage *_rewriteMessage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000182a6
@property(retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMessage; // @synthesize rewriteMessage=_rewriteMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000018227
- (unsigned long long)hash;	// IMP=0x000000000001820a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018170
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000180f8
- (void)copyTo:(id)arg1;	// IMP=0x00000000000180ce
- (void)writeTo:(id)arg1;	// IMP=0x00000000000180aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001809d
- (id)dictionaryRepresentation;	// IMP=0x0000000000017e52
- (id)description;	// IMP=0x0000000000017da3
@property(readonly, nonatomic) _Bool hasRewriteMessage;

@end

