//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentProvisioningFlowStepContext, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentProvisioningFlowStepContext *_context;	// 8 = 0x8
    int _fromStep;	// 16 = 0x10
    NPKProtoStandaloneResponseHeader *_responseHeader;	// 24 = 0x18
    int _toStep;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004b23b
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowStepContext *context; // @synthesize context=_context;
@property(nonatomic) int toStep; // @synthesize toStep=_toStep;
@property(nonatomic) int fromStep; // @synthesize fromStep=_fromStep;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004b104
- (unsigned long long)hash;	// IMP=0x000000000004b085
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004af9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004aee1
- (void)copyTo:(id)arg1;	// IMP=0x000000000004ae67
- (void)writeTo:(id)arg1;	// IMP=0x000000000004add5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004adc8
- (id)dictionaryRepresentation;	// IMP=0x000000000004a3b9
- (id)description;	// IMP=0x000000000004a30a
@property(readonly, nonatomic) _Bool hasContext;
- (int)StringAsToStep:(id)arg1;	// IMP=0x0000000000049f44
- (id)toStepAsString:(int)arg1;	// IMP=0x0000000000049c61
- (int)StringAsFromStep:(id)arg1;	// IMP=0x00000000000498b0
- (id)fromStepAsString:(int)arg1;	// IMP=0x00000000000495cc

@end
