//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPThrottlingConfigCriteria, CKDPThrottlingConfigRateLimit, NSString;

@interface CKDPThrottlingConfig : PBCodable <NSCopying>
{
    CKDPThrottlingConfigCriteria *_criteria;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    CKDPThrottlingConfigRateLimit *_rateLimit;	// 24 = 0x18
    int _ttlSec;	// 32 = 0x20
    struct {
        unsigned int ttlSec:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000011807c
@property(nonatomic) int ttlSec; // @synthesize ttlSec=_ttlSec;
@property(retain, nonatomic) CKDPThrottlingConfigRateLimit *rateLimit; // @synthesize rateLimit=_rateLimit;
@property(retain, nonatomic) CKDPThrottlingConfigCriteria *criteria; // @synthesize criteria=_criteria;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000117f2c
- (unsigned long long)hash;	// IMP=0x0000000000117e93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000117d6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000117c86
- (void)copyTo:(id)arg1;	// IMP=0x0000000000117be3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000117b45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000117b38
- (id)dictionaryRepresentation;	// IMP=0x00000000001176d3
- (id)description;	// IMP=0x0000000000117624
@property(nonatomic) _Bool hasTtlSec;
@property(readonly, nonatomic) _Bool hasRateLimit;
@property(readonly, nonatomic) _Bool hasCriteria;
@property(readonly, nonatomic) _Bool hasLabel;

@end
