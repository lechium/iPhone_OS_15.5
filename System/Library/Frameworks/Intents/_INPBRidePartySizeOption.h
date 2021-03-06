//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRidePartySizeOption-Protocol.h>

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@interface _INPBRidePartySizeOption : PBCodable <_INPBRidePartySizeOption, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBRangeValue *_partySizeRange;	// 8 = 0x8
    _INPBPriceRangeValue *_priceRange;	// 16 = 0x10
    NSString *_sizeDescription;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002887b0
- (void).cxx_destruct;	// IMP=0x000000000028851a
@property(copy, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) _INPBRangeValue *partySizeRange; // @synthesize partySizeRange=_partySizeRange;
- (id)dictionaryRepresentation;	// IMP=0x000000000028837b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000287f1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000287e35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000287da3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000287ca4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000287b80
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000287b73
@property(readonly, nonatomic) _Bool hasSizeDescription;
@property(readonly, nonatomic) _Bool hasPriceRange;
@property(readonly, nonatomic) _Bool hasPartySizeRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

