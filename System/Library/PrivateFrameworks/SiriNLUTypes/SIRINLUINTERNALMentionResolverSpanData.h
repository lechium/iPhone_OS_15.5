//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUINTERNALMentionResolverSpanData : PBCodable <NSCopying>
{
    double _jointScore;	// 8 = 0x8
    double _modelScore;	// 16 = 0x10
    struct {
        unsigned int jointScore:1;
        unsigned int modelScore:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double modelScore; // @synthesize modelScore=_modelScore;
@property(nonatomic) double jointScore; // @synthesize jointScore=_jointScore;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e819f
- (unsigned long long)hash;	// IMP=0x00000000000e7f78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e7eb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e7e34
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e7dd2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e7d5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e7d50
- (id)dictionaryRepresentation;	// IMP=0x00000000000e7a36
- (id)description;	// IMP=0x00000000000e7987
@property(nonatomic) _Bool hasModelScore;
@property(nonatomic) _Bool hasJointScore;

@end

