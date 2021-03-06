//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableQuantity, NSString;

@interface HKCodableMetadataKeyValuePair : PBCodable <NSCopying>
{
    long long _numberIntValue;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    HKCodableQuantity *_quantityValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    struct {
        unsigned int numberIntValue:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001afd04
@property(retain, nonatomic) HKCodableQuantity *quantityValue; // @synthesize quantityValue=_quantityValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) long long numberIntValue; // @synthesize numberIntValue=_numberIntValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001afbc9
- (unsigned long long)hash;	// IMP=0x00000000001afb35
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001afa0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001af924
- (void)copyTo:(id)arg1;	// IMP=0x00000000001af880
- (void)writeTo:(id)arg1;	// IMP=0x00000000001af7e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001af7d4
- (id)dictionaryRepresentation;	// IMP=0x00000000001af3c4
- (id)description;	// IMP=0x00000000001af315
@property(readonly, nonatomic) _Bool hasQuantityValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasNumberIntValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

