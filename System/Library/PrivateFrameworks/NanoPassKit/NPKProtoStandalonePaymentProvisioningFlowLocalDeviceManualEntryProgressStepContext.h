//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext : PBCodable <NSCopying>
{
    _Bool _numericEntryPending;	// 8 = 0x8
    struct {
        unsigned int numericEntryPending:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool numericEntryPending; // @synthesize numericEntryPending=_numericEntryPending;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015ff3
- (unsigned long long)hash;	// IMP=0x0000000000015fc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015f26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015ec4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000015ea0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015e74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015e67
- (id)dictionaryRepresentation;	// IMP=0x0000000000015bed
- (id)description;	// IMP=0x0000000000015b3e
@property(nonatomic) _Bool hasNumericEntryPending;

@end

